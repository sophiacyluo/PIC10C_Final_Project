#include <QCoreApplication>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

// as usual..
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // creating a database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root"); // default mysql username for xampp is 'root'
    db.setPassword("");  // xampp mysql has no password in default
    db.setDatabaseName("qtdatabase");

    // lets test the connection
    if(db.open()){
        cout << "Database connected" << endl;
    }
    else{
        cout << "Database connect failed" << endl;
    }
    // icluding mysql driver library

    return a.exec();
}
