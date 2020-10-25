#include "widget.h"
#include<QHBoxLayout>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Account Manager");
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint); //设置窗口置顶
    setAttribute(Qt::WA_TranslucentBackground, true);


    QVBoxLayout *vlayout = new QVBoxLayout;//创建垂直布局器

    pandLLable=new QLabel(QString::fromLocal8Bit("快23点了，应该要睡觉了"));

    pandLLable->setAlignment(Qt::AlignCenter);

    QFont font;
    font.setPointSize(60);//字体大小
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

