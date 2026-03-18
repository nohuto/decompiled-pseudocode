/*
 * XREFs of ExfTryAcquirePushLockSharedEx @ 0x14032F93C
 * Callers:
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     PfLockSharedTryAcquire @ 0x1402FA288 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14032F640 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403CD420 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1403CD4FC (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x14045F528 (IopProcessIoTracking.c)
 *     DifExfTryAcquirePushLockSharedWrapper @ 0x1405DA6E0 (DifExfTryAcquirePushLockSharedWrapper.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140609AC0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExfTryAcquirePushLockShared @ 0x140609BA0 (ExfTryAcquirePushLockShared.c)
 *     MiProcessTransitionHeatBatch @ 0x1406546A4 (MiProcessTransitionHeatBatch.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407AA85C (ObpLockUnrelatedDirectoryShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockSharedEx(signed __int64 *a1, char a2)
{
  char v2; // r8
  signed __int64 v4; // rax
  signed __int64 v5; // rcx
  signed __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v4 = *a1;
  while ( (v4 & 3) == 0 || (v4 & 1) == 0 && (a2 & 4) == 0 || (v4 & 2) == 0 && (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = (v4 | 1) + 16;
    if ( (v4 & 2) != 0 )
      v5 = v4 | 1;
    v6 = v4;
    v4 = _InterlockedCompareExchange64(a1, v5, v4);
    if ( v6 == v4 )
      return 1;
  }
  return v2;
}
