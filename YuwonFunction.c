#include "YuwonFunction.h"
#include <stdio.h>
//------------------------------------
//�� ����� �Լ� in ���� �˰���
void star_making(int col) {
  int num = 0;
  scanf("%d", num);
}
// a b �� �ٲٱ�
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("Swaped : %d %d", *a, *b);
}

//��ȣ�� ���ĺ� �� ���� �Լ�
int *code_sort(const char arr1[], int arr[], const int size) {
  for (int i = 0; i < 128; i++) {
    for (int j = 0; j < size; j++) {
      if (arr1[j] == i) {
        arr[i]++;
      }
    }
  }
  printf("[SORTED CODE]\nASCII :");

  for (int i = 0; i < 128; i++) {
    if (arr[i] != 0) {
      printf("%3c", i);
    }
  }
  printf("\nNUMBER:");
  for (int i = 0; i < 128; i++) {
    if (arr[i] != 0) {
      printf("%3d", arr[i]);
    }
  }

  printf("\n\n");
  return arr;
}

//�������� ��ȣ ���� �׽�Ʈ

double pi_test(int arr1[]) {
  int total_num = 0;
  int single_num = 0;

  for (int i = 0; i < 128; i++) {
    if (arr1[i] != 0) {
      single_num += arr1[i] * (arr1[i] - 1);
      total_num += arr1[i];
    }
  }
  double index_of_coincidence =
      (double)single_num / (total_num * (total_num - 1));
  printf("\n\nIndex of Coincidence : %f\n", index_of_coincidence);
  printf("\n\n");
  return index_of_coincidence;
}

char *multiple_change_formula(int index, int k) {
  char alph[26] = {
      0,
  }; //���ĺ� �迭 �ʱ�ȭ
  for (int i = 0; i < 26; i++) {
    alph[i] = 65 + i;
  } // A���� Z���� �ֱ�.

  char alph_c[26] = {
      0,
  };
  printf("Alphabet: ");
  for (int i = 0; i < 26; i++) {
    printf("%3c", alph[i]);
  }
  printf("\nChanged : ");
  for (int i = 0; i < 26; i++) {
    int last = ((alph[i] - 64) * index + k) % 26;
    if ( last !=0){
      alph_c[i] = last + 64;
    } else {
      alph_c[i] = last + 90;
    
    }
     printf("%3c", alph_c[i]);
  
    }
  printf("\n");
  
  return alph_c;
}

//ī�̻縣 ��ȣ��ȯ�Ͽ� return////////////////
void multiple_change(char *str,int length, int index, int k) {
  
  char str_changed[800] = {
      0,
  };
  printf("Norm   String : ");
  for (int i = 0; i < length; i++) {
    printf("%c", str[i]);
  }

  
for (int j = 1; j <= 26; j++) {
  
  printf("\n%02d    Changed : ",j);
 
    for (int i = 0; i < length; i++) {
    if (str[i]!=' ')
        {

        int last = ((str[i] - 64) * index + j) % 26;
      if (last != 0) {
        str_changed[i] = last + 64;
      } else {
        str_changed[i] = last + 90;
      }
      printf("%c", str_changed[i]);
    } else {
      printf(" ");
    };
  }
  printf("\n");

  }

}