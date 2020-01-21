#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QImage getQImageFromFrame(cv::Mat frame);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void displayFrame();
    void Operate ();

private:
    Ui::MainWindow *ui;
    cv::VideoCapture webcam;
};

#endif // MAINWINDOW_H