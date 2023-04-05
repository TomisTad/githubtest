/* ////////Program 1) ////////
#include <iostream> // header file that contains functions for basic i/o operations

int main() {
    std::cout << "I like pizza!" << std::endl;     // "standard character output" /  <<-"output"  / <<number- "left shift operator"
    std::cout << "It's really good!" << "\n";
    return 0;                        // if we reach return 0, that means there were no problems in the program, if return is 1 there were problems
} */                                   //if return is 1 there were problems
                                     // ; is for end of a statement
                                     // << std::endl = "end line", for getting text in new line, or use \n
                         // \n has better performance because it's faster, std::endl flushes the output buffer
                         
/*  //////// Program 2) ////////
// variables and basic data types

#include <iostream>

int main() {

    int x;      // declaration
    x = 5;          // assignment

    int y = 6;
    int sum = x+y;

    int age = 21;
    int year = 2023;
    int days = 7;

    // double (decimal numbers)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // char (single character)
    char grade = 'A';            // for single characters ' ' not " "!
    char initial = 'B';
    char currency = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool for_sale = true;

    // string (object that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";


    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";
    std::cout << days << "\n";
    std::cout << price << "\n";
    std::cout << initial << "\n";
    std::cout << name << "\n";

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " <<age << " years old";
    
    return 0;
} */

/*  //////// Program 3) ////////
// Const
// The const keyword specifies that a variable's value is constant
// tells the compiler to prevent anything from modifying it
// (read-only)

#include <iostream>

int main() {
    const double PI = 3.14159;        // conventionally we use all capital letters for constants!
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    double radius = 10;
    double circumference = 2*radius*PI;

    std::cout << circumference << " cm";


    return 0;
} */

 /* //////// Program 4) ////////
// Namespaces
// Namespace = provides a solution for preventing name conflicts
//             in large projects. Each entity needs a unique name.
//             A namespace allows for identically named entities
//             as long as the namespaces are different

#include <iostream>

namespace first{
    int x =1;
}

namespace second{
    int x =2;
}

int main() {
    using namespace first;
   // using namespace std;          // to save some time on ex. cout or string declaration

    //int x =0;

std::cout << first::x << "\n";      // :: --> "The scope resolution operator"
std::cout << second::x << "\n";      
std::cout << x;      

    return 0;
} */

/*  //////// Program 5) ////////
// typedef and type aliases
// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos

#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string,int>> pairlist_t;   // usually end with _t when using typdef

//typedef std::string text_t;       // replacing std::string with text_t
//typedef int number_t;

using text_t = std::string;         // does the same thing as typedef but it's more popular
using number_t = int;

int main() {
    //std::vector<std::pair<std::string,int>> pairlist;  or
    //pairlist_t pairlist;

    text_t first_name = "Bro";
    number_t age = 21;

    std::cout << first_name << "\n";
    std::cout << age;

    return 0;
}  */

/* //////// Program 6) ////////
// Arithmetic operators = return the result of a specific
//                        arithmetic operation (+ - * /)

#include <iostream>

int main() {

    //int students = 20;
    int students = 6-5+4*3/2;

    //students = students + 1;
    //students += 1;
    //students ++;

    //students = students - 1;
    //students -= 1;
    //students --;

    //students = students*2;
    //students *=2;

    //students = students/2;
    //students /=3;

    int remainder = students % 3;         // modulus operator = gives remainder of a division

    std::cout << students << "\n";
    std::cout << remainder;

    return 0;
}  */


/*  //////// Program 7) ////////
// type converion = conversion of a value of one data type to another
//                  Implicit = automatic
//                  Explicit = precede value with new data type (int)

#include <iostream>

int main() {

    double x = (int) 3.14;
    char y = (char) 100;

    int correct = 8;
    int questions = 10;
    double score = (double) correct/questions * 100;

    //std::cout << x;
    //std::cout << y;
    std::cout << score << " %";

    return 0;
}  */


/* //////// Program 8) ////////
// User input
// output: cout << (insertion operator)
// input:  cin  >>  (extraction operator)  MUST BE RUNNED IN TERMINAL! (Inputs can't be done in OUTPUT console)
//                                         file-->preferences-->settings--> Code-Runner: Run in Terminal
#include <iostream>

int main() {

    std::string name;
    int age;

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    //std::cin >> name;                     // accepts only one word, if user inputs space " ", thatt's the end
    std::getline(std::cin >> std::ws, name);   // std::ws eliminates any newline char "\n" or any white spaces
                                               // needed when std::cin is before std::getline!
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old"; 

    return 0;
} */

