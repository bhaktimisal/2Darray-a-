#include<iostream>
using namespace std;
int main()
{   int i,j;
    int marks[2][3];
    
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<3;j++)
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
