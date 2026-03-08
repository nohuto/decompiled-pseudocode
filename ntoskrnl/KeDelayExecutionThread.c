/*
 * XREFs of KeDelayExecutionThread @ 0x140256A00
 * Callers:
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     CcPurgeCacheSection @ 0x1402A0EA0 (CcPurgeCacheSection.c)
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 *     ExpExpandResourceOwnerTable @ 0x1402D9FE0 (ExpExpandResourceOwnerTable.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E6D0C (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     FsRtlCreateSectionForDataScan @ 0x140368300 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSystemSection @ 0x14036BD9C (MiCreateSystemSection.c)
 *     PnpBootDeviceWait @ 0x14038932C (PnpBootDeviceWait.c)
 *     MiMappedPageWriter @ 0x14038D570 (MiMappedPageWriter.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403BC0E4 (CcDeletePrivateVolumeCacheMap.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403CEA10 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x1405332B4 (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140536B34 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x14054C410 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140556380 (IopKeepAliveWorker.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C6BA0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CD074 (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x1405E09D0 (DifKeDelayExecutionThreadWrapper.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiRemoveUnusedSegments @ 0x1406236E4 (MiRemoveUnusedSegments.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x140631E4C (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllPagesWorker @ 0x1406378D4 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1406379DC (MiFlushAllStoreSwapPages.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 *     MiDelayFaultingThread @ 0x140643864 (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     sub_14066A530 @ 0x14066A530 (sub_14066A530.c)
 *     IpmiLibpDelay @ 0x140675A4C (IpmiLibpDelay.c)
 *     PoBlockConsoleSwitch @ 0x14067F698 (PoBlockConsoleSwitch.c)
 *     PnpCompleteDeviceEvent @ 0x14068C1BC (PnpCompleteDeviceEvent.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140692BE4 (EtwpWaitForBufferReferenceCount.c)
 *     PfpOpenHandleCreate @ 0x1406A5020 (PfpOpenHandleCreate.c)
 *     CmpTransMgrCommit @ 0x1406B5ED0 (CmpTransMgrCommit.c)
 *     NtDelayExecution @ 0x1406E09F0 (NtDelayExecution.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     NtCreateJobObject @ 0x1406F7BA0 (NtCreateJobObject.c)
 *     MmManagePartitionMemoryInformation @ 0x1407059DC (MmManagePartitionMemoryInformation.c)
 *     MmCreateSpecialImageSection @ 0x14070DBD4 (MmCreateSpecialImageSection.c)
 *     CmpUuidCreate @ 0x140733C60 (CmpUuidCreate.c)
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     ExpWatchProductTypeWork @ 0x1407586E0 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeSession @ 0x14075E0F0 (NtNotifyChangeSession.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 *     NtCancelIoFile @ 0x14076FE10 (NtCancelIoFile.c)
 *     PopPolicyWorkerNotify @ 0x14078DE30 (PopPolicyWorkerNotify.c)
 *     MiCreateSectionCommon @ 0x1407D01E0 (MiCreateSectionCommon.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1407D9E54 (IoCancelThreadIo.c)
 *     MmGetSystemRoutineAddress @ 0x1407EA850 (MmGetSystemRoutineAddress.c)
 *     PfTLoggingWorker @ 0x140839670 (PfTLoggingWorker.c)
 *     PnpAllocateCriticalMemory @ 0x1408637CC (PnpAllocateCriticalMemory.c)
 *     MmVirtualAccessFault @ 0x1408A7758 (MmVirtualAccessFault.c)
 *     IopCancelAlertedRequest @ 0x14094140C (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x14094E9BC (IopFreeBandwidthContract.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14096EB8C (PipEventRemovalCheckOpenHandles.c)
 *     PoShutdownBugCheck @ 0x1409865B0 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1409FD980 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x140A04C80 (WheaRemoveErrorSource.c)
 *     CmpRetryBackOff @ 0x140A1BA24 (CmpRetryBackOff.c)
 *     MiGetReadyInPageBlock @ 0x140A2E670 (MiGetReadyInPageBlock.c)
 *     sub_140A4AACC @ 0x140A4AACC (sub_140A4AACC.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140AD8C48 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140AE80B8 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140B662B4 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B68F88 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiCheckWaitNext @ 0x14022AE00 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x140239300 (KiFastExitThreadWait.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402934C0 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x140293640 (KiCheckDueTimeExpired.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbp
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  unsigned __int8 v9; // al
  __int64 v10; // r12
  unsigned int v11; // r13d
  NTSTATUS v12; // r15d
  int v13; // ecx
  NTSTATUS v14; // eax
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v19; // [rsp+90h] [rbp+18h]
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v18 = 0LL;
  v20 = 0;
  if ( !Interval->QuadPart && WaitMode && !Alertable && (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 )
    return KeYieldExecution(0LL);
  v9 = KiCheckWaitNext((__int64)CurrentThread, (__int64)Interval, 1, &v18, &v20);
  v10 = v18;
  v11 = v20;
  v19 = v9;
  while ( 1 )
  {
    result = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
    v12 = result;
    if ( result )
      break;
    if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v11, v10) )
    {
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v19);
      if ( !Interval->QuadPart )
        return KeYieldExecution(0LL);
      return v12;
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v14 = KiCommitThreadWait(v13, (int)CurrentThread + 320, v11, v10, 0LL);
    if ( v14 != 256 )
    {
      if ( v14 != 258 )
        return v14;
      return v4;
    }
    v19 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v17) = 4;
      else
        v17 = (-1LL << (CurrentIrql + 1)) & 4;
      v10 = v18;
      v11 = v20;
      SchedulerAssist[5] |= v17;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  return result;
}
