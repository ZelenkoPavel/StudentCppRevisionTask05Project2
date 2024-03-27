#include "tasks.h"

/*	Task 02. Palindrome Number (������������ ����� ��� �����-���������)
*
*	���� �������������� ����� ��� ������. ����������, �������� �� ��� �����������.
*
*	����������
*	1) ������������� ����� ��������� �� �������� �����������.
*	2) �� �������� ��� "������ �� ������": �������� ���������� �������� ������ ���� �� 0 �� 9999
*	3) ��� ���������� ��������� ������� ���������� ������������ ������ ���������� �������� ����� �/�++.
*
*	������ ������� ������ [input]
*	������� ��������� ����� ����� � ��������� ���� int.
*
*	������ �������� ������ [output]
*	������� ���������� ��������������� �������� ���������� ����,
*	� ���� ������ ������ �����������, �� ���������� ���������� �������� false.
*
*	[ input 1]: 2002
*	[output 1]: true
*
*	[ input 2]: 2008
*	[output 2]: false
*
*	[ input 3]: 2
*	[output 3]: true
*
*	[ input 4]: -8
*	[output 4]: false
*
*	[ input 5]: 55255
*	[output 5]: false
*/

bool task02(int number) {
    if (number < 0 || number > 9999) {
        return false;
    }

    int n4 = number % 10;
    int n3 = number / 10 % 10;
    int n2 = number / 100 % 10;
    int n1 = number / 1000 % 10;

    bool flag = number <= 9999 ? n4 == n1 && n3 == n2 : false;
    flag = number <= 999 ? n4 == n2 : flag;
    flag = number <= 99 ? n4 == n3 : flag;
    return number <= 9 ? true : flag;
    
}