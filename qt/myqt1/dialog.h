#ifndef __DIALOG_H__
#define __DIALOG_H__

#include <QDialog>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QGridLayout>
#include <QFormLayout>
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>
#include <QComboBox>
#include <QSpinBox>
#include <QDialogButtonBox>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

class Dialog:
public QDialog
{
private:
    void CreatMenu();
    void CreatVbox();
    void CreatGridLayout();
    void CreatForm();

    QVBoxLayout *	vly;
    QGroupBox *		vboxg;
    QGroupBox *		gboxg;
    QGroupBox *		fboxg;
    QMenuBar *		mbar;



    /* data */
public:
    Dialog(/* args */);
    ~Dialog();
};


#endif //MACRO
