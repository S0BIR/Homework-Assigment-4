#include <iostream>
using namespace std;


// Problem 1
// floorFunction
int floorFunction(double num) {
    int intPart = static_cast<int>(num);
    return (num < 0 && num != intPart) ? intPart - 1 : intPart;
}
//ceilingFunction
int ceilingFunction(double num) {
    int intPart = static_cast<int>(num);
    return (num > 0 && num != intPart) ? intPart + 1 : intPart;
}


// Problem 2
// swap_values
void swapValues(double &a, double &b) {
     a = a + b;
     b = a - b;
     a = a - b;
 }


// Problem 3
// multiply
int multiply(int x, int y) {
     if (y == 0) {
         return 0;
     }
     if (y < 0) {
         return -multiply(x, -y);
     }
     return x + multiply(x, y - 1);
 }


// Problem 4
// digitSum
int digitSum(int n) {
     if (n == 0) {
         return 0;
     }
     return (n % 10) + digitSum(n / 10);
 }


// Problem 5
//decimalToBinary
int decimalToBinary(int n) {
     if (n == 0) {
         return 0;
     }
     return (n % 2) + 10 * decimalToBinary(n / 2);
 }


// Problem 6
// midValue
 template <typename T>
 T midValue(T a, T b, T c) {
     if ((a >= b && a <= c) || (a <= b && a >= c)) {
         return a; // a is the middle value
     } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
         return b; // b is the middle value
     } else {
         return c; // c is the middle value
     }
 }


