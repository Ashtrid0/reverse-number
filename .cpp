#include <iostream>

using namespace std;

int main()
{
    int number, revnumb = 0, remainder;
    
     cout<<" Enter an interger: ";
        cin>> number ;


    while (number > 0) 
    {
        remainder = number%10;
        revnumb = revnumb*10+remainder;
        number/= 10;
    }
    cout<<"Reversed number = " <<revnumb ;

    return 0;
}

