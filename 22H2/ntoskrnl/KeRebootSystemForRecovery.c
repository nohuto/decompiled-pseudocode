/*
 * XREFs of KeRebootSystemForRecovery @ 0x14057A43C
 * Callers:
 *     ExRebootSystemForRecovery @ 0x1406066E4 (ExRebootSystemForRecovery.c)
 * Callees:
 *     KiSendThawExecution @ 0x14020D230 (KiSendThawExecution.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     HalReturnToFirmware @ 0x140506A70 (HalReturnToFirmware.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140569BF8 (KiBugcheckUnloadDebugSymbols.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD300 (MiDeleteAllHardwareEnclaves.c)
 */

void __noreturn KeRebootSystemForRecovery()
{
  _BYTE v0[112]; // [rsp+20h] [rbp-88h] BYREF

  MiDeleteAllHardwareEnclaves();
  memset(v0, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 262, 0, (__int64)v0);
  KiBugcheckUnloadDebugSymbols();
  KiResumeForReboot = 1;
  KiSendThawExecution(0);
  HalReturnToFirmware(3);
}