/* //////// Program 9) ////////
// Useful math reated functions
// url: https://cplusplus.com/reference/cmath/  - for more math functions in c++

#include <iostream>
#include <cmath>

int main(){

    double x = 3.99;
    double y = 4;
    double z;

    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(2,4);
    //z = sqrt(9);
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);        // ceil = "ceiling" --> rounds a number up
    z = floor(x);        //  rounds a number down

    std::cout << z;

    return 0;
}  */

/* //////// Program 10) ////////
// Practise program: Hypotenuse calculator

#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter side a: ";
    std::cin >> a;

    std::cout << "Enter side b: ";
    std::cin >> b;

    c = sqrt(pow(a,2)+pow(b,2));    

    std::cout << "Hypotenuse: " << c;


    return 0;
} */

/* //////// Program 11) ////////
// IF statements
// if statements = do something if a condition is true.
//                 if not, then don't do it

#include <iostream>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age>=100){
        std::cout << "You are too old to enter this site!";
    }
    else if(age>=18){
        std::cout << "Welcome to the site!";
    }
    else if(age<0){
        std::cout << "You haven't been born yet!";
    }
    else{
        std::cout << "You are not old enough to enter!";
    }

    return 0;
} */

/* //////// Program 12) ////////
// Switch-case
// switch = alternative to using mani "else if" statements
//          compare one value against matching cases

#include <iostream>

int main() {

    char grade;
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do good";
            break;
        case 'F':
            std::cout << "You FAILED!";
            break;
        default:
            std::cout << "Please only enter in a letter grade (A-F)";
    }

    return 0;
} */

/* //////// Program 13) ////////
// Console calculator program

#include <iostream>

int main(){

    char op;
    double num_1;
    double num_2;
    double result;

    std::cout << "************* CALCULATOR ************* \n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num_1;

    std::cout << "Enter #2: ";
    std::cin >> num_2;

    switch(op){
        case '+':
            result = num_1 + num_2;
            break;
        case '-':
            result = num_1 - num_2;
            break;
        case '*':
            result = num_1 * num_2;
            break;
        case '/':
            result = num_1 / num_2;
            break;
        default:
            std::cout << "Wrong operator, enter only (+ - * /) \n";
            result = 0;
    }

    std::cout << "Result: " << result << "\n";

    std::cout << "*************************************** \n";

    return 0;
} */

/* //////// Program 14) ////////
// Ternary operator
// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

#include <iostream>

int main(){

    //int grade = 50;
    //grade>=60 ? std::cout << "You pass!" : std::cout << "You fail!";

    //int number = 9;
    //number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;

    //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full");              // does the same as line above
    return 0;
} */


/* //////// Program 15) ////////
// Logical operators
// &&, ||, ! (and / or / not)

#include <iostream>

int main() {

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp<=0 || temp>=30) {
        std::cout << "The temperature is bad! \n";
    }
    else{
        std::cout << "The temperature is good! \n";
    }

    if(!sunny) {
        std::cout << "It is cloudy outside!";
    }
    else {
        std::cout << "It is sunny outside!";
    }

    return 0;
} */

/* //////// Program 16) ////////
// Program: Temperature conversion

#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "********* Temperature conversion ********* \n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    if(unit =='F' || unit == 'f') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8*temp + 32);
        std::cout << "Temperature is: " << temp << " F\n";
    }
    else if (unit =='C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp -32) / 1.8;
        std::cout << "Temperature is: " << temp << " C\n";
    }
    else{
        std::cout << "Please enter in only C or F \n";
    }
    std::cout << "******************************************";

    return 0;
} */

/* //////// Program 17) ////////
// Useful string methods in C++
// https://cplusplus.com/reference/string/string/   more methods!

#include <iostream>

int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  

    if(name.length() > 12) {
        std::cout << "Your name can't be over 12 characters";
    }
    else {
        std::cout << "Welcome " << name;
    }

    return 0;
}

// name.empty()  // returns a boolean value
// name.clear()  // clears a string variable
// name.append() // ex. name.append("@gmail.com")
// name.at(0)    // get a character at declared index of a string, in this case first character at index 0
// name.insert(0, "@")  // insert something at declared index
// name.find(' ') // returns a position of the first space in this case
// name.erase(0, 3) // erase a portion of a string, begginning and end index (end not included!)

*/

