/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : McuFXOS8700.h
**     CDE edition : Standard
**     Project     : FRDM-K64F_Generator
**     Processor   : MK64FN1M0VLL12
**     Component   : FXOS8700CQ
**     Version     : Component 01.035, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2021-12-26, 08:30, # CodeGen: 765
**     Abstract    :
**         Implements a Driver for the MMA8451 accelerometer from Freescale.
**     Settings    :
**          Component Name                                 : McuFXOS8700
**          Slave Address                                  : 1E
**          I2C Bus                                        : McuGenericI2C
**          Constant Offsets                               : Enabled
**            X offset                                     : 0
**            Y offset                                     : 0
**            Z offset                                     : 0
**          Shell                                          : Enabled
**            Shell                                        : McuShell
**            Utility                                      : McuUtility
**     Contents    :
**         Enable              - uint8_t McuFXOS8700_Enable(void);
**         Disable             - uint8_t McuFXOS8700_Disable(void);
**         MagEnable           - uint8_t McuFXOS8700_MagEnable(void);
**         isEnabled           - uint8_t McuFXOS8700_isEnabled(bool *isEnabled);
**         SwReset             - uint8_t McuFXOS8700_SwReset(void);
**         ReadReg8            - uint8_t McuFXOS8700_ReadReg8(uint8_t addr, uint8_t *val);
**         WriteReg8           - uint8_t McuFXOS8700_WriteReg8(uint8_t addr, uint8_t val);
**         GetX                - int16_t McuFXOS8700_GetX(void);
**         GetY                - int16_t McuFXOS8700_GetY(void);
**         GetZ                - int16_t McuFXOS8700_GetZ(void);
**         GetRaw8XYZ          - uint8_t McuFXOS8700_GetRaw8XYZ(void* *xyz);
**         CalibrateX1g        - void McuFXOS8700_CalibrateX1g(void);
**         CalibrateY1g        - void McuFXOS8700_CalibrateY1g(void);
**         CalibrateZ1g        - void McuFXOS8700_CalibrateZ1g(void);
**         GetXmg              - int16_t McuFXOS8700_GetXmg(void);
**         GetYmg              - int16_t McuFXOS8700_GetYmg(void);
**         GetZmg              - int16_t McuFXOS8700_GetZmg(void);
**         MeasureGetRawX      - uint16_t McuFXOS8700_MeasureGetRawX(void);
**         MeasureGetRawY      - uint16_t McuFXOS8700_MeasureGetRawY(void);
**         MeasureGetRawZ      - uint16_t McuFXOS8700_MeasureGetRawZ(void);
**         GetXOffset          - int16_t McuFXOS8700_GetXOffset(void);
**         GetYOffset          - int16_t McuFXOS8700_GetYOffset(void);
**         GetZOffset          - int16_t McuFXOS8700_GetZOffset(void);
**         GetX1gValue         - int16_t McuFXOS8700_GetX1gValue(void);
**         GetY1gValue         - int16_t McuFXOS8700_GetY1gValue(void);
**         GetZ1gValue         - int16_t McuFXOS8700_GetZ1gValue(void);
**         SetFastMode         - uint8_t McuFXOS8700_SetFastMode(bool on);
**         WhoAmI              - uint8_t McuFXOS8700_WhoAmI(uint8_t *value);
**         GetTemperature      - uint8_t McuFXOS8700_GetTemperature(int8_t *temperature);
**         GetMagX             - uint8_t McuFXOS8700_GetMagX(int16_t *value);
**         GetMagY             - uint8_t McuFXOS8700_GetMagY(int16_t *value);
**         GetMagZ             - uint8_t McuFXOS8700_GetMagZ(int16_t *value);
**         ParseCommand        - uint8_t McuFXOS8700_ParseCommand(const unsigned char *cmd, bool *handled,...
**         MagneticSensorReset - uint8_t McuFXOS8700_MagneticSensorReset(void);
**         Init                - uint8_t McuFXOS8700_Init(void);
**         Deinit              - uint8_t McuFXOS8700_Deinit(void);
**
** * Copyright (c) 2013-2021, Erich Styger
**  * Web:         https://mcuoneclipse.com
**  * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**  * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**  * All rights reserved.
**  *
**  * Redistribution and use in source and binary forms, with or without modification,
**  * are permitted provided that the following conditions are met:
**  *
**  * - Redistributions of source code must retain the above copyright notice, this list
**  *   of conditions and the following disclaimer.
**  *
**  * - Redistributions in binary form must reproduce the above copyright notice, this
**  *   list of conditions and the following disclaimer in the documentation and/or
**  *   other materials provided with the distribution.
**  *
**  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**  * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**  * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**  * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**  * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**  * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file McuFXOS8700.h
** @version 01.00
** @brief
**         Implements a Driver for the MMA8451 accelerometer from Freescale.
*/         
/*!
**  @addtogroup McuFXOS8700_module McuFXOS8700 module documentation
**  @{
*/         

#ifndef __McuFXOS8700_H
#define __McuFXOS8700_H

/* MODULE McuFXOS8700. */
#include "McuLib.h" /* SDK and API used */
#include "McuFXOS8700config.h" /* configuration */

/* Include inherited components */
#include "McuGenericI2C.h"
#include "McuWait.h"
#include "McuLib.h"
#include "McuShell.h"
#include "McuUtility.h"

#ifdef __cplusplus
extern "C" {
#endif

#define McuFXOS8700_PARSE_COMMAND_ENABLED  McuFXOS8700_CONFIG_PARSE_COMMAND_ENABLED  /* set to 1 if method ParseCommand() is present, 0 otherwise */

/* 3-axis accelerometer control register addresses */
#define McuFXOS8700_CTRL_REG_1 0x2A
/* 3-axis accelerometer control register bit masks */
#define McuFXOS8700_ACTIVE_BIT_MASK 0x01
#define McuFXOS8700_F_READ_BIT_MASK 0x02

#define McuFXOS8700_CTRL_REG_2 0x2B
#define McuFXOS8700_CTRL_REG_2_MASK_RST (1<<4) /* software reset */

/* External 3-axis accelerometer data register addresses */
#define McuFXOS8700_OUT_X_MSB 0x01
#define McuFXOS8700_OUT_X_LSB 0x02
#define McuFXOS8700_OUT_Y_MSB 0x03
#define McuFXOS8700_OUT_Y_LSB 0x04
#define McuFXOS8700_OUT_Z_MSB 0x05
#define McuFXOS8700_OUT_Z_LSB 0x06

#define McuFXOS8700_WHO_AM_I  0x0D    /* Who am I register, should return 0xC4 for preproduction devices and 0xC7 for production devices */
#define McuFXOS8700_WHO_AM_I_VAL 0xC7 /* production device value */

#define McuFXOS8700_XYZ_DATA_CFG 0x0E  /* XYZ Data Configuration Register */

/* magnetometer control register */
#define McuFXOS8700_M_CTRL_REG_1 0x5B
#define McuFXOS8700_M_CTRL_REG_2 0x5C
#define McuFXOS8700_M_CTRL_REG_3 0x5D

/* Magnetometer data register addresses */
#define McuFXOS8700_M_OUT_X_MSB 0x33
#define McuFXOS8700_M_OUT_X_LSB 0x34
#define McuFXOS8700_M_OUT_Y_MSB 0x35
#define McuFXOS8700_M_OUT_Y_LSB 0x36
#define McuFXOS8700_M_OUT_Z_MSB 0x37
#define McuFXOS8700_M_OUT_Z_LSB 0x38

/* die temperature (needs to add an offset as not factory trimmed) */
#define McuFXOS8700_DIE_TEMP  0x51 /* die temperature register, signed 8bit in C */
#define McuFXOS8700_DIE_TEMP_OFFSET   McuFXOS8700_CONFIG_TEMP_OFFSET /* offset to temperature reading as value on device is not calibrated */

#define McuFXOS8700_I2C_ADDR          McuFXOS8700_CONFIG_I2C_DEVICE_ADDRESS /* I2C slave device address as set in the properties */



uint8_t McuFXOS8700_GetRaw8XYZ(uint8_t *xyz);
/*
** ===================================================================
**     Method      :  GetRaw8XYZ (component FXOS8700CQ)
**
**     Description :
**         Returns in an array the x, y and z accelerometer as 8bit
**         values.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * xyz             - Pointer to an array of three unsigned 8bit
**                           values which are used to return the
**                           accelerometer values.
**     Returns     :
**         ---             - Error code, ERR_OK for no error.
** ===================================================================
*/

uint8_t McuFXOS8700_Deinit(void);
/*
** ===================================================================
**     Method      :  Deinit (component FXOS8700CQ)
**
**     Description :
**         Counterpart to Init() method.
**     Parameters  : None
**     Returns     :
**         ---             - Error code, ERR_OK if everything is ok.
** ===================================================================
*/

uint8_t McuFXOS8700_Init(void);
/*
** ===================================================================
**     Method      :  Init (component FXOS8700CQ)
**
**     Description :
**         Initializes the device driver
**     Parameters  : None
**     Returns     :
**         ---             - Error code, ERR_OK if everything is ok.
** ===================================================================
*/

void McuFXOS8700_CalibrateX1g(void);
/*
** ===================================================================
**     Method      :  CalibrateX1g (component FXOS8700CQ)
**
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         Y and Z sensors have 0 g, and the X sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void McuFXOS8700_CalibrateY1g(void);
/*
** ===================================================================
**     Method      :  CalibrateY1g (component FXOS8700CQ)
**
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         X and Z sensors have 0 g, and the Y sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void McuFXOS8700_CalibrateZ1g(void);
/*
** ===================================================================
**     Method      :  CalibrateZ1g (component FXOS8700CQ)
**
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         X and Y sensors have 0 g, and the Z sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

int16_t McuFXOS8700_GetXmg(void);
/*
** ===================================================================
**     Method      :  GetXmg (component FXOS8700CQ)
**
**     Description :
**         Returns the X value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

int16_t McuFXOS8700_GetYmg(void);
/*
** ===================================================================
**     Method      :  GetYmg (component FXOS8700CQ)
**
**     Description :
**         Returns the Y value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

int16_t McuFXOS8700_GetZmg(void);
/*
** ===================================================================
**     Method      :  GetZmg (component FXOS8700CQ)
**
**     Description :
**         Returns the Z value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

uint16_t McuFXOS8700_MeasureGetRawX(void);
/*
** ===================================================================
**     Method      :  MeasureGetRawX (component FXOS8700CQ)
**
**     Description :
**         Performs a measurement on X channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - X sensor value
** ===================================================================
*/

uint16_t McuFXOS8700_MeasureGetRawY(void);
/*
** ===================================================================
**     Method      :  MeasureGetRawY (component FXOS8700CQ)
**
**     Description :
**         Performs a measurement on Y channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - Y sensor value
** ===================================================================
*/

uint16_t McuFXOS8700_MeasureGetRawZ(void);
/*
** ===================================================================
**     Method      :  MeasureGetRawZ (component FXOS8700CQ)
**
**     Description :
**         Performs a measurement on Z channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - Z sensor value
** ===================================================================
*/

int16_t McuFXOS8700_GetXOffset(void);
/*
** ===================================================================
**     Method      :  GetXOffset (component FXOS8700CQ)
**
**     Description :
**         Returns the offset applied to the X value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t McuFXOS8700_GetYOffset(void);
/*
** ===================================================================
**     Method      :  GetYOffset (component FXOS8700CQ)
**
**     Description :
**         Returns the offset applied to the Y value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t McuFXOS8700_GetZOffset(void);
/*
** ===================================================================
**     Method      :  GetZOffset (component FXOS8700CQ)
**
**     Description :
**         Returns the offset applied to the Z value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t McuFXOS8700_GetX1gValue(void);
/*
** ===================================================================
**     Method      :  GetX1gValue (component FXOS8700CQ)
**
**     Description :
**         Returns the value for 1g for channel  X.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for X
** ===================================================================
*/

int16_t McuFXOS8700_GetY1gValue(void);
/*
** ===================================================================
**     Method      :  GetY1gValue (component FXOS8700CQ)
**
**     Description :
**         Returns the value for 1g for channel  Y.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for Y
** ===================================================================
*/

int16_t McuFXOS8700_GetZ1gValue(void);
/*
** ===================================================================
**     Method      :  GetZ1gValue (component FXOS8700CQ)
**
**     Description :
**         Returns the value for 1g for channel  Z.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for Z
** ===================================================================
*/

int16_t McuFXOS8700_GetX(void);
/*
** ===================================================================
**     Method      :  GetX (component FXOS8700CQ)
**
**     Description :
**         Retrieves the value for the X axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured X value
** ===================================================================
*/

int16_t McuFXOS8700_GetY(void);
/*
** ===================================================================
**     Method      :  GetY (component FXOS8700CQ)
**
**     Description :
**         Retrieves the value for the Y axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured Y value
** ===================================================================
*/

int16_t McuFXOS8700_GetZ(void);
/*
** ===================================================================
**     Method      :  GetZ (component FXOS8700CQ)
**
**     Description :
**         Retrieves the value for the Z axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured Z value
** ===================================================================
*/

uint8_t McuFXOS8700_ParseCommand(const unsigned char *cmd, bool *handled, const McuShell_StdIOType *io);
/*
** ===================================================================
**     Method      :  ParseCommand (component FXOS8700CQ)
**
**     Description :
**         Shell Command Line parser. This method is enabled/disabled
**         depending on if you have the Shell enabled/disabled in the
**         properties.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * cmd             - Pointer to command string
**       * handled         - Pointer to variable which tells if
**                           the command has been handled or not
**       * io              - Pointer to I/O structure
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_SetFastMode(bool on);
/*
** ===================================================================
**     Method      :  SetFastMode (component FXOS8700CQ)
**
**     Description :
**         Turns the F_READ (Fast Read Mode) on or off
**     Parameters  :
**         NAME            - DESCRIPTION
**         on              - if to turn the F_READ mode on or off
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_Enable(void);
/*
** ===================================================================
**     Method      :  Enable (component FXOS8700CQ)
**
**     Description :
**         Enables the device with setting the ACTIVE bit in the CTRL
**         register 1
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_Disable(void);
/*
** ===================================================================
**     Method      :  Disable (component FXOS8700CQ)
**
**     Description :
**         Disables the device with clearing the ACTIVE bit in the CTRL
**         register 1
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_isEnabled(bool *isEnabled);
/*
** ===================================================================
**     Method      :  isEnabled (component FXOS8700CQ)
**
**     Description :
**         Returns the status of the the ACTIVE bit in the CTRL
**         register 1
**     Parameters  :
**         NAME            - DESCRIPTION
**       * isEnabled       - Pointer to where to store the
**                           result, TRUE if ACTIVE bit is set, FALSE
**                           otherwise
**     Returns     :
**         ---             - error code
** ===================================================================
*/

uint8_t McuFXOS8700_WhoAmI(uint8_t *value);
/*
** ===================================================================
**     Method      :  WhoAmI (component FXOS8700CQ)
**
**     Description :
**         Returns the value of the WHO_AM_I (0x0D) register
**     Parameters  :
**         NAME            - DESCRIPTION
**       * value           - Pointer to value to store
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_GetTemperature(int8_t *temperature);
/*
** ===================================================================
**     Method      :  GetTemperature (component FXOS8700CQ)
**
**     Description :
**         Returns the temperature of the die as signed 8bit values in
**         degree Celsius
**     Parameters  :
**         NAME            - DESCRIPTION
**       * temperature     - Pointer to variable where
**                           to store the temperature
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_GetMagX(int16_t *value);
/*
** ===================================================================
**     Method      :  GetMagX (component FXOS8700CQ)
**
**     Description :
**         Returns the X magnetometer value.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * value           - Pointer to where to store the value.
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_GetMagY(int16_t *value);
/*
** ===================================================================
**     Method      :  GetMagY (component FXOS8700CQ)
**
**     Description :
**         Returns the Y magnetometer value.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * value           - Pointer to where to store the value.
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_GetMagZ(int16_t *value);
/*
** ===================================================================
**     Method      :  GetMagZ (component FXOS8700CQ)
**
**     Description :
**         Returns the Z magnetometer value.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * value           - Pointer to where to store the value.
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_MagneticSensorReset(void);
/*
** ===================================================================
**     Method      :  MagneticSensorReset (component FXOS8700CQ)
**
**     Description :
**         Initiates a magnetic sensor reset cycle that will restore
**         correct operation after exposure to an excessive magnetic
**         field which exceeds the Full Scale Range but is less than
**         the Maximum Applied Magnetic Field.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_ReadReg8(uint8_t addr, uint8_t *val);
/*
** ===================================================================
**     Method      :  ReadReg8 (component FXOS8700CQ)
**
**     Description :
**         Reads an 8bit device register
**     Parameters  :
**         NAME            - DESCRIPTION
**         addr            - device memory map address
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_WriteReg8(uint8_t addr, uint8_t val);
/*
** ===================================================================
**     Method      :  WriteReg8 (component FXOS8700CQ)
**
**     Description :
**         Write an 8bit device register
**     Parameters  :
**         NAME            - DESCRIPTION
**         addr            - device memory map address
**         val             - value to write
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_SwReset(void);
/*
** ===================================================================
**     Method      :  SwReset (component FXOS8700CQ)
**
**     Description :
**         Perform a software reset using the rst bit in the CTRL
**         register 2
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t McuFXOS8700_MagEnable(void);
/*
** ===================================================================
**     Method      :  MagEnable (component FXOS8700CQ)
**
**     Description :
**         Enables the magnetometer
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

/* END McuFXOS8700. */

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif
/* ifndef __McuFXOS8700_H */
/*!
** @}
*/
