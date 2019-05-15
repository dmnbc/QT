#ifndef EXTRAFENSTER_H
#define EXTRAFENSTER_H

#include <QWidget>
#include <QPlainTextEdit>

namespace Ui {
class ExtraFenster;
}

class ExtraFenster : public QWidget
{
    Q_OBJECT

public:
    explicit ExtraFenster(QWidget *parent = nullptr);
    ~ExtraFenster();

public slots:
 static   int textUpdate(QString s);

private:
    Ui::ExtraFenster *ui;
};

/*

*/

#endif // EXTRAFENSTER_H
