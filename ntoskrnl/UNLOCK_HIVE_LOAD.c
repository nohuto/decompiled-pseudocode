/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1406C0154
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1402BFA88 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 *     CmpDoFlushNextHive @ 0x1406BD800 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14074A6B0 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmReleaseLoadKeyContext @ 0x14079329C (CmReleaseLoadKeyContext.c)
 *     CmpResolveHiveLoadConflict @ 0x140A13D78 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x140A19420 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 v1; // rdx
  ULONG_PTR v2; // rtt

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  _m_prefetchw(&CmpLoadHiveLock);
  v1 = CmpLoadHiveLock - 16;
  if ( (CmpLoadHiveLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v1 = 0LL;
  if ( (CmpLoadHiveLock & 2) != 0
    || (v2 = CmpLoadHiveLock,
        v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpLoadHiveLock, v1, CmpLoadHiveLock)) )
  {
    ExfReleasePushLock(&CmpLoadHiveLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpLoadHiveLock);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
