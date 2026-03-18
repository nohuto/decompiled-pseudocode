/*
 * XREFs of CmpUnlockGlobalKeyLockTracker @ 0x1408493F4
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x1408492DC (CmpGlobalLockKeyForWrite.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1BE74 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BD800 (ExfReleasePushLock.c)
 */

_QWORD *CmpUnlockGlobalKeyLockTracker()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpKeyLockTracker);
  v0 = CmpKeyLockTracker - 16;
  if ( (CmpKeyLockTracker & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpKeyLockTracker & 2) != 0
    || (v1 = CmpKeyLockTracker,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpKeyLockTracker, v0, CmpKeyLockTracker)) )
  {
    ExfReleasePushLock(&CmpKeyLockTracker);
  }
  KeAbPostRelease((ULONG_PTR)&CmpKeyLockTracker);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
