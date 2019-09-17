#include<bits/stdc++.h>
using namespace std;

map<char,int> m;

int main()
{
    char s;
    double d;
    while(cin>>s) {
        m[s]++;
    }
    for(auto it = m.begin();it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}

