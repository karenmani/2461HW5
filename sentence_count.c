#include "sentence_count.h"

void sentence_count(char* input_file_name, char* output_file_name)
{
  int lineNum;
  char ch;
  
  int exc=0;
  int pd=0;
  int ques=0;
  
  FILE *inputFile;
  FILE *outputFile;
  
  inputFile = fopen(input_file_name);
  ch = fgetc(inputFile);
  
  while(ch!=EOF) 
  {
    if(ch=='.')
    {
      pd++;
      printf("Number of statements is %d\n", pd);
    }
    else if(ch=='!')
    {
      exc++;
      printf("Number of exclamations is %d\n", exc);
    }
    else if(ch=='?')
    {
      ques++;
      printf("Number of questions is %d\n", ques);
    }
    
   fclose(input_file_name);
   sum = pd + exc + ques;
   fprintf(outputFile, "Number of statements is %d \n Number of exclamations is %d \n Number of questions is %d\n", pd, exc, ques);
   fprintf(outputFile, "Total: %d\n", sum);
  }
}
