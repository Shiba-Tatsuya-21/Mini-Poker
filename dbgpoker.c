#include <stdio.h>

int o1,o2,o3,o4,o5;

int max(int a, int b){
  if (a>=b)
    return a;
  else
    return b;
}



int max5(int valeur1, int valeur2, int valeur3, int valeur4, int valeur5){
  int valeur;

  o5 =max(max(max(max(valeur1,valeur2),valeur3),valeur4),valeur5);
  
  if (o5==valeur1)  
    max4(valeur2,valeur3,valeur4,valeur5);

  else if (o5==valeur2)  
    max4(valeur1,valeur3,valeur4,valeur5);

  else if (o5==valeur3)  
    max4(valeur2,valeur1,valeur4,valeur5);

  else if (o5==valeur4)  
    max4(valeur2,valeur3,valeur1,valeur5);

  else if (o5==valeur5)  
    max4(valeur2,valeur3,valeur4,valeur1);
    
 return o5;
}


int max4(int valeur1, int valeur2, int valeur3, int valeur4){
  o4=max(max(max(valeur1,valeur2),valeur3),valeur4);

  if (o4==valeur1)  
    max3(valeur2,valeur3,valeur4);

  else if (o4==valeur2)  
    max3(valeur1,valeur3,valeur4);

  else if (o4==valeur3)  
    max3(valeur2,valeur1,valeur4);

  else if (o4==valeur4)  
    max3(valeur2,valeur3,valeur1);


 return o4;
}

int max3(int valeur1, int valeur2, int valeur3){
  o3=max(max(valeur1,valeur2),valeur3);

  if (o3==valeur1)  
    max2(valeur2,valeur3);

  else if (o3==valeur2)  
    max2(valeur1,valeur3);

  else if (o3==valeur3)  
    max2(valeur2,valeur1);

 return o3;
}

int max2(int valeur1, int valeur2){
  o2=max(valeur1,valeur2);

  if (o2==valeur1)  
    o1=valeur2;
  else   
    o1=valeur1;

 return o2;
}

int paire(int a, int b, int c, int d, int e){
  return(a==b || a==c || a==d || a==e || b==c || b==d || b==e || c==d || c==e || d==e );
 
}
int valeurpaire(int a,int b, int c, int d, int e){
  int res;
  if(a==b)
    res=a;
  else if(b==c)
    res=b;
  else if( c==d)
    res=c;
  else if(d==e)
    res=d;
  return res;
}
int valeurmaxhorspaire(int a,int b, int c, int d, int e){
  int res;
 if(a==b)
   res=(e*100)+(d*10)+c;
  else if(b==c)
    res=(e*100)+(d*10)+a;
  else if( c==d)
    res=(e*100)+(b*10)+a;
  else if(d==e)
    res=(c*100)+(b*10)+a;
  return res;
}


int doublepaires(int a, int b, int c, int d, int e){
  return(a==b && c==d || a==b && d==e || b==c && d==e || b==c && e==a );
  }
int brelan(int a, int b, int c, int d, int e){
  return(a==b && a==c ||b==c && b==d || c==d && c==e || d==e && d==a || e==a && e==b);
	 }
int suite(int a, int b, int c, int d, int e){
  return(b==a+1 && c==b+1 && d==c+1 && e==d+1 ||a==2 && b==3 && c==4 && d==5 && e==14 || a==10 && b==11 && c==12 && d==13 && e==14);
}
int couleur(char a, char b, char c, char d, char e){
  return(a==b && b==c && c==d && d==e);
    }
int full( int a, int b, int c, int d, int e){
   return  ( (a==b && a==c && d==e && a!=d) ||(a==b && c==d && c==e && a!=d));
}
int carre(int a, int b, int c, int d, int e){
  return(a==b && a==c && a==d || b==c && b==d && b==e || c==d && c==e && c==a || d==e && d==a && d==b || e==a && e==b &e==c);
}
int quinteflush(int a, int b, int c, int d, int e, char f, char g, char h, char i , char j){
  return((b==a+1 && c==b+1 && d==c+1 && e==d+1) && (f==g && f==h && f==i && f==j && g==h && h==i && i==j)|| (a==2 && b==3 && c==4 && d==5 && e==14) && (f==g && f==h && f==i && f==j && g==h && h==i && i==j));
}

