#pragma once

#include <iostream>

using namespace std;

class Date {
    public:
        int Day, Month, Year;

        void OutputDate();
        void InputDate();
        void changeDate(int D, int M, int Y);
};


