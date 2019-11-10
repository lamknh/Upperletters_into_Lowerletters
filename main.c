#include <stdio.h>

void lowercase(void); //함수 선언
char sentence[100]; //문장 크기 설정

int main(void)
{
	printf("* * * 대문자에서 소문자로 변환하는 프로그램입니다 * * *\n"); //프로그램 설명
	printf("변환할 문장을 입력해주세요: "); //문장 입력 요구

	gets(sentence); //문장 입력 받기
	printf("문제의 입력: %s\n", sentence); //입력 문장 출력
	lowercase(); //문자 변환 함수 실행

	return 0;
}

void lowercase (void)
{
	int i;
	int n = 0; //변수 선언

	for (i = 0; i < sizeof(sentence); i++) //문장 내에서 프로그램 가동으로 제한
	{

		if (sentence[i] >= 'A' && sentence[i] <= 'Z') //대문자가 입력되었을때로 제한
		{
			sentence[i] += 32; //아스키코드 값에 32를 더해 소문자로 변환
			n++; //변환 숫자 세기
		}
	}
	printf("문제의 출력 : %s\n", sentence); //변환 문장 출력
	printf("바뀐 문자 수: %d", n); //변환 숫자 출력
	
	return;
}