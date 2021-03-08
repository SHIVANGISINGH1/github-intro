#include<iostream>
using namespace std;
int main()
{
    int num1,num2,res;
    char ch;
    cout<<"enter two no";
    cin>>num1>>num2;
    cout<<"enter the operator"<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+' : res = num1+num2;
                break;
        case '-' : res = num1-num2;
                break;
        case '*' : res = num1*num2;
                 break;
        case '/' : res = num1/num2;
                  break;
        default : cout<<"oops no result"<<endl;
    } 
       cout<<"result is"<<res;
}