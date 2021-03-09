#include <iostream>
using namespace std;

// Ques: We need to calculate all even fibonacci numbers less than a given value 'x';

/*
The Brute force approach -->
Getting to all the fib nos and checking if thy are even or odd;

int main()
{
    int a = 1;
    int b = 1;

    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    cout << a << " " << b << " ";

    int c = 0;
    int even_fib_nos = 0;

    while (c < x)
    {
        c = a + b;
        if (c > x)
        {
            break;
        }

        if (c % 2 == 0)
        {
            even_fib_nos += 1;
        }

        cout << c << " ";
        a = b;
        b = c;
    }

    cout << "\nEven fibonacci numbers: " << even_fib_nos << endl;
}
*/

//The optimized one :
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;

    // The relation with the previous even terms is derived in the register;
    int second_prev_even_fib = 0;
    int prev_even_fib = 2;
    int current_even_fib = 2;

    cout << second_prev_even_fib << " " << prev_even_fib << " ";

    while (current_even_fib < x){
        current_even_fib = 4*prev_even_fib + second_prev_even_fib;

        if (current_even_fib > x) break;

        cout << current_even_fib << " ";

        second_prev_even_fib = prev_even_fib;
        prev_even_fib = current_even_fib;
    }

    cout << endl;

    return 0;
}