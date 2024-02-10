#include <iostream>
using namespace std;

int main() {
  double x = 1000/3;
  // x is no. of terms divisible by 3 which are smaller than 1000. 
  
  int y = x/2*(2*3+(x-1)*3);
  // y is summation of terms divisible by 3 which are smaller than 1000.
  
  int z = 1000/5;
  // z is no. of terms divisible by 5 which are smaller than or equal to 1000.
  
  int a = z/2*(2*5+(z-1)*5);
  //a is the summation of terms divisible by 5 which are smaller than or equal to 1000.
  
  int b = 1000/15;
  // b is the no. of terms divisible by 15 which are smaller than 1000.
  
  int c = b/2*(2*15+(b-1)*15);
  // c is the summation of terms divisible by 15 which are smaller than or equal to 1000.

  cout << y + a - c - 1000;
}
/* To calculate the value in question the summation of terms divisible by 15 have to be subtracted to remove duplicates, while 1000 is subtracted since 
the summation calculated excludes 1000 which was included in calculating y and z */