/*
 * XREFs of CheckDpcWatchdogTimerExpireSoon @ 0x1C0025AB8
 * Callers:
 *     ControllerEnable @ 0x1C000959C (ControllerEnable.c)
 *     ControllerReset @ 0x1C0009668 (ControllerReset.c)
 *     IsNVMeResetComplete @ 0x1C000C0A0 (IsNVMeResetComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     DpcWatchdogTimerRemainsMoreThan @ 0x1C0025BD0 (DpcWatchdogTimerRemainsMoreThan.c)
 */

bool __fastcall CheckDpcWatchdogTimerExpireSoon(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (unsigned __int8)DpcWatchdogTimerRemainsMoreThan(a1, a2, a3) == 0;
}
