#include <iostream>
#include <string>
using namespace std;

// /////////////////// Part 1 — Variables Exercises ////////////////////////////

// Create variables to store:
// Your age
// Your height (in meters)
// The first letter of your name
// A boolean that tells if you are a student
// Then print them.

void showAge () {
    int age = 33;
    float height = 1.80;
    char letter = 'a';
    bool student = true;
    
    cout << "my age is " << age << "\n";
    cout << "my height is " << height << "\n";
    cout << "my first letter of my name " << letter << "\n";
}

// ///////////////////////////////////////////////

// Declare:
// Two integers a and b
// Store 10 and 20
// Print their sum

void showSum () {
    int a = 10;
    int b = 20;
    int sum = a + b;
    cout << "the sum is: " << sum << "\n";
}
// ///////////////////////////////////////////////

// Create:
// A double price = 99.99
// An int quantity = 3
// Create a variable total and calculate total price.
// Print the result.

void showPrice () {
    double price = 99.99;
    int quantity = 3;
    double total = price * quantity;
    cout << "the total price is " << total << "\n";
}

// ///////////////////////////////////////////////

// Declare 3 integers:
// length
// width
// area
// Calculate area of a rectangle.

void calculateArea () {
    int length = 78;
    int width = 34;
    int area = length * width;
    cout << "the area of the rectangle is: " << area << "\n";
}

// ///////////////////////////////////////////////

// Create a constant variable PI = 3.14159
// Use it to calculate area of a circle.

void circleArea () {
    const double pi = 3.14159;
    double radius;
    cout << "Enter The Radius";
    cin >> radius;
    double area = pi * radius * radius;
    cout << "the area of a circle is: " << area << "\n";
}


// /////////////////// Part 2 — Input Exercises ////////////////////////////

// Ask the user to enter:
// His name
// His age

void userInput () {
    string name;
    int age;
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter Your Age: ";
    cin >> age;
    cout << "Hello " << name << " your age is " << age << "\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter two numbers.
// Print their sum.

void enterNumbers () {
    double num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    double sum = num1 + num2;
    cout << "The Sum is: " << sum << "\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter:
// length
// width
// Calculate rectangle area.

void calRectangle () {
    double length, width;
    cout << "Enter The length: ";
    cin >> length;
    cout << "Enter The Width: ";
    cin >> width;
    double area = length * width;
    cout << "The Rectangle Area is: " << area << "\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter temperature in Celsius.
// Convert it to Fahrenheit.
// F = (C × 9/5) + 32

void temperature () {
    double celsius;
    cout << "Enter Temperature In Celsius: ";
    cin >> celsius;
    double f = (celsius * 9/5) + 32;
    cout << "The Tempreature In Fahrenheit is: " << f << "\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Print:
// The number
// The square
// The cube
void numberTransfer () {
    double num;
    cout << "Enter Your Number ";
    cin >> num;
    double square = num * num;
    cout << "The square Of This Number is: " << square << "\n";
    double cube = num * num * num;
    cout << "The Cube Of This Number is: " << cube << "\n";
}

// /////////////////// Part 3 — Input + Variables Mixed ////////////////////////////

// Ask the user for:
// 3 numbers
// Calculate:
// Their sum
// Their average

// ///////////////////////////////////////////////

// Create a simple calculator:
// Ask for number 1
// Ask for number 2
// Ask for operator (+ - * /)
// Print result

// ///////////////////////////////////////////////

// Ask the user:
// Price of product
// Discount percentage
// Calculate final price after discount.

// ///////////////////////////////////////////////

// Ask the user:
// Number of hours worked
// Salary per hour
// Calculate total salary.

// ///////////////////////////////////////////////

// Make a small program that:
// Asks user name
// Asks birth year
// Calculates age (assume current year = 2026)
// Prints full message


int main () {
    showAge ();
    showSum ();
    showPrice ();
    calculateArea ();
    // circleArea ();
    // userInput ();
    // enterNumbers ();
    // calRectangle ();
    // temperature ();
    numberTransfer ();
    return 0;
}