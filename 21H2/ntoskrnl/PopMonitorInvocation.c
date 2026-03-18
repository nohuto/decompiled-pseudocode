/*
 * XREFs of PopMonitorInvocation @ 0x1407F2930
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407F2028 (PopProcessSessionDisplayStateChange.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x140808B40 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x140993EFC (PopTraceMonitorOnRequestUserInput.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopMonitorInvocation(__int64 a1)
{
  signed int v1; // ebx
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v9);
  if ( *(_BYTE *)a1 )
  {
    PopAcquirePolicyLock(a1);
    if ( v1 >= 31
      && (v1 <= 39 || v1 == 54)
      && PopEnableInputSuppression
      && !PopErrataReportingIncorrectLidState
      && !PopLidOpened
      && dword_140C232CC == 1
      && !PopConsoleExternalDisplayConnected
      && !PopConsoleDisplayState
      && (GUID *)PopWdiCurrentScenario != &NullGuid )
    {
      LOBYTE(v4) = dword_140C232CC == 1;
      LOBYTE(v5) = PopLidOpened == 0;
      PopTraceMonitorOnRequestUserInput((unsigned int)v1, v4, v5);
    }
    v2 = PopProcessSessionDisplayStateChange(1, v1);
    PopReleasePolicyLock(v7, v6);
    if ( (!v2 || v2 == 259)
      && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
      && !PopConsoleDisplayState )
    {
      PopDiagTraceMonitorOnWithLidClosed((unsigned int)v1);
      PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
      ZwUpdateWnfStateData((__int64)&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, (__int64)&PopWdiCurrentScenarioInstanceId);
    }
  }
  return v2;
}
