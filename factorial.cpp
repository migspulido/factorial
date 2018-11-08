// Miguel Pulido - Systems Architect
// Factorial recursion function to find user defined factorial
#include <iostream>
using namespace std;

int factorial(int numb){
if (numb==1){
    return 1;
}
else{
    return numb*factorial(numb-1);
}

}

int main(){
int value;
cout << "Enter a value to find the factorial for:" << endl;
cin >> value;
cout << factorial(value) << endl;

return 0;
}
