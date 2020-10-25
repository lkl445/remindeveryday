#include "widget.h"

#include <QApplication>
#include <QDesktopWidget>
#include <QTextCodec>


int main(int argc, char *argv[])
{
    /////QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QApplication a(argc, argv);
    ///Widget w;
    QDesktopWidget* desktop=QApplication::desktop();
    int screen_count = desktop->screenCount();
    Widget *w=new Widget[screen_count];
    for(int i=0; i < screen_count; i++){

        w[i].setGeometry(desktop->screenGeometry(i));
        w[i].showFullScreen();
    }
    ////w.showFullScreen ();
    ///w.show();
    return a.exec();
}
