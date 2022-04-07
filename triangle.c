main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int j=i;j>0;j--){
            if (i%2==0){printf("+");}
            else {printf("*");}
        }
    printf("\n");
    }
}
