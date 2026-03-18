/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x1407D5C70
 * Callers:
 *     CmLoadAppKey @ 0x140769B50 (CmLoadAppKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BD800 (ExfReleasePushLock.c)
 */

_QWORD *CmpUnlockAppHiveLoadList()
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
