/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1408F0388
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     PopArmIdlePhaseWatchdog @ 0x1408EFD68 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EFE8C (PopDisarmIdlePhaseWatchdog.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408F0D84 (PopTriggerMonitorPowerEvent.c)
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
