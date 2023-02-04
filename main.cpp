#include <iostream>

void myCalculator() {
    //calculator
    int x, y;
    int sum;
    std::cout << "Type a number: ";
    std::cin >> x; //user input becomes x
    std::cout << "Type another number: ";
    std::cin >> y;//second input y
    sum = x + y;
    std::cout << "Sum is: " << sum;//print
}

void pointerPractice () {
    std::string pizza = "cheese ";
    std::string* ptr = &pizza; //pointer to memory address

    std::cout << "\nbest flavor of pizza: " + pizza;
    std::cout << ptr;
}

void inputName () {
    std::string firstName;
    std::string* ptr = &firstName;
    std::string lastName;
    std::string greeting;

    std::cout << "\nEnter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;
    greeting = firstName + " " + lastName;
    std::cout << "Hello " + greeting;
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    myCalculator();
    pointerPractice();
    inputName();
    return 0;
}

//int - stores integers (whole numbers), without decimals, such as 123 or -123
//double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//        string - stores text, such as "Hello World". String values are surrounded by double quotes
//bool - stores values with two states: true or false


