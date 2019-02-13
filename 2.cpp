#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
#define N 100;
int main(void){
    int H,W,Q;

    struct n{
        int gyo;
        int retsu;
        char word[5];
    };

    cin>>H;cin>>W;cin>>Q;
    string matrix[H][W];
    struct n b[Q];

    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            matrix[i][j]=".";
        }
        
    }

    for(int i = 0; i < Q; i++)
    {
        cin>>b[i].gyo;cin>>b[i].retsu;cin>>b[i].word;
        b[i].gyo-=1;
        b[i].retsu-=1;
    }
    
    for(int i = 0; i < Q; i++)
    {
        matrix[b[i].gyo][b[i].retsu]=b[i].word;
    }
    
    //出力
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
        
    }















}