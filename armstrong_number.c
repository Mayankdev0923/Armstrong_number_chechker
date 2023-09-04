
#include<stdio.h>
#include<math.h>

  int main() {
    
    
     printf("Enter your number : ");
     int n;
     scanf("%d",&n);
     
     int ten_arab     = n/10000000000;
     int arab         = n/1000000000 - 10*ten_arab;
     int ten_crore    = n/100000000 - 10*arab          - 100*ten_arab;
     int crore        = n/10000000 - 10*ten_crore     - 100*arab        - 1000*ten_arab;
     int ten_lakh     = n/1000000 - 10*crore        - 100*ten_crore    - 1000*arab         - 10000*ten_arab;
     int lakh         = n/100000 - 10*ten_lakh     - 100*crore        - 1000*ten_crore    - 10000*arab         - 100000*ten_arab;
     int ten_thousand = n/10000 - 10*lakh         - 100*ten_lakh     - 1000*crore        - 10000*ten_crore    - 100000*arab       - 1000000*ten_arab; 
     int thousand     = n/1000 - 10*ten_thousand - 100*lakh         - 1000*ten_lakh     - 10000*crore        - 100000*ten_crore  - 1000000*arab       - 10000000*ten_arab;
     int hundred      = n/100 - 10*thousand     - 100*ten_thousand - 1000*lakh         - 10000*ten_lakh     - 100000*crore      - 1000000*ten_crore  - 10000000*arab      - 100000000*ten_arab;
     int tens        = n/10 - 10*hundred      - 100*thousand     - 1000*ten_thousand - 10000*lakh         - 100000*ten_lakh  - 1000000*crore       - 10000000*ten_crore - 100000000*arab         - 1000000000*ten_arab;
     int ones         = n/1 - 10*tens        - 100*hundred      - 1000*thousand     - 10000*ten_thousand - 100000*lakh     - 1000000*ten_lakh     - 10000000*crore     - 100000000*ten_crore    - 1000000000*arab       - 10000000000*ten_arab;
     
     if (ones==0) {
        printf("no number entered");
     }
     
     else if (tens==0 && hundred==0 && thousand==0 && ten_thousand==0 && lakh==0 && ten_lakh==0 && crore==0 && ten_crore==0 && arab==0 && ten_arab==0 ) {
       if (pow(ones,1)==n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
     else if (hundred==0 && thousand==0 && ten_thousand==0 && lakh==0 && ten_lakh==0 && crore==0 && ten_crore==0 && arab==0 && ten_arab==0 ) {
       if (pow(tens,2)+pow(ones,2)==n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
     else if (thousand==0 && ten_thousand==0 && lakh==0 && ten_lakh==0 && crore==0 && ten_crore==0 && arab==0 && ten_arab==0 ) {
       if (pow(hundred,3)+pow(tens,3)+pow(ones,3) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     else if ( ten_thousand==0 && lakh==0 && ten_lakh==0 && crore==0 && ten_crore==0 && arab==0 && ten_arab==0 ) {
       if (pow(thousand,4)+pow(hundred,4)+pow(tens,4)+pow(ones,4) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
     else if ( lakh==0 && ten_lakh==0 && crore==0 && ten_crore==0 && arab==0 && ten_arab==0 ) {
       if (pow(ten_thousand,5)+pow(thousand,5)+pow(hundred,5)+pow(tens,5)+pow(ones,5) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
     else if (ten_lakh==0 && crore==0 && ten_crore==0 && arab==0 && ten_arab==0 ) {
       if (pow(lakh,6)+pow(ten_thousand,6)+pow(thousand,6)+pow(hundred,6)+pow(tens,6)+pow(ones,6) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
     else if ( crore==0 && ten_crore==0 && arab==0 && ten_arab==0 ) {
       if (pow(ten_lakh,7)+pow(lakh,7)+pow(ten_thousand,7)+pow(thousand,7)+pow(hundred,7)+pow(tens,7)+pow(ones,7) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
         }
     }
       
     else if ( ten_crore==0 && arab==0 && ten_arab==0 ) {
       if (pow(crore,8)+pow(ten_lakh,8)+pow(lakh,8)+pow(ten_thousand,8)+pow(thousand,8)+pow(hundred,8)+pow(tens,8)+pow(ones,8) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
     else if ( arab==0 && ten_arab==0 ) {
       if (pow(ten_crore,9)+pow(crore,9)+pow(ten_lakh,9)+pow(lakh,9)+pow(ten_thousand,9)+pow(thousand,9)+pow(hundred,9)+pow(tens,9)+pow(ones,9) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
     else if ( ten_arab==0 ) {
       if (pow(arab,10)+pow(ten_crore,10)+pow(crore,10)+pow(ten_lakh,10)+pow(lakh,10)+pow(ten_thousand,10)+pow(thousand,10)+pow(hundred,10)+pow(tens,10)+pow(ones,10) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
      else  {
       if (pow(ten_arab,11)+pow(arab,11)+pow(ten_crore,11)+pow(crore,11)+pow(ten_lakh,11)+pow(lakh,11)+pow(ten_thousand,11)+pow(thousand,11)+pow(hundred,11)+pow(tens,11)+pow(ones,11) == n) {
         printf("\nGiven number is an armstrong number");
       }
       else {
         printf("\nGiven number is not an armstrong number");
       }
     }
     
     printf("\n_______________________________________________________________\n\n");
     
     main();
     
     return 0;
  } 