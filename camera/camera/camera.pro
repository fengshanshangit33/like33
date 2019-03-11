#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T19:45:44
#
#-------------------------------------------------

QT       += core gui widgets multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = camera
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
#include
INCLUDEPATH += "$$(HALCONROOT)/include"
INCLUDEPATH += "$$(HALCONROOT)/include/cpp"
QMAKE_LIBDIR     += "$$(HALCONROOT)/lib/$$(HALCONARCH)"

win64:LIBS  += halconcpp.lib halcon.lib
