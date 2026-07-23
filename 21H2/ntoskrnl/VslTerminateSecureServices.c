/*
 * XREFs of VslTerminateSecureServices @ 0x1403F0E04
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE54C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404BE6D0 (HalpShutdown.c)
 *     HvlEnterSleepState @ 0x1404F4F20 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 268, 0, (__int64)v1);
}
