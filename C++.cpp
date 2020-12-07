#include <iostream>
#include<string>
using namespace std;

int main() {
    cout << "Nhap vao mot chuoi bat ki : ";
    string str;
    getline(cin, str);
    int i = 0;
    cout << "Chuoi sau khi chuyen thanh chu in hoa la : ";
    while (str[i])
    {
        putchar(toupper(str[i]));
        i++;
    }
    cout << endl;
    return 0;
}
