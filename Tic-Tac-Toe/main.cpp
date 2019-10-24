#include <iostream>

using namespace std;
void display(int *);
int winChecker(int *);

//No 1 represents human player:-O
//No 2 represents Computer:-X
int main()
{
    int a[3][3]={0,0,0,0,0,0,0,0,0},l=0,k=0;
    display(&a[0][0]);
    while(winChecker(&a[0][0])==0)
    {
        int m,n,draw=0;
        cout<<"Enter row no. and column no."<<endl;
        cin>>m>>n;
        m--;n--;
        if(a[m][n]==2 || a[m][n]==1){cout<<"Invalid Move. You cannot overwrite"<<endl; continue;}
        a[m][n]=1;
        //Computers Play

        //Completely Random
        for(int i=3;;i++)
        {
            l=a[i][i]%3;
            k=a[i+1][i]%3;
            if(a[l][k]!=2 && a[l][k]!=1){a[l][k]=2;break;}
        }
        display(&a[0][0]);

        for(int p=0;p<3;p++)
        {
            for(int q=0;q<3;q++)
            {
                if(a[p][q]==0){draw++;}
            }
        }
        if(draw==0){break;}
    }
    if(winChecker(&a[0][0])==1){cout<<"You Win"<<endl;}
    else if(winChecker(&a[0][0])==2){cout<<"You Lose"<<endl;}
    else {cout<<"Match Draw"<<endl;}
    return 0;
}
void display(int *p)
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=*p;
            p++;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0){cout<<" "<<"|";}
            if(a[i][j]==1){cout<<"O"<<"|";}
            if(a[i][j]==2){cout<<"X"<<"|";}
        }
        cout<<endl;
    }
}
int winChecker(int *p)
{
    //Recreating the array
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=*p;
            p++;
        }
    }

    for(i=0;i<3;i++)
    {
        //Row wise checking
        int l=0,k=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1){l++;}
            if(a[i][j]==2){k++;}
        }
        if(l==3){return 1;}
        if(k==3){return 2;}

        //Column Wise Checking
        int m=0,n=0;
        for(j=0;j<3;j++)
        {
            if(a[j][i]==1){m++;}
            if(a[j][i]==2){n++;}
        }
        if(m==3){return 1;}
        if(n==3){return 2;}
    }

    //Checking Diagonals
    int l=0,k=0,m=0,n=0;
    for(i=0;i<3;i++)
    {
        //First Diagonal
        if(a[i][i]==1){l++;}
        if(a[i][i]==2){k++;}

        //Second Diagonal
        if(a[2-i][2-i]==1){m++;}
        if(a[2-i][2-i]==2){n++;}
    }
    if(l==3){return 1;}
    if(k==3){return 2;}
    if(m==3){return 1;}
    if(n==3){return 2;}
    return 0;
}
