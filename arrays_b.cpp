#include<iostream>

using namespace std;
int main()
{   int m,n;
cout<<"plz enter the value for m"<<endl;
cin>>m;
    cout<<"plz enter the value for n"<<endl;
    cin>>n;
    int marks[m][n];
   

    
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
    {
       cin>>marks[i][j];
    }
    }
    for(int i=0;i<2;i++)
     {
         for(int j=0;j<3;j++)
         {
            cout<<marks[i][j]<<" ";
         }
    cout<<endl;
    }
}
