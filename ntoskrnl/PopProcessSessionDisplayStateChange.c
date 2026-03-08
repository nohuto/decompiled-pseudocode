/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x140757094
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x140756DE8 (PopMonitorInvocation.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     PopTriggerMonitorPowerEvent @ 0x1407570F8 (PopTriggerMonitorPowerEvent.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x140757DA8 (PopDisarmIdlePhaseWatchdog.c)
 *     PopArmIdlePhaseWatchdog @ 0x14087EFA4 (PopArmIdlePhaseWatchdog.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(char a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = 0;
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  if ( a1 )
    PopDisarmIdlePhaseWatchdog();
  else
    PopArmIdlePhaseWatchdog(a2);
  if ( !TtmIsEnabled(v6, v5) )
  {
    LOBYTE(v7) = a1;
    return (unsigned int)PopTriggerMonitorPowerEvent(v7, a2);
  }
  return v2;
}
