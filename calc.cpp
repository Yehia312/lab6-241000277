#include <iostream>
#include <cassert>
using namespace std;
class Calculator
{
public:
    double add(double x, double y)
    {
        return x + y;
    }

    double subtract(double x, double y)
    {
        return x - y;
    }

    double multiply(double x, double y)
    {
        return x * y;
    }

    double divide(double x, double y)
    {
        if (y == 0)
            throw invalid_argument("Div by zero");
        return x / y;
    }
};

void testCases()
{
    Calculator calc;

    assert(calc.add(2, 3) == 5);
    assert(calc.add(-1, 1) == 0);
    assert(calc.add(0, 0) == 0);

    assert(calc.subtract(5, 3) == 2);
    assert(calc.subtract(0, 5) == -5);
    assert(calc.subtract(-2, -2) == 0);

    assert(calc.multiply(4, 3) == 12);
    assert(calc.multiply(-2, 3) == -6);
    assert(calc.multiply(5, 0) == 0);

    assert(calc.divide(6, 2) == 3);
    assert(calc.divide(-9, 3) == -3);
    assert(calc.divide(5, 2) == 2.5);

    std::cout << "All good";
}

int main()
{
    testCases();
}