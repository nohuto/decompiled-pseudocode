/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140995FE0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14022E9A0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140325760 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x14038427C (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7B50 (RtlBootStatusDisableFlushing.c)
 *     PopClearHibernateDiagnosticInfo @ 0x140622B2C (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x140622BBC (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x140776D94 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x14077717C (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x1407773E0 (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x140777420 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x140777464 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1407774A8 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x140777514 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14077771C (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14078DC94 (PopReleaseTransitionLock.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  UNICODE_STRING *v0; // rcx
  __int64 v1; // rcx

  qword_140C23C20 = (__int64)KeGetCurrentThread();
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  RtlBootStatusDisableFlushing(0);
  PopClearTransitionCheckpoints();
  PopClearSleepMarker();
  PopClearSystemSleepCheckpoint(0);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext(v0);
  PopAcquirePolicyLock();
  if ( BYTE8(PopCapabilities) )
    PopAdjustHiberFile(v1);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock();
  qword_140C23C20 = 0LL;
  return PopReleaseTransitionLock(1);
}
