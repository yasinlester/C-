#include <iostream>
using namespace std;


int main() {
  int x;
  int y;
  cout << "hello world\n";
  cout << "Enter a number:";
  cin >> x;
  cout << "Enter another number.";
  cin >> y;
  cout << "Now you've multiplied them for a result of " << x*y << "!";

  for (int i = 0; i < 10; i++) {
    cout << "This is the loop right now: " << i << "\n";
}

  cout << x;
  cout << y;

}
