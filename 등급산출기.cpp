#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,k,l;
	float sum;
    float student_number;
    float subject_score[5];
    char subject[6][10]={"국어", "수학", "영어", "한국사", "과학", "사회"};
    printf("전체 학생수 입력 : ");
    scanf("%f",&student_number);
    for(i=0;i<6;i++){
    	printf("%s 석차 : ",subject[i]);
    	scanf("%f",&subject_score[i]);
	}

	float grade_1=student_number*4/100;float grade_2=student_number*11/100;
	float grade_3=student_number*23/100;float grade_4=student_number*40/100;
	float grade_5=student_number*60/100;float grade_6=student_number*77/100;
	float grade_7=student_number*89/100;float grade_8=student_number*96/100;
	
	printf("\n----------\n");
	printf("등급컷(석차) :\n1 : %.1lf\n2 : %.1lf\n3 : %.1lf\n4 : %.1lf\n5 : %.1lf\n6 : %.1lf\n7 : %.1lf\n8 : %.1lf\n9 : %.0lf",grade_1,grade_2,grade_3,grade_4,grade_5,grade_6,grade_7,grade_8,student_number);
	printf("\n----------\n");
    for(j=0;j<6;j++)
	{
        if(subject_score[j]<=grade_8){
            if(subject_score[j]<=grade_7){
            	if(subject_score[j]<=grade_6){
            		if(subject_score[j]<=grade_5){
            			if(subject_score[j]<=grade_4){
            				if(subject_score[j]<=grade_3){
            					if(subject_score[j]<=grade_2){
            						if(subject_score[j]<=grade_1){
            							printf("%s : 1등급\n",subject[j]);
            							subject_score[j]=1;
									}else{
										printf("%s : 2등급\n",subject[j]);
										subject_score[j]=2;
									}
								}else{
									printf("%s : 3등급\n",subject[j]);
									subject_score[j]=3;
								}
							}else{
								printf("%s : 4등급\n",subject[j]);
								subject_score[j]=4;
							}
						}else{
							printf("%s : 5등급\n",subject[j]);
							subject_score[j]=5;
						}
					}else{
						printf("%s : 6등급\n",subject[j]);
						subject_score[j]=6;
					}
				}else{
					printf("%s : 7등급\n",subject[j]);
					subject_score[j]=7;
				}
			}else{
				printf("%s : 8등급\n",subject[j]);
				subject_score[j]=8;
			}
        }else{
        	printf("%s : 9등급\n",subject[j]);
			subject_score[j]=9;
		}
    }
    
    for(l=0;l<6;l++)
    {
    	sum=sum+subject_score[l];	
	}
	printf("등급 평균 : %.2lf",sum/6);
	printf("\n----------\n");
    
    system("pause");
    return 0;
}
