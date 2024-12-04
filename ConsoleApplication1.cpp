#include <iostream>
using namespace std;
extern "C" int ThreeProd(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3, result;
    cout <<"Enter 3 numbers: \n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    _asm {
        mov eax, num1
        mov ebx, num2
        mov ecx, num3
        imul eax, ebx
        imul eax, ecx
        mov result, eax

    }

    cout << "The Product of " << num1 << " " << num2 << " " << num3 << " is: " << result<<endl;
    cout << "The Product of " << num1 << " " << num2 << " " << num3 << " is: " << ThreeProd(num1,num2,num3);

}