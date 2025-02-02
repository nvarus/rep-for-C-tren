/***********************************************************************************************************
 * ������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� 10 १���⮢ ���� � �����, ��࠭�� �� � ���ᨢ�.
 * �� �⮬ ����室��� ���ᯥ��� ����������� �४�饭�� ����� �� ����� ��� 10 १���⮢.
 * �ணࠬ�� ������ �⮡ࠧ��� �� १����� � ����� ��ப� � ᮮ���� �� �।��� ���祭��.
 * �� �㭪樨: 1. ���� ���祭��, 2. ���᫥��� �।����, 3. �⮡ࠦ���� १����.
 **********************************************************************************************************/
#include<iostream>
using namespace std;
const int Max = 10;
int EnteringValues(double golf[], int);
double AverageVal(double golf[], int);
void DisplayVal(double golf[], int, double);
//=========================================================================================================
int main(void)
{
    double *golf = new double[Max];
    int intro = EnteringValues(golf, Max);                      // ���-�� ॠ�쭮 ��������� ���祭��
    double Average = AverageVal(golf, intro);                   // �।��� ���祭��
    DisplayVal(golf, intro, Average);                           // �뢮�
    cout    << "������� १���⮢: " << intro << endl
            << "�ணࠬ�� �����襭� !!!";
    delete[] golf;
}
//---------------------------------------------------------------------------------------------------------
// �㭪�� ��� ����� ���祭��
int EnteringValues(double golf[], int x)
{                 
    int i = 0;
    cout << "������ १����� ���� �� ������. �� �᫮��� ���祭�� ��ࢥ� ����." << endl;
    while (i < x)
    {
        cout << "������� � " << i + 1 << ": ";
        if (cin >> golf[i])                                 // ���ࠢ���� ����
        {
            i++;
        }
        else break;
    }
    return i;
}
//----------------------------------------------------------------------------------------------------------
// �㭪�� ��� ���᫥��� �।���� ���祭��
double AverageVal(double golf[], int intro)
{                
    double Total = 0;
    for (int i = 0; i < intro; i++)
    {
        Total += golf[i];
    }
    return Total / intro;
}
//----------------------------------------------------------------------------------------------------------
// �㭪�� ��� �뢮�� १���⮢
void DisplayVal(double golf[], int intro, double Average)
{  
    cout << "�������� १�����:" << endl;
    for (int i = 0; i < intro; i++)
    {
        cout << golf[i] << "\t";
    }
    cout << endl << "�।��� ���祭��: " << Average << endl;
}   
