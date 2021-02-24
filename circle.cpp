#include "circle.h"
using namespace std;

// your code here
//default constructor
Circle::Circle(){

}
//another constructor
Circle::Circle(float circleRadius){
    radius = circleRadius;
}

//assignment operator
Circle& Circle::operator=(const Circle& circle){
    radius = circle.radius;
    return *this;
}

//output operator
std::ostream& operator<<(std::ostream& os, const Circle& circle){
    os << circle.radius;
    return os;
}

//additional operator
Circle operator+(const Circle& circle1, const Circle& circle2){
    float newRadius;
    newRadius = circle1.radius + circle2.radius;
    Circle newCircle(newRadius);
    return newCircle;

}

//copy constructor
Circle::Circle(const Circle& circle){
    radius = circle.radius;
}
//getter
float Circle::getRadius(){
    return radius;
}

//setter
void Circle::setRadius(float newRadius){
    radius = newRadius;
}

float Circle::computeArea(){
    float area = 3.14 * radius*radius;
    return area;
}

Circle::~Circle(){
    
}