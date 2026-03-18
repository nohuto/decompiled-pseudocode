/*
 * XREFs of WdipSemDisableScenario @ 0x140815DC8
 * Callers:
 *     WdipStartEndScenario @ 0x1406E6A98 (WdipStartEndScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     WdipSemGetLoggerIds @ 0x1406E6CB0 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1408150FC (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140815178 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140815F0C (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemDisableContextProviders @ 0x140815FD0 (WdipSemDisableContextProviders.c)
 *     WdipSemValidateEndEvent @ 0x140816638 (WdipSemValidateEndEvent.c)
 *     WdipSemActivateInstance @ 0x14081CB98 (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x1409DA868 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1409DB1E4 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  char v5; // si
  int LoggerIds; // ebx
  __int64 v10; // rax
  struct _KTHREAD *v12; // rax

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
  if ( !WdipSemEnabled )
    goto LABEL_12;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds < 0 )
  {
    v5 = 1;
    goto LABEL_13;
  }
  v10 = WdipSemMarkInstanceForDeletion(a3);
  v4 = (_QWORD *)v10;
  if ( v10 )
  {
    LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v10 + 32));
    if ( LoggerIds >= 0 )
    {
      WdipSemDisableContextProviders(v4, 0LL);
      if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END) )
        WdipSemWriteSemActionsEvent((__int64)&WDI_SEM_EVENT_SCENARIO_END, (__int64)v4);
      WdipSemDeleteTransitionalInstance(v4);
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
  if ( v4 )
    WdipSemActivateInstance(v4);
LABEL_10:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
