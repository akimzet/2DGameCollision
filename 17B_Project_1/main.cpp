#include "mainwindow.h"
#include <QApplication>
#include "storage.h"

int main(int argc, char *argv[])
{
    extern storage b;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
