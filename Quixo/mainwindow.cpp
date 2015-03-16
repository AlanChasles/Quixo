#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene * scene;
    scene = new QGraphicsScene();
    QGraphicsPixmapItem * item;
    item = new QGraphicsPixmapItem();
    QPixmap * image = new QPixmap(":index.jpeg");

    item->setPixmap(* image);
    scene->addItem(item);
    ui->vue->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quitter_clicked()
{
    this->close();
}
