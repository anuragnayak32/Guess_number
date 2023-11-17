#include<iostream>
using namespace std;
int main()
{
    int num,num1;
    int n=1;
    while(n==1)
    {
      cout<<"Enter any number you want..";
      cin>>num1;
      cout<<"You number is"<<num1<<endl;
      num= 0+(rand()%10);
      cout<<"The random number is: ";
      cout<<num<<endl;
   
    if(num>num1)
    {
       cout<<"your guess is low "<<endl;
    }
    else if(num<num1)
    {
      cout<<"your guess is high.."<<endl;
    }
    else{
    cout<<"guess is matched"<<endl;  
    }
      cout<<"\n\nyou want continue then chose '1' else '0' ";
      cin>>n;
    }
}