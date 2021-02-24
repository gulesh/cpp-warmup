// Name: Gulesh Shukla
// Date: Feb 24, 2021

#pragma once
#include <iostream>

class Circle
{
private:
    float radius = 0.0f;
public:
    Circle(float radius);//constructor with an argument
    Circle(); //default constructor
    Circle(const Circle& circle); //copy constructor
    Circle& operator=(const Circle& circle); //assignment operator
    friend std::ostream& operator<<(std::ostream& os, const Circle& circle); //output stream operator
    friend Circle operator+(const Circle& circle1, const Circle& circle2); //add operator
    float getRadius(); //getter
    void setRadius(float radius); //setter
    float computeArea(); //method to compute area
    ~Circle(); //destructor
};




