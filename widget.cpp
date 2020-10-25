#include "widget.h"
#include<QHBoxLayout>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Account Manager");
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint); //���ô����ö�
    setAttribute(Qt::WA_TranslucentBackground, true);


    QVBoxLayout *vlayout = new QVBoxLayout;//������ֱ������

    pandLLable=new QLabel(QString::fromLocal8Bit("��23���ˣ�Ӧ��Ҫ˯����"));

    pandLLable->setAlignment(Qt::AlignCenter);

    QFont font;
    font.setPointSize(60);//�����С
    pandLLable ->setFont(font);

    pandLLable ->setStyleSheet("color:red;");
    ///pandLLable->move(width()/2,height()/2);
    ///pandLLable->show();
    vlayout->addWidget(pandLLable);

    setLayout(vlayout);

}

Widget::~Widget()
{
}

