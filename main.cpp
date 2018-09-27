//
// Created by ghkim on 9/27/18.


#include <iostream>

struct myStruct {
    int x = 0;
    int y = 0;
};

class myClass {
public:
    // default constructor
    myClass() {}
    // or myClass() = default; also works well
    // constructor
    myClass(int x, int y) : x(x), y(y) { update_area(); }
    int getX() {return x; }
    int getY() {return y; }
    void setX(int newX) {x = newX; update_area();}
    void setY(int newY) {y = newY; update_area();}

private:
    void update_area() {area = x * y;}
private:
    int x = 0;
    int y = 0;
    int area = x * y;

};

int main() {
    myStruct sobj01 {2, 3};
    sobj01.x += 1;
    std::cout << "(" << sobj01.x << "," << sobj01.y << ")\n";

    myClass cobj;

}