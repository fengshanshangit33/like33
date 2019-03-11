#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>
#include <Halcon.h>
#include <halconcpp/HalconCpp.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void captureImage();
    void displayImage(int,QImage);
    void saveImage();
private slots:
    void on_capture_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QCamera *camera;
    QCameraViewfinder *viewfinder;
    QCameraImageCapture *imageCapture;
    HObject ho_Image;
};

#endif // MAINWINDOW_H
