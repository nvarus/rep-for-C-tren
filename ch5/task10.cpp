/**
 * ������ �ணࠬ��, �ᯮ������� �������� 横��, ����� ����訢��� � ���짮��⥫� ���祭�� ������⢠ ��ப ��� �⮡ࠦ����.
 * ��⥬ ��� ������ �⮡ࠧ��� 㪠������ �᫮ ��ப � ������窠��, � ����� ������窮� � ��ࢮ� ��ப�, ���� ? �� ��ன � �.�.
 * � ������ ��ப� ������窠� ������ �।��⢮���� �窨 ? � ⠪�� ������⢥, �⮡� ��饥 �᫮ ᨬ����� � ������ ��ப� �뫮
 * ࠢ�� �������� ��ப.�ਬ�� ����᪠ �ணࠬ�� ������ �룫拉�� ᫥���騬 ��ࠧ�� :
 * ������ ������⢮ ��ப : 5
 *      . . . . *
 *      . . . * *
 *      . . * * *
 *      . * * * *
 *      * * * * *
 */

#include<iostream>
int main(void)
{
    using namespace std;
    int Nb;
    cout << "������ ������⢮ ��ப: ";
    cin >> Nb;

    for (int i = 0; i < Nb; i++)
    {
        for (int j = 0; j < Nb; j++)
        {
            if ((i + j) < (Nb - 1))
                cout << ".\t";
            else
                cout << "*\t";
        }
        cout << endl;
        
    }
}

