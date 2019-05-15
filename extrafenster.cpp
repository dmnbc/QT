#include "extrafenster.h"
#include "ui_extrafenster.h"

ExtraFenster::ExtraFenster(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExtraFenster)
{
    ui->setupUi(this);
}

ExtraFenster::~ExtraFenster()
{
    delete ui;
}

int ExtraFenster::textUpdate(QString s)
{
   ;//findChild<QPlainTextEdit *>("anzeigeBereich")->zoomIn(1); //appendPlainText(s);
 return 0;
}
