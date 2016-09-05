#include <iostream>
#include <stdio.h>
#include <sys/time.h>
using namespace std;

int binario(int, int);
int main(){
	struct timeval ti, tf;
	double tiempo;
	gettimeofday(&ti, NULL);//inicia el cronometro
	cout<<"euclides: "<<binario(4865,3458)<<endl;
	gettimeofday(&tf, NULL);//finaliza el cronometro
	tiempo = (tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;
	printf(" Has tardado: %.30f segundos\n", tiempo/1000);
}

int binario(int a, int b){
	if(a==0) return b;
	if(b==0) return a;
	int flag=1;
	while(a!=b){
		int c = a&1;
		int d = b&1;
		if(c==d){	
			if(c == 0 and d == 0){
				a>>=1; b>>=1;
				flag<<=1;}
			else{
				if(a>b){
					a=(a-b); a>>=1;}
				else{
					b=(b-a); b>>=1;}	
					}	
			}
      else{
			if(c == 0 and d ==1)  a>>=1;
			else  b>>=1;			
			}
	}
	return a*flag;
}
