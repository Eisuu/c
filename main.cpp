#include <iostream>
#include <cmath>
using namespace std;

int main() {
 
    bool willContinue = true;
    float num1, num2;
    int int1, int2;
    string op, ans;
    
    while(willContinue){
    cout << "\nEnter First Number: ";
    cin >> num1;

    if(!cin){
        cout << "Invalid Number.";
        willContinue = false;
    } else{
        cout << "\n Available Operators: +, -, x or *, %, /, sqrt, cbrt\n\n";
        cout << "Enter Operator: ";
        cin >> op;
    } if (op == "+" || op == "-" || op == "x" || op == "%" || op == "/" || op == "*"){
        cout << "\nEnter Second Number: ";
        cin >> num2;
    } else if(op == "sqrt" || op == "squareroot"){
        willContinue = false; 
        cout << "The square root of " << num1 << " is: " << sqrt(num1) << endl;
    }
    else if(op == "cbrt" || op == "cuberoot"){
        willContinue = false;
        cout << "The cube root of " << num1 << " is: " << cbrt(num1) << endl;
    }else if(op == "tan" || op == "tangent"){
        willContinue = false;
        cout << "The tangent of " << num1 << " is: " << tan(num1) << endl;
    }else if(op == "sin"){
        willContinue = false;
        cout << "The sin of " << num1 << " is: " << sin(num1) << endl;
    }else if(op == "cos"){
        willContinue = false;
        cout << "The cos of " << num1 << " is: " << cos(num1) << endl;
    } else {
    cout << "\nInvalid Operator.";
    willContinue = false;
    }
       if(op == "+"){
        willContinue = false;
        cout << "\nThe answer is: "<< num1+num2<< endl;
    } else if(op == "-"){
        willContinue = false;
        cout << "\nThe answer is: "<< num1-num2<< endl;
    } else if(op == "*" || op == "x"){
        willContinue = false;
        cout << "\nThe answer is: "<< num1*num2<< endl;
    } else if(op == "/"){
         willContinue = false;
         cout << "\nThe answer is: "<< num1/num2<< endl;
    } else if(op == "%"){
        int1 = num1;
        int2 = num2;
        cout << "\nThe answer is: "<< int1%int2 << endl;
        willContinue = false;
    } if(!cin){
    cout << "\nInvalid Second Number.";
    willContinue = false;
    }
    
    if(!willContinue || willContinue){
    cout << "\nwould you like to continue?: " << endl;
    cin >> ans;
    }
    if(ans == "yes"){
    willContinue = true;
    continue;
    }else if(ans == "no"){
    cout << "\nThank you for using my service.";
    return 0;
    } else{
    cout << "\nInavlid Answer" << endl;
    
    return 0;
    }
    
}

  return 0;
}
