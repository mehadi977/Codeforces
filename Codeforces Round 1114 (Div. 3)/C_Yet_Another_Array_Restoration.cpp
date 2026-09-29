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
    int n, x, y;
    cin >> n >> x >> y;
    int rem = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        if ((y - x) % i == 0)
        {
            rem = (y - x) / i;
            break;
        }
    }
    if (y - (n - 1) * rem > 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << y - i * rem << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        int p = y % rem;
        if (!p)
            p += rem;
        for (int i = 0; i < n; i++)
        {
            cout << p + i * rem << " ";
        }
        cout << endl;
        return;
    }
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