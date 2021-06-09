// It needs c++14
// I learend it by Jason Turner video:
// https://www.youtube.com/watch?v=2kY-go52rNw

#include <iostream>
template<int Value>
constexpr auto fib = fib<Value-1> + fib<Value-2>;
template<>
constexpr auto fib<0> = 0;

template<>
constexpr auto fib<1> = 1;

int main() {
    std::cout << fib<10> << std::endl;
    return 0;
}
