#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Tabla");
    QStringList columnas;
    columnas <<"Columna 1"<<"Columna 2"<<"Columna 3"<<"Columna 4"<<"Columna 5"<<"Columna 6";
    ui->

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{

}