/* //////// Program 18) ////////
// While loops

#include <iostream>

int main() {

    std::string name;

    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
} */

/* //////// Program 19) ////////
// Do while loops
// do while loop = do some block of code first, THEN repeat again if condition is true

#include <iostream>

int main() {

    int number;

     do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while(number<0);

    std::cout << "The number is " << number;

    return 0;
} */

/* //////// Program 20) ////////
//For loops

#include <iostream>

int main() {

    for(int i = 10; i>=0; i-=2) {
        std::cout << i << "\n";
    }
    
    std::cout << "Happy New Year! \n";

    return 0;
} */

/* //////// Program 21) ////////
// Break & continue
// break = break out of a loop
// continue = skip current iteration

#include <iostream>

int main() {

    for(int i=1; i<=20; i++) {
        if(i==13){
            continue;
        }
        std::cout << i << "\n";
        
    }

    return 0;
} */

 /* //////// Program 22) ////////
// Nested loops

//   loop(){
//        loop(){
//
 //       }
 //   }
//

#include <iostream>

int main() {

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;
    std::cout << "How many columns?: ";
    std::cin >> columns;
    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=columns; j++) {
            std::cout << symbol;
        }
    std::cout << "\n";
    }


    return 0;
} */

/* //////// Program 22) ////////
// Random number generator
// Pseudo-random numbers = NOT truly random (but close)

#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));      // initialising random number generator

    int num1 = (rand() % 6) + 1;       //rand() = generates number between 0 and 32767 
    int num2 = (rand() % 6) + 1;       //(rand() % x) + 1 = numbers between 1 and x!
    int num3 = (rand() % 6) + 1;  

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    return 0;
} */

/* //////// Program 23) ////////
// Random event generator

#include <iostream>
#include <ctime>

int main() {

    srand(time(0));      // using current time as a seed to generate random #
    int rand_num = (rand() % 5) + 1;

    switch (rand_num) {
    case 1:
        std::cout << "You win a bumper sticker! \n";
        break;
    case 2:
        std::cout << "You win a bt-shirt! \n";
        break;
    case 3:
        std::cout << "You win a free lunch! \n";
        break;
    case 4:
        std::cout << "You win a gift card! \n";
        break;
    case 5:
        std::cout << "You win concert tickets! \n";
        break;

    }

    return 0;
} */

/* //////// Program 24) ////////
// Number guessing game

#include <iostream>
#include <ctime>

int main() {

    int num;
    int guess;
    int tries = 0;

    srand(time(0));

    num = (rand() %100) +1;

    std::cout << "*********** NUMBER GUESSING GAME ***********\n";

    do {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries ++;

        if(guess > num) {
            std::cout << "Too high!\n";
        }
        else if(guess < num) {
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "CORRECT! # of tries: " << tries << "\n";
        }

    } while(guess != num);

    std::cout << "*********************************************\n";

    return 0;
} */

/* //////// Program 25) ////////
// User defined functions
// function = a block of reusable code

#include <iostream>

void happy_birthday(std::string name, int age);   // declaring a function before defining it, so that we can
                         // call it before it's defined


int main() {

     std::string name = "Bro";
     int age = 21;

    happy_birthday(name, age);

    return 0;
}

void happy_birthday(std::string name, int age) {
    std::cout << "Happy birthday to " << name << "\n";
    std::cout << "Happy birthday to " << name << "\n";
    std::cout << "Happy birthday dear " << name << "\n";
    std::cout << "Happy birthday to " << name << "\n";
    std::cout << "You are " << age << " years old\n";
} */

/* //////// Program 26) a) ////////
// Return keyword
// return = return a value back to the spot
//          where you called the ancompassing function

#include <iostream>

double square(double length);
double cube(double length);


int main() {

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double square(double length) {
    return length * length;
}

double cube(double length) {
    return length * length * length;
} */

/* //////// Program 26) b) ////////
// Return keyword

#include <iostream>

std::string concat_strings(std::string string1, std::string string2);


int main() {

    std::string first_name = "Bro";
    std::string last_name = "Code";
    std::string full_name = concat_strings(first_name, last_name);

    std::cout << "Hello " << full_name;


    return 0;
}
std::string concat_strings(std::string string1, std::string string2) {
    return string1 + " " + string2;
} */

