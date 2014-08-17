#include <QCoreApplication>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Inside RepoDefault Application";
    return a.exec();
}
