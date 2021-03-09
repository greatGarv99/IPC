// Fast exponentiation

/*
The basic idea used here is that:

1. only even powers.
eg. a^16 = a^8 * a^8 ==> a^8 = a^4 * a^4 ==> a^4 = a^2 * a^2 ==> a^2 = a*a 

2. Mixed powers.
eg. a^10 = a^5 * a^5 ==> a^5 = a^4 * a ==> a^4 = (a^2)^2 ==> a^2 = a*a
*/

#include <iostream>
using namespace std;

int sq(int x){
	return x*x;
}

int power(int a, int n){
	if (n == 1) return a;

	else if (n%2 == 0){
		a = sq(power(a, n/2));
		n = n/2;
		return a;
	}

	else{
		a = sq(power(a, (n-1)/2)) * a;
		n = (n-1)/2;
		return a;
	}
}


int main(){
	int base, exponent;
	cin >> base >> exponent;
	cout << power(base, exponent) << endl;

	return 0;
}