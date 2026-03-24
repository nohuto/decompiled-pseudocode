/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1408F0278
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     PopArmIdlePhaseWatchdog @ 0x1408EFC58 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFD7C (PopDisarmIdlePhaseWatchdog.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408F0C74 (PopTriggerMonitorPowerEvent.c)
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
