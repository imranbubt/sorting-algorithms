#include<bits\stdc++.h>
using namespace std;

void gready_activity_selecttion(int s[],int f[],int n)
{
    int a[n];
    a[0]=1; // First activity ta shb smy select kore dite hy, tai select kore dilam prothom activity ta
    int k=0,i=1; //
    for(int m=1;m<n;m++) //start time r finish time compare korar jnno,
    {
        if(s[m]>=f[k])  //activity start time ta jodi finish time er tekhe boro ba shoman hy tkn eta cholbe
        {
            a[i++]=m+1; //jodi boro hy, taile index ta rakhbo
            k=m;
        }
    }

    cout << endl;
    for(int j=0;j<i;j++) //activiy array print krtesi
    {
        cout << a[j] << " ";
    }
}

int main()
{
    int n, i;
    cout << "Enter meeting limit: ";
    cin>>n;
    int a[n],s[n],f[n];
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    cout << "Enter the starting time of "<<n<<" meeting: ";
    for(int i=0;i<n;i++) // starting table
    {
        cin>>s[i];
    }
    cout << "Enter the finishing time of "<<n<<" meeting: ";
    for(int i=0;i<n;i++)  //finish table
    {
        cin>>f[i];
    }

    sort(f,f+n);      
    
    gready_activity_selecttion(s,f,n);
    return 0;
}