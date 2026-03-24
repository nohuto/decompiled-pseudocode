/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1402067A0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057B0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x1402D44D0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402D5100 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCancelNotify @ 0x140303070 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x140306650 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403752B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403929CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1403B50B0 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404EFF30 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1404F00D0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F0144 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1405CD900 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405EA170 (FsRtlpOplockFsctrlInternal.c)
 *     CmpNotifyTriggerCheck @ 0x1405ED044 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     CmpRunDownCmRM @ 0x14066D560 (CmpRunDownCmRM.c)
 *     CmpCleanupLightWeightTransaction @ 0x14066DB30 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14066DE54 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14066E164 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmKtmNotification @ 0x14066E410 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x14066E8B8 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x14066E974 (CmpIsCmRm.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406746F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140675020 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140675380 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x140675B00 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140675B90 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlOplockBreakH @ 0x14069B610 (FsRtlOplockBreakH.c)
 *     CmRmFinalizeRecovery @ 0x1406A24AC (CmRmFinalizeRecovery.c)
 *     CmNotifyRunDown @ 0x1406C5510 (CmNotifyRunDown.c)
 *     LOCK_POST_LIST @ 0x1406DF184 (LOCK_POST_LIST.c)
 *     LOCK_CM_RM_LIST @ 0x14070D9B4 (LOCK_CM_RM_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14071CCF0 (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddTrans @ 0x14076644C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407666DC (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140770144 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1407702A4 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140770D50 (CmpTransMgrRollback.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407D0EB0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmObliterateRMTxArray @ 0x140872A64 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140872B80 (CmpLazyCommitWorker.c)
 *     FsRtlCheckUpperOplock @ 0x14088B900 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088BEAC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14088BFE8 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14088D590 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1408BB810 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1409234D0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140923570 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140923640 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140923B60 (SepNotifyFileSystems.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140950804 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x140951150 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951944 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140951F1C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x140953040 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409531D0 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x140953360 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409539B0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140953E70 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140954070 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140954190 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140954410 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140954710 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140954990 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140954A40 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140954D60 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x140954F70 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140955180 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140955390 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rdi
  __int64 v4; // rax
  char v5; // cl
  int SessionId; // eax
  bool v7; // zf
  unsigned __int8 AbOrphanedEntrySummary; // di

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  LOBYTE(v4) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v4 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_20;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v4) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v5 = v4;
  _BitScanForward((unsigned int *)&v4, (unsigned __int8)v4);
  CurrentThread->AbEntrySummary = v5 & ~(1 << v4);
  v2 = (__int64)&CurrentThread->LockEntries[v4];
  if ( !v2 )
  {
LABEL_20:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_140C4F9C8[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v2 + 40) = SessionId;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}
