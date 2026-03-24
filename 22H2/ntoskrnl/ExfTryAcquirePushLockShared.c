/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x1402E0E80
 * Callers:
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     PfLockSharedTryAcquire @ 0x14026E1F4 (PfLockSharedTryAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1402CAAE0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1402E0CD0 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390300 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1403903C0 (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x1405081DC (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FD3C (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405B3EB0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x140875CB0 (TryLockShutdownShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(unsigned __int64 *a1)
{
  char v2; // r9
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( 1 )
  {
    v4 = (v3 >> 1) & 1;
    if ( (v3 & 1) != 0 && (v4 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v5 = (v3 | 1) + 16;
    if ( v4 )
      v5 = v3 | 1;
    v6 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v5, v3);
    if ( v6 == v3 )
      return 1;
  }
  return v2;
}
