// Problem Link:

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve__()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool sub1 = false, sub2 = false;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] != s[i - 1] && s[i] != s[i + 1])
            if (s[i - 1] == s[i + 1])
                sub2 = true;
            else
                sub1 = true;
    }
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            ans++;
    }

    if (sub2)
        ans -= 2;
    else if (sub1)
        ans -= 1;
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve__();
    }

    return 0;
}