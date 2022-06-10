#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "painter.h"
#include "imageviewer.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    Open painting window
    Painter * painter = new Painter();
    this->hide();
    painter->show();
}

void MainWindow::on_pushButton_2_clicked()
{
//    Open viwer window
    ImageViewer * viewer = new ImageViewer();
    this->hide();
    viewer->show();
}
