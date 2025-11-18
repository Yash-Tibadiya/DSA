#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;

  cout << "Enter your age : ";
  cin >> a;

  if (a >= 18) {
    cout << "You are adult.";
  } else {
    cout << "You are miner.";
  }

  return 0;
}