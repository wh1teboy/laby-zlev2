#include <stdio.h>
#include <math.h>
#include "triangle.h"

double calculateDistance (Point_t first,Point_t second){
const double xDist = second.x - first.x ;
const double yDist = second.y - first.y ;
return sqrt(xDist*xDist + yDist*yDist);
};
double side1,side2,side3;
bool isRightTriangle(Point_t points[]){
    side1=calculateDistance(Point_t first, Point_t second);
    side2=calculateDistance(Point_t first, Point_t third);
    side3=calculateDistance(Point_t second, Point_t third);
if {
(sqrt(pow(side1)+pow(side2))==side3)||(sqrt(pow(side3)+pow(side2))==side1)||(sqrt(pow(side1)+pow(side3))==side2);
return true;
};
if else {
    return false;
};
};
