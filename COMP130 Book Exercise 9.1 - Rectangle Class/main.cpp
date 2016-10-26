//
//  main.cpp
//  COMP130 Book Exercise 9.1 - Rectangle Class
//  Design a class named Rectangle to represent a rectangle
//  Created by ax on 10/26/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    cout << "Rectangle Class!\n";
    /*
     Rectangle class:
        Two double data fields for width and height
        No-arg constructor creates rectangle width 1 height 1
        Constructor creates default rectangle with specified width X height
        Accessor and mutator functions for all data fields
        function named getArea() returns area of rectangle
        function named getPerimeter() returns perimeter
    */
    
    class Rectangle {

    public:
        
        double width = 0.0, height = 0.0;
        
        // default constructor
        Rectangle() {
            width = 1.0;
            height = 1.0;
        }
        
        // user constructor
        Rectangle(double w, double h) {
            width = w;
            height = h;
        }
        
        double get_area() {
            return width * height;
        }
        
        double get_perimeter() {
            return (width * 2) + (height * 2);
        }
        
    };
    
    // build object 1

    Rectangle rect_d;
    
    cout << "rect_d properties" << endl;
    cout << "=================" << endl;
    cout << "rect_d width: " << rect_d.width << endl;
    cout << "rect_d height: " << rect_d.height << endl;
    cout << "rect_d area: " << rect_d.get_area() << endl;
    cout << "rect_d perimeter: " << rect_d.get_perimeter() << endl;
    
    Rectangle rect_a(4, 40);
    
    cout << "rect_a properties" << endl;
    cout << "=================" << endl;
    cout << "rect_a width: " << rect_a.width << endl;
    cout << "rect_a height: " << rect_a.height << endl;
    cout << "rect_a area: " << rect_a.get_area() << endl;
    cout << "rect_a perimeter: " << rect_a.get_perimeter() << endl;
    
    // build object 2
    
    Rectangle reckity_rect(3.5, 35.9);
    
    cout << "reckity_rect properties" << endl;
    cout << "=======================" << endl;
    cout << "reckity_rect width: " << reckity_rect.width << endl;
    cout << "reckity_rect height: " << reckity_rect.height << endl;
    cout << "reckity_rect area: " << reckity_rect.get_area() << endl;
    cout << "reckity_rect perimeter: " << reckity_rect.get_perimeter() << endl;
    
    return 0;
}
