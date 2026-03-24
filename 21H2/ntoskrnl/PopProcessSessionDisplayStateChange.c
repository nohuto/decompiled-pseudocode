/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1408F0228
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 * Callees:
 *     PopArmIdlePhaseWatchdog @ 0x1408EFC08 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFD2C (PopDisarmIdlePhaseWatchdog.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408F0C24 (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(char a1, unsigned int a2)
{
  __int64 v4; // rcx

  if ( a1 )
    PopDisarmIdlePhaseWatchdog();
  else
    PopArmIdlePhaseWatchdog(a2);
  if ( TtmpEnabled == 1 )
    return 3221225659LL;
  LOBYTE(v4) = a1;
  return PopTriggerMonitorPowerEvent(v4, a2);
}
