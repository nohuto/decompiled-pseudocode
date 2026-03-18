/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1407F2028
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x1407F2930 (PopMonitorInvocation.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopTriggerMonitorPowerEvent @ 0x1407F20B4 (PopTriggerMonitorPowerEvent.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1407F287C (PopDisarmIdlePhaseWatchdog.c)
 *     PopArmIdlePhaseWatchdog @ 0x140808F30 (PopArmIdlePhaseWatchdog.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(char a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v7);
  if ( a1 )
    PopDisarmIdlePhaseWatchdog();
  else
    PopArmIdlePhaseWatchdog(a2);
  if ( !TtmIsEnabled() )
  {
    LOBYTE(v5) = a1;
    return (unsigned int)PopTriggerMonitorPowerEvent(v5, a2);
  }
  return v2;
}
