#include <iostream>
#include <string>
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
    cout << "Please Enter Day Number\n";
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

        cout << "Pease Enter a Valid Number\n";
    }
}

// ///////////////////////////////////////////////

// Ask the user to enter a number between 1 and 12.
// Use switch to print the corresponding month name.

void printMonth () {
    int num;
    cout << "Please Enter Month Number\n";
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
    cout << "Please a Number\n";
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
    cout << "Please a Number\n";
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

// ///////////////////////////////////////////////

// Ask the user to enter a letter.
// Check if the letter is a vowel using switch.

// ///////////////////////////////////////////////

// Ask the user to enter a character:
// +  -  *  /
// Print the name of the operator.



// =====================================================
// PART 3 — Simple Calculator Pattern
// =====================================================

// Ask the user to enter:
// number1
// number2
// operator (+ - * /)
// Use switch to perform the calculation and print the result.

// ///////////////////////////////////////////////

// Ask the user to enter a number between 1 and 3.
// Print a simple arithmetic operation result:
// 1 → add two numbers
// 2 → subtract two numbers
// 3 → multiply two numbers.



// =====================================================
// PART 4 — Grouped Cases Pattern
// =====================================================

// Ask the user to enter a number between 1 and 7.
// Use grouped cases to print:
// Weekday or Weekend.

// ///////////////////////////////////////////////

// Ask the user to enter a letter grade.
// Group A and B as "Excellent"
// Group C as "Average"
// Group D and F as "Needs Improvement".



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

// ///////////////////////////////////////////////

// Create a program menu:
// 1 → Calculate square of a number
// 2 → Calculate cube of a number
// 3 → Print a message
// 4 → Exit

// =====================================================
// PART 1 — Basic While Loop Patterns
// =====================================================

// Ask the user to enter a number.
// Use a while loop to print numbers from 1 to that number.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Use a while loop to print numbers from that number down to 1.

// ///////////////////////////////////////////////

// Use a while loop to print numbers from 1 to 20.

// ///////////////////////////////////////////////

// Use a while loop to print all even numbers from 1 to 50.

// ///////////////////////////////////////////////

// Use a while loop to print all odd numbers from 1 to 50.



// =====================================================
// PART 2 — Counting Patterns
// =====================================================

// Ask the user to enter a number.
// Count how many numbers from 1 to that number are divisible by 3.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Calculate the sum of numbers from 1 to that number using a while loop.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Calculate the factorial of that number using a while loop.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Count how many digits the number has using a while loop.



// =====================================================
// PART 3 — User Input Loops
// =====================================================

// Ask the user to enter numbers continuously.
// Stop when the user enters 0.

// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Keep adding them to a sum.
// Stop when the user enters -1.

// ///////////////////////////////////////////////

// Ask the user to guess a secret number.
// Continue asking until the correct number is entered.



// =====================================================
// PART 4 — Condition Controlled Loops
// =====================================================

// Ask the user to enter a password.
// Continue asking until the correct password is entered.

// ///////////////////////////////////////////////

// Ask the user to enter a positive number.
// Keep asking while the number is negative.

// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Continue while the numbers are less than 100.



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

// ///////////////////////////////////////////////

// Use a while loop to print multiplication table of a number
// entered by the user.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Reverse the digits of the number using a while loop.

// =====================================================
// PART 1 — Basic do...while Patterns
// =====================================================

// Ask the user to enter a number.
// Print the number.
// Repeat until the user enters 0.

// ///////////////////////////////////////////////

// Ask the user to enter a positive number.
// Keep asking until the user enters a number greater than 0.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Print numbers from 1 to that number using a do...while loop.

// ///////////////////////////////////////////////

// Ask the user to enter a number.
// Print numbers from that number down to 1 using a do...while loop.


// =====================================================
// PART 2 — Input Validation Pattern
// =====================================================

// Ask the user to enter a password.
// Continue asking until the correct password is entered.

// ///////////////////////////////////////////////

// Ask the user to enter an age.
// Keep asking until the age is between 1 and 120.

// ///////////////////////////////////////////////

// Ask the user to enter a number between 10 and 50.
// Repeat the question until the number is inside the range.


// =====================================================
// PART 3 — Accumulation Pattern
// =====================================================

// Ask the user to enter numbers.
// Add them together.
// Stop when the user enters 0.
// Print the final sum.

// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Count how many numbers were entered.
// Stop when the user enters -1.

// ///////////////////////////////////////////////

// Ask the user to enter numbers.
// Track the largest number entered.
// Stop when the user enters 0.


// =====================================================
// PART 4 — Menu Pattern
// =====================================================

// Create a menu using do...while:

// 1 → Add two numbers
// 2 → Multiply two numbers
// 3 → Print a message
// 4 → Exit

// Keep showing the menu until the user chooses option 4.


// =====================================================
// PART 5 — Guessing Game Pattern
// =====================================================

// Create a secret number (for example 7).
// Ask the user to guess the number.
// Repeat until the correct number is guessed.

// ///////////////////////////////////////////////

// Ask the user to guess a number between 1 and 10.
// Print "Too high" or "Too low" until the correct number is entered.

// =====================================================
// PART 1 — Basic For Loop Patterns
// =====================================================

// Use a for loop to print numbers from 1 to 10.

// ///////////////////////////////////////////////

// Use a for loop to print numbers from 10 down to 1.

// ///////////////////////////////////////////////

// Use a for loop to print all even numbers from 1 to 50.

// ///////////////////////////////////////////////

// Use a for loop to print all odd numbers from 1 to 50.

// ///////////////////////////////////////////////

// Use a for loop to print numbers from 1 to 100.
// Print only numbers divisible by 5.


// =====================================================
// PART 2 — Counting & Summation Patterns
// =====================================================

// Ask the user to enter a number n.
// Use a for loop to calculate the sum of numbers from 1 to n.

// ///////////////////////////////////////////////

// Ask the user to enter a number n.
// Use a for loop to

// =====================================================
// PART 1 — Basic Array Input / Output Pattern
// =====================================================

// Ask the user to enter 5 numbers.
// Store them in an array.
// Print all numbers.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Print them in the same order.

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers.
// Print them in reverse order.


// =====================================================
// PART 2 — Summation Pattern
// =====================================================

// Ask the user to enter 10 numbers.
// Calculate the sum of all numbers.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Calculate the average of the numbers.

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers.
// Print the total sum of even numbers only.


// =====================================================
// PART 3 — Searching Pattern
// =====================================================

// Ask the user to enter 10 numbers.
// Ask the user for another number.
// Check if the number exists in the array.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Count how many times the number 5 appears.


// =====================================================
// PART 4 — Maximum / Minimum Pattern
// =====================================================

// Ask the user to enter 10 numbers.
// Find the largest number.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Find the smallest number.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Find the difference between the largest and smallest number.


// =====================================================
// PART 5 — Counting Pattern
// =====================================================

// Ask the user to enter 10 numbers.
// Count how many numbers are even.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Count how many numbers are positive.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Count how many numbers are greater than 50.


// =====================================================
// PART 6 — Transformation Pattern
// =====================================================

// Ask the user to enter 5 numbers.
// Multiply every element by 2.
// Print the updated array.

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers.
// Replace every negative number with 0.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Create another array storing the square of each number.


// =====================================================
// PART 7 — Comparison Pattern
// =====================================================

// Ask the user to enter 5 numbers.
// Find the second largest number.

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers.
// Check if the array is sorted in ascending order.


// =====================================================
// PART 8 — Two Arrays Pattern
// =====================================================

// Ask the user to enter 5 numbers for array A.
// Ask the user to enter 5 numbers for array B.
// Print the sum of corresponding elements.

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers for array A.
// Copy the elements into another array B.

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers.
// Reverse the array into another array.

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
    printSeason ();
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

