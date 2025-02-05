#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[3], test;

  cin >> test; 
  while(test--) {
    for(int i = 0; i < 3; i++) {
      cin >> arr[i];
    }

    if((arr[0] + arr[1] == arr[2]) || (arr[1] + arr[2] == arr[0]) || (arr[2] + arr[0] == arr[1])) {
      cout << "YES\n";
    } 
    else {
      cout << "NO\n";
    }
  }
  

  return 0;
}