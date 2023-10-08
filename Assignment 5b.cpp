/*
square table of alternating stars and zeroes
Timothy Merritt, Claudia Matheus and Oghenebrume Muagba
COSC-1436.900
9/16/2023
*/

#include <iostream>

using namespace std;

int main()
{
// constants
const int MIN_SIZE = 3;
const int MAX_SIZE = 15;

//Ask the user to enter a size of the table
cout << "Enter the size of the table. It should be an odd number from " 
     << MIN_SIZE<< " to " << MAX_SIZE << ": ";
int size;
cin >> size;

//Loop for size number validation
while(size%2 == 0 || size < MIN_SIZE || size > MAX_SIZE){
cout << "Error: ";
cout << ((size%2 == 0)? "The number is even. " : "");
cout << ((size < MIN_SIZE)? "The number is less than the minimum. " : "");
cout << ((size > MAX_SIZE)? "The number is greater than the maximum. " : "");
cout << endl << "Enter an odd number from " << MIN_SIZE << " to " << MAX_SIZE << " for the size: ";
cin >> size;
}

//Printing the table
int width = ((size * 2) + 3);
for (int dash = 0; dash < width; ++dash){
cout << "-";
}
cout << endl;
for (int row = 0; row < size; ++row){
cout << "| ";
for (int column = 0; column <size; ++column){
cout << ((row%2 == column%2)? "* " : "0 ");
}
cout << "|" << endl;
}
for (int dash = 0; dash < width; ++dash){
cout << "-";
}

return 0;
}
