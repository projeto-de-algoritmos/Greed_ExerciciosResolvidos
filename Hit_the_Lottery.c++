#include <iostream>
using namespace std;

int main() {
  int n, min=0;
  scanf("%d", &n);
  
  while(true) {
    if(n>=100) {
      min++;
      n-=100;
    }
    else if(n>=20) {
      min++;
      n-=20;
    }
    else if(n>=10) {
      min++;
      n-=10;
    }
    else if(n>=5) {
      min++;
      n-=5;
    }
    else if(n>=1) {
      min++;
      n-=1;
    }
    else break;
  }

  cout << min << endl;
}