/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1406EB544
 * Callers:
 *     CmpTryToRundownHive @ 0x140360C44 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmKtmNotification @ 0x14066E410 (CmKtmNotification.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x1406EADC0 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x1406EB100 (CmpDoFlushNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x14071B940 (CmpLateUnloadHiveWorker.c)
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E774 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x140872B80 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
}
