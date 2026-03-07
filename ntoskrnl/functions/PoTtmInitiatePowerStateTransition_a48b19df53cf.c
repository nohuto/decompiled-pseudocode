__int64 __fastcall PoTtmInitiatePowerStateTransition(char a1, int a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int started; // eax
  unsigned int v9; // ebx
  _BYTE v11[88]; // [rsp+40h] [rbp-58h] BYREF

  memset(v11, 0, 0x4CuLL);
  PopAcquirePolicyLock(v4);
  PopFilterCapabilities(&PopCapabilities, (__int64)v11);
  if ( v11[20] )
  {
    started = PopTriggerMonitorPowerEvent(a1 == 0, a2);
LABEL_8:
    v9 = started;
    goto LABEL_9;
  }
  if ( v11[3] || v11[4] || v11[5] )
  {
    started = PopStartStopTtmSxTranstion(a1);
    goto LABEL_8;
  }
  v9 = 0;
LABEL_9:
  PopReleasePolicyLock(v6, v5, v7);
  if ( v11[20]
    && !a1
    && (!v9 || v9 == 259)
    && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
    && !PopConsoleDisplayState )
  {
    PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
    ZwUpdateWnfStateData((__int64)&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, (__int64)&PopWdiCurrentScenarioInstanceId);
  }
  return v9;
}
