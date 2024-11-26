#include<iostream>
using namespace std;
int main()
{
    int x,reverse = 0,original,digit;
    cin>>x;
    if(x<0)
    {
        return false;
    }

    original=x;
    
    while(x != 0)
    {
        digit=x%10;
        reverse=reverse*10+digit;
        x/=10;
    }
    if(original==reverse)
    {
        cout<<"It is a Palindrome Number"<<endl;
    }
    else
    {
        cout<<"It is not a Palindrome Number"<<endl;
    }
    return 0;
}
