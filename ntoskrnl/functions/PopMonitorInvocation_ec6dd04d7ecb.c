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
