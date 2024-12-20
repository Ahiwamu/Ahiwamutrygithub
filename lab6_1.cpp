#include<iostream>
using namespace std;

int main(){
    cout << "Enter an integer: ";
    int num, evennum = 0, oddnum = 0;
    cin >> num;
    while(num != 0){
        if(num%2 == 0){
            evennum++;
        }
        else{
            oddnum++;
        }
        cout << "Enter an integer: ";
        cin >> num;
    }
    cout << "#Even numbers = " << evennum << endl;
    cout << "#Odd numbers = " << oddnum << endl;
    cout << " ";
    return 0;
}
