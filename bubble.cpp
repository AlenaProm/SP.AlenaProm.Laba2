#include <iostream>
using namespace std;

int len = 7;
int Arr[7];
class Sortedfunc
{
public:
    int Bubble()
    {
        _asm
        {
            dec len
        loopExt: xor ebx, ebx
            mov ecx, len
            mov esi, 0
        loopIn:mov edi, Arr[esi]
            cmp edi, Arr[esi + 4]
            jl swaped
            add esi, 4
            loop loopIn
            jmp control
        swaped: mov ebx, Arr[esi + 4]
            mov Arr[esi + 4], edi
            mov Arr[esi], ebx
            add esi, 4
            loop loopIn
        control:cmp ebx, 0
            je exD
            jmp loopExt
        exD:
        }
    }
};

int main()
{
    Sortedfunc values;

    cout << "Sort in descending order" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << "Arr[" << i  << "]: ";
        cin >> Arr[i];
    };

    values.Bubble();
    len = 7;
    cout << "Sorted array:\n";
    for (int i = 0; i < len; i++)
        cout << "Arr[" << i  << "]: " << Arr[i] << endl;
};


