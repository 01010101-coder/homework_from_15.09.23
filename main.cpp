#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double epsilon, x, sum=1, temp;
    int n=1;

    cin >> x >> epsilon;

    temp = x;

    while (epsilon < fabs(temp)){
        sum += temp;
        n++;
        temp = temp * x/n;
    }


    cout << sum << endl;
    cout << pow(exp(1), x);
    return 0;
}
