#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\n enter three sides of triangle=";
    cin>>a>>b>>c;
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        cout<<"\n triangle possible";
        if(a==b&&b==c&&c==a)
        cout<<"\n equilateral triangle";
        else if(a==b||c==b||a==c)
        cout<<"\n isosceles triangle";
        else
        cout<<"\n scalene triangle";
    }
    else
    cout<<"\n triangle not possible";
    return 0;
}
