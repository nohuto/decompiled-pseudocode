/*
 * XREFs of KeRebootSystemForRecovery @ 0x140577F2C
 * Callers:
 *     ExRebootSystemForRecovery @ 0x140604294 (ExRebootSystemForRecovery.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     KiSendThawExecution @ 0x14036B330 (KiSendThawExecution.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140567758 (KiBugcheckUnloadDebugSymbols.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAA0D0 (MiDeleteAllHardwareEnclaves.c)
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
