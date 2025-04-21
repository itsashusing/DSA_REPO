
#include <iostream>
using namespace std;

// g++ full file name to compile the file (it will genrate the compiled file.)
// a.exe to execute the file  (print the output of the screen)

// g++ fullFileName && a.exe
int main()
{

    cout << "Hello C++" << endl;
    cout << "Hello Ashutosh Singh" << endl;

    // VARIABLES

    // premitive Data Type
    // 8 Bits => 1 Bytes
    // 1. int (4 Bytes)  32 Bits _ _ _ _
    int age = 25;
    cout << age << endl;
    cout << sizeof(age) << endl;
    // 2. char (1 Bytes)
    char grade = 'A';
    // 3. float (4 Bytes)
    float PI = 3.14f;
    // 4. bool (1 Bytes)
    bool isSafe = false;
    // 5. double (8 Bytes)
    double tax = 32.8;

    // TYPE Casting

    // 1. implesit conversion  jab ham compital auto convert krta hai
    int value = grade;
    cout << value << endl; // it will convert 'A' => 67

    // 2. explicit conversion  // jo ham krte hai

    double price = 100.999;
    int newPrice = (int)price;

    cout << newPrice << endl;

    // input in C++

    // int age1;

    // cout << age1 << endl;

    // cout << "Enter your age: ";
    // cin >> age1;
    // cout << "Your age is : " << age1 << endl;

    // Operators
    // 1. Arithmetic  + - * // /  %   // priority bde type ko milti hai

    // 2. relational operator  < <= > >= == !=

    // 3. logical operator || && !

    // 4. BitWist operator

    // a.  Binary Operator  -> like + - jinme do operator ki need ho
    // b.  Uniay Operator ++ --

    // Ques.1 Sum of two number.
    int a, b;
    // cout << 'Enter value of a: ' << endl;
    // cin >> a;
    cout <<"Enter a: " <<endl;
    cin >> a;

    // cout << 'Enter the value of b: ' << endl;
    cout << "Enter b: " <<endl;
    cin >> b;

    int sum = a+b;

    // cout << 'Sum of a and b is: ' << sum << endl;
    cout << "Sum of a and b is :" << sum << endl;


    return 0;
}