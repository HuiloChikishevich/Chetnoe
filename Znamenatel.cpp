#include<iostream>
 using namespace std;
int proper_fraction(int x)  {
    if(x<0)x=-x;
    if (x == 1)
        return 0;
    return proper_fraction(x-1)+1;
}

int main(void){
    int N=0;
    cin >> N;
    cout << proper_fraction(N) ;
    return 0;
}
