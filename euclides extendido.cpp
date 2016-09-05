#include <iostream>
 using namespace std;

int extendido(int, int, int*, int*);

int main(){
	int a =161;
	int b = 28; 
	int x;
	int y;
 	cout<<"MCD: "<<extendido(a, b, &x, &y)<<endl;
 	cout<<"x: "<<x<<"  "<<"y: "<<y<<endl;
 }

 int extendido(int a, int b, int* x, int* y){
 	*x = 1;
 	int s2 = 0;
 	*y = 0;
 	int t2 = 1;
 	int q, r, s, t;
 	while(b > 0){
 		q = a/b;
 		r = a - (q * b);
 		a = b;
 		b = r;

 		s = *x - (q * s2);
 		*x= s2;
 		s2 = s;

 		t= *y - (q * t2);
 		*y= t2;
 		t2 = t;

	}
	return a;

 }
