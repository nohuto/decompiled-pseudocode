/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1407523B8
 * Callers:
 *     CmpTryToRundownHive @ 0x1402092DC (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x140615C34 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140615E8C (CmShutdownSystem2.c)
 *     CmReleaseLoadKeyContext @ 0x140692BE4 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x140752430 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x140769B50 (CmLoadAppKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16AC8 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x140A1C170 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpLoadHiveLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpLoadHiveLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpLoadHiveLock, result, (__int64)&CmpLoadHiveLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
  return result;
}
