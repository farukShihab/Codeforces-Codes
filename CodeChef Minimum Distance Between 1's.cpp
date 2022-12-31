#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        string t;
        t="11";
        if(s.find(t,0)!=string::npos){
            cout<<1<<endl;
            continue;
        }
        bool x=false;
        for(int i=0;i<n;i++){
            int c=0;
            if(s[i]=='1'){
                for(i++;;i++){
                    if(i>n-1)break;
                    if(s[i]=='1'){
                        i--;
                        break;
                    }
                    c++;
                }
                if(c%2==0 && i<n-1){
                    x=true;
                    cout<<1<<endl;
                    break;
                }
            }
        }
        if(x==false)cout<< 2 <<endl;


    }





    return 0;
}
