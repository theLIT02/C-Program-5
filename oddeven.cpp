#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number to be checked whether it's even/odd: ";
    cin>> n;

    if (n%2==0)
        cout<<n<<" is Even."<<endl;
    else
        cout<<n<<" is Odd."<<endl;
    return 0;
} 
