#include<bits/stdc++.h>

using namespace std;
int f=0;
bool compara(int x, int y){ 

	if(x>y) return true;
	
	return false; 
}

int bin(long long int d, int s, long long int *vetor) {
      int  l, m, achou;
       l = s - 1; achou = 0;
      while (f <= l) {
            m = (f + l) / 2;
            if (d <= vetor[m]) {
                l = m - 1;
            }else if (d > vetor[m]) {
                achou = 1;
                f++;
                break;
            };
        }
      if (achou)
       return 1;
      else 
	  	return 2;
}

	
int main (){
	int k;
	//vector <int> v1; // Primeiros soldados
	//vector <int> v2; // Segundo soldados
	
	int i, qtd;
	int cont=0;
	
	cin>>qtd;
	long long int v1[qtd], v2[qtd];
	
	for (i =0; i<qtd; i++){
		cin >> v1[i];
	}
	
	for (i =0; i<qtd; i++){
		cin >> v2[i];
	}
	
	sort(v1, v1+qtd); 
	sort(v2, v2+qtd); 

	for (i=0; i<qtd; i++){
		k= bin(v2[i],qtd,v1);
        if(k==1)
            cont++;
    }
	
	cout <<cont<<endl;
	return 0;
}

// URI 2095
// https://www.beecrowd.com.br/judge/pt/problems/view/2095
