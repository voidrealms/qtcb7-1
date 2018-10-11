#include <QCoreApplication>

#include <QDebug>

void test() {
    qInfo() << "Hello from test!";
}

void test2() {
    qInfo() << "Hello from test2!";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();
    test2();

    return a.exec();
}

/*
 * compiler / main will not see it

void test2() {
    qInfo() << "Hello from test2!";
}

 */
