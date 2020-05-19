/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : McuMinINI.h
**     Project     : FRDM-K64F_Generator
**     Processor   : MK64FN1M0VLL12
**     Component   : minIni
**     Version     : Component 01.053, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-05-19, 14:27, # CodeGen: 637
**     Abstract    :
**         minIni is a programmerís library to read and write ini files in embedded systems.
**     Settings    :
**          Component name                                 : McuMinINI
**          minIni Version                                 : 1.2B
**          SDK                                            : McuLib
**          Portable strnicmp()                            : yes
**          Use Real                                       : no
**          Read Only                                      : no
**          No Debug                                       : yes
**          Global Buffer                                  : no
**          FatFS                                          : Disabled
**          Source Folders                                 : 
**            Source Folder                                : MinIni
**            Config Folder                                : MinIni
**     Contents    :
**         ini_getbool    - int McuMinINI_ini_getbool(const mTCHAR *Section, const mTCHAR *Key, int...
**         ini_gets       - int McuMinINI_ini_gets(const mTCHAR *Section, const mTCHAR *Key, const mTCHAR...
**         ini_puts       - int McuMinINI_ini_puts(const mTCHAR *Section, const mTCHAR *Key, const mTCHAR...
**         ini_getl       - long McuMinINI_ini_getl(const mTCHAR *Section, const mTCHAR *Key, long...
**         ini_putl       - int McuMinINI_ini_putl(const mTCHAR *Section, const mTCHAR *Key, long Value,...
**         ini_getsection - int McuMinINI_ini_getsection(int idx, mTCHAR *Buffer, int BufferSize, const...
**         ini_getkey     - int McuMinINI_ini_getkey(const mTCHAR *Section, int idx, mTCHAR *Buffer, int...
**         ini_browse     - int McuMinINI_ini_browse(INI_CALLBACK Callback, const void *UserData, const...
**         ParseCommand   - uint8_t McuMinINI_ParseCommand(const unsigned char *cmd, bool *handled, const...
**
** (c) Copyright 2008-2012, CompuPhase;
** http      : www.compuphase.com
** Processor Expert port: Erich Styger, 2014-2019, http://www.mcuoneclipse.com
** License: See miniIni_LICENSE.txt and minIni_NOTICE.txt
** Adaptions for Processor Expert: (c) Copyright 2012-2020, Erich Styger
** ###################################################################*/
/*!
** @file McuMinINI.h
** @version 01.00
** @brief
**         minIni is a programmerís library to read and write ini files in embedded systems.
*/         
/*!
**  @addtogroup McuMinINI_module McuMinINI module documentation
**  @{
*/         

#ifndef __McuMinINI_H
#define __McuMinINI_H

/* MODULE McuMinINI. */
#include "McuLib.h" /* SDK and API used */
#include "McuMinINIconfig.h" /* configuration */

#if McuMinINI_CONFIG_PARSE_COMMAND_ENABLED
  #include "McuShell.h" /* Command line shell */
#endif
#include "minIni.h" /* minIni Header file */




#define McuMinINI_ini_getkey(Section, idx, Buffer, BufferSize, Filename) \
  ini_getkey(Section, idx, Buffer, BufferSize, Filename)
/*
** ===================================================================
**     Method      :  ini_getkey (component minIni)
**
**     Description :
**         Return the key inside a section
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Section         - The name of the section to browse
**                           through, or NULL to browse through the keys
**                           outside any section
**         idx             - The zero-based sequence number of the key
**                           to return
**       * Buffer          - A pointer to the buffer to copy into
**         BufferSize      - The maximum number of
**                           characters to copy
**       * Filename        - The name and full path of the .
**                           ini file to read from
**     Returns     :
**         ---             - The number of characters copied into the
**                           supplied buffer
** ===================================================================
*/

#define McuMinINI_ini_getbool(Section, Key, DefValue, Filename) \
  ini_getbool(Section, Key, DefValue, Filename)
/*
** ===================================================================
**     Method      :  ini_getbool (component minIni)
**
**     Description :
**         Return a boolean key.  A true boolean is found if one of the
**         following is matched:
**         - A string starting with 'y' or 'Y'
**         - A string starting with 't' or 'T'
**         - A string starting with '1'
**         A false boolean is found if one of the following is matched:
**         - A string starting with 'n' or 'N'
**         - A string starting with 'f' or 'F'
**         - A string starting with '0'
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Section         - The name of the section to search
**                           for
**       * Key             - The name of the entry to find the value of
**         DefValue        - Default value in the event of a
**                           failed read; it should be zero (0) or one
**                           (1).
**       * Filename        - The name and full path of the .
**                           ini file to read from
**     Returns     :
**         ---             - The true/false flag as interpreted at Key
** ===================================================================
*/

#define McuMinINI_ini_gets(Section, Key, DefValue, Buffer, BufferSize, Filename) \
  ini_gets(Section, Key, DefValue, Buffer, BufferSize, Filename)
/*
** ===================================================================
**     Method      :  ini_gets (component minIni)
**
**     Description :
**         Return the string for a given section and key.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Section         - The name of the section to search
**                           for
**       * Key             - Pointer to the name of the entry to find
**                           the value of
**       * DefValue        - Pointer to the default value in
**                           the event of a failed read
**       * Buffer          - A pointer to the buffer to copy into
**         BufferSize      - The maximum number of
**                           characters to copy
**       * Filename        - The name and full path of the .
**                           ini file to read from
**     Returns     :
**         ---             - The number of characters copied into the
**                           supplied buffer
** ===================================================================
*/

#define McuMinINI_ini_getl(Section, Key, DefValue, Filename) \
  ini_getl(Section, Key, DefValue, Filename)
/*
** ===================================================================
**     Method      :  ini_getl (component minIni)
**
**     Description :
**         Return the long integral value for a given section and key.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Section         - The name of the section to search
**                           for
**       * Key             - Pointer to the name of the entry to find
**                           the value of
**         DefValue        - Default value in the event of a
**                           failed read
**       * Filename        - The name and full path of the .
**                           ini file to read from
**     Returns     :
**         ---             - The value located at Key
** ===================================================================
*/

#define McuMinINI_ini_getsection(idx, Buffer, BufferSize, Filename) \
  ini_getsection(idx, Buffer, BufferSize, Filename)
/*
** ===================================================================
**     Method      :  ini_getsection (component minIni)
**
**     Description :
**         Return the key inside a section
**     Parameters  :
**         NAME            - DESCRIPTION
**         idx             - The zero-based sequence number of the
**                           section to return
**       * Buffer          - A pointer to the buffer to copy into
**         BufferSize      - The maximum number of
**                           characters to copy
**       * Filename        - The name and full path of the .
**                           ini file to read from
**     Returns     :
**         ---             - The number of characters copied into the
**                           supplied buffer
** ===================================================================
*/

#define McuMinINI_ini_putl(Section, Key, Value, Filename) \
  ini_putl(Section, Key, Value, Filename)
/*
** ===================================================================
**     Method      :  ini_putl (component minIni)
**
**     Description :
**         Writes a long integral value for a given section and key.
**         Method is only enabled if 'Read only' is set to  'no' in the
**         properties.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Section         - The name of the section to write
**                           the value in
**       * Key             - The name of the entry to write
**         Value           - The value to write
**       * Filename        - The name and full path of the .
**                           ini file to write to
**     Returns     :
**         ---             - 1 if successful, otherwise 0
** ===================================================================
*/

#define McuMinINI_ini_puts(Section, Key, Value, Filename) \
   ini_puts(Section, Key, Value, Filename);
/*
** ===================================================================
**     Method      :  ini_puts (component minIni)
**
**     Description :
**         Writes a string value for a given section and key. Method is
**         only enabled if 'Read only' is set to  'no' in the
**         properties.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Section         - The name of the section to write
**                           the string in
**       * Key             - The name of the entry to write
**       * Value           - Pointer to the buffer the string, or
**                           NULL to erase the key
**       * Filename        - The name and full path of the .
**                           ini file to write to
**     Returns     :
**         ---             - 1 if successful, otherwise 0
** ===================================================================
*/

#define McuMinINI_ini_browse(Callback, UserData, Filename) \
  ini_browse(Callback, UserData, Filename)
/*
** ===================================================================
**     Method      :  ini_browse (component minIni)
**
**     Description :
**         Function to browse the ini file. With this function the file
**         is opened only once.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Callback        - a pointer to a function that
**                           will be called for every setting in the INI
**                           file.
**         UserData        - arbitrary data, which the
**                           function passes on the the Callback function
**         Filename        - the name and full path of the .
**                           ini file to read from
**     Returns     :
**         ---             - 1 on success, 0 on failure (INI file not
**                           found)
** ===================================================================
*/

#if McuMinINI_CONFIG_PARSE_COMMAND_ENABLED
uint8_t McuMinINI_ParseCommand(const unsigned char *cmd, bool *handled, const McuShell_StdIOType *io);
/*
** ===================================================================
**     Method      :  ParseCommand (component minIni)
**
**     Description :
**         Shell Command Line parser
**     Parameters  :
**         NAME            - DESCRIPTION
**       * cmd             - Pointer to command line
**       * handled         - Pointer to variable which tells if
**                           the command has been handled or not
**       * io              - Pointer to I/O structure
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

#endif
/* END McuMinINI. */

#endif
/* ifndef __McuMinINI_H */
/*!
** @}
*/
