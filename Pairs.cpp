/*Ques. Given a list of 'n' no.s, print the sum of all the possible combos products...

eg. [1,2,3] : (1,2), (1,3), (2,3) 
Multiplying and adding them up:
2 + 3 + 6 = 11 : Ans

# Constraints : n <= 10**7

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    int length;
    cin >> length;

    for(int i = 0; i<length; i++){
        int item;
        cin >> item;
        v.push_back(item);
    }

    int sum = 0, sum_sq = 0;
    for (auto i: v){
        sum += i;
        sum_sq += i*i;
    }

    cout << "Ans: " << ((sum*sum) - (sum_sq))/2 << endl;
    
}