#include <stdio.h>

void lowercase(void); //�Լ� ����
char sentence[100]; //���� ũ�� ����

int main(void)
{
	printf("* * * �빮�ڿ��� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��Դϴ� * * *\n"); //���α׷� ����
	printf("��ȯ�� ������ �Է����ּ���: "); //���� �Է� �䱸

	gets(sentence); //���� �Է� �ޱ�
	printf("������ �Է�: %s\n", sentence); //�Է� ���� ���
	lowercase(); //���� ��ȯ �Լ� ����

	return 0;
}

void lowercase (void)
{
	int i;
	int n = 0; //���� ����

	for (i = 0; i < sizeof(sentence); i++) //���� ������ ���α׷� �������� ����
	{

		if (sentence[i] >= 'A' && sentence[i] <= 'Z') //�빮�ڰ� �ԷµǾ������� ����
		{
			sentence[i] += 32; //�ƽ�Ű�ڵ� ���� 32�� ���� �ҹ��ڷ� ��ȯ
			n++; //��ȯ ���� ����
		}
	}
	printf("������ ��� : %s\n", sentence); //��ȯ ���� ���
	printf("�ٲ� ���� ��: %d", n); //��ȯ ���� ���
	
	return;
}