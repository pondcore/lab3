#include <iostream>
using namespace std;

int main(){
	int i = 2;
	float sum =0;
	while(i <= 69){
		float n = i;
		sum += 1/n;
		i = i+1;
	}
	cout << sum;
    return 0;
}