/* //////// Program 27) ////////
// Overloaded functions
// functions can share the same name, but they need to have different set of parameters
// function name + function parameters = function signature

#include <iostream>

void bake_pizza();
void bake_pizza(std::string topping1);
void bake_pizza(std::string topping1, std::string topping2);

int main() {

    bake_pizza("pepperoni", "mushrooms");
    

    return 0;
}

void bake_pizza(){
    std::cout << "Here is your pizza \n";
} 

void bake_pizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bake_pizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
} */

/* //////// Program 28) ////////
// Variable scope
// Local variables = declared inside a function or block {}
// Global variables = declared outside of all functions

#include <iostream>

int myNum = 3;       // advice: avoid using globl variables f possible
                     // because it polutes the global namespaca and these variables are less secure
void printNum();

int main(){

    int myNum = 1;
    printNum();
    std::cout << ::myNum << "\n";   // ::my num --> to use global variable
                                    // otherwise function uses locally defined variable 
    return 0;
}

void printNum() {
    int myNum = 2;
    std::cout << ::myNum << "\n";
} */

//////// Program 29) ////////
// Practice program


//////// Program 30) ////////
// Rock paper scissors game

/* //////// Program 31) a) ////////
// Arrays
// array = a data structure that can hold multiple values
//         values are accessed by an index number
//         "kind of like a variable that holds multiple values"
//         arrays can only contain values of the same data type!

#include <iostream>

int main() {

    std::string cars[3];     // declaration of an array

    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n";

    return 0;
} */

/* //////// Program 31) b) ////////
// Arrays

#include <iostream>

int main() {

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";
    std::cout << prices[3] << "\n";

    return 0;
} */


/* //////// Program 32) ////////
// Sizeof() operator
// sizeof() = determinates the size in bytes of a:
//            variable, data type, class, objects, etc.

#include <iostream>

int main() {

    std::string name = "Bro";            // size of string is 32 bytes, because it really just holds an adress
    double gpa = 2.5;                              // size of double is 8 bytes
    char grade = 'F';                              // size of char is 1 byte
    bool student = true;                           // size of bool is 1 byte
    char grades[] = {'A', 'B', 'C', 'D', 'F'};     // size of N char array is N bytes
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    //std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";   // finding number of elements in array

    return 0;
} */

/* //////// Program 33) ////////
// Iterate over an array

#include <iostream>

int main() {

    std::string students [] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    char grades [] = {'A', 'B', 'C', 'D', 'F'};

    for (int i=0; i<sizeof(grades)/sizeof(char); i++) {
        std::cout<< grades[i] << "\n";
    }

    return 0;
} */

/* //////// Program 34) ////////
// Foreach loop
// foreach loop = loop that eases the traversal over an iterable data set
// easier then for loop, but less flexible, can only terate from first to last element in an iterable

#include <iostream>

int main() {

    //std::string students [] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    int grades [] = {65, 72, 81, 93};

    for (int grade : grades) {
        std::cout<< grade << "\n";
    }

    return 0;
}  */


/* //////// Program 35) ////////
// Pass array to a function

#include <iostream>

double get_Total(double prices[], int size);              


int main() {

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(double);
    double total = get_Total(prices, size);               // when calling a function, no need for []

    std::cout << " $" << total;

    return 0;
}

double get_Total(double prices[], int size) {          // setting an array as argument in function, need the []
    double total = 0;                         // when we pass an array to a function, it decays to a POINTER!
                                              // and it doesen't know the size of an array, so we pass size as
    for(int i = 0; i < size; i++) {           // adittional argument of a function
        total += prices[i];
    
    }

    return total;
} */

/* //////// Program 36) ////////
// Search an array for an element

#include <iostream>

int search_array (int array[], int size, int element) ;


int main() {

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int my_num;

    std::cout << "Enter element to search for: ";
    std::cin >> my_num;

    index = search_array(numbers, size, my_num);

    if(index != -1){
    std::cout << my_num << " is at index: " << index;
    }
    else{
    std::cout << my_num << " is not in the array";

    }

    return 0;
}

int search_array (int array[], int size, int element) {
    for (int i = 0; i < size; i++ ) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;       // tipycal in programing if something wasn't found
} */

