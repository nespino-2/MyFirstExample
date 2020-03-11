#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
  int x;
  int y;
  vector<int> someVec(10);
  for (int i=0;i<someVec.size();i++) {
    someVec[i] = 1 + someVec[i];
    cout << someVec[i];
  }
  cout << endl;
    cout<<"Hi, please enter two numbers: ";

    cin >> x >> y;

    return 0;
}
