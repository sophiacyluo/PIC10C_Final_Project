QT += core
QT += sql
QT -= gui

CONFIG += c++11

TARGET = mysqlconnect
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

macx: LIBS += -L$$PWD/../../../../../../../../Desktop/lib/ -lmysqlclient.18

INCLUDEPATH += $$PWD/../../../../../../../../Desktop
DEPENDPATH += $$PWD/../../../../../../../../Desktop

macx: LIBS += -L$$PWD/../../../../../../../../Desktop/lib/ -lmysqlclient

INCLUDEPATH += $$PWD/../../../../../../../../Desktop
DEPENDPATH += $$PWD/../../../../../../../../Desktop

macx: PRE_TARGETDEPS += $$PWD/../../../../../../../../Desktop/lib/libmysqlclient.a

macx: LIBS += -L$$PWD/../../../../../../../../Desktop/lib/ -lmysqlclient.18

INCLUDEPATH += $$PWD/../../../../../../../../Desktop
DEPENDPATH += $$PWD/../../../../../../../../Desktop
