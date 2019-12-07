#ifndef COURSE_WORK_OOP_1_POINT_H
#define COURSE_WORK_OOP_1_POINT_H


#include "Object.h"


class Point : public Object {
protected:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    Point(const Point&);
    virtual ~Point();

    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
};


#endif //COURSE_WORK_OOP_1_POINT_H