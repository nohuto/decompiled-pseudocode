/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x1406BE574
 * Callers:
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char CmpUnlockAppHiveLoadList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpAppHiveLoadListLock);
  v0 = CmpAppHiveLoadListLock - 16;
  if ( (CmpAppHiveLoadListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpAppHiveLoadListLock & 2) != 0
    || (v1 = CmpAppHiveLoadListLock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpAppHiveLoadListLock,
                v0,
                CmpAppHiveLoadListLock)) )
  {
    ExfReleasePushLock(&CmpAppHiveLoadListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpAppHiveLoadListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
