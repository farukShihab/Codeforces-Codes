#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back

int main()
{
	ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0;
        for(int i=0;i<n;i++){
            string t;
            t.pb(s[i]);
            t.pb(s[i+1]);
            if(s.find(t,i+2)!=string::npos){
                cout<< "Yes"<<endl;
                x++;
                break;
            }
        }
        if(x==0)cout<< "No"<<endl;
    }













    return 0;
}

