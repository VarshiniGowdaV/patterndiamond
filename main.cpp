#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<" enter odd number of stars";
        cin>>num;
    }
    if(num%2!=0)
    {
        for(int i=1;i<=num;i++)
        {
            for(int j=1;j<=(num-i);j++)
            {
                cout<<" ";
            }
            for(int k=1;k<=(2*i)-i;k++)
            {
                cout<<"* ";
            }
            cout<<endl;

        }
        for(int i=num-1;i>=1;i--)
        {
            for(int j=1;j<=(num-i);j++)
            {
                cout<<" ";
            }
            for(int k=1;k<=(2*i)-i;k++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }

}
