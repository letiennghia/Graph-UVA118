#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int x,y;
    char dir;
    
    cin>>n>>m;
    int smell[n][m]={0};
    int di;
    map<int,char> realdir;
    realdir[0]='N';realdir[1]='E';realdir[2]='S';realdir[3]='W';
    map<char,int> realnum;
    realnum['N']=0;realnum['E']=1;realnum['S']=2;realnum['W']=3;
    int dx[4]={0,1,0,-1}; int dy[4]={1,0,-1,0};
    while(cin>>x>>y>>dir){
        int c=0;
        di=realnum[dir];
    string inputarr;
    cin>>inputarr; 
    for(int i=0;i<inputarr.size();i++){
        if(inputarr[i]=='R') {di+=1;di%=4;}
        else if(inputarr[i]=='L') {di=di+3;di=di%4;}
        else {
             if(x+dx[di]>n||x+dx[di]<0||y+dy[di]>m||y+dy[di]<0){
                 if(smell[x][y]==0){
                     cout<<x<<" "<<y<<" "<<realdir[di]<<" LOST"<<endl;
                     smell[x][y]=1;
                     c=1;
                     break;
                 }
                 }
                 else {
                     x+=dx[di];
                     y+=dy[di];
                 }
             }
        }
        
    
    if(c==0) cout<<x<<" "<<y<<" "<<realdir[di]<<endl;
    }
    }


