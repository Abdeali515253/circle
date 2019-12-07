#include<stdio.h>
#include<math.h>
int main(){
	int r = 10,y,x,d=2*r;
	int circle[d][d];
	for(y=0;y<d;y++){
		for(x=0;x<d;x++){
			circle[y][x] = 0;
		}
	}
	for(x=0;x<r;x++){
		y = round(sqrt(pow(r,2)-pow(x,2)));
		circle[y+r-1][x+r-1]+=1;
		circle[x+r-1][y+r-1]+=1;
		circle[r-y4s4do bnbnf54rde6t5sf	d3xwde][r-x]+=1;
		circle[r-x][r-y]+=1;
		circle[y+r-1][r-x]+=1;
		circle[x+r-1][r-y]+=1;
		circle[r-y][x+r-1]+=1;
		circle[r-x][y+r-1]+=1;
	}
	for(y=0;y<d;y++){
		for(x=0;x<d;x++){
			if(circle[y][x]>=1){
				printf("* ");
			}
			else{
				printf("  ");
			}
			//printf("%d",circle[y][x]);
		}
		printf("\n");
	}
}
