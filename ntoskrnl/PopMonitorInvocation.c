/*
 * XREFs of PopMonitorInvocation @ 0x140756DE8
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PopProcessSessionDisplayStateChange @ 0x140757094 (PopProcessSessionDisplayStateChange.c)
 *     PopIsInputSuppressionEngaged @ 0x140757D60 (PopIsInputSuppressionEngaged.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x14098CDDC (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x14098F96C (PopTraceMonitorOnRequestUserInput.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopMonitorInvocation(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  if ( *(_BYTE *)a1 )
  {
    PopAcquirePolicyLock(a1);
    if ( (unsigned __int8)PopIsInputSuppressionEngaged(v1) && (GUID *)PopWdiCurrentScenario != &NullGuid )
      PopTraceMonitorOnRequestUserInput(v1);
    LOBYTE(v4) = 1;
    v2 = PopProcessSessionDisplayStateChange(v4, v1);
    PopReleasePolicyLock(v6, v5, v7);
    if ( (!v2 || v2 == 259)
      && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
      && !PopConsoleDisplayState )
    {
      PopDiagTraceMonitorOnWithLidClosed(v1);
      PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
      ZwUpdateWnfStateData((__int64)&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, (__int64)&PopWdiCurrentScenarioInstanceId);
    }
  }
  return v2;
}
