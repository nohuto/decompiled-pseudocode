/*
 * XREFs of ExfTryAcquirePushLockSharedEx @ 0x1403586D0
 * Callers:
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140357B60 (ExTryAcquirePushLockSharedEx.c)
 *     PfLockSharedTryAcquire @ 0x14035B800 (PfLockSharedTryAcquire.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403C8900 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1403C89DC (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x140457588 (IopProcessIoTracking.c)
 *     DifExfTryAcquirePushLockSharedWrapper @ 0x1405D8230 (DifExfTryAcquirePushLockSharedWrapper.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140607670 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExfTryAcquirePushLockShared @ 0x140607750 (ExfTryAcquirePushLockShared.c)
 *     MiProcessTransitionHeatBatch @ 0x140652050 (MiProcessTransitionHeatBatch.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407DD1A8 (ObpLockUnrelatedDirectoryShared.c)
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
