// #include <iostream> // (preprocessor directive) iostream is a header file, there are many predefined things
// // like we are using cout in this code, the code of cout is written in iostream. and to use cout and
// // other predefined things  we need to include header files
// // same if we want to use sqrt() function we need to include math.h
// // to include all header files => #include <bits/stdc++.h>

// using namespace std; //this is written to define the path of functions or predefined things that are in
// // header files, cuz different libraries or header files in c++ may have functions having same name
// // to remove this confusion we specify the name of the path

// int main() { // program execution starts from here (main function) and int is the return type of main
//     cout << "Hello"; // cout is used to print the statements or output
//     return 0; //function has return type of int, so we use return statement to end the function and 
//     //we use return 0 by convention
// }  // block of the function ends here

#include <bits/stdc++.h>
using namespace std;

int main() {
    // int a = 2; // int is a datatype, a is variable (a container to store value) and "=" is an assignment operator
    // int b = 4; // can create as many variables
    // int sum = a+b;
    // cout << sum << endl;

    // DATATYPES
    // char = it stores character
    // int = it stores integers
    // float and double = stores decimal numbers, double has larger limit of storing values
    // bool stores true or false

    char ch = 'a'; // to assign to a charcter use single quotes
    int a = 5;
    int b = 4.6;
    bool c = true; // bool prints 1 for true and 0 for false;
    bool d = 123; // it will give output 1. any number is true without 0 (even negative numbers will show 1)
    cout << ch << " " << a << " " << b << endl;   // endl is used for a new line 
    // output of b will show 4 only cuz its an integer only stores without decimal part
    // long int and long long int are used to increase the range of datatype or we can directly write long long a = 12344;

    // OPERATORS
    // + for addtion, - for subtraction, * for multiplication, / for divide, % for remainder (modulo operator)
    // unary operators
    // int a=5;
    // a=a+1; // can be written as a++
    // cout << a << endl; // will output 6
    // a++; // first value of a is used then it is incremented later on, same goes for a--;
    // ++a; // the value of a is increased first then it is used, same goes for --a;

    // int a=5;
    // a=a+1;
    // cout << a << endl; //6
    // cout << a++ << endl; //6
    // cout << ++a << endl; // 8

    // Relational Operators
    // like == (equal to), != (not equal to), > (greater than), < (lesser than), >= (greater than or equal to)
    // <= (lesser than or equal to)

}
