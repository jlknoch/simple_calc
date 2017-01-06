#include <iostream> 

using namespace std; 

int main()
{

double input1, input2, output;        
char inputchar;
cout << "Enter calculation: ";        
cin >> input1 >> inputchar >> input2; // GET CALCULATION

  
switch(inputchar)   //RECOGNIZE THE CALCULATION CHAR (+,-,*,/)
{
  case '+': output = input1 + input2; 
    break;
  case '-': output = input1 - input2; 
    break;
  case '*': output = input1 * input2; 
    break;
  case '/': output = input1 / input2; 
    break; 
  default: cout << "Calculation not valid.\n"; 
    return 1; // TELLS THE SYSTEM THAT THERE WAS AN ERROR IN THE CODE
}
  
  
cout << "Ergebnis: " << output << endl; // OUTPUTS RESULT
return 0; // TELLS THE SYSTEM THAT EVERYTHING WORKED SUCCESSFUL -> PROGRAM FINISHED
  
}

/*  COPYLEFT
  
    AUTHOR: 
    Jan-Lukas Knoch
    MAIL: jl_knoch@protonmail.com
    GITHUB: https://github.com/jlknoch/
  
*/
