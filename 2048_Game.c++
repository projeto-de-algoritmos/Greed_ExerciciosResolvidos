#include <iostream>
#include <cstdlib>
using namespace std;

int cmp(const void *a,const void *b) {
	return *(int *)b - *(int *)a;
}

int main(void) {
  int n, res=0;
  scanf("%d", &n);
  
  for(int i=0; i<n; i++) {
    int q, sum=0, res=0;
    scanf("%d", &q);
    int *s = (int *) calloc(q, sizeof(int));
    for(int i=0; i<q; i++) scanf("%d", &s[i]);
    qsort(s, q, sizeof(int), cmp);
    for(int i=0; i<q; i++) {
      if(s[i]<=2048) sum+=s[i];
      if(sum==2048) res=1;
    }
    free(s);
    switch(res) {
      case 1:
        cout << "YES" << endl;
        break;
      default:
        cout << "NO" << endl;
    }
  }
}