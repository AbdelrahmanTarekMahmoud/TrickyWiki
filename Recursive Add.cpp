#include <iostream>
#include <vector>
template <typename T>
int Sum(std::vector<T> arr)
{
    if(arr.empty()) return 0;
    T lastSum = arr.back();
    arr.pop_back();
    return lastSum + Sum(arr);
}


int main() {
std::vector<int> v {1,2,3,4,5};
std::cout<<Sum(v);

    return 0;
}