/* //////// Program 37) ////////
// Sort an array

#include <iostream>

void sort(int array[], int size);       // function declaration


int main() {

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array) {
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){
    int temp;

    for(int i = 0; i < size - 1; i++){  // i < size - 1 --> we don't need to compare last element with anything
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }                                   
    }

} */

/* //////// Program 38) ////////
// Fill() function
// fill() = fills a range of elements with a specified value
// fill(begin, end, value)

#include <iostream>

int main(){

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + SIZE/3, "pizza");
    fill(foods + SIZE/3, foods + 2*(SIZE/3), "hamburger");
    fill(foods + 2*(SIZE/3), foods + SIZE, "hotdog");

    for(std::string food : foods){
        std::cout << food << "\n";
    }

    return 0;
} */

/* //////// Program 39) ////////
// Fill an array with user input

#include <iostream>

int main(){

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i+1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like a following food: \n";

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << "\n";
    }

    return 0;
} */

/* //////// Program 40) ////////
// Multidimensional arrays
// 2D array = {array1, array2, array3}
// can represent a grid or matrix of data in rows and columns
// type array[][]; two [], first is for rows and second for columns
// columns is mandatory, rows not, ex. type array[0][3];

#include <iostream>

int main(){

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox","Silverado"},
                            {"Challenger", "Durango","Ram 1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
        }

    return 0;
} */

/* //////// Program 41) ////////
// QUIZ GAME

#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who ivented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?: ",};

    std::string options[][4] = {{"A. 1969","B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido van Rossum","B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                               {"A. C","B. C+", "C. C--", "D. B++"},
                               {"A. es","B. no", "C. sometimes", "D. What's Earth?"}};

    char  ansswerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "*****************************************\n";
        std::cout << questions[i] << "\n";
        std::cout << "*****************************************\n";

        for(int j =0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }

        std::cout << "Enter your guess (A, B, C or D): ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == ansswerKey[i]){
            std::cout << "CORRECT!\n";
            score ++;
        } 
        else{
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << ansswerKey[i] << "\n";

        }

    }

    std::cout << "*****************************************\n";
    std::cout << "                RESULTS                  \n";
    std::cout << "*****************************************\n";

    std::cout << "CORRECT GUESSES: " << score << "\n";
    std::cout << "# of QUESTIONS: " << size << "\n";
    std::cout << "SCORE: " << (score/(double)size)*100 << "%";

    return 0;
} */


/* //////// Program 42) ////////
// Memory addresses
// memory adress = a location in memory where data is stored
// a memory address can be accessed with & (adress-of operator)

#include <iostream>

int main() {

    std::string name = "Bro";               // string takes up 32 bytes of memory
    int age = 21;                           // int takes up 4 bytes of memory
    bool student = true;                    // bool takes up 1 byte of memory

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";

    return 0;
} */

//////// Program 43) ////////
// Pass by VALUE  vs pass by REFERENCE







/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
                       //  SKIP --> POINTERS

/* //////// Program 39) ////////
// Pointers
// pointers = variable that stores a memory address of another variable
//            sometimes it's easier to work with an address

// & address-of operator
// * dereference operator

#include <iostream>

int main() {

    std::string name = "Bro";
    int age = 21;
    std::string free_pizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pname = &name;             
    int *page = &age;
    std::string *pfree_pizzas = free_pizzas;      // name of an array is already an adress!!!

    std::cout << *pname << "\n";             // pname = address of variable name, *pname = value of variable name!
    std::cout << *page << "\n"; 
    std::cout << *pfree_pizzas << "\n";       // *parray only gives first element of an array!

    return 0;
} */

/* //////// Program 40) ////////
// Null pointers
// Null value = a special value that means something has no value
//              when a pointer is holding a null value,
//              that pointer is not pointing at anything (null pointer)

// nullptr = keyword represents a null pointer literal

// nullptrs are helpfull when determining if an address
// was successfully assigned to a pointer

#include <iostream>

int main() {

    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;

    if(pointer == nullptr) {
        std::cout << "address was not assigned!\n"; 
                                                 //if pointer is nullptr, it's not safe to dereference it (*)
    }
    else{
        std::cout << "address was assigned!\n";
        std::cout << *pointer << "\n";                // if pointer has assigned address,it's safe to
    }                                                 // dereference it --> *

    return 0;;
} */

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
                       //  SKIP --> DYNAMIC MEMORY

