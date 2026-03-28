#include <iostream>
#include <string>
#include <limits>
using namespace std;

// =====================================================
//  Part 1 — Variables Exercises
// =====================================================

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

// =====================================================
//  Part 2 — Input Exercises
// =====================================================

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

// =====================================================
//  Part 3 — Input + Variables Mixed 
// =====================================================

// Ask the user for:
// 3 numbers
// Calculate:
// Their sum
// Their average

void calculator () {
    double num1, num2, num3;
    cout << "Enter Three Numbers " << "\n";
    cin >> num1 >> num2 >> num3;

    double sum = num1 + num2 + num3;
    double average = sum / 3;

    cout << "Total: " << sum << "\n";
    cout << "Average: " << average << "\n";
}

// ///////////////////////////////////////////////

// Create a simple calculator:
// Ask for number 1
// Ask for number 2
// Ask for operator (+ - * /)
// Print result

void calculatorComplex () {
    double num1, num2;
    char op;

    cout << "Calculator" << "\n";
    cin >> num1;
    cin >> op;
    cin >> num2;

    double result;

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        result = num1 / num2;
    }
    else {
        cout << "Please Check Your Inputs" << "\n";
    }

    cout << "Thee Result Is: " << result << "\n";
}

// ///////////////////////////////////////////////

// Ask the user:
// Price of product
// Discount percentage
// Calculate final price after discount.

void productDiscount () {
    double price;
    double discount;

    cout << "Enter The Product Price" << "\n";
    cin >> price;

    cout << "Enter The Discount Precentage" << "\n";
    cin >> discount;

    double result = price - (price * discount / 100);
    cout << "the Price " << result << "\n";
}

// ///////////////////////////////////////////////

// Ask the user:
// Number of hours worked
// Salary per hour
// Calculate total salary.

void workedHours () {
    double hours;
    double salary;

    cout << "How Many Hours You Worked" << "\n";
    cin >> hours;

    cout << "Whats Your Salary Per Hour" << "\n";
    cin >> salary;

    double total = salary * hours;
    cout << "Total Salary: " << total << "\n";
}

// ///////////////////////////////////////////////

// Make a small program that:
// Asks user name
// Asks birth year
// Calculates age (assume current year = 2026)
// Prints full message

void ageCalculator () {
    string name;
    double yearOfBirth;

    cout << "Enter Your Name" << "\n";
    cin >> name;

    cout << "Enter Your Year Of Birth" << "\n";
    cin >> yearOfBirth;

    double result = 2026 - yearOfBirth;
    cout << name << " Your Age Is: " << result << "\n";
    float f1 = 35e3;
double d1 = 12E4;
cout << "the float" << "\n";
cout << f1 << "\n";
cout << d1 << "\n";
}

// ASGII Programing For Ciphering text

void asgii () {
    char c1, c2, c3, c4, c5;
    cout << "Enter Word With 5 Letters" << "\n";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "The ASGII Is: " << int(c1) << " " << int(c2) << " "
    << int(c3) << " " << int(c4) << " " << int(c5) << "\n";
}

// user enters side lengths of a triangle (a,b,c)
// program should write out whther that triangle is equilateral, isosceles or scalene

void triangleLengths () {
    float a, b, c;
    float triangleLength;

    cout << "Please Enter The Traingle Lengths" << "\n";
    cin >> a >> b >> c;
    if (a == b && b ==c) {
        cout << "The Triangle Is Equilateral" << "\n";
    }

    else {
    if (a!=b && b!=c) {
        cout << "The Triangle Is Scalene" << "\n";
        
    }else {
            cout << "The Triangle Is Isosceles"<< "\n";
        }
    }

}

// BMI Calculator
// weight(kg) / height * height(m)
// uderweight < 18.5
// normal weight 18.5 - 24.9
// overweight > 25

void bmiCalculator () {
    float weight, height;

    cout << "Pleadr Enter Your Weight" << "\n";
    cin >> weight;
    cout << "Pleadr Enter Your Height" << "\n";
    cin >> height;

    // BMI Formula
    float bmi = weight / (height * height);
    
    if (bmi < 18.5) {
        cout << "Your BMI Is Underweight" << "\n";
    }
    else {
        if (bmi > 25) {
            cout << "Your BMI Is Overweight" << "\n";
        } else {
            cout << "Your BMI Is Normal Weight" << "\n";
        }
    }

}

// =====================================================
// PART 1 — Simple Decision Patterns
// =====================================================

// Ask the user to enter a number.
// Check if the number is greater than 10.
// Print a message depending on the result.

