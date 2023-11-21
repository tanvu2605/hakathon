#include <stdio.h>
#include<stdlib.h>
int main(){
    int row,col;
    printf("Nhap so dong va so cot cua mang 2 chieu:");
    scanf("%d%d", &row, &col);
    int numbers[row][col];
    int max =numbers[0][0];
    int min =numbers[0][0];
    int choice;
    int sum =0;
    int flag =0;
    do{
  printf("\n                   Menu");
 printf("\n1. nhap gia tri cac phan tu cua mang");
 printf("\n2. in gia tri mang theo ma tran");
 printf("\n3. tim so luong phan tu le chia het cho 5 trong mang");
 printf("\n4. in cac phan tu lon nhat,nho nhat nam tren duong bien, duong cheo chinh, duong cheo phu");
 printf("\n5. su dung thuat toan sap xep lua chon cac phan tu giam dan theo dong cua mang");
 printf("\n6. tong cac phan tu la so nguyen to");
 printf("\n7. su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan");
 printf("\n8. nhap gia tri mang 1 chieu gom n phan tu va chi so cot muon chen vao mang thuc hien chen vao mang 2 chieu");
 printf("\n9. thoat");
 printf("\nnhap lua chon can nhap: ");
 scanf("%d", &choice);
 switch(choice){
  case 1:
   for (int i = 0; i < row; i++){
          for (int j = 0; j < col; j++){
              printf("numbers[%d][%d]=",i,j);
              scanf("%d",&numbers[i][j]);
           }
       }
      break;
  case 2:
   for(int i = 0; i < row ; i++){
       for (int j=0; j < col; j++){
          printf("%d\t" , numbers[i][j]);
        }
        printf("\n");
      }
     break;
    case 3:
     for (int i = 0; i < row; i++){
          for(int j = 0; j < col; j++){
              if (numbers[i][j] %2 != 0 && numbers[i][j] % 5 == 0){
               sum += numbers[i][j];
              }
          }
      }
      printf("tong cac so le chia het cho 5 trong mang la: %d\n", sum);
      break;
    case 4:
                for (int i = 0; i < row; ++i) {
                    for (int j = 0; j < col; ++j) {
                        if (i == 0 || j == 0 || i == row - 1 || j == col - 1) {
                            if (numbers[i][j] > max) {
                                max = numbers[i][j];
                            }
                        }
                        if (i == j) {
                            if (numbers[i][j] > max) {
                                max = numbers[i][j];
                            }
                        }
                        if (j == col - 1 - i) {
                            if (numbers[i][j] > max) {
                                max = numbers[i][j];
                            }
                        }
                    }
                }
                printf("gia tri lon nhat nam tren duong bien la:%d\n", max);
                break;
          case 5:
  			for (int i = 0; i < row; i++){
                    for (int j = 0; j < col - 1; j++){
                        for (int k = j + 1; k < col; k++){
                            if (numbers[i][j] < numbers[i][k]){
                                int temp = numbers[i][j];
                                numbers[i][j] = numbers[i][k];
                                numbers[i][k] = temp;
                            }
                        }
                    }
                }
                for (int i = 0; i < row; i++){
                    for (int j = 0; j < col; j++){
                        printf("%d\t", numbers[i][j]);
                    }
                    printf("\n");
                }
                break;
        case 6:
        	for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    flag = 0;
                    for (int k = 2; k <= numbers[i][j] / 2; k++) {
                        if (numbers[i][j] % k == 0) {
                        	flag = 1;
                            break;
                            }
                        }
                        if (flag == 0 && numbers[i][j] > 1) {
                            sum += numbers[i][j];
                        }
                    }
                }
                printf("tong cac phan tu so nguyen to la:%d\n", sum);
                break;
		}
	}while(choice != 9);}


