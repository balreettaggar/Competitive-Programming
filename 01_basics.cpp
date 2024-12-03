#include <iostream> // (preprocessor directive) iostream is a header file, there are many predefined things
// like we are using cout in this code, the code of cout is written in iostream. and to use cout and
// other predefined things  we need to include header files
// same if we want to use sqrt() function we need to include math.h
// to include all header files => #include <bits/stdc++.h>

using namespace std; //this is written to define the path of functions or predefined things that are in
// header files, cuz different libraries or header files in c++ may have functions having same name
// to remove this confusion we specify the name of the path

int main() { // program execution starts from here (main function) and int is the return type of main
    cout << "Hello"; // cout is used to print the statements or output
    return 0; //function has return type of int, so we use return statement to end the function and 
    //we use return 0 by convention
}  // block of the function ends here