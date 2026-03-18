/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x140357EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     PopFxIdleComponent @ 0x140355830 (PopFxIdleComponent.c)
 *     PopFxArmResidentTimer @ 0x14035800C (PopFxArmResidentTimer.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 PopFxResidentTimeoutRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 InterruptTimePrecise; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rsi
  unsigned int i; // edi
  __int64 v5; // rdx
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
        v5 = *(_QWORD *)(*(_QWORD *)(v2 + 832) + 8LL * i);
        if ( *(int *)(v5 + 96) > 0
          && v3 - *(_QWORD *)(v5 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v5 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v2, i, 1);
        }
      }
      v2 = *(_QWORD *)v2;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  LOBYTE(v6) = 1;
  return PopFxArmResidentTimer(v6);
}
