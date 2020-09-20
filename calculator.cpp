#include "calculator.h"

// Addition function
int Calculator::Add (double a, double b)
{
	return a + b;
}

// Subtraction function
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// Multiplication function
int Calculator::Mul (double a, double b)
{
    return a * b;
}
