#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(void){
    double x[3][6],y[3][6];
    double a[4],b[4];
    for(int i = 1; i < 3; i++)
    {
        for(int j = 1; j < 4; j++)
        {
            cin>>x[i][j];cin>>y[i][j];
            if(j==1){
                x[i][4]=x[i][j];y[i][4]=y[i][j];
            }
            else if(j==2){
                x[i][5]=x[i][j];y[i][5]=y[i][j];
            }
        }
    }
    

    // for(int i = 1; i < 3; i++)
    // {
    //     for(int j = 1; j < 5; j++)
    //     {
    //         cout<<x[i][j]<<" "<<y[i][j]<<endl;
    //     }
        
    // }
    
    
    int s,t,flag=0;

    // a[0]=hypot(x[1][2]-x[1][1],y[1][2]-y[1][1]);
    // a[1]=hypot(x[1][3]-x[1][2],y[1][3]-y[1][2]);
    // a[2]=hypot(x[1][1]-x[1][3],y[1][1]-y[1][3]);
    // b[0]=hypot(x[2][2]-x[2][1],y[2][2]-y[2][1]);
    // b[1]=hypot(x[2][3]-x[2][2],y[2][3]-y[2][2]);
    // b[2]=hypot(x[2][1]-x[2][3],y[2][1]-y[2][3]);
    // a[3]=a[0];b[3]=b[0];

    for(int i = 0; i < 4; i++)
    {
        a[i]=hypot(x[1][i+1]-x[1][i+2],y[1][i+1]-y[1][i+2]);
    }

    for(int i = 0; i < 4; i++)
    {
        b[i]=hypot(x[2][i+1]-x[2][i+2],y[2][i+1]-y[2][i+2]);
    }
    


    // for(int i = 0; i < 3; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // for(int i = 0; i < 3; i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;

    for(int i = 0; i < 3; i++)
    {
        s=a[0]/b[i];
        for(int j = 1; j < 3; j++)
        {
            t=a[1]/b[j];
            if(s==t){
                if(s==a[2]/b[j+1]){
                    flag=1;
                    break;
                }
            }
        }
        
    }
    
    if(flag==1) cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    












}