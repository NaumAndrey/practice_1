//"ТИПЫ ДАННЫХ И ИХ ВНУТРЕННЕЕ ПРЕДСТАВЛЕНИЕ В ПАМЯТИ"
#include <iostream>

using namespace std;

const int gl_SIZESHORTINTBITS = 8 * sizeof(signed short int);

int main()
{
    setlocale(0, "");
    cout << "Memory in byte on the your computer !\n";
    cout << " " << endl;
    bool bool_1;
    char char_1;
    signed char signed_char;
    //signed short int ssi;
    unsigned char unsigned_char;
    wchar_t wchar_t_1;
    char16_t char16;
    char32_t char32;
    short short_1; //short int
    unsigned short unsigned_short; //unsigned short int
    int int_1;
    unsigned int unsigned_int;
    long long_1;
    unsigned long unsigned_long; //unsigned long int
    long long long_long; // long long int, signed long long int и signed long long.
    unsigned long long unsigned_long_long; //unsigned long long int
    float float_1;
    double d_2;
    long double long_double;

    signed short int x; // переменная служит для ввода целых чисел!

    //void: тип без значения

    cout << "1) " << endl;
    cout << "bool: " << sizeof(bool_1) << " bytes" << endl;
    cout << "char: " << sizeof(char_1) << " bytes" << endl;
    cout << "signed char: " << sizeof(signed_char) << " bytes" << endl;
    cout << "unsigned char: " << sizeof(unsigned_char) << " bytes" << endl;

    cout << "wchar_t: " << sizeof(wchar_t_1) << " bytes" << endl;
    cout << "char16_t: " << sizeof(char16) << " bytes" << endl;
    cout << "char32_t: " << sizeof(char32) << " bytes" << endl;
    cout << "short: " << sizeof(short_1) << " bytes" << endl;

    cout << "unsigned short: " << sizeof(unsigned_short) << " bytes" << endl;
    cout << "int: " << sizeof(int_1) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned_int) << " bytes" << endl;
    cout << "long: " << sizeof(long_1) << " bytes" << endl;
    cout << "unsigned long: " << sizeof(unsigned_long) << " bytes" << endl;

    cout << "long long: " << sizeof(long_long) << " bytes" << endl;
    cout << "unsigned long long: " << sizeof(unsigned_long_long) << " bytes" << endl;
    cout << "float: " << sizeof(float_1) << " bytes" << endl;
    cout << "double: " << sizeof(d_2) << " bytes" << endl;
    cout << "long double: " << sizeof(long_double) << " bytes" << endl;
    cout << "ssi: " << sizeof(x) << " bytes" << endl;
    cout << " " << endl;
    cout << "=====================================================================" << endl;
    cout << " " << endl;
    cout << "2) " << endl;
   

    cout << "Insert the number: ";
    cin >> x; 

    int numbit = 0;
    cout << "Insert the number byte: ";
    cin >> numbit;

    int bits[gl_SIZESHORTINTBITS];

    if (x < 0)
    {
        bits[gl_SIZESHORTINTBITS - 1] = 1;
    }

    //цикл для получения числа
    for (int i = 0; i < gl_SIZESHORTINTBITS - 1; ++i)
    { 
        if (x % 2 == 0) 
        {
            bits[i] = 0;
        }

        else 
        {
            bits[i] = 1;
        }

        x = x / 2;
    }

    //циклы для инверсии
    
    for (int i = 0; i < gl_SIZESHORTINTBITS -1; ++i) 
    {
        if (bits[i] == 1) 
        {
           bits[i] = 0;
        }
        else 
        {
            bits[i] = 1;            
        }
    }


    //bool carrier = true;
    for (int i = 0; i < gl_SIZESHORTINTBITS; ++i)
    {
        if (bits[i] == 1)
        {
            bits[i] = 0;
        }

        else
        {
            bits[i] = 1;
            //carrier = false;
            //break;
        }
    }


    for (int i = gl_SIZESHORTINTBITS-1; i >= 0 ; --i)
    {
        cout << bits[i];
    }
     
    cout << endl;
    cout << "Number bits " << numbit << " : " << bits[numbit] <<endl;
    cout << endl;

    system("pause");
}


