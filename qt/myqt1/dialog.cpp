#include "dialog.h"
#include <QPushButton>
#include <QGroupBox>

Dialog::Dialog(/* args */)
{
    QDialogButtonBox *dbbox = new QDialogButtonBox(QDialogButtonBox::Yes | QDialogButtonBox::Cancel);
    QTextEdit *atedit = new QTextEdit("1234566");

    connect(dbbox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(dbbox, SIGNAL(rejected()), this, SLOT(reject()));

    vboxg = new QGroupBox();
    gboxg = new QGroupBox();

    QVBoxLayout *mly = new QVBoxLayout();
    vly = new QVBoxLayout();
    CreatMenu();
    CreatVbox();
    CreatGridLayout();
    CreatForm();
    mly->setMenuBar(mbar);

    mly->addWidget(vboxg);
    mly->addWidget(gboxg);
    mly->addWidget(fboxg);

    mly->addWidget(atedit);
    mly->addWidget(dbbox);
    // mly->setMenuBar(mbar);

    setLayout(mly);
    // setWindowTitle("mytt");
}

Dialog::~Dialog()
{
}
void Dialog::CreatMenu()
{
    QMenu *mu = new QMenu("FILE");
    QAction *act = new QAction("close");

    // mu->setsho
    act->setShortcut(Qt::CTRL | Qt::Key_A);
    connect(act, SIGNAL(triggered()), this, SLOT(accept()));

    mbar = new QMenuBar();

    // mu->setWindowTitle("&File(F)");
    mu->addAction(act);
    // mu->
    mbar->addMenu(mu);
}
void Dialog::CreatForm()
{
    QFormLayout *fly = new QFormLayout();

    QLineEdit *le = new QLineEdit();
    QComboBox *cb = new QComboBox();
    QSpinBox *sb = new QSpinBox();

    le->setText("12344");
    // sb->addAction("134");
    // sb->addAction("1123");

    fboxg = new QGroupBox();

    fly->addRow(new QLabel("lab1"), le);
    fly->addRow(new QLabel("lab2"), cb);
    fly->addRow(new QLabel("lab3"), sb);

    fboxg->setTitle("from title");
    fboxg->setLayout(fly);
    // fly->addRow(new QLabel("lab3"),);
}
void Dialog::CreatVbox()
{
    QPushButton *btn[5];
    QHBoxLayout *hly = new QHBoxLayout();

    for (int i = 0; i < 5; i++)
    {
        btn[i] = new QPushButton(tr("btn %1").arg(i + 1));
        hly->addWidget(btn[i]);
    }
    // vboxg->setWindowTitle("is hbox");
    // vboxg->setWindowIconText("ttt1234");
    vboxg->setTitle("hbox layout title");
    vboxg->setLayout(hly);
}

void Dialog::CreatGridLayout()
{
    QGridLayout *gly = new QGridLayout();
    QLabel *le1 = new QLabel("line1");
    QLabel *le2 = new QLabel("line2");
    QLabel *le3 = new QLabel("line3");
    QLineEdit *ledit1 = new QLineEdit();
    QLineEdit *ledit2 = new QLineEdit();
    QLineEdit *ledit3 = new QLineEdit();
    QTextEdit *tedit = new QTextEdit();

    tedit->setPlainText("this is text edit");

    gly->addWidget(le1, 1, 0, 1, 1);
    gly->addWidget(le2, 2, 0, 1, 1);
    gly->addWidget(le3, 3, 0, 1, 1);
    gly->addWidget(ledit1, 1, 1, 1, 1);
    gly->addWidget(ledit2, 2, 1, 1, 1);
    gly->addWidget(ledit3, 3, 1, 1, 1);
    gly->addWidget(tedit, 0, 2, 4, 1);

    gly->setColumnStretch(1, 10);
    gly->setColumnStretch(2, 20);

    // gly->setRowStretch(0, 1);
    // gly->setRowStretch(1, 2);
    // gly->setRowStretch(2, 4);
    // gly->setRowStretch(4, 7);
    // gly->setColumnStretch(0, 1);
    // gly->setColumnStretch(1, 2);
    // gly->setColumnStretch(2, 3);
    // gly->setColumnStretch(3, 4);
    // gly->setColumnStretch(1, 1);

    // gly->addWidget(tle);
    gboxg->setTitle("is grid layout");
    gboxg->setLayout(gly);
}
