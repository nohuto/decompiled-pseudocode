/*
 * XREFs of CmpAcquireHiveLoadUnloadRundown @ 0x140AF2058
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1406C0BF0 (CmpInitHiveFromFile.c)
 *     CmLoadKey @ 0x140732FF8 (CmLoadKey.c)
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14074A6B0 (CmpLateUnloadHiveWorker.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x140A0B850 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x140A18168 (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x140A19420 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 */

BOOLEAN CmpAcquireHiveLoadUnloadRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = ExAcquireRundownProtection_0(&CmpHiveLoadUnloadRundown);
  if ( !v1 )
    KeLeaveCriticalRegion();
  return v1;
}
