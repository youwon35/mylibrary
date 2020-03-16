#pragma once // header guard

//-----------선언만 남겨라. 차례와 동일. ---------------
//별 만들기 함수
void star_making(int col);
// 값 바꾸기
void swap(int *a, int *b);
// 배열의 합 구하기
void array_sum();
    //동음 이의 암호 파이테스트
double pi_test(int arr1[]); 
//  알파벳 별 갯수 구하기
int *code_sort(const char arr1[], int arr[], const int size);
// ax + b 암호 변환 공식
char *multiple_change_formula(int index, int k);
// 카이사르 암호 변환 공식

void multiple_change(char *str, int length, int index, int k);

//문자열에 대한 포인터 배열 정렬
void selection_sort_str(char *arr[], int size);

//문자열 swap
void swap_string(char **a, char **b);
//선택 정렬
void selection_sort(int arr[], int size);
// string 배열 출력
void printStringArray(char *arr[], int size);
// 배열 출력
void printArray(int arr[], int size);