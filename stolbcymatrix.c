#include <stdio.h>

int main() {
  // put your code here
    int n, m;
    int det1=0;
    scanf("%d %d", &n, &m); 
    int mas[m][n];
    for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      scanf("%d ",&mas[i][j]);
    }
    }
    for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        det1+=mas[i][j];
    }
       printf("%d ", det1);
       det1=0;
    }
  return 0;
}