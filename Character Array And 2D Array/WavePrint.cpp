void wavePrint(int **input, int nRows, int mCols)
{
    for(int j=0 ; j<mCols ; j++){
        if(j%2==0){
            for(int i=0 ; i<nRows ; i++){ 
               cout<<input[i][j]<<" ";
            }
        }
        else{
            int i;
            for(i=nRows-1 ; i>=0 ; i--){ 
               cout<<input[i][j]<<" ";
            }
        }
    }  
}