#include <iostream>

using namespace std;

void delete_annoying_primes(int* Array, int sin) {
    int tmp = 0;
	for (int i = 0; i < sin; i++) {
		for (int j = 1; j < sin + 1; j++) {
            if (i != j -1 & Array[i] == Array[j - 1] & Array[i]%j != 0 & Array[i] != j) {
				tmp++;
            }
        }
		if (!tmp){
                cout << Array[i] << endl;
			}
			else
                tmp = 0;
	}
}

int main() {
	int sin;
	cin >> sin;
	int* Array = new int (sin);
	for (int i = 0; i < sin;i++){
		cin >> Array[i];
	}
	cout << endl;
	delete_annoying_primes(Array,sin);
    return 0;
}
