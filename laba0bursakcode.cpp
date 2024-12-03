#include <iostream>
#include <string>
using namespace std;

int main() {
    char userSymbol; 
    string greeting = "Hello World!!!"; 

    cout << greeting << endl; 
    cout << "Please input a character: ";
    cin >> userSymbol; 
    cout << "You entered: " << userSymbol << endl;
}