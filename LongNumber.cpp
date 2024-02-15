#include <iostream>

#include "LongNumber.h"

using namespace std;

LongNumber::LongNumber(vector<long long int> integerPart, vector<long long int> fractionalPart, bool sign)
        : integerPart(integerPart), fractionalPart(fractionalPart), sign(sign) {
}

string LongNumber::toString() const {
    return std::string();
}
