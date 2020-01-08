#ifndef HEALTH_H
#define HEALTH_H
#include "gameover.h"
#include <QGraphicsTextItem>

class Health: public QGraphicsTextItem{
public:
    Health(QGraphicsItem * parent=0);
    void decrease();
    int getHealth();

    GameOver *gameover;
private:
    int health;


};

#endif // HEALTH_H
