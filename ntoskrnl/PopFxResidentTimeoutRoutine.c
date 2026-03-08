/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x1402E04F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PopFxArmResidentTimer @ 0x1402E0624 (PopFxArmResidentTimer.c)
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 PopFxResidentTimeoutRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 InterruptTimePrecise; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned int i; // edi
  __int64 v6; // rcx
  LARGE_INTEGER v8; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  if ( (ULONG_PTR *)PopFxDeviceList != &PopFxDeviceList )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v8);
    v2 = PopFxDeviceList;
    v3 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v2 != &PopFxDeviceList )
    {
      for ( i = 0; i < *(_DWORD *)(v2 + 828); ++i )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(v2 + 832) + 8LL * i);
        if ( *(int *)(v4 + 96) > 0
          && v3 - *(_QWORD *)(v4 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v4 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v2, i);
        }
      }
      v2 = *(_QWORD *)v2;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  LOBYTE(v6) = 1;
  return PopFxArmResidentTimer(v6);
}