/* //////// Program 41) a) ////////
// Dynamic memory
// dynamic memory = Memory that is allocated after the program is already compiled and running
//                  Use the 'new' operator to allocate memory in the heap rather than the stack

//                  Useful when we don't know how much memory we will need. Makes our programs more
//                  flexible, especially when accepting user input.

#include <iostream>

int main() {

    int *pnum = NULL;

    pnum = new int;        // place pointer in the heap, make room for one int (4 bytes)
                           // 'new' operator returns an address which is then stored i pnum

    *pnum = 21;

    std::cout << "address: " << pnum << "\n";
    std::cout << "value: " << *pnum << "\n";

    delete pnum;        // whenever we use 'new' operator, we should use 'delete' operator as well
                        // to free up the memory at that address in pointer and avoid the memory leak
    return 0;
} */


/* //////// Program 41) b) ////////
// Dynamic memory

#include <iostream>

int main() {

    char *pgrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pgrades = new char[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pgrades[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout << pgrades[i] << " ";
    }

    delete[] pgrades;                     // delete[] --> when deleteing an array!

    return 0;
} */

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
                       //  SKIP --> STRUCTS

/* //////// Program 42 ////////
// Structs
// struct = a structure that groups related variables under one name
//          structs can contain many different data types (string, int, char, double,bool, etc.)
//          variables in a struct are known as "members"
//          members can be accesed with . "Class Member Access Operator"

#include <iostream>

struct student{            // student is kind of like a data type wich has 3 members of different data type
    std::string name;
    double gpa;
    bool enroled;
    // bool enroled = true;      // every instance of this struct inherits this propety
};

int main() {

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enroled = true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enroled = true;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;
    student3.enroled = false;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enroled << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enroled << "\n";

    std::cout << student3.name << "\n";
    std::cout << student3.gpa << "\n";
    std::cout << student3.enroled << "\n";

    return 0;
} */

/* //////// Program 43 ////////
// Pass structs as arguments

#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;

};

void print_Car(Car &car);
void paint_Car(Car &car, std::string color);


int main() {

    Car car1;
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    Car car2;
    car2.model = "Corvetee";
    car2.year = 2024;
    car2.color = "blue";

    paint_Car(car1, "silver");
    paint_Car(car2, "gold");

    print_Car(car1);
    print_Car(car2);

    return 0;
}

void print_Car(Car &car) {
    std::cout << &car << "\n";         // different address of car and car1, because when we pass a struct
    std::cout << car.model << "\n";    // to a function, the function creates a copy of it 
    std::cout << car.year << "\n";     // (it's passed ba value, not address)
    std::cout << car.color << "\n";    // if we want to work with original struct, we have to pass it's
}                                      // address to the function ex. "&car" instead of "car"

void paint_Car(Car &car, std::string color){
    car.color = color;
} */

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
                       //  SKIP --> OBJECT ORIENTED PROGRAMMING

/* //////// Program 44 a)////////
// Object oriented programming
// object = a collection of attributes and methods
//          They can have characteristics and could perform actions
//          Can be used to mimic real world items (ex. Phone, Book, Dog)
//          Created from a class which acts as a "blue-print"

#include <iostream>

    class Human {
        public:                   // public = access modifier
            std::string name;
            std::string occupation;
            int age;
            std::string state = "Alive";   // assigning default attribute

            void eat(){
                std::cout << "This person is eating\n";
            }
            void drink(){
                std::cout << "This person is drinking\n";
            }
            void sleep(){
                std::cout << "This person is sleeping\n";
            }
    };

int main () {

    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "student";
    human2.age = 15;

    std::cout << human2.name << "\n";
    std::cout << human2.occupation << "\n";
    std::cout << human2.age << "\n";
    std::cout << human2.state << "\n";

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
} */

/* //////// Program 44 b) ////////
// Object oriented programming

#include <iostream>

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate() {
            std::cout << "You stepped on the gas!\n";
        }
        void brake() {
            std::cout << "You stepped on the brakes!\n";
        }
};

int main() {

    Car car1;
    Car car2;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.year << "\n";
    std::cout << car1.color << "\n";

    car1.accelerate();
    car1.brake();

    return 0;
} */
