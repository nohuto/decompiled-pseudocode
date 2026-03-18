/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x1406D9E90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406D9F40 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406D9FC8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1408150FC (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x140815FD0 (WdipSemDisableContextProviders.c)
 *     WdipSemLogTimeoutInformation @ 0x1409DAEE4 (WdipSemLogTimeoutInformation.c)
 */

__int64 WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 TimedOutInstanceForDeletion; // rdi
  signed __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( WdipSemTimeoutEnabled )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion(&WdipSemEnabledInstanceTable);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v1) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v1);
      v5 = TimedOutInstanceForDeletion;
      v6 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v7 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v8 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v6;
      WdipSemLogTimeoutInformation(v7, *(unsigned __int16 *)(v7 + 16), v8);
      WdipSemDeleteTransitionalInstance(v5);
    }
  }
  v3 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ExSetTimer(WdipTimeoutTimer, v3, 0LL, (__int64)&WdipTimeoutTimerParameters);
}
