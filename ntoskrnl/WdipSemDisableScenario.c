/*
 * XREFs of WdipSemDisableScenario @ 0x140831E48
 * Callers:
 *     WdipStartEndScenario @ 0x140796650 (WdipStartEndScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     WdipSemGetLoggerIds @ 0x140796868 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140831C10 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140831F8C (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemDisableContextProviders @ 0x1408321DC (WdipSemDisableContextProviders.c)
 *     WdipSemWriteSemActionsEvent @ 0x140832438 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemValidateEndEvent @ 0x140834640 (WdipSemValidateEndEvent.c)
 *     WdipSemActivateInstance @ 0x14085ECB0 (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x1409DAE00 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DB77C (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rdi
  char v8; // si
  int LoggerIds; // ebx
  __int64 v10; // rax
  struct _KTHREAD *v12; // rax

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
  if ( !WdipSemEnabled )
    goto LABEL_12;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds < 0 )
  {
    v8 = 1;
    goto LABEL_13;
  }
  v10 = WdipSemMarkInstanceForDeletion(a3);
  v7 = (_QWORD *)v10;
  if ( v10 )
  {
    LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v10 + 32));
    if ( LoggerIds >= 0 )
    {
      WdipSemDisableContextProviders(v7, 0LL);
      if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END) )
        WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_END, v7);
      WdipSemDeleteTransitionalInstance(v7);
      goto LABEL_10;
    }
  }
  else
  {
LABEL_12:
    LoggerIds = -1073741823;
  }
LABEL_13:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_END_FAILED, a1, a2, a3, LoggerIds);
  if ( v7 )
    WdipSemActivateInstance(v7);
LABEL_10:
  ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((__int64 *)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
