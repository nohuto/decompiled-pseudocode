/*
 * XREFs of VslTerminateSecureServices @ 0x1403F0ED4
 * Callers:
 *     HaliAcpiSleep @ 0x140385F30 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE30C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404BE490 (HalpShutdown.c)
 *     HvlEnterSleepState @ 0x1404F4FA0 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

NTSTATUS VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 268, 0, (__int64)v1);
}
