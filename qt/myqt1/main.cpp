#include <QApplication>
#include "dialog.h"


int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    Dialog dlg;
    dlg.show();
    a.exec();
}