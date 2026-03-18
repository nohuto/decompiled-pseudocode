/*
 * XREFs of WdipSemEnableScenario @ 0x1406E6B08
 * Callers:
 *     WdipStartEndScenario @ 0x1406E6A98 (WdipStartEndScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     WdipSemQueryScenarioTable @ 0x1406E6C48 (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x1406E6CB0 (WdipSemGetLoggerIds.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140814FBC (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1408150FC (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140815178 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemEnableContextProviders @ 0x140816134 (WdipSemEnableContextProviders.c)
 *     WdipSemActivateInstance @ 0x14081CB98 (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x1409DA868 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DB1E4 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  char v5; // si
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  __int64 v11; // rax
  struct _KTHREAD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_13;
  }
  if ( WdipSemEnabled )
  {
    LoggerIds = WdipSemGetLoggerIds();
    if ( LoggerIds < 0 )
    {
      v5 = 1;
      goto LABEL_13;
    }
    ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
    if ( ScenarioTable )
    {
      v11 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
      v4 = v11;
      if ( v11 )
      {
        WdipSemEnableContextProviders(v11);
        if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
          WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_START, v4);
        WdipSemActivateInstance(v4);
        goto LABEL_10;
      }
    }
  }
  LoggerIds = -1073741823;
LABEL_13:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v4 )
    WdipSemDeleteTransitionalInstance(v4);
LABEL_10:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
