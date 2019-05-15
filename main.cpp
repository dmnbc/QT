#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include "extrafenster.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    ExtraFenster debug;
    debug.move(100,100);
    auto anzeige = debug.findChild<QPlainTextEdit* >("anzeigeBereich");
    anzeige->setPlainText("Hallo");
    anzeige->appendPlainText("Hallo");


    auto slider = new QSlider{Qt::Horizontal, &w};
    slider->setMinimum(0);
    slider->setMaximum(100);

 /*   auto lcd = new QLCDNumber{3, &w};
    lcd->move(100,100);
    lcd->display(50);

    QObject::connect(
                slider, SIGNAL(valueChanged(int)),
                lcd, SLOT(display(int)));

*/
    QString s = "asd";
    QObject::connect(
                slider, SIGNAL(valueChanged(int)),
   //             &debug,  SLOT(textUpdate(s))               );

  //             debug.findChild<QPlainTextEdit* >("anzeigeBereich"),SLOT(zoomIn(int)));
    debug.findChild<QLCDNumber* >("lcdNumber"),SLOT(display(int)));


    w.setWindowTitle("meine Anwendung");
    w.show();
    debug.show();

    return a.exec();
}
