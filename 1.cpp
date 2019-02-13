#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(void){

    int x1,y1,x2,y2,a,b;
    bool can_reach=false;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> a;
    cin >> b;

    if((x1<0&&y1<0)&&(x2>0&&y2>0)){
        if ((x1<a&&y1<b)&&(x2>a&&y2>b)) {
            can_reach=true;
        }
        
    }

    if((x1>0&&y1>0)||(x2<0&&y2<0)){
        if(!((x1<a&&y1<b)&&(x2>a&&y2>b))){
            can_reach=true;
        }
    }

    if(can_reach==true) cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    
    


}