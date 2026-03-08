/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x14023FC30
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14023BBE0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestShareableOplock @ 0x14023EEF0 (FsRtlpRequestShareableOplock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14023FC00 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlUninitializeOplock @ 0x1402E06C0 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x1402F2B70 (FsRtlCancelNotify.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403B9C94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403CD730 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x140457790 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14053B920 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x14053BAE0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053BB78 (FsRtlpAcknowledgeOplockBreak.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x1405D4A90 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x1405DFD10 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x14067C390 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406B3240 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x1406B3714 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1406B3790 (CmpPostNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     LOCK_TRANSACTION_LIST @ 0x1406B530C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddTrans @ 0x1406B570C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406B5B04 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140703B40 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     CmRmFinalizeRecovery @ 0x140733440 (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x1407346E8 (CmpIsCmRm.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 *     CmpTransInitializeTransaction @ 0x1407353BC (CmpTransInitializeTransaction.c)
 *     CmpLogCheckpoint @ 0x140735720 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x14074C2A8 (CmSnapshotRMTxArray.c)
 *     CmpRunDownCmRM @ 0x14074C420 (CmpRunDownCmRM.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14075D2DC (ExpGetFirmwareEnvironmentVariable.c)
 *     FsRtlNotifyCleanup @ 0x140775C10 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140775CA0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpTransMgrRollback @ 0x140781FE8 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightTransaction @ 0x140782064 (CmpCleanupLightWeightTransaction.c)
 *     FsRtlOplockBreakH2 @ 0x1407932D0 (FsRtlOplockBreakH2.c)
 *     CmNotifyRunDown @ 0x1407D9F54 (CmNotifyRunDown.c)
 *     NtQueryBootEntryOrder @ 0x14083E080 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14083E280 (NtQueryBootOptions.c)
 *     NtEnumerateBootEntries @ 0x14083E4F0 (NtEnumerateBootEntries.c)
 *     FsRtlNotifyFilterReportChange @ 0x140848F70 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x14084F730 (FsRtlNotifyFilterChangeDirectory.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x14085CFC0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     NtGetEnvironmentVariableEx @ 0x14085E820 (NtGetEnvironmentVariableEx.c)
 *     FsRtlCheckUpperOplock @ 0x14093AC60 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14093B3DC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14093B518 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14093D030 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140971790 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1409CCDD0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1409CCE70 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1409CCF40 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1409CD480 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FAB20 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FB114 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1409FBA50 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FBBE0 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1409FBD70 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FC230 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FC490 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1409FC710 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FC7C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1409FCAF0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1409FCD00 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1409FCF20 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1409FD130 (NtSetSystemEnvironmentValue.c)
 *     CmObliterateRMTxArray @ 0x140A19310 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140A19420 (CmpLazyCommitWorker.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A19944 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A19AB4 (CmpPrepareLightWeightTransaction.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned int v11; // [rsp+40h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(FastMutex, CurrentThread)) != 0 )
  {
    _BitScanForward(&v5, AbEntrySummary);
    v11 = v5;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v9 = *SchedulerAssist;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v11);
    if ( (unsigned __int64)FastMutex - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended(FastMutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  FastMutex->Owner = CurrentThread;
}
