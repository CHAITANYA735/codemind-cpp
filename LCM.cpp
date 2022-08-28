#include<iostream>
using namespace std;
int main()
{
    int n1,n2,max;
    cin>>n1>>n2;
    max=(n1>n2)?n1:n2;
    while(max<=(n1*n2))
    {
        if(max%n1==00 && max%n2==0)
        {
            cout<<max;
            break;
        }
        ++max;
    }
    
}