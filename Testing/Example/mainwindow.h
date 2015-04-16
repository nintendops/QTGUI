#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "QTGUIExampleLoad.h"
#include "QTGUIExampleSave.h"
#include "QTGUIExampleModel.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QTGUIExampleModel m;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // getter and setter for the model
    void setModel(QTGUIExampleModel m_pre);
    QTGUIExampleModel getModel();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H