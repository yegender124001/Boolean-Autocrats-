// This Program is example for the introduction to the C++.
// In this example you will create your first c++ `hello world program`

/* iostream is a standard c++ library. It is used for basic input and output.  */
#include <iostream> 

/* `using` keyword is used to bring specific member from the namespace into the current scope */
using namespace std;

/* `main` function is the function which is executed by the program itself when the program is executed.
 * It's type is int because it returns an exit code. which tells the system that program is executed successfully
 * or not.
 */
int main() {
    cout << "Hello World" << endl; //`cout` is a function from the `iostream` library to output into the console.
                                   // `endl` is a character that returns the end line character (\n).
    
    return 0;   // return is used to pass the value when the function is called. void functions doesn't return anything.
                // 0 is the exit code, which tells the program exited successfully. Try replacing 0 with 1. You will get
                // error that program doesn't exited successfully. different Exit codes tell different states. We will 
                // learn them later.
    
}