#include "include/window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    
    this->setWindowTitle("PET GAME");
    this->resize(1920, 1080);
}

MainWindow::~MainWindow() {
}