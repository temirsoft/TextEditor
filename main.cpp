#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setOrganizationName("Coder");
    a.setOrganizationDomain("www.temir_soft.kz");
    a.setApplicationName("Text Editor");
    a.setApplicationDisplayName("Text Editor");
    a.setApplicationVersion("1.0 beta");

    MainWindow w;
    w.show();
    return a.exec();
}
