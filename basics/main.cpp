//
//  main.cpp
//  first
//
//  Created by Rio Taiga on 8/19/19.
//  Copyright © 2019 Rio Taiga. All rights reserved.
//  keep fixing the returns!

#include <iostream>
#include <cmath>

using namespace std;


/* Signatures when it is under the int main function */

void sayHi(string name, int age);  // function signature for the function tutorial
double cube(double num); // function signature for the return statement tutorial
int getMax(int num1, int num2, int num3); // function signature for the more if statement tutorial
string getDayOfWeek(int dayNum); // function signature for the switch statement
int power(int baseNum, int powNum); // function signature for the exponent function

/* Functions */

void sayHi(string name, int age) {    // void function signature is up there
    
    cout << "Hello " << name << " you are " << age << endl;;
    
}

/* Return Statement */

double cube(double num) {

    double result = num * num * num;
    cout << "That is going to be your number" << endl;
    return result;

}

/* More if statements */

int getMax(int num1, int num2, int num3) {
    int result;
    
    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    
    return result;
}

/* Switch Statement */

string getDayOfWeek(int dayNum) {
    string dayName;
    
    switch (dayNum) {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
       
        default:
            dayName = "Invalid day Number";
    }
    
    return dayName;
}

/* Exponent Function */

int power(int baseNum, int powNum) {
    int result = 1;
    for(int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    return result;
}

/* Class and Objects */

class Book {
    public:
        string title;
        string author;
        int pages;
};

/* Constructor Functions */

class Movie {
    public:
        string title;
        string director;
        double hours;
    
    Movie () {
        title = "no title";  // for other movies, it doesn't count since there is no format in ()
        director = "no direector";
        hours = 0.0;
    }
    
    Movie (string aTitle, string aDirector, double aHours) {
        title = aTitle;
        director = aDirector;
        hours = aHours;
    }
};

/* Object Functions */

class Student {
    public:
        string name;
        string major;
        double gpa;

    Student (string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors () {
        if (gpa >= 3.5) {
            return true;
        }
        
        return false;
        }

};

/*  Getters and Setters */

class Videogame {

    private:
        double rating;
    
    public:
        string title;
        string creator;
    
    Videogame (string aTitle, string aCreator, double aRating) {
        
        title = aTitle;
        creator = aCreator;
        setRating(aRating);
    }
    
    void setRating(double aRating) {
        if(aRating == 0.0 || aRating == 0.5 || aRating == 1.0 || aRating == 1.5 || aRating == 2.0 || aRating == 2.5 || aRating == 3.0 || aRating == 3.5 || aRating == 4.0 || aRating == 4.5 || aRating == 5.0) {
        rating = aRating;
        } else {
            rating = 0.101010101; // which means false
        }
      
    }
    double getRating() {
        return rating;
    }
};

class Chef {
    public:
    void makeChicken () {
        cout << "The Chef makes Chicken" << endl;
    }
    void makeSalad () {
        cout << "The Chef makes Salad" << endl;
    }
    void makeSpecialDish () {
        cout << "The Chef makes Sushi" << endl;
    }
    
};

class ItalianChef: public Chef {
    public:
    void makePasta() {
        cout << "The chef makes pasta" << endl;
    }
    void makeSpecialDish () {
        cout << "The Chef makes Pizza" << endl;
    }
};

/* int main start */
/* Creating Hello World */
int main() {
    
    cout << "Hello, World!\n" << endl;

/* Variables */

    string characterName = "John"; // only have to modify this!
    
    int characterAge;
    characterAge = 35; // only have to modify this!
    
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
   
    characterName = "Mike";
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

/* Data Types */

    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age = 50;
    double gpa = 4.5; // can store more decimal points then float
    bool isMale = true;
    
    cout << grade << endl; // Just avoiding the caution marks
    cout << phrase << endl;
    cout << age << endl;
    cout << gpa << endl;
    cout << isMale << endl;
    
/* Working with Strings */
    
    string phraseTwo =  "Giraffe Academy";
    string phrasesub;
    cout << phraseTwo.length() << endl; // counts how many index numbers are in the variable
    cout << phraseTwo[2] << endl; // It always start from zero for index numbers
    phraseTwo[0] = 'B'; // It chages the character according to the index number
    cout << phraseTwo << endl;
    cout << phraseTwo.find("Academy", 0) << endl;
    phrasesub = phraseTwo.substr(8, 5);
    cout << phrasesub << endl;
    
/* Working with Number */
    
    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.9) << endl;
    cout << fmax(3, 10) << endl;
    cout << fmin(3, 10) << endl;
    
/* Getting User Input
    
    string name; // you can  use integer, character and etc
    cout << "Enter your name: ";
    getline(cin, name); // you can enter the entire line that user enters
 
 
// if you want it to list out numbers and characters use cin..
 
    
    cout << "Hello " << name << endl;

 
*/
    
    
//////////////////////////////////////////////////

    
/* Building a Calculator

    char operation;
    float num1, num2;
    
    cout << "----------------------------------" << endl;
    cout << "-=-=-=-=-=- Calculator -=-=-=-=-=-" << endl;
    cout << "----------------------------------" << endl;
    
    cout << "Enter operator either + or - * or  / : ";
    cin >> operation;
    
    cout << "Enter the first operands: ";
    cin >> num1;
    cout << "Enter the second operands: ";
    cin >> num2;  
    switch(operation)
    {
        case '+':
            cout << "The answer is " << num1 + num2 << endl;
            break;
            
        case '-':
            cout << "The answer is " << num1 - num2 << endl;
            break;
        
        case '*':
            cout << "The answer is " << num1 * num2 << endl;
            break;
            
        case '/':
            cout << "The answer is " << num1 / num2 << endl;
            break;
    
        default:
            // If the operator is not listed up on it, it will provide an error message
            cout << "The opearator that you entered is not correct!" << endl;
    }
    
*/
    

////////////////////////////////////////////////////
    
 
/* Mad Libs Game
    
    string color, pluralNoun, celebrity;
    
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);
    
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I hate " << celebrity << endl;

 */
 

////////////////////////////////////////////////////
    
    
/* Arrays */
    
    int luckyNums[] = {1, 4, 6, 8, 12, 16};
    luckyNums[2] = 16; // if you decide to renumber from the variable, it will display this number.
    
    cout << luckyNums [2] << endl;
    
    
/* Functions */     // for void sayHi, you can put it under int main()
    
    sayHi("Rio", 17);
    sayHi("Connor", 18);
    sayHi("Curtis", 19);

    
/* Return Statement */
    
    double answer = cube(5.0);
    cout << answer << endl;
    
    
/* If Statements */
    
    bool itsMale = true;
    bool itsTall = true;
    
    if (itsMale && itsTall) {       //   || = or    && = and
        cout << "You are a tall male" << endl;
    } else if (itsMale && !itsTall) {   // if you are adding !, its going to "negate" that condition
        cout << "You are a short male" << endl;
    } else if (!itsMale && itsTall) {
        cout <<  "you are tall but not male" << endl;
    } else {
        cout << "You are not male nor tall" << endl;
    }
  
    
/* More if Statments */

    cout << getMax(2, 5, 9) << endl;

    
/////////////////////////////////////////////////////
    
    
/* Building a Better Calculator
    
    int num4, num5;
    char op;
    
    cout << "Enter the first number: ";
    cin >> num4;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter the second number ";
    cin >> num5;
    
    int result = 0;
    
    if (op == '+') {
        result = num4 + num5;
    } else if (op == '-') {
        result = num4 - num5;
    } else if (op == '/') {
        result = num4 / num5;
    } else if (op == '*') {
        result = num4 * num5;
    }  else {
        cout << "invalid operator" << endl;
    }
    
    cout << result << endl;
    
*/
    

/* Switch Statement */
    
    cout << getDayOfWeek(0) << endl;
    
/* While Loops */
    
    int index = 1;
    
    while (index <= 5) {   // ignore the error
        cout << index << endl;
        index++;    // Don't take this out or it will be an infinite loop
    }
    
///////////////////////////////////////////////
    
/* Guessing Game
    
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    while(secretNum != guess && !outOfGuesses) {
        
        if(guessCount < guessLimit) {
            cout << "Guess a number:  ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses) {
        cout << "You Lose!" << endl;
    } else {
    cout << "You Win!" << endl;
    
    }

*/
    
/* For Loops */
    
    int indexTwo = 1;
    while(indexTwo <= 5) {   // ignore the error
        cout << indexTwo << endl;
        indexTwo++;    // Don't take this out or it will be an infinite loop
    }
    
    
    for(int indexTwo = 1; indexTwo <= 5; indexTwo++) {    // This is equivalent as top command
        cout << indexTwo << endl;
      
    }

    int nums[] = {1, 2, 5, 7, 3};
    for(int i = 0; i < 5; i++) {
        cout << nums[i] << endl;
    }
    
/* Exponent Function */

    cout << power(4, 2) << endl;
    
    
/* 2D Array & Nested Loops */
    
    int numberGrid[3][2] = {
                {1, 2},
                {3, 4},
                {5, 6}
    };
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout <<  numberGrid[i][j];
        }
        cout << endl;
    }
    
