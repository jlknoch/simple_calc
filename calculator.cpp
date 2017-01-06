#include <iostream>

using namespace std;

int main(){

double input1, input2, output;
char inputchar;
cout << "Enter calculation: ";
cin >> input1 >> inputchar >> input2;

switch(inputchar){
case '+': output = input1 + input2; break;
case '-': output = input1 - input2; break;
case '*': output = input1 * input2; break;
case '/': output = input1 / input2; break;
default: cout << "Cyka Blyat... learn writing\n"; return 1;
}
cout << "Ergebnis: " << output << endl;
return 0;
}
