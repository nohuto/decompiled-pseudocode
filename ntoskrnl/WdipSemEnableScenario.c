/*
 * XREFs of WdipSemEnableScenario @ 0x1407966C0
 * Callers:
 *     WdipStartEndScenario @ 0x140796650 (WdipStartEndScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     WdipSemQueryScenarioTable @ 0x140796800 (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x140796868 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140831C10 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140831D7C (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemEnableContextProviders @ 0x140832180 (WdipSemEnableContextProviders.c)
 *     WdipSemWriteSemActionsEvent @ 0x140832438 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemActivateInstance @ 0x14085ECB0 (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x1409DAE00 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DB77C (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  char v8; // si
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  __int64 v11; // rax
  struct _KTHREAD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 0;
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
      v8 = 1;
      goto LABEL_13;
    }
    ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
    if ( ScenarioTable )
    {
      v11 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
      v7 = v11;
      if ( v11 )
      {
        WdipSemEnableContextProviders(v11);
        if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
          WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_START, v7);
        WdipSemActivateInstance(v7);
        goto LABEL_10;
      }
    }
  }
  LoggerIds = -1073741823;
LABEL_13:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v7 )
    WdipSemDeleteTransitionalInstance(v7);
LABEL_10:
  ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
