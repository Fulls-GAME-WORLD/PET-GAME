#include "include/window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    
    this->setWindowTitle("Мое первое окно на Qt");
    this->resize(800, 600);
}

MainWindow::~MainWindow() {
}