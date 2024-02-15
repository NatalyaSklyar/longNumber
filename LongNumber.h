//
// Created by Natalya Sklyar on 03.02.2024.
//

#ifndef LONGNUMBER_H
#define LONGNUMBER_H

#include <iostream>

using namespace std;

class LongNumber {

public:
    vector<long long> integerPart;
    vector<long long> fractionalPart;
    bool sign;

    LongNumber(vector<long long int> integerPart, vector<long long int> fractionalPart, bool sign);

    string toString(LongNumber) const;
    static LongNumber fromString(string str);

    LongNumber operator-();
};

LongNumber operator+(LongNumber a, LongNumber b);

LongNumber operator-(LongNumber a, LongNumber b);

LongNumber operator*(LongNumber a, LongNumber b);

LongNumber operator/(LongNumber a, LongNumber b);

bool operator==(LongNumber a, LongNumber b);

bool operator!=(LongNumber a, LongNumber b);

bool operator<(LongNumber a, LongNumber b);

bool operator>(LongNumber a, LongNumber b);

#endif //LONGNUMBER_H
