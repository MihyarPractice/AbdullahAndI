#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 100; i++){
		if (i%3 == 0 && i%5 == 0){
			cout<< "Three Five"<<endl;
		}else if (i%3 == 0){
			cout << "Three"<<endl;
		}else if (i%5 == 0){
			cout << "Five"<<endl;
		}else{
			cout << i <<endl;
		}
	}
	return 0;
}