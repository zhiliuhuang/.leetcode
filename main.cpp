#include<bits/stdc++.h>
using namespace std;
    string s="abcdefg";
    string reverseStr(string &s, int k) {
        string::iterator it=s.begin();
        int n=s.size();
        int x=n/(2*k);

        for(int i=0;i<x;i++)
        {
            reverse(it,it+k);
            for(int j=0;j<2*k;j++) it++;
            cout<<s<<endl;
        }
        if(n%(2*k)<k){
            reverse(it,s.end());
            cout<<s<<endl;
        }
        else
        {
            /* code */
            reverse(it,it+k);
            cout<<s<<endl;
        }
        

        return s;
    }

    int main()
    {
        reverseStr(s,2);
        cout<<s<<endl;
        system("pause");
        return 0;
    }