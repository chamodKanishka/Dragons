#include "gameover.h"
#include "ui_gameover.h"

GameOver::GameOver(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameOver)
{
    ui->setupUi(this);
    setWindowTitle(tr("Game Over"));
}

GameOver::~GameOver()
{
    delete ui;
}
