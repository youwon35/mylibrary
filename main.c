#include "YuwonFunction.h"
#include <stdio.h>

int main() {

  char *code = "IW*CIW@G*L&H&L(ASN*AE)U&V$CNPCSIW*EDDSA@LTCIH!(A#CV%EIW*!#HA*"
               "IW@NTAEHR$CI(CJTS!CSHDS#SIW@SDVW@RG$HH*SIW*W)JH@(CUGDCIDUIW*&"
               "AIPGWTUATLS$LCIW*DIWTG!#HATWTRG$HH*SQTU$G*IW@S)DGHWTRAPBDG*S%"
               "EIW@WDB@HIG@IRWWXH&CV+XHWVG*LLXIWW#HEG)VG@HHI#AAEGTH@CIANW*L!"
               "HQ%I!L)DAANR)BTIB)K#CVXC#IHDGQXILXIWIW@VA*&B!CSIWTHE**S$UA(";
  
char *code1 = "MQTSWXSV  E VMZEP EWTMVERX XS TYFPMG LSRSVW.";
  //code_sort(code, sorted, strlen(code));
  //pi_test(sorted);
  multiple_change(code1,strlen(code1),1, 0);

  return 0;
}
