#include <iostream>
#include <fstream> // 파일 입출력을 위해 필요
using namespace std;

int main()
{
    ifstream inputFile("input.txt"); // input.txt 파일에서 입력을 받음

    // 파일을 열 수 있는지 확인
    if (!inputFile)
    {
        cerr << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    int a, b, c;

    // 파일에서 값을 읽어서 처리
    while (inputFile >> a >> b >> c)
    {
        cout << a << b << c;
    }
}