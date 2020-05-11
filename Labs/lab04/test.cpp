#include <iostream>
#include <fstream>
using namespace std;

double ArithmeticMean(ifstream& in)
{
    int cnt = 0;
    long double sum = 0.0;
    double value;

    while(in >> value)
    {
        sum += value;
        cnt += 1;
    }
    return sum / cnt;
}

double HarmonicMean(ifstream& in)
{
    int cnt = 0;
    long double sum = 0.0;
    double value;

    while(in >> value)
    {
        sum += 1.0/value;
        cnt += 1;
    }
    return cnt / sum;
}

int main()
{
    ifstream in("numbers.txt");
    cout << ArithmeticMean(in) << "\n\n";
    in.close();

    in.open("numbers.txt");
    cout << HarmonicMean(in) << "\n\n";
    in.close();

    return 0;
}