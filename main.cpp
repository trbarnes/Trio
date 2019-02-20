#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Sorts the input in descending order
void sortDescending(int,int,int);
// Swaps the positioning of the two parameters
void swap(int,int);

// Numbers taken in as input
  int numA, numB, numC;

int main()
{
  // Asking user for input and taking in that input
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  // Sorting the numbers in descending order
  sortDescending(numA, numB, numC);
  
  // Outputting the numbers in the correct order
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

void sortDescending(int first, int second, int third)
{
  // Comparing the values and swapping
  if( first < third )
  {
    swap(numA,numC);
  }
  if( first < second )
  {
    swap(numA,numB);
  }
  if( second < third )
  {
    swap(numB,numC);
  }
}

void swap(int first, int second)
{
  // Swapping the values of the parameters
  int temp = first;
  first = second;
  second = temp;
}
