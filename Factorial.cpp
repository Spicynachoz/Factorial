// David Ye Factorial Program 9/12/12

#include <iostream>
using namespace std;
int factorial(int n);
int main () {
        
        int n;
        
        cout << "Enter a number between 1 and 10: ";
        cin >> n;
        
        cout << factorial(n) << " ";
        
        cin.get();
    return 0;
}
int factorial(int n) { 
  if (n >=1 && n<=10) {
        for (int i = n - 1; i >= 1; i--) 
			n = n * i;
}
  else {
    cout << "please enter an integer between 1 and 10";
  }

		return n;
    
    }