int main(int argc,char*argv[]){
  int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
  char cl1,cl2,cl3,cl4,cl5,cl6,cl7,cl8,cl9,cl10;
    scanf("%d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c", &c1, &cl1, &c2, &cl2, &c3, &cl3, &c4, &cl4, &c5, &cl5, &c6, &cl6, &c7, &cl7, &c8, &cl8, &c9, &cl9, &c10, &cl10);
   
    /* scanf("%d %d %d %d %d %d %d %d %d %d",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9,&c10);
     */
    if(c1==1)
      c1=14;
    if(c2==1)
      c2=14;
    if(c3==1)
      c3=14;
    if(c4==1)
      c4=14;
    if(c5==1)
      c5=14;
    if(c6==1)
      c6=14;
    if(c7==1)
      c7=14;
    if(c8==1)
      c8=14;
    if(c9==1)
      c9=14;
    if(c10==1)
      c10=14;
    
 
   int  player1=max5(c1,c2,c3,c4,c5);
    c1=o1;
    c2=o2;
    c3=o3;
    c4=o4;
    c5=o5;
   


   int  player2=max5(c6,c7,c8,c9,c10);
   c6=o1;
   c7=o2;
   c8=o3;
   c9=o4;
   c10=o5;


   if(quinteflush(c1,c2,c3,c4,c5,cl1,cl2,cl3,cl4,cl5)==1 || quinteflush(c6,c7,c8,c9,c10,cl6,cl7,cl8,cl9,cl10)==1)
     {
       /* printf("quinteflush\n");*/
       if(quinteflush(c1,c2,c3,c4,c5,cl1,cl2,cl3,cl4,cl5)==1 && quinteflush(c6,c7,c8,c9,c10,cl6,cl7,cl8,cl9,cl10)==1)
	 { if (c5>c10)    
	     printf("Player1 wins\n");
	   else if(c5<c10)
	     printf("Player2 wins\n");
	   else if (c5==c10 && c4==c9 && c3==c8 && c2==c7 && c1==c6)
	     printf("Draw\n");
	 }
       else 
	 {
	   if(quinteflush(c1,c2,c3,c4,c5,cl1,cl2,cl3,cl4,cl5)==1 && quinteflush(c6,c7,c8,c9,c10,cl6,cl7,cl8,cl9,cl10)==0)
	     printf("Player1 wins\n");
	   else if(quinteflush(c1,c2,c3,c4,c5,cl1,cl2,cl3,cl4,cl5)==0 && quinteflush(c6,c7,c8,c9,c10,cl6,cl7,cl8,cl9,cl10)==1)
	       printf("Player2 wins\n");
	 }
     }
   else 
     {
       if(carre(c1,c2,c3,c4,c5)==1 || carre(c6,c7,c8,c9,c10)==1)
	 {
	   /* printf("carre\n");*/
	   if(carre(c1,c2,c3,c4,c5)==1 && carre(c6,c7,c8,c9,c10)==1)
	    {
	      if(c3>c8)
		 printf("Player1 wins\n");
	       else 
		 printf("Player2 wins\n");
	  			 
	    }
	   else 
	    {
	      if(carre(c1,c2,c3,c4,c5)==1 && carre(c6,c7,c8,c9,c10)==0)
		 printf("Player1 wins\n");
	      else 
		 printf("Player2 wins\n");
	    }
	 }
       else 
	 {
	   if(full(c1,c2,c3,c4,c5)==1 || full(c6,c7,c8,c9,c10)==1)
       	     {
	       /*printf("full\n");*/
	       if(full(c1,c2,c3,c4,c5)==1 && full(c6,c7,c8,c9,c10)==1)
		 {
		   if(c3>c8 )
		     printf("Player1 wins\n");
		   else if(c3<c8 )
		     printf("Player2 wins\n");
		 }
	       else 
		 {
		   if(full(c1,c2,c3,c4,c5)==1 && full(c6,c7,c8,c9,c10)==0)
		     printf("Player1 wins\n");
		   else if(full(c1,c2,c3,c4,c5)==0 && full(c6,c7,c8,c9,c10)==1)
		     printf("Player2 wins\n");
		 }
	     }
	   else 
	     {
	       if(couleur(cl1,cl2,cl3,cl4,cl5)==1 || couleur(cl6,cl7,cl8,cl9,cl10)==1)
		 {
		   /*printf("couleur\n");*/
		   if(couleur(cl1,cl2,cl3,cl4,cl5)==1 && couleur(cl6,cl7,cl8,cl9,cl10)==1)
		     {
		       if(c5>c10 || c5==c10 && c4>c9 || c5==c10 && c4==c9 && c3>c8 || c5==c10 && c4==c9 && c3==c8 && c2>c7 || c5==c10 && c4==c9 && c3==c8 && c2==c7 && c1>c6)
			 printf("Player1 wins\n");
		       else if(c5<c10 || c5==c10 && c4<c9 || c5==c10 && c4==c9 && c3<c8 || c5==c10 && c4==c9 && c3==c8 && c2<c7 || c5==c10 && c4==c9 && c3==c8 && c2==c7 && c1<c6)
			 printf("Player2 wins\n");
		       else if(c5==c10 && c4==c9 && c3==c8 && c2==c7 && c1==c6)
			 printf("Draw\n");
		     }
		   else 
		     {
		       if(couleur(cl1,cl2,cl3,cl4,cl5)==1 && couleur(cl6,cl7,cl8,cl9,cl10)==0)
			 printf("Player1 wins\n");
		       else if(couleur(cl1,cl2,cl3,cl4,cl5)==0 && couleur(cl6,cl7,cl8,cl9,cl10)==1)
			 printf("Player2 wins\n");
		     }
		 }
	       else 
		 {
		   if(suite(c1,c2,c3,c4,c5)==1 || suite(c6,c7,c8,c9,c10)==1)
		     {
		       /*printf("suite\n");*/
		       if(suite(c1,c2,c3,c4,c5)==1 && suite(c6,c7,c8,c9,c10)==1)
			 {
			   if(c5==c10 && c4==c9 && c3==c8 && c2==c7 && c1==c6)
			     printf("Draw\n");
			   else if(c5>c10 || c4>c9)
			     printf("Player1 wins\n");
			   else if(c5<c10 || c4<c9)
			     printf("Player2 wins\n");
			 
			 }
		       else 
			 {
			   if(suite(c1,c2,c3,c4,c5)==1 && suite(c6,c7,c8,c9,c10)==0)
			     printf("Player1 wins\n");
			   else if(suite(c1,c2,c3,c4,c5)==0 && suite(c6,c7,c8,c9,c10)==1)
			     printf("Player2 wins\n");
			 }
		     }		   
		   else
		     {
		       if(brelan(c1,c2,c3,c4,c5)==1 || brelan(c6,c7,c8,c9,c10)==1)
			 {
			   /* printf("brelan\n");*/
			   if(brelan(c1,c2,c3,c4,c5)==1 && brelan(c6,c7,c8,c9,c10)==1)
			     {
			       if(c3>c8 )
				 printf("Player1 wins\n");
			       else if(c3<c8 )
				 printf("Player2 wins\n");
			   
			     }
			   else 
			     {
			       if(brelan(c1,c2,c3,c4,c5)==1 && brelan(c6,c7,c8,c9,c10)==0)
				 printf("Player1 wins\n");
			       else if(brelan(c1,c2,c3,c4,c5)==0 && brelan(c6,c7,c8,c9,c10)==1)
				 printf("Player2 wins\n");
			     }
			 }
		       else 
			 {
			   if(doublepaires(c1,c2,c3,c4,c5)==1 || doublepaires(c6,c7,c8,c9,c10)==1)
			     {
			       /*printf("doublepaire\n");*/
			       if(doublepaires(c1,c2,c3,c4,c5)==1 && doublepaires(c6,c7,c8,c9,c10)==1)
				 {
				   if(c2<c7 || c4<c9 || c2==c7 && c4==c9 && (c1<c6 || c3<c8 || c5<c10))
				     printf("Player2 wins\n");
				   else if(c2>c7 || c4>c9 || c2==c7 && c4==c9 && (c1>c6 || c3>c8 || c5>c10))
				     printf("Player1 wins\n");
				   else if ( c2==c7 && c4==c9 && (c1==c6 || c3==c8 || c5==c10))
				     printf("Draw\n");
				  }
			       else 
				 {
				  if(doublepaires(c1,c2,c3,c4,c5)==1 && doublepaires(c6,c7,c8,c9,c10)==0)
				    printf("Player1 wins\n");
				  else if(doublepaires(c1,c2,c3,c4,c5)==0 && doublepaires(c6,c7,c8,c9,c10)==1)
				    printf("Player2 wins\n");
				}
			     }
			   
			   else 
			     {
			       if(paire(c1,c2,c3,c4,c5)==1 || paire(c6,c7,c8,c9,c10)==1)
				 {
				   /*printf("paire\n");*/
				   if(paire(c1,c2,c3,c4,c5)==1 && paire(c6,c7,c8,c9,c10)==1)
				     {
				       if(valeurpaire(c1,c2,c3,c4,c5)>valeurpaire(c6,c7,c8,c9,c10))
					 printf("Player1 wins\n");
				       else if(valeurpaire(c1,c2,c3,c4,c5)<valeurpaire(c6,c7,c8,c9,c10))
					 printf("Player2 wins\n");
				       else if (valeurpaire(c1,c2,c3,c4,c5)==valeurpaire(c6,c7,c8,c9,c10))
					 {
					   if(valeurmaxhorspaire(c1,c2,c3,c4,c5)>valeurmaxhorspaire(c6,c7,c8,c9,c10))
					     printf("Player1 wins\n");
					   else if(valeurmaxhorspaire(c1,c2,c3,c4,c5)<valeurmaxhorspaire(c6,c7,c8,c9,c10))
					     printf("Player2 wins\n");
					   else if (valeurmaxhorspaire(c1,c2,c3,c4,c5)==valeurmaxhorspaire(c6,c7,c8,c9,c10))
					     printf("Draw\n");
					 }
				     }
				     else 
				     {
				       if(paire(c1,c2,c3,c4,c5)==1 && paire(c6,c7,c8,c9,c10)==0)
					 printf("Player1 wins\n");
				       else if(paire(c1,c2,c3,c4,c5)==0 && paire(c6,c7,c8,c9,c10)==1)
					 printf("Player2 wins\n");
				     		    
				     }
				 }
			       	    
			       else
				 {
				   /*printf("carteplushaute\n");*/
				   if(c5>c10 ||c5==c10 &&  c4>c9 ||c5==c10 && c4==c9 && c3>c8 ||c5== c10 && c4==c9 && c3==c8 && c2>c7 ||c5==c10 && c4==c9 && c3==c8 && c2==c7 &&  c1>c6)
				      printf("Player1 wins\n");
				   else if(c5<c10 ||c5==c10 &&  c4<c9 ||c5==c10 && c4==c9 && c3<c8 ||c5== c10 && c4==c9 && c3==c8 && c2<c7 ||c5==c10 && c4==c9 && c3==c8 && c2==c7 &&  c1<c6)
				     printf("Player2 wins\n");
			      	   else if(c5==c10 && c4==c9 && c3==c8 && c2==c7 && c1==c6)
				     printf("Draw\n");
				   			   
				 }
			     }
			 }		   
		     }
		 }
	     }
	 }
     }	 

return 0;
}
 
