#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        // string x;
        // cin>>x;
        //  v.push_back(x);
        getline(cin,v[i]);
        

    }
    for (string s : v)
    {
        cout << s << endl;
    }

    return 0;
}