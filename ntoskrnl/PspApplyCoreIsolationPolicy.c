/*
 * XREFs of PspApplyCoreIsolationPolicy @ 0x1409ADC5C
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PspApplyCoreIsolationPolicy(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 1080);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  _m_prefetchw((const void *)(a1 + 2928));
  _InterlockedOr((volatile signed __int32 *)(a1 + 2928), 1u);
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
