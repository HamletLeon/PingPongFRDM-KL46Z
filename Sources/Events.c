/* ###################################################################
-**     Filename    : Events.c
**     Project     : Ping Pong Leon
**     Processor   : MKL46Z256VMC4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-06-06, 07:20, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */

#include "Microcontrolador.h"
#include "Events.h"
#include "stdio.h"
#include "stdlib.h"

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MKL46Z256MC4]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT(void)
{
	
}

/*
** ===================================================================
**     Event       :  Matriz_OnCounterRestart (module Events)
**
**     Component   :  Matriz [TimerUnit_LDD]
*/
/*!
**     @brief
**         Called if counter overflow/underflow or counter is
**         reinitialized by modulo or compare register matching.
**         OnCounterRestart event and Timer unit must be enabled. See
**         [SetEventMask] and [GetEventMask] methods. This event is
**         available only if a [Interrupt] is enabled.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. The pointer passed as
**                           the parameter of Init method.
*/
/* ===================================================================*/
const int mati[8][16]={		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
							{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
							{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
};
int mat[8][16]={		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
};
int blank[8][16]={		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},			
};
const int gameover[8][74]={	{0,1,1,1,1,1,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1,1,1,0,0,1,1,1,1,0,0,1,0,0,0,0,0,1,0,0,1,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{1,0,1,1,1,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{1,0,0,0,0,1,0,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{1,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{1,0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
							{0,1,1,1,1,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,1,1,1,1,0,0,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},				
};
int fil1[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int fil2[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int fil3[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int fil4[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int fil5[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int fil6[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int fil7[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int fil8[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int row=0,column=0;
int p=0,c=0;
int col=1,fil=0;
int i=0,j=0,r=0,h=0;
int d=1,x=1;
int y=6,a=6;
int cont=0,z=0;
int s=1,f=0,colum=0,t=0,o=0,e=0,fs=0,fl=0,fr=0,rap=0;
void resc()
{
	c1_PutVal(1);
	c2_PutVal(1);
	c3_PutVal(1);
	c4_PutVal(1);
	c5_PutVal(1);
	c6_PutVal(1);
	c7_PutVal(1);
	c8_PutVal(1);
	c9_PutVal(1);
	c10_PutVal(1);
	c11_PutVal(1);
	c12_PutVal(1);
	c13_PutVal(1);
	c14_PutVal(1);
	c15_PutVal(1);
	c16_PutVal(1);
	return;
}
void resf()
{
	f1_PutVal(0);
	f2_PutVal(0);
	f3_PutVal(0);
	f4_PutVal(0);
	f5_PutVal(0);
	f6_PutVal(0);
	f7_PutVal(0);
	f8_PutVal(0);
	return;
}
void Matriz_OnCounterRestart(LDD_TUserData *UserDataPtr)
{
 resf();
 resc();
 switch(row)
 {
 case 0:
	 f1_PutVal(1);
	 break;
 case 1:
	 f2_PutVal(1);
	 break;
 case 2:
	 f3_PutVal(1);
	 break;
 case 3:
	 f4_PutVal(1);
	 break;
 case 4:
	 f5_PutVal(1);
	 break;
 case 5:
	 f6_PutVal(1);
	 break;
 case 6:
	 f7_PutVal(1);
	 break;
 case 7:
	 f8_PutVal(1);
	 break;
 }
 c1_PutVal(!(mat[row][0]));
 c2_PutVal(!(mat[row][1]));
 c3_PutVal(!(mat[row][2]));
 c4_PutVal(!(mat[row][3]));
 c5_PutVal(!(mat[row][4]));
 c6_PutVal(!(mat[row][5]));
 c7_PutVal(!(mat[row][6]));
 c8_PutVal(!(mat[row][7]));
 c9_PutVal(!(mat[row][8]));
 c10_PutVal(!(mat[row][9]));
 c11_PutVal(!(mat[row][10]));
 c12_PutVal(!(mat[row][11]));
 c13_PutVal(!(mat[row][12]));
 c14_PutVal(!(mat[row][13]));
 c15_PutVal(!(mat[row][14]));
 c16_PutVal(!(mat[row][15]));
 if(row==7 && (fr==1||fr==2)){if(fr==2){x=8;fil=0;d=1;y=6;a=6;cont=0;z=0;}else{d=1;x=1;y=6;a=6;cont=0;z=0;t=0;fr=0;}}
 if(x==7 && p==3 && row==0 && fr==0){for(row=0;row<=7;row++){for(column=0;column<=15;column++){if(c==0){mat[row][column]=blank[row][column];fr=2;}
 else{mat[row][column]=mati[row][column];fr=1;}}}}
 row++;
 row=(row<=7)?row:0;
 column=15?0:column; 
}

/*
** ===================================================================
**     Event       :  Microcontrolador_OnNMIINT (module Events)
**
**     Component   :  Microcontrolador [MKL46Z256LL4]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/

void Microcontrolador_OnNMIINT(void)
{

}

/*
** ===================================================================
**     Event       :  Procesamiento_OnCounterRestart (module Events)
**
**     Component   :  Procesamiento [TimerUnit_LDD]
*/
/*!
**     @brief
**         Called if counter overflow/underflow or counter is
**         reinitialized by modulo or compare register matching.
**         OnCounterRestart event and Timer unit must be enabled. See
**         [SetEventMask] and [GetEventMask] methods. This event is
**         available only if a [Interrupt] is enabled.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. The pointer passed as
**                           the parameter of Init method.
*/
/* ===================================================================*/
void Procesamiento_OnCounterRestart(LDD_TUserData *UserDataPtr)
{	
	i=rand() % 3;
	j=rand() % 2;
	r=rand() % 7;
	h=rand() % (12 - 3 + 1) + 3;
	if(t==0){p=i;c=j;fil=r;col=7;t=1;}
	if(x==8 && p==3){
		if(colum!=0){for(s=1;s<=15;s++){
			fil1[s-1]=fil1[s];
			fil2[s-1]=fil2[s];
			fil3[s-1]=fil3[s];
			fil4[s-1]=fil4[s];
			fil5[s-1]=fil5[s];
			fil6[s-1]=fil6[s];
			fil7[s-1]=fil7[s];
			fil8[s-1]=fil8[s];
		}}
		s=15?0:s;
		fil1[15]=gameover[0][colum];
		fil2[15]=gameover[1][colum];
		fil3[15]=gameover[2][colum];
		fil4[15]=gameover[3][colum];
		fil5[15]=gameover[4][colum];
		fil6[15]=gameover[5][colum];
		fil7[15]=gameover[6][colum];
		fil8[15]=gameover[7][colum];
		for(f=0;f<=15;f++){
			mat[0][f]=fil1[f];
			mat[1][f]=fil2[f];
			mat[2][f]=fil3[f];
			mat[3][f]=fil4[f];
			mat[4][f]=fil5[f];
			mat[5][f]=fil6[f];
			mat[6][f]=fil7[f];
			mat[7][f]=fil8[f];
		}
		f=15?0:f;
		colum++;
		if(colum==74){x=7;colum=0;}
	}
	if(cont==0){Procesamiento_SetPeriodTicks("",65536);}
	switch(p){
	case 0:
		if(c==1){
			mat[fil][col]=1;
			if(col!=14)mat[fil+1][col+1]=0;
			fil--;
			col--;
			if(col==0){
				if(fil==(d+1) || ((fil==(d-2)||fil==(d-3)) && fil==-1)){fil=fil+2;col=col+2;c=0;}else{
					if((fil>=(d-1)||fil==(d-2)) && fil<=(d+1) && fil<=8 && fil>=-1)
						{col=col+2;p=1;c=0;}}}
		}
		else{
			mat[fil][col]=1;
			if(col!=1 && fil!=0)mat[fil-1][col-1]=0;
			fil++;
			col++;
			if(col==15){
				if(fil==(a-1) ||((fil==(a+2)||fil==(a+3)) && fil==8)){fil=fil-2;col=col-2;c=1;}else{
					if(fil>=(a-1) && (fil<=(a+1)||fil==(a+2)) && fil<=8 && fil>=-1)
						{col=col-2;p=1;c=1;}}}
		}
		break;
	case 1:
		if(c==1){
			mat[fil][col]=1;
			if(col!=14)mat[fil-1][col+1]=0;
			fil++;
			col--;
			if(col==0){
				if(fil==(d-1) || ((fil==(d+2)||fil==(d+3)) && fil==8)){fil=fil-2;col=col+2;c=0;}else{
					if(fil>=(d-1) && (fil<=(d+1)||fil==(d+2)) && fil<=8 && fil>=-1)
						{col=col+2;p=0;c=0;}}}
		}
		else{
			mat[fil][col]=1;
			if(col!=1)mat[fil+1][col-1]=0;
			fil--;
			col++;
			if(col==15){
				if(fil==(a+1) || ((fil==(a-2)||fil==(a-3)) && fil==-1)){fil=fil+2;col=col-2;c=1;}else{
					if((fil>=(a-1)||fil==(a-2)) && fil<=(a+1) && fil<=8 && fil>=-1)
						{col=col-2;p=0;c=1;}}}
		}
		break;
	case 2:
		if(c==1){
			mat[fil][col]=1;
			if(col!=14)mat[fil][col+1]=0;
			col--;
			if(col==0 && fil>=(d-1) && fil<=(d+1) && fil<=8 && fil>=-1){c=0;p=i;if(p==1||p==2){if(p==2){col=col+2;;}else{col=col+2;fil=fil-1;}}
			else{col=col+2;fil=fil+1;}}
		}
		else{
			mat[fil][col]=1;
			if(col!=1)mat[fil][col-1]=0;
			col++;
			if(col==15 && fil>=(a-1) && fil<=(a+1) && fil<=8 && fil>=-1){c=1;p=i;if(p==0||p==2){if(p==2){col=col-2;;}else{col=col-2;fil=fil-1;}}
			else{col=col-2;fil=fil+1;}}
		}
		break;
	}
	if((col<-1||col>16) && col!=20){
	 		if(col<0){
	 			switch(o){
	 			case 0:
	 				Vida1_J1_PutVal(0);
	 				break;
	 			case 1:
	 				Vida2_J1_PutVal(0);
	 				break;
	 			case 2:
	 				Vida3_J1_PutVal(0);
	 				break;
	 			}o++;}
	 		else{
	 			switch(e){
	 			case 0:
	 				Vida1_J2_PutVal(0);
	 				break;
	 			case 1:
	 				Vida2_J2_PutVal(0);
	 				break;
	 			case 2:
	 				Vida3_J2_PutVal(0);
	 				break;
	 			}e++;}
	 		if(o==3||e==3){Procesamiento_SetPeriodTicks("",32768);p=3;col=20;x=7;d=1;a=6;y=-1;c=0;}else{p=3;x=7;c=1;col=20;}}
	if(col==14 && c==0){
		cont++;
		if(cont==10){if(z==0)Procesamiento_SetPeriodTicks("",57344);z=1;}
		if(cont==18){if(z==1)Procesamiento_SetPeriodTicks("",49152);z=2;}
		if(cont==26){if(z==2)Procesamiento_SetPeriodTicks("",40960);z=3;}
		if(cont==38){if(z==3)Procesamiento_SetPeriodTicks("",32768);z=4;}
		if(cont==50){if(z==4)Procesamiento_SetPeriodTicks("",24576);z=5;}
		if(cont==70){if(z==5)Procesamiento_SetPeriodTicks("",16384);z=6;}
		if(cont==94){if(z==6)Procesamiento_SetPeriodTicks("",9000);z=7;}
		if(cont==130){if(z==7)Procesamiento_SetPeriodTicks("",5000);z=8;}
	}

	if(fil==8 && p==0 && c==0 && col!=15){p=1;fil=fil-2;}
	if(fil==8 && p==1 && c==1 && col!=0){p=0;fil=fil-2;}
	if(fil==-1 && p==0 && c==1 && col!=15){p=1;fil=fil+2;}
	if(fil==-1 && p==1 && c==0 && col!=0){p=0;fil=fil+2;}
}

/*
** ===================================================================
**     Event       :  UP1_OnInterrupt (module Events)
**
**     Component   :  UP1 [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void UP1_OnInterrupt(void)
{
	if(x>0 && d!=1 && p!=3){
				for(x=d;x>(d-3);x--)
				{
					mat[x][0]=1;
					if(d<7){
						mat[d+1][0]=0;
					}
				}
				d--;
				if(d>1){x=d;}
			}
}

/*
** ===================================================================
**     Event       :  DOWN1_OnInterrupt (module Events)
**
**     Component   :  DOWN1 [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void DOWN1_OnInterrupt(void)
{
	if(x<7 && p!=3){
		for(x=d;x<(d+3);x++)
				{
					mat[x][0]=1;
					if(d>0){
						mat[d-1][0]=0;
					}
				}
				d++;
				if(d<6){x=d;}	
	}
}

/*
** ===================================================================
**     Event       :  UP2_OnInterrupt (module Events)
**
**     Component   :  UP2 [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void UP2_OnInterrupt(void)
{
	if(y>0 && p!=3){
				for(y=a;y>(a-3);y--)
				{
					mat[y][15]=1;
					if(a<7){
						mat[a+1][15]=0;
					}
				}
				a--;
				if(a>1){y=a;}
			}
}

/*
** ===================================================================
**     Event       :  DOWN2_OnInterrupt (module Events)
**
**     Component   :  DOWN2 [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void DOWN2_OnInterrupt(void)
{
	if(y<7 && a!=6 && p!=3){
		for(y=a;y<(a+3);y++)
				{
					mat[y][15]=1;
					if(a>0){
						mat[a-1][15]=0;
					}
				}
				a++;
				if(a<6){y=a;}
	}
}

/*
** ===================================================================
**     Event       :  IFsh1_OnWriteEnd (module Events)
**
**     Component   :  IFsh1 [IntFLASH]
*/
/*!
**     @brief
**         Event is called after a write operation to FLASH memory is
**         finished (except [SetPage]). This event is available only if
**         an [Interrupt service/event] is selected.
*/
/* ===================================================================*/
void IFsh1_OnWriteEnd(void)
{
  /* Write your code here ... */
}

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
