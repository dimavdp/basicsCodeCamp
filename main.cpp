#include "basicscodecamp.h"
#include <iostream>

using namespace std;

int main()
{
// console out << "smth" << end line
//    cout << "Jake was 35 years old" << endl;
//    cout << "John was 50 years old" << endl;

//    string characterName = "Jake";
//    int characterAge = 30;
//    cout << characterName << " was " << characterAge << " years old" << endl;
//    characterName = "Nike";
//    cout << characterName << " was " << characterAge << " years old" << endl;
//    cout << "next line\n";

//    char grade = 'A'; //for single character
//    string phrase = "basicsCodeCamp"; //for plain text
//    int age = 50; //just a solid number, without .
//    double gpa = 2.34532; //can store more decimal numbers after . than float
//    bool isMale = true; //for true/false situations

    string phrase = "basicsCodeCamp\n";
    phrase[0] = 'B';
    cout << phrase;

    // if you found this comment it's useless

    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase.find("CodeCamp", 0) << endl;
    cout << phrase.substr(8, 3) << endl;
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub << endl;


    return 0 ;
}
