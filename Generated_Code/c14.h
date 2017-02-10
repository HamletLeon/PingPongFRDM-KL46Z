/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : c14.h
**     Project     : Ping Pong Leon
**     Processor   : MKL46Z256VMC4
**     Component   : BitIO
**     Version     : Component 02.086, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-06-15, 06:00, # CodeGen: 33
**     Abstract    :
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
**     Settings    :
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       73            |  LCD_P20/ADC0_SE14/TSI0_CH13/PTC0/EXTRG_IN/audioUSB_SOF_OUT/CMP0_OUT/I2S0_TXD0
**             ----------------------------------------------------
**
**         Port name                   : PTC
**
**         Bit number (in port)        : 0
**         Bit mask of the port        : 0x0001
**
**         Initial direction           : Output (direction can be changed)
**         Safe mode                   : no
**         Initial output value        : 1
**         Initial pull option         : off
**
**         Port data register          : GPIOC_PDOR [0x400FF080]
**         Port control register       : GPIOC_PDDR [0x400FF094]
**
**         Optimization for            : speed
**     Contents    :
**         SetDir - void c14_SetDir(bool Dir);
**         GetVal - bool c14_GetVal(void);
**         PutVal - void c14_PutVal(bool Val);
**         ClrVal - void c14_ClrVal(void);
**         SetVal - void c14_SetVal(void);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file c14.h
** @version 01.00
** @brief
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
*/         
/*!
**  @addtogroup c14_module c14 module documentation
**  @{
*/         

#ifndef __c14_H
#define __c14_H

/* MODULE c14. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "BitIoLdd25.h"

#include "Microcontrolador.h"

#ifdef __cplusplus
extern "C" {
#endif 




/*
** ===================================================================
**     Method      :  c14_SetDir (component BitIO)
**     Description :
**         This method sets direction of the component.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Dir        - Direction to set (FALSE or TRUE)
**                      FALSE = Input, TRUE = Output
**     Returns     : Nothing
** ===================================================================
*/
#define c14_SetDir(Dir) (BitIoLdd25_SetDir(BitIoLdd25_DeviceData, (Dir)))

/*
** ===================================================================
**     Method      :  c14_GetVal (component BitIO)
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pin and returns it
**           b) direction = Output : returns the last written value
**     Parameters  : None
**     Returns     :
**         ---             - Input value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)

** ===================================================================
*/
#define c14_GetVal() (BitIoLdd25_GetVal(BitIoLdd25_DeviceData))

/*
** ===================================================================
**     Method      :  c14_PutVal (component BitIO)
**     Description :
**         This method writes the new output value.
**         Note: If direction is set to input the method code may not
**               work properly.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val             - Output value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)
**     Returns     : Nothing
** ===================================================================
*/
#define c14_PutVal(Val) (BitIoLdd25_PutVal(BitIoLdd25_DeviceData, (Val)))

/*
** ===================================================================
**     Method      :  c14_ClrVal (component BitIO)
**     Description :
**         This method clears (sets to zero) the output value.
**         Note: If direction is set to input the method code may not
**               work properly.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define c14_ClrVal() (BitIoLdd25_ClrVal(BitIoLdd25_DeviceData))

/*
** ===================================================================
**     Method      :  c14_SetVal (component BitIO)
**     Description :
**         This method sets (sets to one) the output value.
**         Note: If direction is set to input the method code may not
**               work properly.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define c14_SetVal() (BitIoLdd25_SetVal(BitIoLdd25_DeviceData))

/* END c14. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __c14_H */
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
