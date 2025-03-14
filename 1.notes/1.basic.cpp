/*
1. basic syntax of cpp:-

#include<iostream>
using namespace std;
int main() {
    cout<<"hello";
    return 0;
}

2. for next line in cpp:-(\n,endl)
#include<iostream>
using namespace std;
int main() {
    cout<<"hello\n";
    cout<<endl;
    cout<<endl;
    cout<<"hello world";
    return 0;
}

3. for dry run means:- iska mtlb hota h, ki ap kise v code k image apne mind me banake ap use 
code ko line by line check krte ho,bina system pr run kiye, or tracking the values of variables, and predicting the output or behavior of the program.

i) Purpose of a Dry Run:
To understand how the code works.

To debug or identify logical errors in the code.

To verify the correctness of an algorithm or logic.

To predict the output of the program before executing it.

ii) How to Perform a Dry Run:-

Start with the code: Take the code you want to analyze.

Initialize variables: Note the initial values of all variables.

Step through the code: Go through each line of code sequentially.

Update variable values: As you encounter assignments or operations, update the values of variables accordingly.

Track control flow: Follow loops, conditionals, and function calls, and note how they affect the program's flow.

Predict the output: Based on the changes in variables and control flow, determine the final output or behavior.

iii) example:-

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    int sum = a + b;
    if (sum > 7) {
        cout << "Sum is greater than 7" << endl;
    } else {
        cout << "Sum is less than or equal to 7" << endl;
    }
    return 0;
}

iv) Dry Run Steps:-

a. Initialize variables:
a = 5
b = 3
sum is uninitialized at this point.
b. Line 5: sum = a + b → sum = 5 + 3 → sum = 8
c. Line 6: Check the condition sum > 7 → 8 > 7 → true
d. Line 7: Execute cout << "Sum is greater than 7" << endl;
e. Output: "Sum is greater than 7"
f. Program ends.

v) Benefits of a Dry Run:-

Helps in understanding complex logic.

Useful for debugging when you don't have access to a compiler or debugger.

Improves problem-solving and coding skills.



*/
