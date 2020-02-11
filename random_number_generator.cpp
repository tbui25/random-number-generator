//Tommy Bui
//Random Number Generator

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]) {
  srand(time(0));
  for(int x=0; x<3;x++)
      cout << rand()%50000 + 500 << endl;
  }
