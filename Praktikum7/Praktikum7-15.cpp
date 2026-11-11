#include <iostream>

using namespace std;

void increment (int *x) {
    x++;
}

int main () {
    int number = 10;
    increment(&number);
    cout << "NIlai number setelah increment: " << number << endl;
    return 0;
}