void simpleDecision () {
    int number;
    cout << "Please Enter a Number" << "\n";
    cin >> number;

    (number > 10) ?
    cout << "The Result Is: " << number << "\n" :
    cout << "This Number Is Less Than 10" << "\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Determine whether the number is even or odd.

void countEvenOdd () {
    int number;
    cout << "Please Enter a Number" << "\n";
    cin >> number;

    (number % 2 == 0) ?  
    cout << "The Number Is Even" << "\n" :
    cout << "The Number Is Odd" << "\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Check if the number is divisible by 5.

void divisibleBy5 () {
    int number;
    cout << "Please Enter a Number" << "\n";
    cin >> number;

    (number % 5 == 0) ?
    cout << "The " << number << " Is Divisible by 5" << "\n" :
    cout << "The Number Is Not Divisible by 5 " << "\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Check if the number is within the range 1 to 100.

void rangeNumbers () {
    int number;
    cout << "Please Enter a Number" << "\n";
    cin >> number;

    int (number >= 1 && number <= 100) ?
    cout << "The Number Is With The Randge" << "\n" :
    cout << "Please Enter a Valid Number" << "\n";
}

// =====================================================
// PART 2 — Two-Value Comparison Pattern
// =====================================================

// Ask the user to enter two numbers.
// Determine which number is larger.
void largeNumber () {
    int num1;
    int num2;
    cout << "Please Enter Two Numbers" << "\n";
    cin >> num1;
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " Is Larger Than " << num2 << "\n";
    } else if (num1 < num2) {
        cout << num2 << " Is Larger Than " << num1 << "\n";
    } 
    // Check if the numbers are equal.
    else {
        cout << "Both Numbers Are Equials" << "\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter two numbers.
// Determine if the first number is a multiple of the second.
void multiple () {
    int num1, num2;
    cout << "Please Enter Two Numbers" << "\n";
    cin >> num1 >> num2;

    if (num2 == 0) {
    cout << "The Number Cant Be Zero" << "\n";
    }

    if (num1 % num2 == 0 ) {
        cout << "The Number is Multiple" << "\n";
    } else {
        cout << "The Number Does Not Multiple" << "\n";
    }
}

// =====================================================
// PART 3 — Multi-Condition Decision Pattern
// =====================================================

// Ask the user to enter a number.
// Classify it as:
// negative, positive, or zero.

void conditionDecision () {
    int num;
    cout << "Please Enter a Number" << "\n";
    cin >> num;

    if (num > 0) {
    cout << "positive" << "\n";
    } else if (num < 0) {
        cout << "Negative" << "\n";
    } else {
        cout << "Zero" << "\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter an exam score.
// Classify the score into:
// Excellent, Good, Average, or Fail.

void examScore () {
    // The Score Is Base On 20
    double score;
    cout << "Please Enter Exam Score" << "\n";
    cin >> score;


    if (score < 0 || score > 20) {
        cout << "The Score Must Be Between 0 and 20" << "\n";
    }
    // If The Score Is Lesss Then 10 
    else if (score < 10) {
        cout << "Fail" << "\n";
    // If The Score Is Equal To 10 Or Less Or Equal To 12
    } else if (score <= 12 ) {
        cout << "Average" << "\n";
    }
     // If The Score Is Equal To 13 Or Less Or Equal To 16
    else if (score <= 16) {
        cout << "Good" << "\n";
    }
    // If The Score Is Equal To 17 Or Less Or Equal To 20
    else {
        cout << "Excellent" << "\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a day number (1–7).
// Print the corresponding day category:
// Weekday or Weekend.

void weekday () {
    int day;
    cout << "Enter a Day Number" << "\n";
    cin >> day;

    if (day < 1 || day > 7) {
        cout << "Please Enter a Valid Day" << "\n";
    }
    else if (day <= 5) {
        cout << "Weekday" << "\n";
    } else {
        cout << "Weekend" << "\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a temperature.
// Print:
// Cold, Warm, or Hot based on the value.

void temperatureValue () {
    double temp;
    cout << "Enter The Temperature" << "\n";
    cin >> temp;

    if (temp < 0 || temp > 50) {
        cout << "Please Enter a Valid Temperature" << "\n";
    }
    else if (temp < 36) {
        cout << "Lower Than Average" << "\n";
    } 
    else if (temp <= 37) {
        cout << "Normal" << "\n";
    } 
    else if (temp <= 40) {
        cout << "Higher Than Average" << "\n";
    }
    else {
        cout << "Fever" << "\n";
    }
}

// =====================================================
// PART 4 — Logical Operator Patterns
// =====================================================

// Ask the user to enter age and salary.
// Check if the user qualifies for a loan:
// age >= 21 AND salary >= 2000.

void loanQualification () {
    int age;
    double salary;
    cout << "Please Enter Your Age" << "\n";
    cin >> age;
    cout << "Please Enter Your Salary" << "\n";
    cin >> salary;

    if (age >= 21 && salary >= 2000) {
        cout << "Congratulation You Qualify For a Loan" << "\n";
    } else {
        cout << "Sorry Your Not Qualified For Loan" << "\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Check if the number is between 50 and 100.

void checkNumber () {
    int num;
    cout << "Please Enter a Number" << "\n";
    cin >> num;

    if (num >= 50 && num <= 100) {
        cout << "Correct" << "\n";
    } else {
        cout << "Wrong" << "\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Check if the number is divisible by both 3 and 7.

void checkDivisible () {
    int num;
    cout << "Please Enter a Number" << "\n";
    cin >> num;
    if (num % 3 == 0 && num % 7 == 0) {
        cout << "Correct" << "\n";
    } else {
        cout << "Wrong" << "\n";
    }
}

// =====================================================
// PART 5 — Nested Decision Patterns
// =====================================================

// Ask the user to enter a number.
// First check if it is positive.
// If positive, check if it is even or odd.

void checkPositive () {
    int num;
    cout << "Please Enter a Number" << "\n";
    cin >> num;

    if (num > 0 ) {
        cout << "This Number Is Positive" << "\n";
        if (num % 2 == 0){
        cout << "This Number Is Even" << "\n";
        }  else {
        cout << "This Number Is Odd" << "\n";
        }
    }  
    else if (num < 0) {
        cout << "This Number Is Negative " << "\n";
        } 
        else {
        cout << "This Number Is Zero " << "\n";
        }
}

// ///////////////////////////////////////////////

// Ask the user to enter age.
// If age >= 18, check if age >= 60.
// Print appropriate category.

void checkCategory () {
    int age;
    cout << "Please Enter Your Age" << "\n";
    cin >> age;

    if (age >= 18) {
        if (age >= 60) {
            cout << "Old Aged Adults\n";
        } else {
            cout << "Young Adult\n";
        }
    } else {
        cout << "Child\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter three numbers.
// Determine the largest number using nested if statements.

void determineLargest () {
    int num1, num2, num3;
    cout << "Please Enter Three Numbers\n";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " Is Grater\n";
    }
    else {
        if (num2 >= num3) {
            cout << num2 << " Is Grater\n";
        }
        else {
            cout << num3 << " Is Grater\n";
        }
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a year.
// If the year is divisible by 4,
// check if it is also divisible by 100.
// Apply leap year logic.

void applyLeapYear () {
    int year;
    cout << "Please Enter a Year\n";
    cin >> year;

    if (year % 4 == 0) {

        if (year % 100 == 0) {

            if (year % 400 == 0) {
                cout << "Leap Year\n";
            } 
            else {
                cout << "Not a Leap Year\n";
            }
        } 
        else {
            cout << "Leap Year\n";
        }
    }
    else {
        cout << "Not a Leap Year\n";
    }
}
// =====================================================
// PART 1 — Basic Switch Pattern
// =====================================================

// Ask the user to enter a number between 1 and 7.
// Use a switch statement to print the name of the day.

void printDay () {
    int num;
    cout << "Please Enter a Day Number\n";
    cin >> num;

    switch (num) {
        case 1: 
        cout << "Saturday\n";
        break;
        case 2:
        cout << "Sunday\n";
        break;
        case 3: 
        cout << "Monday\n";
        break;
        case 4:
        cout << "Tuesday\n";
        break;
        case 5:
        cout << "Wednesday\n";
        break;
        case 6:
        cout << "Thursday\n";
        break;
        case 7:
        cout << "Friday\n";
        break;
        default:

        cout << "Please Enter a Valid Number\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a number between 1 and 12.
// Use switch to print the corresponding month name.

void printMonth () {
    int num;
    cout << "Please Enter a Month Number\n";
    cin >> num;

    switch (num) {
        case 1:
        cout << "January\n";
        break;
        case 2:
        cout << "February\n";
        break;
        case 3:
        cout << "March\n";
        break;
        case 4:
        cout << "April\n";
        break;
        case 5:
        cout << "May\n";
        break;
        case 6:
        cout << "June\n";
        break;
        case 7:
        cout << "July\n";
        break;
        case 8:
        cout << "August\n";
        break;
        case 9:
        cout << "September\n";
        break;
        case 10:
        cout << "October\n";
        break;
        case 11:
        cout << "November\n";
        break;
        case 12:
        cout << "December\n";
        break;

        default:
        cout << "Please Enter a Valid Number\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a number between 1 and 5.
// Print the word representation of the number.
// Example: 1 → One, 2 → Two ...

void printNumber () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    switch (num) {
        case 1:
        cout << "One\n";
        break;
        case 2:
        cout << "Two\n";
        break;
        case 3:
        cout << "Three\n";
        break;
        case 4:
        cout << "Four\n";
        break;
        case 5:
        cout << "Five\n";
        break;
        
        default:
        cout << "Please Enter a Valid Number\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a number between 1 and 4.
// Print the season:
// 1 → Winter
// 2 → Spring
// 3 → Summer
// 4 → Autumn

void printSeason () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    switch (num) {
        case 1:
        cout << "Winter\n";
        break;
        case 2:
        cout << "Spring\n";
        break;
        case 3:
        cout << "Summer\n";
        break;
        case 4:
        cout << "Autumn\n";
        break;

        default:
        cout << "Please Enter a Valid Number\n";
    }
}

// =====================================================
// PART 2 — Switch With Characters
// =====================================================

// Ask the user to enter a character representing a grade:
// A, B, C, D, F
// Print a message explaining the grade.

void printGrades () {
    char grade;
    cout << "Please Enter Your Grade" << endl;
    cin >> grade;

    switch (grade) {
        case 'A':
        cout << "Excellent" << endl;
        break;
        case 'B':
        cout << "Very Good" << endl;
        break;
        case 'C':
        cout << "Good" << endl;
        break;
        case 'D':
        cout << "Pass" << endl;
        break;
        case 'F':
        cout << "Fail" << endl;
        break;

        default:
        cout << "Enter a Valid Grade" << endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a letter.
// Check if the letter is a vowel using switch.

void checkVowel () {
    char vowel;
    cout << "Please Enter a vowel" << endl;
    cin >> vowel;

    switch (vowel) {
        case 'a':
        cout << "Correct" << endl;
        break;
        case 'e':
        cout << "Correct" << endl;
        break;
        case 'i':
        cout << "Correct" << endl;
        break;
        case 'o':
        cout << "Correct" << endl;
        break;
        case 'u':
        cout << "Correct" << endl;
        break;

        default:
        cout << "Wrong" << endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a character:
// +  -  *  /
// Print the name of the operator.

void printOperaor () {
    char oper;
    cout << "Please Enter Operator Symbol" << endl;
    cin >> oper;

    switch (oper) {
        case '+':
        cout << "Addition" << endl;
        break;
        case '-':
        cout << "Subtraction" << endl;
        break;
        case '/':
        cout << "Division" << endl;
        break;
        case '*':
        cout << "Multiplication " << endl;
        break;

        default: 
        cout << "Please Enter a Valid Operator" << endl;
    }
}

// =====================================================
// PART 3 — Simple Calculator Pattern
// =====================================================

// Ask the user to enter:
// number1
// number2
// operator (+ - * /)
// Use switch to perform the calculation and print the result.

void printResult () {
    double num1, num2;
    char oper;
    cout << "Calculator" << endl;
    cin >> num1 >> oper >> num2;

    switch (oper) {
        case '+':
        cout << num1 + num2 << endl;
        break;
        case '-':
        cout << num1 - num2 << endl;
        break;
        case '*':
        cout << num1 * num2 << endl;
        break;
        case '/':
        if (num2 == 0)
        cout << "Cant Divide By Zero" << endl;
        else 
        cout << num1 / num2 << endl;
        break;
        
        default:
        cout << "Invalid" << endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a number between 1 and 3.
// Print a simple arithmetic operation result:
// 1 → add two numbers
// 2 → subtract two numbers
// 3 → multiply two numbers.

void printArithmetic () {
        int choice;
        double num1, num2;
        cout << "Enter a Number Between 1 and 3" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
            cout << "Enter Two Numbers" << endl;
            cin >> num1 >> num2;
            cout << num1 + num2 << endl;
            break;
            case 2:
            cout << "Enter Two Numbers" << endl;
            cin >> num1 >> num2;
            cout << num1 - num2 << endl;
            break;
            case 3:
            cout << "Enter Two Numbers" << endl;
            cin >> num1 >> num2;
            cout <<  num1 * num2 << endl;
            break;

            default:
            cout << "Enter a Valid Choice" << endl;
        }
}

// =====================================================
// PART 4 — Grouped Cases Pattern
// =====================================================

// Ask the user to enter a number between 1 and 7.
// Use grouped cases to print:
// Weekday or Weekend.

void printWeekdayWeekend () {
        int num;
        cout << "Please Enter a Number" << endl;
        cin >> num;
        
        switch (num) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        cout << "Weekday" << endl;
        break;
        case 6:
        case 7:
        cout << "Weekend" << endl;
        break;

        default:
        cout << "Please Enter a Valid Number" << endl;
        }
}

// ///////////////////////////////////////////////

// Ask the user to enter a letter grade.
// Group A and B as "Excellent"
// Group C as "Average"
// Group D and F as "Needs Improvement".

void printGrade () {
        char grade;
        cout << "Please Enter Your Grade" << endl;
        cin >> grade;

        switch (grade) {
            case 'a':
            case 'b':
            cout << "Excellent" << endl;
            break;
            case 'c':
            cout << "Average" << endl;
            break;
            case 'd':
            case 'f':
            cout << "Needs Improvement" << endl;
            break;

            default:
            cout << "Please Enter a Valid Grade" << endl;
        }
}

// =====================================================
// PART 5 — Menu Pattern (Very Common)
// =====================================================

// Create a simple menu using switch.

// Print:
// 1 → Show user name
// 2 → Show age
// 3 → Show country
// 4 → Exit
// Ask the user to choose an option.
// Use switch to execute the selected option.

void createMenu () {
    int option;
    string name, country;
    int age;
    
    cout << "Enter Your Name" << endl;
    cin >> name;
    cout << "Enter Your Country" << endl;
    cin >> country;
    cout << "Enter Your Age" << endl;
    
    cout << "Please Choose option" << endl;
    cout <<"1- Show user name" << endl;
    cout <<"2- Show age" << endl;
    cout <<"3- Show country" << endl;
    cout <<"4- Exit" << endl;
    cin >> option;

    switch (option) {
        case 1:
        cout << "Name: " << name << endl;
        break;
        case 2:
        cout << "Age: " << age << endl;
        break;
        case 3:
        cout << "Coutnry: " << country << endl;
        break;
        case 4:
        cout << "Exit" << endl;
        break;

        default:
        cout << "Please Enter a Valid Option" << endl;
    }
}

// ///////////////////////////////////////////////

// Create a program menu:
// 1 → Calculate square of a number
// 2 → Calculate cube of a number
// 3 → Print a message
// 4 → Exit

void createProgramMenu () {
        // Menu
        cout << "1- Calculate square of a number" << endl;
        cout << "2- Calculate cube of a number" << endl;
        cout << "3- Print a message" << endl;
        cout << "4- Exit" << endl;

        int num; 
        int option;
        cout << "Choose An Option" << endl;
        cin >> option;
    
        switch (option) {
            case 1:
            cout << "Enter a Number" << endl;
            cin >> num;
            cout << num * num << endl;
            break;

            case 2:
            cout << "Enter a Number" << endl;
            cin >> num;
            cout << num * num * num << endl;
            break;

            case 3:
            cout << "Thank you" << endl;
            break;

            case 4:
            cout << "Program Terminated" << endl;
            break;

            default:
            cout << "Enter a Valid Option Above" << endl;
        }

}

// =====================================================
// PART 1 — Basic While Loop Patterns
// =====================================================

// Ask the user to enter a number.
// Use a while loop to print numbers from 1 to that number.

void printe1Numbers () {
        int num;
        cout << "Please Enter a Number\n";
        cin >> num;

        int i = 1;
        while (i <= num) {
            cout << i << endl;
            i++;
        }
} 

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Use a while loop to print numbers from that number down to 1.

void printReverse () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    int i = num;
    while (i >= 1) {
        cout << i << endl;
        i--;
    }
}

// ///////////////////////////////////////////////

// Use a while loop to print all even numbers from 1 to 50.

void printEvenNumbers () {
    cout << "Print Even Numbers\n";
    int i = 2;
    while (i <= 50) {
        cout << i << endl;
        i += 2;
    }
} 

// ///////////////////////////////////////////////

// Use a while loop to print all odd numbers from 1 to 50.

void printOddNumbers () {
    cout << "Print Odd Numbers\n";
    int i = 1;
    while (i <= 50) {
        cout << i << endl;
        i += 2;
    }
}

// =====================================================
// PART 2 — Counting Patterns
// =====================================================

// Ask the user to enter a number.
// Count how many numbers from 1 to that number are divisible by 3.

void countDivisible () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    int i = 1;
    int count = 0;

    while (i <= num ) {
        if (i % 3 == 0) {
            count++;
        }
        i++;
    }
    cout << count << " Number Are Divisible By 3" << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Calculate the sum of numbers from 1 to that number using a while loop.

void calculateSumNuumbers () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;
    
    int i = 1;
    int sum = 0;

    while (i <= num) {
        sum += i;
        i++;
    }
    cout << sum << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Calculate the factorial of that number using a while loop.

void calculateFactorial () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    int i = 1;
    int fact = 1;

    while (i <= num) {
        fact *= i;
        i++;
    }
    cout << fact << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Count how many digits the number has using a while loop.

void countDigit () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;
    
    int count = 0;

    if (num == 0) {
        count = 1;
    } else {
        while (num !=0) {
            num /= 10;
            count++;
        }
    }
    cout << count << endl;
}

// //////////////////////////////////////////////////////

// Ask the user to enter a number.
// Calculate the sum of numbers divisible by 5 from 1 to that number.

void calculateSumDivisible () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    int i = 1;
    int sum = 0;

    while (i <= num) {
        if (i % 5 == 0) {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
}

// //////////////////////////////////////////////////////

// Ask the user to enter a number.
// Calculate the sum of even numbers from 1 to that number.

void calculateSumEven () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    int i = 1;
    int sum = 0;

    while (i <= num) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
}

// //////////////////////////////////////////////////////

// Ask the user to enter a number.
// Calculate the sum of odd numbers from 1 to that number.

void calculateSumOdd () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    int i = 1;
    int sum = 0;

    while (i <= num) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
}

// //////////////////////////////////////////////////////

// Ask the user to enter a number.
// Count how many numbers are divisible by BOTH 2 and 3.

void countDivisibleBy2And3 () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    int i = 1;
    int count = 0;

    while (i <= num) {
        if (i % 2 == 0 && i % 3 == 0) {
            count++;
        }
        i++;
    }
    cout << count << endl;
}

// //////////////////////////////////////////////////////

// Ask the user to enter a number.
// Print numbers from 1 to that number:
// - If divisible by 2 → print "Even"
// - If divisible by 3 → print "Three"
// - If divisible by both → print "EvenThree"

void printNumbersFrom1 () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    int i = 1;
    
    while (i <= num) {
        if (i % 2 == 0 && i % 3 == 0) {
            cout << "EvenThree\n";
        } else if (i % 2 == 0) {
            cout << "Even\n";
        } else if (i % 3 == 0) {
            cout << "Three\n";
        } else {
            cout << i << endl;
        }
        i++;
    }  
}

// //////////////////////////////////////////////////////

// Ask the user to enter two numbers (start and end).
// Print all numbers between them.

void printNumbersBetween () {
    int num1, num2;
    cout << "Please Enter Two Numbers\n";
    cin >> num1 >> num2;

    int i = num1;
    
    while (i <= num2) {
    cout << i << endl;
        i++;
    }
}
// //////////////////////////////////////////////////////

// Ask the user to enter two numbers.
// Count how many numbers between them are divisible by 4.

void countNmbersDiv4 () {
    int num1, num2;
    cout << "Please Enter Two Numbers\n";
    cin >> num1 >> num2;

    int start = min(num1, num2);
    int end = max(num1, num2);

    int i = start;
    int count = 0;
    
    while (i <= end) {
        if (i % 4 == 0) {
            count++;
        }
        i++;
    }
    cout << count << endl;
}

// =====================================================
// PART 3 — User Input Loops
// =====================================================

// Ask the user to enter numbers continuously.
// Stop when the user enters 0.

void stopUser () {
    int num;
    cout << "Please Enter a Number\n";
    cin >> num;

    while (num != 0) {
        cout << "Please Enter a Number\n";
        cin >> num;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Keep adding them to a sum.
// Stop when the user enters -1.

void addUserSum () {
    int num;
    int sum = 0;

    while (true) {
        cout << "Please Enter a Number\n";
        cin >> num;

        if (num == -1) {
            break;
        }
        sum += num;
        cout << "Current: sum = " << sum << endl;
    }  
}

// ///////////////////////////////////////////////

// Ask the user to guess a secret number.
// Continue asking until the correct number is entered.

void secretNumber () {
    int num;
    int secretNum = 34;
    cout << "Guess a Secret Number\n";
    cin >> num;

    while (true) {
        if (num == secretNum) {
            cout << "Correct\n";
            break;
        }
        cout << "Try Again\n";
        cin >> num;
    }
}

// =====================================================
// Project-1 — Smart Calculator
// =====================================================

// =====================================================
// PART 4 — Condition Controlled Loops
// =====================================================

// Ask the user to enter a password.
// Continue asking until the correct password is entered.

void enterPassword () {
    int pssword;
    int correctPassword = 43124;

    while (true) {
        cout << "Please Enter a password\n";
        cin >> pssword;
        if (pssword == correctPassword) {
            cout << "Correct\n";
            break;
        } else {
            cout << "Wrong\n";
        }
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a positive number.
// Keep asking while the number is negative.

void enterPositiveNumber () {
    int num;
    
    while (true) {
        cout << "Enter a Positive Number\n";
        cin >> num;
        if (num < 0) {
            cout << "Try Again\n";
            continue;
        } else {
            cout << "Correct\n";
            break;
        }
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Continue while the numbers are less than 100.

void enterNumbersLess100 () {
    int num;
    
    while (true) {
    cout << "Enter Numbers\n";
    cin >> num;

    if (cin.fail()) {
        cout << "Enter a Valid Number\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }
        if (num < 100) {
            cout << "Correct\n";
        } else {
            cout << "Try Again\n";
            break;
        }
    }
}

// =====================================================
// PART 5 — Pattern Practice
// =====================================================

// Use a while loop to print this pattern:
//
// *
// **
// ***
// ****
// *****

void printPattern () {
    int length;
    cout << "Please Enter The Length\n";
    cin >> length;
    
    char symbol;
    cout << "Enter a Symbol\n";
    cin >> symbol;

    int i = 1;
    while (i <= length) {
        int j = 1;
        while (j <= i) {
            cout << symbol;
            j++;
        }
        cout << endl;
        i++;
    }
}

// ///////////////////////////////////////////////

// Use a while loop to print multiplication table of a number
// entered by the user.

void printMultiplication () {
    int num;
    cout << "Enter a Number\n";
    cin >> num;
    
    int i = 1;
    while (i <= 10) {
        cout << num << '*' << i << '=' << num * i << endl;
        i++;
    }
}
// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Reverse the digits of the number using a while loop.

void printReverseDigit () {
    int num;
    cout << "Enter a Number\n";
    cin >> num;
    
    int reversed = 0;

    while (num != 0) {
        // Get Last Digit
        int digit = num % 10;
        // Build Reversed Number
        reversed = reversed * 10 + digit;
        // Remove Last Digit
        num /= 10;
    }

    cout << reversed << endl;
}

// =====================================================
// Project-2 — Number Gessing Game
// =====================================================

// =====================================================
// PART 1 — Basic do...while Patterns
// =====================================================

// Ask the user to enter a number.
// Print the number.
// Repeat until the user enters 0.

void printDoWhile () {
    int num;

    do {
    cout << "Enter a Number\n";
    cin >> num;
    cout << "Your Number Is: " << num << endl;

    } while (num != 0);
}

// ///////////////////////////////////////////////

// Ask the user to enter a positive number.
// Keep asking until the user enters a number greater than 0.

void enterPositiveDoWhile () {
    int num;

    do {
    cout << "Enter a Poistive Number\n";
    cin >> num;
    } while (num > 0);
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Print numbers from 1 to that number using a do...while loop.

void printNumberDoWhile () {
    int num;
    cout << "Enter a Number\n";
    cin >> num;
    
    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= num);
}

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Print numbers from that number down to 1 using a do...while loop.

void printDownDoWhile () {
    int num;
    cout << "Enter a Numner\n";
    cin >> num;
    
    int i = num;
    do {
        cout << i << endl;
        i--;
    } while (i >= 1);
}

// =====================================================
// PART 2 — Input Validation Pattern
// =====================================================

// Ask the user to enter a password.
// Continue asking until the correct password is entered.

void enterDoWhilePassword () {
    int password = 453;
    int num;
    
    do {
        cout << "Enter a Password\n";
        cin >> num;
    } while (num != password);

    cout << "Correct\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter an age.
// Keep asking until the age is between 1 and 120.

void askAgeDoWhile () {
    int age;
    
    do {
        cout << "Enter Your Age\n";
        cin >> age;
    } while (age < 1 || age > 120);
}

// ///////////////////////////////////////////////

// Ask the user to enter a number between 10 and 50.
// Repeat the question until the number is inside the range.

void enterBetweenDoWhile () {
    int num;
    
    do {
        cout << "Enter a Number Between 10 And 50\n";
        cin >> num;
    } while (num < 10 || num > 50);
}

// =====================================================
// PART 3 — Accumulation Pattern
// =====================================================

// Ask the user to enter numbers.
// Add them together.
// Stop when the user enters 0.
// Print the final sum.

void addSumDoWhile () {
    int num;
    cout << "Enter Numbers\n";
    
    int sum = 0;
    
    do {
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << sum << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Count how many numbers were entered.
// Stop when the user enters -1.

void countNumberDoWhile () {
    int num;
    cout << "Enter a Numbers\n";
    
    int count = 0;

    do {
        cin >> num;
        if (num != -1) {
            count++;
        }
    } while (num != -1);
    
    cout << count << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Track the largest number entered.
// Stop when the user enters 0.

void trackNumberDoWhile () {
    int num;
    cout << "Enter a Numbers\n";
    
    cin >> num;
    int largest = num;
    
    do {
        cin >> num;
        if (num > largest) {
        largest = num; 
    } 
    } while (num != 0);
    cout << largest << endl;
}
// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Count how many numbers are even.
// Stop when the user enters -1.

void countEvenDoWhile () {
    int num;
    cout << "Enter a Number\n";

    int count = 0;

    do {
        cin >> num;
        if (num != -1 && num % 2 == 0) {
            count++;
        }

    } while (num != -1);
    cout << count << endl;
}
// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Calculate the average.
// Stop when the user enters -1.

void calculateAvDoWhile () {
    int num;
    cout << "Enter a Numbers\n";

    int sum = 0;
    int count = 0;

    do {
        cin >> num;
        if (num != -1) {
        sum += num;
    count++;
        }
    } while (num != -1);
    if (count != 0) {
        int average = sum / count;
        cout << average << endl;
    }
}

// =====================================================
// PART 4 — Menu Pattern
// =====================================================

// Create a menu using do...while:

// 1 → Add two numbers
// 2 → Multiply two numbers
// 3 → Print a message
// 4 → Exit

// Keep showing the menu until the user chooses option 4.

void menuDoWhile () {
    int num1, num2;
    int option;

    do {
    cout << "\n========== Menu ==========\n";
    cout << "1- Add Two Numbers\n";
    cout << "2- Multiply Two Numbers\n";
    cout << "3- Print a Message\n";
    cout << "4- Exit\n";

    cin >> option;
        switch (option) {
            case 1: 
            cout << "Enter Tow Numbers\n";
            cin >> num1 >> num2;
            cout << "Result:" << num1 + num2 << endl;
            break;
            case 2: 
            cout << "Enter Tow Numbers\n";
            cin >> num1 >> num2;
            cout << "Result:" << num1 * num2 << endl;
            break;
            case 3: 
            cout << "Message" << endl;
            break;
            case 4: 
                break;
            default :
            cout << "Please Enter a Valid Option\n";
        }
    } while (option != 4);
}

// =====================================================
// PART 1 — Basic For Loop Patterns
// =====================================================

// Use a for loop to print numbers from 1 to 10.

void printDoLoop () {
        for (int i = 1; i <= 10; i++) {
            cout << i << endl;
        }
}

// ///////////////////////////////////////////////

// Use a for loop to print numbers from 10 down to 1.

void printDownForLoop () {
    for (int i = 10; i >= 1; i--) {
        cout << i << endl;
    }
}

// ///////////////////////////////////////////////

// Use a for loop to print all even numbers from 1 to 50.
// Use a for loop to print all odd numbers from 1 to 50.
void printEvenOddForLoop () {
    for (int i = 1; i <= 50; i++) {
        // Even Numbers
        if (i % 2 == 0) {
            cout << "Even: " << i << endl;
        } 
        // Odd Numbers
        else {
            cout << "Odd: " << i << endl;
        }
    }
}

// ///////////////////////////////////////////////

// Use a for loop to print numbers from 1 to 100.
// Print only numbers divisible by 5.

void printDiviForLoop () {
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            cout << "Divisible By 5: " << i << endl;
        }
    }
}

// =====================================================
// PART 1 — Basic Array Input / Output Pattern
// =====================================================

// Ask the user to enter 5 numbers.
// Store them in an array.
// Print all numbers.

void printArray () {
    
    cout << "Enter 5 Numbers\n";
    int arr [5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "The Numbers Are:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Print them in the same order.

void print10Array () {
    cout << "Enter 10 Numbers\n";
    int arr [10];
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Numbers\n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers.
// Print them in reverse order.

void PrintReverseArray () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 5; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}

// =====================================================
// PART 2 — Summation Pattern
// =====================================================

// Ask the user to enter 10 numbers.
// Calculate the sum of all numbers.

void calculateArraySum () {
    cout << "Enter 10 Numbers\n";
    int arr[10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

        cout << "The Sum: "<< sum << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Calculate the average of the numbers.

void calculateAveArray () {
    cout << "Enter 10 Numbers\n";
    int arr[10];
    int sum = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / 10;
    cout << "The Average is:" << average << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers.
// Print the total sum of even numbers only.

void printEvenArray () {
    cout << "Enter 5 Numbers\n";
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    
    cout << "The Total Sum is:" << sum << endl;
}

// =====================================================
// PART 3 — Searching Pattern
// =====================================================

// Ask the user to enter 10 numbers.
// Ask the user for another number.
// Check if the number exists in the array.

void checkExistArray () {
    cout << "Enter 10 Numbers\n";
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    int num2;
    cout << "Enter Another Number\n";
    cin >> num2;
    bool found = false;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == num2) {
            found = true;
        break;
    } 

    } if (found) {
        cout << "Correct\n";
    } else {
        cout << "Wrong\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Count how many times the number 5 appears.

void countAppearArray () {
    cout << "Enter 10 Numbers\n";
    int arr[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 5) {
            count++;
        }
    }

    cout << "The Number Appears: " << count << endl;
}
// =====================================================
// PART 4 — Maximum / Minimum Pattern
// =====================================================

// Ask the user to enter 10 numbers.
// Find the largest number.

void findLargesArrnum () {
    cout << "Enter 10 Numbers\n";

    int arr[10];

    // Read First Number
    cin >> arr[0];
    int largest = arr[0];

    // Read Rest And Compare
    for (int i = 1; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "The Largest Number Is:" << largest << endl;
}
// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Find the smallest number.

void findSmallestArrnum () {
    cout << "Enter 10 Numbers\n";

    int arr[10];

    cin >> arr[0];
    int smallest = arr[0];

    for (int i = 1; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The Smallest Number Is:" << smallest << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Find the difference between the largest and smallest number.

void findDiffrenceArr () {
    cout << "Enter 10 Numbers\n";

    int arr[10];
    cin >> arr[0];
    int largest = arr[0];
    int smallest = arr[0];
    
    for (int i = 1; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
        } if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    int diffrence = largest - smallest;
    cout << "Diffrence Of Numbers Is:" << diffrence;
}


// =====================================================
// PART 5 — Counting Pattern
// =====================================================

// Ask the user to enter 10 numbers.
// Count how many numbers are even.

void countEvenArr () {
    cout << "Enter 10 Numbers\n";
    int arr[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    cout << count << "Even Numbers\n";
}

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Count how many numbers are positive.

void countPositiveArrNum () {
    cout << "Enter 10 Numbers\n";

    int arr[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] > 0) {
            count++;
        }
    }
    cout << count << "Positive Numbers\n";
}
// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Count how many numbers are greater than 50.

void countGreaterArr () {
    cout << "Enter 10 Numbers\n";

    int arr[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] > 50) {
            count++;
        }
    }
    cout << count << "Numbers\n";
}

// =====================================================
// PART 6 — Transformation Pattern
// =====================================================

// Ask the user to enter 5 numbers.
// Multiply every element by 2.
// Print the updated array.

void printUpdatedArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        arr[i] *= 2;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Multiplication " << arr[i] << endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers.
// Replace every negative number with 0.

void replaceArrNum () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] < 0) {
            arr[i] = 0;
        }
        cout << arr[i] << endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Create another array storing the square of each number.

void sotreArr () {
    cout << "Enter 10 Numbers\n";
    
    int arr[10];
    int squareArr[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        squareArr[i] = arr[i] * arr[i];
        // arr[i] = squareArr;
    }

    cout << "The Square Of Each Number Is\n"; 
    for (int i = 0; i < 10; i++) {
    cout << squareArr[i] << endl;
    }

}

// =====================================================
// PART 7 — Comparison Pattern
// =====================================================

// Ask the user to enter 5 numbers.
// Find the second largest number.

void find2LargeArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    cin >> arr[0];
    cin >> arr[1];
    
    int largest, secLargest;

    // Define Largest and Second Largest Number 
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secLargest = arr[1];
    } else {
        largest = arr[1];
        secLargest = arr[0];
    }

    for (int i = 2; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secLargest && arr[i] != largest) {
            secLargest = arr[i];
        }
    }
    cout << "The Second Largest Number Is: " << secLargest << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Check if the array is sorted in ascending order.

void checkSortArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 1; i < 5; i++) {
        cin >> arr[i];
    }

    bool sorted = true;

    for (int i = 1; i < 5; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "Sorted\n";
    } else {
        cout << "Not Sorted\n";
    }
}

// =====================================================
// PART 8 — Two Arrays Pattern
// =====================================================

// Ask the user to enter 5 numbers for array A.
// Ask the user to enter 5 numbers for array B.
// Print the sum of corresponding elements.

void print2rray () {
    int arrA[5];
    int arrB[5];

    cout << "Enter 5 Numbers Arr A\n";
    for (int i = 0; i < 5; i++) {
        cin >> arrA[i];
    } 

    cout << "Enter 5 Numbers Arr B\n";
    for (int i = 0; i < 5; i++) {
        cin >> arrB[i];
    }

    cout << "The Sum Of Corresponding Elements Is:\n";
     for (int i = 0; i < 5; i++) {
        cout << arrA[i] + arrB[i] <<endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers for array A.
// Copy the elements into another array B.

void copyIntoArr () {
    cout << "Enter 5 Numbers\n";

    int arrA[5];
    int arrB[5];

    for (int i = 0; i < 5; i++) {
        cin >> arrA[i];
        arrB[i] = arrA[i];
    }
    
    cout << "The Array B\n";
    for (int i = 0; i < 5; i++) {
        cout << arrB[i] << endl;
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers.
// Reverse the array into another array.

void reverseArr () {
    cout << "Enter 5 Numbers\n";

    int arrA[5];
    int arrB[5];
    
    // Input 
    for (int i = 0; i < 5; i++) {
        cin >> arrA[i];
    }
    
    // Reverse Into B
    for (int i = 0; i < 5; i++) {
        arrB[i] = arrA[5 - 1 -i];
    }
    
    // Output
    cout << "The Array B\n";
    for (int i = 0; i < 5; i++) {
        cout << arrB[i] << endl;
    }
}


// =====================================================
// LeetCode
   // Pattern 1 → Array Traversal (FULL)
   // Pattern 2 → Counting / Frequency
   // Pattern 3 → Min / Max Tracking
// =====================================================

// =====================================================
// Project-3 — Student Management
// =====================================================

// =====================================================
// PART 1 — Basic String Input / Output Pattern
// =====================================================

// Ask the user to enter their name.
// Print the name.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Print the length of the word.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Print the first character.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Print the last character.


// =====================================================
// PART 2 — Character Traversal Pattern
// =====================================================

// Ask the user to enter a word.
// Print each character on a new line.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Count how many characters the word contains
// using a loop.

// ///////////////////////////////////////////////

// Ask the user to enter a sentence.
// Count how many spaces it contains.


// =====================================================
// PART 3 — Counting Pattern
// =====================================================

// Ask the user to enter a word.
// Count how many vowels it contains.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Count how many consonants it contains.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Count how many digits appear in the word.


// =====================================================
// PART 4 — Searching Pattern
// =====================================================

// Ask the user to enter a word.
// Check if the word contains the letter 'a'.

// ///////////////////////////////////////////////

// Ask the user to enter a sentence.
// Count how many times the letter 'e' appears.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Check if the word starts with the letter 'A'.


// =====================================================
// PART 5 — Transformation Pattern
// =====================================================

// Ask the user to enter a word.
// Convert all letters to uppercase.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Convert all letters to lowercase.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Replace every 'a' with '*'.


// =====================================================
// PART 6 — Reverse Pattern
// =====================================================

// Ask the user to enter a word.
// Print the word in reverse order.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Check if the word is a palindrome.


// =====================================================
// PART 7 — Comparison Pattern
// =====================================================

// Ask the user to enter two words.
// Check if they are equal.

// ///////////////////////////////////////////////

// Ask the user to enter two words.
// Determine which word is longer.

// ///////////////////////////////////////////////

// Ask the user to enter two words.
// Print them in alphabetical order.


// =====================================================
// PART 8 — String Building Pattern
// =====================================================

// Ask the user to enter a word.
// Create a new string that duplicates the word.

// ///////////////////////////////////////////////

// Ask the user to enter two words.
// Combine them into a single string.

// ///////////////////////////////////////////////

// Ask the user to enter a word.
// Repeat the word 5 times in a new string.

// =====================================================
// LeetCode
   // Pattern 4 → String Traversal
   // 👉 Work with:
   // - characters
  // - counting vowels
  // - reversing strings
// =====================================================

// =====================================================
// PART 1 — Basic Vector Traversal Pattern
// =====================================================

// Create a vector with some numbers.
// Print all elements using a loop.


// ///////////////////////////////////////////////

// Create a vector with 10 numbers.
// Print only elements at even indices.


// ///////////////////////////////////////////////

// Create a vector with 10 numbers.
// Print elements in reverse order.


// =====================================================
// PART 2 — Input + Dynamic Size Pattern
// =====================================================

// Create an empty vector.
// Ask the user to enter numbers.
// Stop when the user enters -1.
// Print all elements.


// ///////////////////////////////////////////////

// Ask the user how many numbers he wants to enter.
// Store them in a vector.
// Print all elements.


// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Store them in a vector.
// Print the size of the vector.


// =====================================================
// PART 3 — Summation Pattern
// =====================================================

// Create a vector of numbers.
// Calculate the sum of all elements.


// ///////////////////////////////////////////////

// Create a vector of numbers.
// Calculate the average.


// ///////////////////////////////////////////////

// Create a vector.
// Print the sum of even numbers only.


// =====================================================
// PART 4 — Searching Pattern
// =====================================================

// Create a vector.
// Ask the user for a number.
// Check if the number exists in the vector.


// ///////////////////////////////////////////////

// Create a vector.
// Count how many times a number appears.


// ///////////////////////////////////////////////

// Create a vector.
// Find the index of a given number.


// =====================================================
// PART 5 — Maximum / Minimum Pattern
// =====================================================

// Create a vector.
// Find the largest element.


// ///////////////////////////////////////////////

// Create a vector.
// Find the smallest element.


// ///////////////////////////////////////////////

// Create a vector.
// Find the difference between max and min.


// =====================================================
// PART 6 — Counting Pattern
// =====================================================

// Create a vector.
// Count how many numbers are even.


// ///////////////////////////////////////////////

// Create a vector.
// Count how many numbers are positive.


// ///////////////////////////////////////////////

// Create a vector.
// Count how many numbers are greater than 100.


// =====================================================
// PART 7 — Transformation Pattern
// =====================================================

// Create a vector.
// Multiply each element by 2.


// ///////////////////////////////////////////////

// Create a vector.
// Replace negative numbers with 0.


// ///////////////////////////////////////////////

// Create a vector.
// Create another vector storing squares of elements.


// =====================================================
// PART 8 — Modification Pattern (VECTOR SPECIAL)
// =====================================================

// Create a vector.
// Add an element at the end using push_back.


// ///////////////////////////////////////////////

// Create a vector.
// Remove the last element using pop_back.


// ///////////////////////////////////////////////

// Create a vector.
// Insert an element at the beginning.


// =====================================================
// PART 9 — Comparison Pattern
// =====================================================

// Create a vector.
// Find the second largest number.


// ///////////////////////////////////////////////

// Create a vector.
// Check if the vector is sorted in ascending order.


// =====================================================
// PART 10 — Two Vectors Pattern
// =====================================================

// Create two vectors.
// Add corresponding elements and store in a third vector.


// ///////////////////////////////////////////////

// Copy all elements from one vector to another.


// ///////////////////////////////////////////////

// Reverse a vector into another vector.


// =====================================================
// PART 11 — Advanced Thinking (IMPORTANT)
// =====================================================

// Remove all even numbers from a vector.


// ///////////////////////////////////////////////

// Remove duplicate elements from a vector.


// ///////////////////////////////////////////////

// Move all zeros to the end of the vector.

// =====================================================
// PART 1 — Basic Return Value Patterns
// =====================================================

// Create a function that takes a number as a parameter.
// Return the square of the number.

// ///////////////////////////////////////////////

// Create a function that takes a number as a parameter.
// Return the cube of the number.

// ///////////////////////////////////////////////

// Create a function that takes two numbers.
// Return their sum.

// ///////////////////////////////////////////////

// Create a function that takes two numbers.
// Return their product.


// =====================================================
// PART 2 — Comparison Return Patterns
// =====================================================

// Create a function that takes two numbers.
// Return the larger number.

// ///////////////////////////////////////////////

// Create a function that takes two numbers.
// Return the smaller number.

// ///////////////////////////////////////////////

// Create a function that takes three numbers.
// Return the largest number.


// =====================================================
// PART 3 — Boolean Return Patterns
// =====================================================

// Create a function that takes a number.
// Return true if the number is even.

// ///////////////////////////////////////////////

// Create a function that takes a number.
// Return true if the number is positive.

// ///////////////////////////////////////////////

// Create a function that takes a number.
// Return true if the number is divisible by 5.


// =====================================================
// PART 4 — Mathematical Return Patterns
// =====================================================

// Create a function that takes a number.
// Return its factorial.

// ///////////////////////////////////////////////

// Create a function that takes two numbers.
// Return the average of the numbers.

// ///////////////////////////////////////////////

// Create a function that takes the radius of a circle.
// Return the area of the circle.


// =====================================================
// PART 5 — Algorithm Return Patterns
// =====================================================

// Create a function that takes a number.
// Return the reverse of the number.

// ///////////////////////////////////////////////

// Create a function that takes a number.
// Return true if the number is a prime number.

// ///////////////////////////////////////////////

// Create a function that takes a number.
// Return the sum of its digits.


// =====================================================
// PART 6 — String Return Patterns
// =====================================================

// Create a function that takes a string.
// Return the length of the string.

// ///////////////////////////////////////////////

// Create a function that takes a string.
// Return the reversed string.

// ///////////////////////////////////////////////

// Create a function that takes a string.
// Return true if the string is a palindrome.


// =====================================================
// PART 1 — Number Manipulation Patterns
// =====================================================

// Ask the user to enter a number.
// Reverse the digits of the number.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Calculate the sum of its digits.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Count how many digits the number has.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Check if the number is a palindrome.


// =====================================================
// PART 2 — Prime & Divisibility Patterns
// =====================================================

// Ask the user to enter a number.
// Check if the number is a prime number.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Print all divisors of the number.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Count how many divisors it has.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Check if the number is perfect
// (sum of divisors equals the number).


// =====================================================
// PART 3 — Maximum / Minimum Patterns
// =====================================================

// Ask the user to enter numbers until 0.
// Print the largest number entered.

// ///////////////////////////////////////////////

// Ask the user to enter numbers until 0.
// Print the smallest number entered.

// ///////////////////////////////////////////////

// Ask the user to enter numbers until 0.
// Print the difference between the largest and smallest numbers.


// =====================================================
// PART 4 — Sequence Patterns
// =====================================================

// Ask the user to enter a number n.
// Print the first n numbers of the Fibonacci sequence.

// ///////////////////////////////////////////////

// Ask the user to enter a number n.
// Calculate the factorial of n.

// ///////////////////////////////////////////////

// Ask the user to enter a number n.
// Print the multiplication table of n.


// =====================================================
// PART 5 — Digit Analysis Patterns
// =====================================================

// Ask the user to enter a number.
// Count how many digits are even.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Find the largest digit in the number.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Find the smallest digit in the number.


// =====================================================
// PART 6 — Pattern Generation (Algorithm Thinking)
// =====================================================

// Ask the user to enter a number n.
// Print a triangle pattern of stars with n rows.

// ///////////////////////////////////////////////

// Ask the user to enter a number n.
// Print a square pattern of stars with n rows.

// ///////////////////////////////////////////////

// Ask the user to enter a number n.
// Print a pyramid pattern of stars.

// =====================================================
// PART 7 — Number Property Patterns
// =====================================================

// Ask the user to enter a number.
// Check if the number is an Armstrong number.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Check if the number is a strong number
// (sum of factorial of digits equals the number).

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Check if the number is a Harshad number
// (divisible by the sum of its digits).

// =====================================================
// PART 10 — Two Pointers & Sliding Window
// =====================================================

// DAY 1 — Two Pointers
// Find pair with sum = X in sorted array
// Reverse array using two pointers
// Reverse string using two pointers
// Check palindrome using two pointers
// Move all zeros to the end
// Remove duplicates from sorted array
// Find pair with difference = X
// Merge two sorted arrays
// Find common elements in two arrays
// Check if array is sorted


// DAY 2 — Sliding Window
// Maximum sum subarray of size K
// Minimum sum subarray of size K
// Count subarrays with sum = X
// Find average of subarrays of size K
// Count subarrays with all positive numbers
// Find longest subarray with sum <= X
// Find shortest subarray with sum >= X
// Count vowels in substring of size K
// Maximum number of even numbers in window
// Minimum number of odd numbers in window

// =====================================================
// LeetCode
   // Pattern 5 → Two Pointers
   // Pattern 6 → Sliding Window
// =====================================================

// =====================================================
// Start arduino
// =====================================================

// =====================================================
// PART 8 — Sorting & Searching (MISSING CORE)   
// 4. START READING Books: check down the plan
// =====================================================

// DAY 1 — Sorting Basics
// Bubble sort an array
// Selection sort an array
// Insertion sort an array
// Sort array in ascending order
// Sort array in descending order
// Find largest element after sorting
// Find smallest element after sorting
// Count number of swaps in bubble sort
// Check if array is already sorted
// Sort array without using built-in functions


// DAY 2 — Searching Basics
// Linear search for an element
// Binary search in sorted array
// Find first occurrence of a number
// Find last occurrence of a number
// Count occurrences of a number
// Find closest number to a target
// Search element in reversed array
// Search element in rotated sorted array (basic)
// Check if element exists
// Find index of largest element

// =====================================================
// LeetCode
   // Pattern 10 → Binary Search
// =====================================================


// =====================================================
// PART 9 — Recursion (MISSING CORE)
// =====================================================

// DAY 1 — Recursion Basics
// Print numbers from 1 to N recursively
// Print numbers from N to 1 recursively
// Calculate factorial using recursion
// Calculate sum of first N numbers
// Calculate Fibonacci at position N
// Count digits in a number recursively
// Sum digits of a number recursively
// Reverse a number recursively
// Check if number is palindrome recursively
// Find maximum in array recursively


// DAY 2 — Recursion Intermediate
// Reverse a string recursively
// Check if string is palindrome recursively
// Count vowels recursively
// Count consonants recursively
// Find minimum element recursively
// Sum array elements recursively
// Print array elements recursively
// Check if array is sorted recursively
// Replace elements recursively
// Find index of element recursively

// =====================================================
// LeetCode
   // Pattern 11 → Recursion
// =====================================================

// Advanced

// =====================================================
// Start LeetCode
  // Pattern 7 → Hash Map (Frequency Map)
// =====================================================

// Data Structure: Stack / Queue / Linked List / Tree
// =====================================================
// PART 11 — Stack & Queue Basics
// =====================================================

// DAY 1 — Stack
// Implement stack using array
// Push elements to stack
// Pop elements from stack
// Peek top element
// Check if stack is empty
// Reverse a string using stack
// Check balanced parentheses
// Convert infix to postfix (basic)
// Evaluate postfix expression
// Implement stack using linked list (optional)


// DAY 2 — Queue
// Implement queue using array
// Enqueue elements
// Dequeue elements
// Peek front element
// Check if queue is empty
// Implement circular queue
// Implement deque operations
// Simulate task scheduling using queue
// Find first non-repeating character using queue
// Simple BFS traversal simulation

// =====================================================
// Start LeetCode
  // Pattern 9 → Stack
// =====================================================

// =====================================================
// PART 12 — Linked List Basics
// =====================================================

// DAY 1 — Linked List
// Create a singly linked list
// Insert at head
// Insert at tail
// Delete from head
// Delete from tail
// Search for an element
// Print all elements
// Count length of list
// Reverse list iteratively
// Reverse list recursively


// =====================================================
// PART 13 — Trees Basics (INTRO ONLY)
// =====================================================

// DAY 1 — Binary Tree
// Create a tree node
// Insert nodes manually
// Preorder traversal
// Inorder traversal
// Postorder traversal
// Count total nodes
// Find height of tree
// Count leaf nodes
// Find maximum value
// Sum of all nodes

// =====================================================
// Start LeetCode
  // Pattern 13 → Tree Traversal (DFS / BFS)
// =====================================================

// =====================================================
// PART 14 — Very Advanced (LATER — DO NOT RUSH)
// =====================================================

// Dynamic Programming (basic)
// Fibonacci using DP
// Climbing stairs problem
// Maximum subarray sum (Kadane)
// Coin change (basic)
// Longest common subsequence (basic)

// Graph Basics
// Represent graph using adjacency list
// BFS traversal
// DFS traversal
// Count connected components
// Detect cycle (basic)

// Backtracking
// Generate subsets
// Generate permutations
// Solve simple maze
// Solve N-Queens (basic)

// =====================================================
// Start LeetCode
  // Pattern 12 → Backtracking
  // Pattern 14 → Graph Traversal
  // Pattern 15 → Dynamic Programming
// =====================================================


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
    // numberTransfer ();
    // calculator ();
    // calculatorComplex ();
    // productDiscount ();
    // workedHours ();
    // ageCalculator ();
    // asgii ();
    // triangleLengths ();
    // bmiCalculator ();
    // simpleDecision ();
    // countEvenOdd ();
    // divisibleBy5 ();
    // rangeNumbers ();
    // largeNumber ();
    // multiple ();
    // conditionDecision ();
    // examScore ();
    // weekday ();
    // temperatureValue ();
    // loanQualification ();
    // checkNumber ();
    // checkDivisible ();
    // checkPositive ();
    // checkCategory ();
    // determineLargest ();
    // applyLeapYear ();
    // printDay ();
    // printMonth ();
    // printNumber ();
    // printSeason ();
    // printGrades ();
    // checkVowel ();
    // printOperaor ();
    // printResult ();
    // printArithmetic ();
    // printWeekdayWeekend ();
    // printGrade ();
    // createMenu ();
    // createProgramMenu ();
    // printe1Numbers ();
    // printReverse ();
    // printEvenNumbers ();
    // printOddNumbers ();
    // countDivisible ();
    // calculateSumNuumbers ();
    // calculateFactorial ();
    // countDigit ();
    // calculateSumDivisible ();
    // calculateSumEven ();
    // calculateSumOdd ();
    // countDivisibleBy2And3 ();
    // printNumbersFrom1 ();
    // printNumbersBetween ();
    // countNmbersDiv4 ();
    // stopUser ();
    // addUserSum ();
    // secretNumber ();
    // enterPassword ();
    // enterPositiveNumber ();
    // enterNumbersLess100 ();
    // printPattern ();
    // printMultiplication ();
    // printReverseDigit ();
    // printDoWhile ();
    // enterPositiveDoWhile ();
    // printNumberDoWhile ();
    // printDownDoWhile ();
    // enterDoWhilePassword ();
    // askAgeDoWhile ();
    // enterBetweenDoWhile ();
    // addSumDoWhile ();
    // countNumberDoWhile ();
    // trackNumberDoWhile ();
    // countEvenDoWhile ();
    // calculateAvDoWhile ();
    // menuDoWhile ();
    // printDoLoop ();
    // printDownForLoop ();
    // printEvenOddForLoop ();
    // printDiviForLoop ();
    // printArray ();
    // print10Array ();
    // PrintReverseArray ();
    // calculateArraySum ();
    // calculateAveArray ();
    // printEvenArray ();
    // checkExistArray ();
    // countAppearArray ();
    // findLargesArrnum ();
    // findSmallestArrnum ();
    // findDiffrenceArr ();
    // countEvenArr ();
    // countPositiveArrNum ();
    // countGreaterArr ();
    // printUpdatedArr ();
    // replaceArrNum ();
    // sotreArr ();
    // find2LargeArr ();
    // checkSortArr ();
    // print2rray ();
    // copyIntoArr ();
    reverseArr ();
    return 0;
}

// arrays
// strings
// nested loops
// functions with return
// algorithm problems
// break/continue

// Programmer Thinking Pattern

// Whenever you classify numbers, always check:
// > 0
// < 0
// == 0
// applyLeapYear ();

// switch works when:
// You compare the same variable
// With constant values

// loop Thinking Like Programmer
// input → loop → condition → action → output

// // What do I receive?
// What changes?
// What do I check?
// What do I do?
// What do I print?

// Always check conditions using the loop variable (i), not the input.

// min() and max() are functions used to find:
// min → smallest value
// max → largest value

//  if (cin.fail()) {
//         cout << "Enter a Valid Number\n";
//         cin.clear();
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         continue;
//     }

// Get Last Digit
// digit = num % 10;
// Remove Last Digit
// num /= 10;

// do...while rule:
// use (num != 0) to stop
// and check (num != 0) inside if to avoid processing 0

// Linear Search
// loop → compare → found? → stop

// Find Second Largest Number
// You must save old data BEFORE replacing it

// Reverse formula: B[i] = A[n - 1 - i]
// Idea: i goes forward, (n - 1 - i) goes backward















// =====================================================
// STUDY PLAN — BOOKS + ARDUINO INTEGRATION
// =====================================================


// =====================================================
// STEP 1 — BEFORE BOOKS
// =====================================================

// Finish:
// PART 1 → PART 7 (C++ Fundamentals)

// Topics you must be comfortable with:
// Variables
// Input / Output
// If / Else
// Switch
// Loops (for / while / do-while)
// Functions
// Arrays
// Basic problem solving


// =====================================================
// STEP 2 — START HERE (IMPORTANT)
// =====================================================

// AFTER finishing PART 7:

// START:
// - Arduino
// - Grokking Algorithms (Book)
// - Stroustrup C++ Book

// DO NOT wait to finish one before the other

// Priority:
// 1 → C++ Practice
// 2 → Grokking (algorithms thinking)
// 3 → Stroustrup (deeper understanding)


// =====================================================
// ARDUINO PLAN
// =====================================================

// Start simple:

// Day 1 → Blink LED
// Day 2 → Button + LED
// Day 3 → Traffic light system
// Day 4 → Temperature sensor
// Day 5 → LCD display (optional)

// Practice 2–3 times per week

// Start Arduino only when you are comfortable with:
// - loops
// - conditions
// - functions


// =====================================================
// GROKKING ALGORITHMS PLAN
// =====================================================

// Read in this order:

// Binary Search
// Selection Sort
// Recursion
// Divide & Conquer
// Hash Tables
// Breadth-First Search (BFS)
// Depth-First Search (DFS)
// Greedy Algorithms
// Dynamic Programming (take your time)


// =====================================================
// STROUSTRUP BOOK PLAN (IMPORTANT)
// =====================================================

// WEEK 1–2:
// Chapter 1 → Introduction (fast)
// Chapter 2 → Hello World (fast)
// Chapter 3 → Objects, Types, Values

// WEEK 3–4:
// Chapter 4 → Computation (VERY IMPORTANT)
// Chapter 5 → Errors (VERY IMPORTANT)

// WEEK 5+:
// Chapter 6 → Writing a Program
// Chapter 7 → Completing a Program


// =====================================================
// WHAT TO SKIP (FOR NOW)
// =====================================================

// Skip:
// Advanced theory
// GUI sections
// Very deep math parts


// =====================================================
// DAILY STUDY SYSTEM (VACATION MODE)
// =====================================================

// Morning:
// JavaScript → 1.5 – 2 hours

// Afternoon:
// C++ Practice (your file) → 2–3 hours

// Evening:
// Grokking → 30 minutes
// Stroustrup → 20–30 minutes

// 2–3 days per week:
// Arduino → 1–2 hours


// =====================================================
// DEBUGGING PRACTICE (VERY IMPORTANT)
// =====================================================

// Every day:
// Fix your own bugs
// Read errors carefully
// Understand why code fails


// =====================================================
// WEEKLY CHECK
// =====================================================

// Can I solve problems without help?
// Can I explain my code?
// Can I debug errors alone?


// =====================================================
// IMPORTANT RULES
// =====================================================

// Do NOT memorize → understand
// Do NOT only read → always code
// If tired → skip books, continue coding
// Practice > Theory


// =====================================================
// FINAL ROADMAP
// =====================================================

// PART 1 → PART 7 (Finish first)
// ↓
// Start:
// - Arduino
// - Grokking
// - Stroustrup
// ↓
// PART 8 → PART 14 (Algorithms)
// ↓
// LeetCode + Projects + Freelancing


// =====================================================
// END
// =====================================================





