/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x14068934C
 * Callers:
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmReleaseLoadKeyContext @ 0x1406800D0 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1407174E0 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmKtmNotification @ 0x140741CF0 (CmKtmNotification.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1409194E0 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

char UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
