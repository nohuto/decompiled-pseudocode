/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x1406154B0
 * Callers:
 *     <none>
 * Callees:
 *     ExSetTimer @ 0x14026E2B0 (ExSetTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140615560 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406155E8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407888E0 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x140789AC0 (WdipSemDisableContextProviders.c)
 *     WdipSemLogTimeoutInformation @ 0x140930610 (WdipSemLogTimeoutInformation.c)
 */

__int64 WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 TimedOutInstanceForDeletion; // rdi
  signed __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8

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
      v8 = TimedOutInstanceForDeletion;
      v9 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v10 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v11 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v9;
      WdipSemLogTimeoutInformation(v10, *(unsigned __int16 *)(v10 + 16), v11);
      WdipSemDeleteTransitionalInstance(v8);
    }
  }
  v3 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5, v6);
  return ExSetTimer(WdipTimeoutTimer, v3, 0LL, (__int64)&WdipTimeoutTimerParameters);
}
