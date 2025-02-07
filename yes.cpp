#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  string str;

  cin >> test;

  while(test--) {
    cin >> str;

    if((str[0] == 'y' || str[0] == 'Y') && 
    (str[1] == 'e' || str[1] == 'E') &&
    (str[2] == 's' || str[2] == 'S')) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }

  return 0;
}