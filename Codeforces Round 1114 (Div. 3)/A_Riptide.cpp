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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    while (true)
    {
        if (a == b || a == c || b == c)
            break;
        int mn = min({a, b, c});
        int mx = max({a, b, c});
        ans++;
        if (mn == a)
        {
            if (mx == b)
            {
                a++;
                b--;
            }
            else if (mx == c)
            {
                a++;
                c--;
            }
        }
        else if (mn == b)
        {
            if (mx == a)
            {
                b++;
                a--;
            }
            else if (mx == c)
            {
                b++;
                c--;
            }
        }
        else if (mn == c)
        {
            if (mx == a)
            {
                c++;
                a--;
            }
            else if (mx == b)
            {
                c++;
                b--;
            }
        }
    }
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