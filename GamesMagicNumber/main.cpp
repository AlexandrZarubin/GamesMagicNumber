#include <iostream>
#include <windows.h>
#include <stdlib.h> //�������� � ��� ����� � ��������� ��������� �����
#include <time.h>   //���������� ��� ������ �� ��������

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL)); //����� ���������� ��������� ����� �� ���-�� �����������, ��������� � 00:00:00 01.01.1970
	int MagicNumber = 0;  //��� �������� ����������� �����
	int PlayerNumber = 0; //��� �����, ���������� �������
	char Answer = '�'; //������ ����� �� ������ � ����������� ����
	int Menu;
	//��������� ���� � ����
	while (Answer == '�' || Answer == '�' || Answer == 'Y' || Answer == 'y')
	{
		//�������� �� ����
		do
		{
			//����
			cout << "�������� ������� ���������" << endl <<
				"1. ������         (Easy)" << endl <<
				"2. ����������     (Normal)" << endl <<
				"3. �������        (Hard)" << endl <<
				"4. ����� �������  (Very Hard)" << endl <<
				"5. ������ ������� (Ultra Hard 'hell')" << endl <<
				"6. �����         (Exit)" << endl;
			cin >> Menu;
			if (Menu < 1 || Menu>6)
			{
				cout << "������������ ����! " << Menu << " ���������� ��� ���!" << endl;
				cout << endl;
			}
		} while (Menu < 1 || Menu>6);
		//�������������
		switch (Menu)
		{
		case 1:// �� 1 �� 9 � ������������

			//���� ��������� ����
			while (Answer == '�' || Answer == '�' || Answer == 'Y' || Answer == 'y') //���� ����� "��" �� ������
			{
				system("cls"); //������� ������ ����� ����� �����

				cout << "---������ ����� �� 1 �� 9 �� 5 �������!---" << endl;
				MagicNumber = rand() % 9 + 1; //��������� ���������� ����� �� 1 �� 9 ������������
				//rand()%10; //�� 0 �� 9 ������������, �� ������� 10
				cout << MagicNumber << endl; //�������� �����

				for (int i = 1; i <= 5; i++) //���� ������� 1 2 3 4 5
				{
					//���� �������� ����������������� �����
					do
					{
						cout << "����� �������: " << i << endl;
						cout << "������� ����� �� 1 �� 9: "; cin >> PlayerNumber;
						if (PlayerNumber < 1 || PlayerNumber>9)
						{
							cout << "������������ ����! ���������� ��� ���!" << endl;
							//��������� ���-�� ���������� �������, ���������� ���-�� ��������������
							if (i == 5)break; //���� ������� ���������, �� ����� �� ����� ����������������� ����� do{}while
							else i++; //����������� ���-�� �������������� �������
						}
					} while (PlayerNumber < 1 || PlayerNumber>9);
					//��������� �����
					if (MagicNumber == PlayerNumber) //���� ����� �������
					{
						cout << "�����������!!! �� �������� ����� " << MagicNumber << " � " << i << "-� �������!" << endl;
						break; //����� �� ����� ������� for()
					}
					else
					{
						if (i == 5)cout << "�� ���������! ���������� �����: " << MagicNumber << endl;
						else
						{
							//cout << "�� �� �������! � ��� �������� " << 5 - i << " �������(�)!" << endl;
							//��������� "������/�������"
							if (PlayerNumber > MagicNumber)cout << "���� ����� ������ �����������!" << endl;
							else cout << "���� ����� ������ �����������!" << endl;
						}//���� ���� �������
					}//���� ����� �� ��������
				}//���� �������
				cout << "������� ���(Y[�]/N[�])? "; cin >> Answer;
			}//���� ���������
			break;
		default:
			cout << "������������ ��������!" << endl;
			break;

		case 2:// �� 1 �� 15 � ������������
			//���� ��������� ����
			while (Answer == '�' || Answer == '�' || Answer == 'Y' || Answer == 'y') //���� ����� "��" �� ������
			{
				system("cls"); //������� ������ ����� ����� �����

				cout << "---������ ����� �� 1 �� 15 �� 5 �������!---" << endl;
				MagicNumber = rand() % 15 + 1; //��������� ���������� ����� �� 1 �� 15 ������������
				//rand()%10; //�� 0 �� 9 ������������, �� ������� 10
				cout << MagicNumber << endl; //�������� �����

				for (int i = 1; i <= 5; i++) //���� ������� 1 2 3 4 5
				{
					//���� �������� ����������������� �����
					do
					{
						cout << "����� �������: " << i << endl;
						cout << "������� ����� �� 1 �� 15: "; cin >> PlayerNumber;
						if (PlayerNumber < 1 || PlayerNumber>15)
						{
							cout << "������������ ����! ���������� ��� ���!" << endl;
							//��������� ���-�� ���������� �������, ���������� ���-�� ��������������
							if (i == 5)break; //���� ������� ���������, �� ����� �� ����� ����������������� ����� do{}while
							else i++; //����������� ���-�� �������������� �������
						}
					} while (PlayerNumber < 1 || PlayerNumber>15);
					//��������� �����
					if (MagicNumber == PlayerNumber) //���� ����� �������
					{
						cout << "�����������!!! �� �������� ����� " << MagicNumber << " � " << i << "-� �������!" << endl;
						break; //����� �� ����� ������� for()
					}
					else
					{
						if (i == 5)cout << "�� ���������! ���������� �����: " << MagicNumber << endl;
						else
						{
							//cout << "�� �� �������! � ��� �������� " << 5 - i << " �������(�)!" << endl;
							//��������� "������/�������"
							if (PlayerNumber > MagicNumber)cout << "���� ����� ������ �����������!" << endl;
							else cout << "���� ����� ������ �����������!" << endl;
						}//���� ���� �������
					}//���� ����� �� ��������
				}//���� �������
				cout << "������� ���(Y[�]/N[�])? "; cin >> Answer;
			}//���� ���������
			break;

		case 3: // �� 1 �� 9 ��� ���������
			while (Answer == '�' || Answer == '�' || Answer == 'Y' || Answer == 'y') //���� ����� "��" �� ������
			{
				system("cls"); //������� ������ ����� ����� �����

				cout << "---������ ����� �� 1 �� 9 �� 5 �������!---" << endl;
				MagicNumber = rand() % 9 + 1; //��������� ���������� ����� �� 1 �� 9 ������������
				//rand()%10; //�� 0 �� 9 ������������, �� ������� 10
				cout << MagicNumber << endl; //�������� �����

				for (int i = 1; i <= 5; i++) //���� ������� 1 2 3 4 5
				{
					//���� �������� ����������������� �����
					do
					{
						cout << "����� �������: " << i << endl;
						cout << "������� ����� �� 1 �� 9: "; cin >> PlayerNumber;
						if (PlayerNumber < 1 || PlayerNumber>9)
						{
							cout << "������������ ����! ���������� ��� ���!" << endl;
							//��������� ���-�� ���������� �������, ���������� ���-�� ��������������
							if (i == 5)break; //���� ������� ���������, �� ����� �� ����� ����������������� ����� do{}while
							else i++; //����������� ���-�� �������������� �������
						}
					} while (PlayerNumber < 1 || PlayerNumber>9);
					//��������� �����
					if (MagicNumber == PlayerNumber) //���� ����� �������
					{
						cout << "�����������!!! �� �������� ����� " << MagicNumber << " � " << i << "-� �������!" << endl;
						break; //����� �� ����� ������� for()
					}
					else
					{
						if (i == 5)cout << "�� ���������! ���������� �����: " << MagicNumber << endl;
					}//���� ����� �� ��������
				}//���� �������
				cout << "������� ���(Y[�]/N[�])? "; cin >> Answer;
			}//���� ���������
			break;
		case 4: // �� 1 �� 15 ��� �������������
			//���� ��������� ����
			while (Answer == '�' || Answer == '�' || Answer == 'Y' || Answer == 'y') //���� ����� "��" �� ������
			{
				system("cls"); //������� ������ ����� ����� �����

				cout << "---������ ����� �� 1 �� 15 �� 5 �������!---" << endl;
				MagicNumber = rand() % 15 + 1; //��������� ���������� ����� �� 1 �� 15 ������������
				//rand()%10; //�� 0 �� 9 ������������, �� ������� 10
				cout << MagicNumber << endl; //�������� �����

				for (int i = 1; i <= 5; i++) //���� ������� 1 2 3 4 5
				{
					//���� �������� ����������������� �����
					do
					{
						cout << "����� �������: " << i << endl;
						cout << "������� ����� �� 1 �� 15: "; cin >> PlayerNumber;
						if (PlayerNumber < 1 || PlayerNumber>15)
						{
							cout << "������������ ����! ���������� ��� ���!" << endl;
							//��������� ���-�� ���������� �������, ���������� ���-�� ��������������
							if (i == 5)break; //���� ������� ���������, �� ����� �� ����� ����������������� ����� do{}while
							else i++; //����������� ���-�� �������������� �������
						}
					} while (PlayerNumber < 1 || PlayerNumber>15);
					//��������� �����
					if (MagicNumber == PlayerNumber) //���� ����� �������
					{
						cout << "�����������!!! �� �������� ����� " << MagicNumber << " � " << i << "-� �������!" << endl;
						break; //����� �� ����� ������� for()
					}
					else
					{
						if (i == 5)cout << "�� ���������! ���������� �����: " << MagicNumber << endl;
					}//���� ����� �� ��������
				}//���� �������
				cout << "������� ���(Y[�]/N[�])? "; cin >> Answer;
			}//���� ���������
			break;

		case 5: // �� 1 �� 100 � ���������������
			//���� ��������� ����
			while (Answer == '�' || Answer == '�' || Answer == 'Y' || Answer == 'y') //���� ����� "��" �� ������
			{
				system("cls"); //������� ������ ����� ����� �����

				cout << "---������ ����� �� 1 �� 100 �� 7 �������!---" << endl;
				MagicNumber = rand() % 100 + 1; //��������� ���������� ����� �� 1 �� 15 ������������
				//rand()%10; //�� 0 �� 9 ������������, �� ������� 10
				cout << MagicNumber << endl; //�������� �����

				for (int i = 1; i <= 7; i++) //���� ������� 1 2 3 4 5 6 7
				{
					//���� �������� ����������������� �����
					do
					{
						cout << "����� �������: " << i << endl;
						cout << "������� ����� �� 1 �� 100: "; cin >> PlayerNumber;
						if (PlayerNumber < 1 || PlayerNumber>100)
						{
							cout << "������������ ����! ���������� ��� ���!" << endl;
							//��������� ���-�� ���������� �������, ���������� ���-�� ��������������
							if (i == 7)break; //���� ������� ���������, �� ����� �� ����� ����������������� ����� do{}while
							else i++; //����������� ���-�� �������������� �������
						}
					} while (PlayerNumber < 1 || PlayerNumber>100);
					//��������� �����
					if (MagicNumber == PlayerNumber) //���� ����� �������
					{
						cout << "�����������!!! �� �������� ����� " << MagicNumber << " � " << i << "-� �������!" << endl;
						break; //����� �� ����� ������� for()
					}
					else
					{
						if (i == 7)cout << "�� ���������! ���������� �����: " << MagicNumber << endl;
						else
						{
							if (PlayerNumber > MagicNumber)cout << "���� ����� ������ �����������!" << endl;
							else cout << "���� ����� ������ �����������!" << endl;
						}//���� ���� �������
					}//���� ����� �� ��������
				}//���� �������
				cout << "������� ���(Y[�]/N[�])? "; cin >> Answer;
			}//���� ���������
			break;
		case 6://�����
			cout << "���� ���������! �� ����� ������!" << endl;
			Sleep(1000);
			exit(0);
			break;

		}//switch
		//���� ��������� ����
		cout << "������� �����(Y[�]/N[�])? "; cin >> Answer;
	}
	cout << "���� ���������! �� ����� ������!" << endl;
	//system("pause");
	Sleep(1000); //�������� ���������� ��������� � 1000 �����������(1 �������)
}