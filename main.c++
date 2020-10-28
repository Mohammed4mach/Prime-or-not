#include <iostream>
using namespace std;

int main() {
    // Declaring integers n: input number & i: process-side number
    int n = 0;
    int i = 0;
    bool isPrime = 0;
    
    cin >> n;
    
    // if n is prime ,it won't give 0 with smaller values by using  module operator 
    if (n == 2) 
        cout << n << " is prime number";
        
    else {
    for (i=2; i < n; i++) {
        
    if (n % i == 0) {
        
        isPrime = 0;
        break;
    }
    
    else
        isPrime = 1;
        
    }
    
    if (isPrime == 0)
        cout << n << " is not prime number";
    
    else if (isPrime == 1)
        cout << n << " is prime number";
        
    }
	return 0;
}