/* Pointers */   // it is a memory address
    
    int ageThree = 19;
    int *pAgeThree = &ageThree;    // storing the pointer
    
    double gpaThree = 2.7;
    double *pGpaThree = &gpaThree; // storing the pointer
    
    string nameThree = "Mike";
    string *pNameThree = &nameThree; // storing the pointer
    
    cout << &pAgeThree << endl; // If you put * it will dereference and output the variable
    cout << &pGpaThree << endl;
    cout << & pNameThree << endl;
    
 
/* Class and Objects */

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling ";
    book1.pages  = 500;
    
    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkiens";
    book2.pages  = 700;
    
    cout << book1.title << endl;
    cout << book2.title << endl;
 
/* Constructor Functions */
    
    Movie movie1 ("Star Wars: A New Hope", "George Lucas", 2.5);
    Movie movie2 ("Harry Potter: A Sorcerer's Stone", "Chris Columbus", 2.5);
    Movie movie3; // It is no affected since it doesn't have the variable.
    
    cout << movie1.director << endl;
    cout << movie2.director << endl;
    cout << movie3.title << endl;
    
/* Object Functions */

    Student student1("Connor", "Economics", 3.6);
    Student student2("Uli", "Music", 3.1);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    
/* Setters and Getters */
    
    Videogame minecraft("Minecraft", "Notch", 4.9);
    
    minecraft.setRating(4.6);
    
    cout << minecraft.getRating() << endl;
    
/* Inheritance */
    
    Chef chef;
    chef.makeSpecialDish();
    
    ItalianChef italianChef;
    italianChef.makeSpecialDish();
  
    
  
    
    
    return 0;
}



