/*
 * XREFs of KeResetEvent @ 0x140344C50
 * Callers:
 *     PopFxIdleWorker @ 0x140260604 (PopFxIdleWorker.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265340 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcUnmapVacbArray @ 0x1402934F0 (CcUnmapVacbArray.c)
 *     MiIssueSynchronousFlush @ 0x140306D10 (MiIssueSynchronousFlush.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140312490 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140312670 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140317EF8 (MmStoreFlushOutstandingEvictions.c)
 *     PnpLockDeviceActionQueue @ 0x140320450 (PnpLockDeviceActionQueue.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403306A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRetryNonPagedAllocation @ 0x14033DC4C (MiRetryNonPagedAllocation.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140349850 (PopUpdateWatchdogNoWorkersEvent.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14034F4D8 (SmKmStoreHelperWaitForCommand.c)
 *     PnpRequestDeviceAction @ 0x14036F614 (PnpRequestDeviceAction.c)
 *     ExUnregisterCallback @ 0x1403812B0 (ExUnregisterCallback.c)
 *     MiProcessDereferenceList @ 0x14038746C (MiProcessDereferenceList.c)
 *     MiMarkSessionDeletePending @ 0x1403896B0 (MiMarkSessionDeletePending.c)
 *     PopFxAllocatePowerIrp @ 0x140399310 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x14039FE6C (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5454 (MiQueueWorkingSetRequest.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B5B18 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B63E4 (MiUpdateAvailableEvents.c)
 *     MiDereferenceSegmentThread @ 0x1403BCDD0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BF584 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403C0C60 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C81C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F178C (IopValidateAndGetWriteParameters.c)
 *     MiWaitForFreePagesToZero @ 0x14054FECC (MiWaitForFreePagesToZero.c)
 *     MiWaitForAvailablePages @ 0x14055BFE4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x140561FDC (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B298 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405768F4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AE99C (EtwpCovSampCaptureContextStop.c)
 *     sub_1405BF110 @ 0x1405BF110 (sub_1405BF110.c)
 *     WdtpTimerCallback @ 0x1405C6710 (WdtpTimerCallback.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 *     PnpInsertEventInQueue @ 0x140634C88 (PnpInsertEventInQueue.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     IopDeleteFile @ 0x140650DF0 (IopDeleteFile.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     NtClearEvent @ 0x140668DB0 (NtClearEvent.c)
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 *     IopCancelIrpsInThreadList @ 0x140682588 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140691690 (NtNotifyChangeDirectoryFileEx.c)
 *     NtResetEvent @ 0x1406929D0 (NtResetEvent.c)
 *     EtwpSynchronizeWithLogger @ 0x14069BD8C (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x1406BE4D0 (EtwpLogger.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1406C8A70 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406DC020 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x1406EB4E0 (CmpLockRegistryFreezeAware.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     CmpLinkHiveToMaster @ 0x14071D600 (CmpLinkHiveToMaster.c)
 *     NtSetVolumeInformationFile @ 0x14076C940 (NtSetVolumeInformationFile.c)
 *     WmipCopyFromEventQueues @ 0x14076E9F4 (WmipCopyFromEventQueues.c)
 *     ArbArbiterHandler @ 0x140771250 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x140772340 (PoUnregisterPowerSettingCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140775640 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PfGenerateTrace @ 0x1407772D4 (PfGenerateTrace.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B720 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077BFD0 (IoSetInformation.c)
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14078CC7C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078EB1C (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x1407AD3A0 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x1407BF500 (PfTInitialize.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9B60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A0F0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     NtWaitForDebugEvent @ 0x1408864A0 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x1408870C4 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x140892110 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x140893670 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14089B114 (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5860 (PopFxUpdateVetoMaskWork.c)
 *     PopSetSystemAwayMode @ 0x1408E7820 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1408E7CC0 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409055DC (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x14090F4D8 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942B10 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_14096208C @ 0x14096208C (sub_14096208C.c)
 *     PfpScenCtxPrefetchWait @ 0x1409910A8 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x14099851C (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140998730 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1409AAF18 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB274 (IopShutdownBaseFileSystems.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140A4EB3C (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140A8F9DC (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // si
  LONG SignalState; // edi
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v10; // r9
  int v11; // edx
  bool v12; // zf
  int v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)v1 | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  v13 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v13, v1, v2, (__int64)SchedulerAssist);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return SignalState;
}
