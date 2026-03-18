/*
 * XREFs of CheckDpcWatchdogTimerExpireSoon @ 0x1C000A3FC
 * Callers:
 *     ControllerReset @ 0x1C0007A88 (ControllerReset.c)
 *     ControllerEnable @ 0x1C0009298 (ControllerEnable.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     IsNVMeResetComplete @ 0x1C001854C (IsNVMeResetComplete.c)
 * Callees:
 *     DpcWatchdogTimerRemainsMoreThan @ 0x1C000A41C (DpcWatchdogTimerRemainsMoreThan.c)
 */

bool __fastcall CheckDpcWatchdogTimerExpireSoon(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (unsigned __int8)DpcWatchdogTimerRemainsMoreThan(a1, a2, a3) == 0;
}
