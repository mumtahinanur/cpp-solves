#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np, min;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  if((c*d < (k*l)/nl) && (c*d < (p/np))) 
    min = d;
  else if(((k*l)/nl < c*d) && ((k*l)/nl < (p/np))) 
    min = (k*l)/nl;
  else
    min = p/np;

  cout << min/n;
  return 0;
}