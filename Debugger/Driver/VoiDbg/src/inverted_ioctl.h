/* VoiDbg - The VOID Debugger
 * A Debugger based on the BranchMonitor framework
 * Marcus Botacin - 2017
 */

/* avoid multiple includes */
#pragma once

#define FILE_DEVICE_INVERTED 0xCF54

/* Operations - control codes */
#define IOCTL_VOIDBG_INVERT_NOTIFICATION CTL_CODE(FILE_DEVICE_INVERTED, 2049, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_VOIDBG_INVERT_EVENT_OCCURRED CTL_CODE(FILE_DEVICE_INVERTED, 2050, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_VOIDBG_SEND_PID CTL_CODE(FILE_DEVICE_INVERTED, 2051, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_VOIDBG_GET_DATA CTL_CODE(FILE_DEVICE_INVERTED, 2052, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_VOIDBG_GET_REG CTL_CODE(FILE_DEVICE_INVERTED, 2053, METHOD_BUFFERED, FILE_ANY_ACCESS)