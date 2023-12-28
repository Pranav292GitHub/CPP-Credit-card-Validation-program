#include <iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);
int main(){
    string cardNumber;
    int result;

    cout << "Enter you credit card number: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    //final
    if (result % 10 == 0){
        cout << "Your credit card number is valid." << "\n";
    } else{ 
        cout << "Your credit card number is invalid." << "\n";
    }
}
int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const string cardNumber){
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0;i-=2){
        sum = sum + cardNumber[i] - '0';
    }

    return sum;
}
int sumEvenDigits(const string cardNumber){
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0;i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}