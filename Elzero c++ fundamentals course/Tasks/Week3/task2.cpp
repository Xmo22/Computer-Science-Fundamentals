#include <iostream>
using namespace std;

int main(){
    double salary = 5000.98;
    cout << "Number of bytes: " << sizeof(salary) << " bytes \n";
    cout << "Number of bits: " << sizeof(salary) * sizeof(salary) << " bits \n"; 
// 8 Bytes
// 64 Bits
}