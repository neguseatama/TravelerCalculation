/*
 C言語による旅人算
 https://neguse-atama.hatenablog.com
*/
#include<stdio.h>
int main(void)
{
    int number1,number2,distance1,distance2,distance3,speed1,speed2,speed3,speed4,again;
    do{
        printf("旅人算を計算します。\n");
        printf("1.出会い算\n2.追いつき算\n");
        printf("以上から1,2のどちらかを選び、入力してください:");
        scanf("%d",&number1);
        if(number1==1){
            printf("では、旅人算(出会い算)を計算します。\n");
            printf("1.2地点の距離と2つの物（人）の速さを入力\n2.出会った時間と2つの物（人）の速さを入力\n");
            printf("以上から1,2のどちらかを選び、入力してください:");
            scanf("%d",&number2);
            if(number2==1){
                printf("2地点の距離と2つの物（人）の速さを入力してください。\nただし入力時の単位に関しては、あらかじめ揃えられているものとしています。\n");
                printf("2地点の距離:");  scanf("%d",&distance1);
                printf("1人目の速さ:");  scanf("%d",&speed1);
                printf("2人目の速さ:");  scanf("%d",&speed2);
                speed3=speed1+speed2;
                printf("2つの物（人）が出会うまでの時間は%dです。\n",distance1/(speed1+speed2));
            }else if(number2==2){
                printf("出会った時間と2つの物（人）の速さを入力してください。\nただし入力時の単位に関しては、あらかじめ揃えられているものとしています。\n");
                printf("出会った時間:");  scanf("%d",&distance2);
                printf("1つ目の速さ:");  scanf("%d",&speed1);
                printf("2つ目の速さ:");  scanf("%d",&speed2);
                speed3=speed1+speed2;
                printf("2地点の距離は%dです。\n",distance2*speed3);
            }else if(number2!=1 && number2!=2){
                printf("1,2以外の数を入力しないでください。\n");
            }
        }else if(number1==2){
            printf("では、旅人算(追いつき算)を計算します。\n");
            printf("1.2つの物（人）の距離と2つの物（人）の速さを入力\n2.追いついた時間と2つの物（人）の速さを入力\n");
            printf("以上から1,2のどちらかを選び、入力してください:");
            scanf("%d",&number2);
            if(number2==1){
                printf("2つの物（人）の距離と2つの物（人）の速さを入力してください。\nただし入力時の単位に関しては、あらかじめ揃えられているものとしています。\n");
                printf("2つの物（人）の距離:");  scanf("%d",&distance1);
                printf("1つ目の速さ:");  scanf("%d",&speed1);
                printf("2つ目の速さ:");  scanf("%d",&speed2);
                if(speed1>speed2){
                    speed4=speed1-speed2;
                }else if(speed1<speed2){
                    speed4=speed2-speed1;
                }
                printf("追いつくまでの時間は%dです。\n",distance1/speed4);
            }else if(number2==2){
                printf("追いついた時間と2つの物（人）の速さを入力してください。\nただし入力時の単位に関しては、あらかじめ揃えられているものとしています。\n");
                printf("追いついた時間:");  scanf("%d",&distance3);
                printf("1つ目の速さ:");  scanf("%d",&speed1);
                printf("2つ目の速さ:");  scanf("%d",&speed2);
                if(speed1>speed2){
                    speed4=speed1-speed2;
                }else if(speed1<speed2){
                    speed4=speed2-speed1;
                }
                printf("2地点の距離は%dです。\n",distance3*speed4);
            }else if(number2!=1 && number2!=2){
                printf("1,2以外の数を入力しないでください。\n");
            }
        }else if(number1!=1 && number1!=2){
            printf("1,2以外の数を入力しないでください。\n");
        }
        printf("計算をやり直しますか。・・・(0)はい (1)いいえ:");
        scanf("%d",&again);
    }while(again==0);
    return (0);
}