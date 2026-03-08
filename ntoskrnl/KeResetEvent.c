/*
 * XREFs of KeResetEvent @ 0x14023EC60
 * Callers:
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     IopValidateAndGetWriteParameters @ 0x1402400A0 (IopValidateAndGetWriteParameters.c)
 *     MiQueueWorkingSetRequest @ 0x1402B8A34 (MiQueueWorkingSetRequest.c)
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x1402BAC6C (PopFxAllocatePowerIrp.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1402BCCE4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BE330 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     ExUnregisterCallback @ 0x140302720 (ExUnregisterCallback.c)
 *     PopFxIdleWorker @ 0x14030662C (PopFxIdleWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403565C0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140356AC0 (SmKmStoreHelperWorker.c)
 *     MiRetryNonPagedAllocation @ 0x140364340 (MiRetryNonPagedAllocation.c)
 *     MiSyncCommitSignals @ 0x1403929E0 (MiSyncCommitSignals.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140394AB8 (MiSignalNonPagedPoolWatchers.c)
 *     MiDereferenceSegmentThread @ 0x1403A2790 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1403A3150 (MiStoreEvictThread.c)
 *     MiUpdateAvailableEvents @ 0x1403A9340 (MiUpdateAvailableEvents.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403ADDE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B07D0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403BDD18 (CcInsertPrivateVolumeCacheMap.c)
 *     PnpLockDeviceActionQueue @ 0x1403BDF7C (PnpLockDeviceActionQueue.c)
 *     PopFxAllocatePowerIrpLegacy @ 0x14040B520 (PopFxAllocatePowerIrpLegacy.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140588718 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14058DEFC (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x14059B0CC (PopIdleWakeAssignAccountingToSource.c)
 *     PdcResetEvent @ 0x1405B510C (PdcResetEvent.c)
 *     SmTerminateStoreProcess @ 0x1405C77C8 (SmTerminateStoreProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405C9668 (SmKmStoreHelperWaitForCommand.c)
 *     DifKeClearEventWrapper @ 0x1405E08D0 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x1405E3230 (DifKeResetEventWrapper.c)
 *     EtwpCovSampCaptureContextStop @ 0x140600CB8 (EtwpCovSampCaptureContextStop.c)
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForAvailablePages @ 0x1406512FC (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x14065745C (MiDrainCrossPartitionUsage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065AA54 (MmStoreFlushOutstandingEvictions.c)
 *     sub_14066A530 @ 0x14066A530 (sub_14066A530.c)
 *     WdtpTimerCallback @ 0x140671BB0 (WdtpTimerCallback.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     sub_1406DF1C0 @ 0x1406DF1C0 (sub_1406DF1C0.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     PfGenerateTrace @ 0x14073A870 (PfGenerateTrace.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x140749078 (EtwpSynchronizeWithLogger.c)
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     NtClearEvent @ 0x14075E010 (NtClearEvent.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x14076DF74 (IopFlushBuffersFile.c)
 *     IopCancelIrpsInThreadList @ 0x1407701C8 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14077B8F0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtResetEvent @ 0x140789DA0 (NtResetEvent.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140799754 (SPCallServerHandleWaitForDisplayWindow.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140818B6C (PopCancelIgnoreBatteryStatusChange.c)
 *     PfTLoggingWorker @ 0x140839670 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x140845B5C (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x140849900 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408535C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408717B8 (SshpSessionManagerSendControlEvent.c)
 *     NtSetVolumeInformationFile @ 0x14087CFF0 (NtSetVolumeInformationFile.c)
 *     IopInvalidateVolumesForDevice @ 0x14087D588 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A3E60 (EtwpCovSampCaptureWorkerThread.c)
 *     NtWaitForDebugEvent @ 0x140935E70 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x140937000 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x140942874 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x140943D90 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14094E9BC (IopFreeBandwidthContract.c)
 *     PopFxUpdateVetoMaskWork @ 0x140982F50 (PopFxUpdateVetoMaskWork.c)
 *     PoUnregisterPowerSettingCallback @ 0x140984070 (PoUnregisterPowerSettingCallback.c)
 *     PopSetSystemAwayMode @ 0x140987890 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x140987EB4 (PopThermalReadCounters.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140991090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409A9170 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x1409B54A8 (RawQueryFsSizeInfo.c)
 *     WmipCopyFromEventQueues @ 0x1409DD5AC (WmipCopyFromEventQueues.c)
 *     sub_140A49A48 @ 0x140A49A48 (sub_140A49A48.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A96E64 (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140A9D25C (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140A9D464 (PfpScenCtxQueryScenarioInformation.c)
 *     PopNewWakeInfo @ 0x140A9DFB8 (PopNewWakeInfo.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x140B6FC8C (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  LONG SignalState; // esi
  _DWORD *SchedulerAssist; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v9; // r9
  int v10; // edx
  bool v11; // zf
  int v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  v12 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return SignalState;
}
