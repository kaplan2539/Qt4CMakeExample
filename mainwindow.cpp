#include "mainwindow.h"

//----------------------------------------------------------------------------

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags)
   : QMainWindow(parent,flags)
{
   ui.setupUi(this);
}

//----------------------------------------------------------------------------

MainWindow::~MainWindow()
{
}

//----------------------------------------------------------------------------

void MainWindow::on_actionExit_triggered(bool checked)
{
   close();
}

//----------------------------------------------------------------------------
