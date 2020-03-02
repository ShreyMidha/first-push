
#include<iostream>
using namespace std;
int main()
{int i,j;
    for(i=0;i<5;i++)
    {
        for (j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=5;k>=i;k--)
        {
            cout<<" ";
        }
        for(int m=5;m>=i;m--)
        {
            cout<<" ";
        }
        for(int l=0;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
