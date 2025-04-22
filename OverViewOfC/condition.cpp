#include <iostream>
using namespace std;

int main()
{

    // int n = 45;
    // int no;
    // if (n > 0)
    // {
    //     cout << "n is positive" << endl;
    // }

    // cout << "Enter a number: ";
    // cin >> no;

    // if (no % 2 == 0)
    // {
    //     cout << no <<" Number is Even." << endl;
    // }
    // else
    // {
    //     cout << no << " Number is Odd" << endl;
    // }

    // return 0;

    // ###Q1. Find char is uppercase or lowercase

    // char ch;

    // cout << "Enter a charactor: ";

    // cin >> ch;

    // if(ch >= 'a' && ch <= 'z'){
    //     cout << "LowerCase" << endl;
    // }else{
    //     cout << "UpperCase" << endl;
    // }

    // if(ch >=65 && ch <=90){
    //     cout << "UpperCase" << endl;
    // }else{
    //     cout << "Lowercase" << endl;
    // }

    // ### Ternary Statement
    //  condition ? stt1: stt2

    // ## Loops
    /*
         ## while loop
         Qs. Print number 1 to 5

        while(condition){


        }

        */

    // int count = 1;

    // while (count <= 5)
    // {
    //     cout << count << " ";
    //     count = count + 1;
    // }

    /*

    ## For Loop

    for( initisalisation; condition; updation){


    }

    */

    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << i << ' ';
    // }

    // Q Sum of numbers form 1 to n
    // int n;
    // cout << "Enter n: " ;
    // cin >> n;
    // int sum=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     // sum = sum + i;
    //     sum+=i;
    // }

    // cout << sum;

    /*
    ## do while


    do{
    }while();

    */

    // ## Check Prime number

    int n;
    bool isPrime = true;
    cout << "Enter a number: ";

    cin >> n;

    // for (int i = 2; i < n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    isPrime ? cout << "Prime" : cout << "Non Prime";
}