#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{int a,b,c;
    cout<<"enter two nos.";
    cin>>a>>b;
    cout<<"\t\t\t\t MAIN MENU";
    cout<<"\n1.add\n2.sub\n3.multiply\n4.divide\n";
    cout<<"enter your choice";
    cin>>c;
    switch (c)
    {
    case 1:cout<<a+b;
            break;
    case 2:cout<<a-b;
            break;
    case 3:cout<<a*b;
            break;
    case 4:cout<<a/b;
            break;
    default:cout<<"invalid choice";
    }
}