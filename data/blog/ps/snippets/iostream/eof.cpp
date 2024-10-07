#include <iostream>
using namespace std;

// 입력의 개수가 정해져있지 않을때 EOF(end of file)을 사용하는 방법
int main()
{
    int A, B;

    while (cin >> A >> B)
    {
        cout << A + B << endl;
    }

    /*
        이렇게 쓸 수도 있음 

        while (!cin.eof()) {
            cin >> A >> B;
            
            // 입력이 정상적으로 들어왔을 때만 출력 (EOF 바로 전 상태 처리)
            if (!cin.eof()) {
                cout << A + B << endl;
            }
        } 
    */

    return 0;
}

