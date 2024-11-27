#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CARDS 52
#define CLOVER 0
#define HEART 1
#define SPADE 2
#define DIAMOND 3
#define SCALE 13

int rand_max = 52;//생성될 수 있는 최대값
int rand_min = 1;//생성될 수 있는 최솟값















int main(void)
{int check_table[CARDS + 1];//1~52에 해당하는 각 카드가 생성되었는지 기록하는 테이블(1은 생성,0은 미생성)
int shuffle_result[CARDS];//랜덤으로 섞은 카드의 순서를 기록하는 테이블
char suit = 0;//카드의 문양 이니셜을 저장하는 변수
 
srand((unsigned int)time(NULL));




return 0;
}


