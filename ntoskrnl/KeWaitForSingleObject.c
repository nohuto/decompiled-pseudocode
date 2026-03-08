/*
 * XREFs of KeWaitForSingleObject @ 0x14033FF20
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x140201018 (FsRtlpWaitOnIrp.c)
 *     PopFxActivateDevice @ 0x140202154 (PopFxActivateDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140202F10 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     EtwpEnableMetaProviderGuid @ 0x140204F18 (EtwpEnableMetaProviderGuid.c)
 *     WmipFindRegEntryByProviderId @ 0x140208D1C (WmipFindRegEntryByProviderId.c)
 *     CcSetValidData @ 0x140209160 (CcSetValidData.c)
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 *     IopWaitForLockAlertable @ 0x140241084 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     MiReadyToZeroNextLargePage @ 0x140274AB0 (MiReadyToZeroNextLargePage.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14028E0C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     IopWaitForSynchronousIo @ 0x140299468 (IopWaitForSynchronousIo.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiQueueWorkingSetRequest @ 0x1402B8A34 (MiQueueWorkingSetRequest.c)
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopIrpWorker @ 0x1402B9440 (PopIrpWorker.c)
 *     PopSetWatchdog @ 0x1402BDFEC (PopSetWatchdog.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402BF9A0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 *     PpmCheckPeriodicStart @ 0x1402D1CE0 (PpmCheckPeriodicStart.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmTryAcquireLock @ 0x1402D2BC8 (PpmTryAcquireLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1402D7C68 (ExfWaitForRundownProtectionRelease.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     MiAsyncSlabReplenish @ 0x1402DF31C (MiAsyncSlabReplenish.c)
 *     AlpcpWaitForSingleObject @ 0x1402E0F40 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402E1014 (CcWaitForUninitializeCacheMap.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x1402E6C34 (SmKmStoreHelperCleanup.c)
 *     IoSynchronousCallDriver @ 0x1402E9470 (IoSynchronousCallDriver.c)
 *     IopLoadDriverImage @ 0x1402EE2DC (IopLoadDriverImage.c)
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     WmipReceiveNotifications @ 0x1402F642C (WmipReceiveNotifications.c)
 *     CmpDoFileRead @ 0x1402F6880 (CmpDoFileRead.c)
 *     CmSiWaitForSingleEvent @ 0x1402FCC9C (CmSiWaitForSingleEvent.c)
 *     ExUnregisterCallback @ 0x140302720 (ExUnregisterCallback.c)
 *     PopFxActivateComponent @ 0x140305D50 (PopFxActivateComponent.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140317800 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     AlpcpSignalAndWait @ 0x14033E350 (AlpcpSignalAndWait.c)
 *     ExpWaitForResource @ 0x140342994 (ExpWaitForResource.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     PopFxProcessWorkPool @ 0x140351514 (PopFxProcessWorkPool.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KiSchedulerApc @ 0x140353560 (KiSchedulerApc.c)
 *     SmKmStoreHelperWorker @ 0x140356AC0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140358874 (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403595E8 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     EtwpStartLoggerThread @ 0x14035980C (EtwpStartLoggerThread.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14035C910 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14035D974 (LdrpGetFromMUIMemCache.c)
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     MiRetryNonPagedAllocation @ 0x140364340 (MiRetryNonPagedAllocation.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14036C9E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x14037D97C (WheapAddErrorSource.c)
 *     KeSwapProcessOrStack @ 0x140391CB0 (KeSwapProcessOrStack.c)
 *     CmpLazyWriteWorker @ 0x14039B3B0 (CmpLazyWriteWorker.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14039D7D4 (LdrpSetAlternateResourceModuleHandle.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14039E8DC (KiInvokeInterruptServiceRoutine.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x14039EB38 (KiAcquireSecondaryPassiveConnectLock.c)
 *     WmipBuildTraceDeviceList @ 0x14039EBD0 (WmipBuildTraceDeviceList.c)
 *     WmiQueryTraceProviderCount @ 0x14039FC34 (WmiQueryTraceProviderCount.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1403A0050 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A14B8 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiStoreEvictThread @ 0x1403A3150 (MiStoreEvictThread.c)
 *     PopIrpWorkerControl @ 0x1403AC100 (PopIrpWorkerControl.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 *     PnpSerializeBoot @ 0x1403AD6E0 (PnpSerializeBoot.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403ADDE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B07D0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroPageWrite @ 0x1403BB864 (MiZeroPageWrite.c)
 *     WmipFindRegEntryByDevice @ 0x1403BC634 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1403BC6F4 (WmipAllocRegEntry.c)
 *     PnpLockDeviceActionQueue @ 0x1403BDF7C (PnpLockDeviceActionQueue.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403BE180 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403CEA10 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     WmipDeregisterRegEntry @ 0x1403CEEF0 (WmipDeregisterRegEntry.c)
 *     PnpLockMountableDevice @ 0x1403CF5C0 (PnpLockMountableDevice.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403D0F90 (IoReleaseRemoveLockAndWaitEx.c)
 *     ExpWaitForFastResource2 @ 0x140411334 (ExpWaitForFastResource2.c)
 *     FsFilterAllocateCompletionStack @ 0x140456BDC (FsFilterAllocateCompletionStack.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140517798 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x140534A20 (CcQueueLazyWriteScanThread.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140536B34 (CcDeleteSectionsForPartition.c)
 *     CcWriteBehindAsync @ 0x140538060 (CcWriteBehindAsync.c)
 *     FsRtlpPostStackOverflow @ 0x14053D044 (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14054ECE4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopAllocateBackpocketIrp @ 0x1405525E0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140552878 (IopAllocateReserveIrp.c)
 *     IopIoRingWaitForCompletionEvent @ 0x1405574BC (IopIoRingWaitForCompletionEvent.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14055D068 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnprQuiesce @ 0x140560D88 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x140562AF4 (PnpProcessRebalance.c)
 *     KeAbCrossThreadDelete @ 0x1405770F0 (KeAbCrossThreadDelete.c)
 *     KiSignalWaitDisconnectLock @ 0x140577CEC (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140577D20 (KiSynchronizePassiveInterruptExecution.c)
 *     KiStallBugcheckThread @ 0x140579138 (KiStallBugcheckThread.c)
 *     NtSignalAndWaitForSingleObject @ 0x140580330 (NtSignalAndWaitForSingleObject.c)
 *     PopHaltDeviceIdle @ 0x140585020 (PopHaltDeviceIdle.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140588718 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14058DE90 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopSleepDeviceList @ 0x14058E578 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x14058E81C (PopWakeDeviceList.c)
 *     PopRunMaximumIrpWorkers @ 0x140596644 (PopRunMaximumIrpWorkers.c)
 *     PopIgnoreBatteryStatusChange @ 0x14059681C (PopIgnoreBatteryStatusChange.c)
 *     PspIumFreePartitionState @ 0x1405A3B3C (PspIumFreePartitionState.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BCB34 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1405BDE60 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmTerminateStoreProcess @ 0x1405C77C8 (SmTerminateStoreProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1405C9668 (SmKmStoreHelperWaitForCommand.c)
 *     SmpFpWaitForResource @ 0x1405CA06C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405CACD0 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1405CB760 (SmWaitForSyncIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x1405E4030 (DifKeWaitForSingleObjectWrapper.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405FF6DC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x140600CB8 (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1406070D0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x140607340 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x14060EC70 (WheapProcessWorkQueueItem.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x140617408 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14062F780 (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x14063890C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140639018 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14063F8B0 (MiCheckHoldFaultForHotPatch.c)
 *     MiContractWsSwapPageFileWorker @ 0x140650250 (MiContractWsSwapPageFileWorker.c)
 *     MiWaitForAvailablePages @ 0x1406512FC (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiZeroNodeExiting @ 0x14065315C (MiZeroNodeExiting.c)
 *     MiApplyCommitDelay @ 0x140653B74 (MiApplyCommitDelay.c)
 *     MiDrainCrossPartitionUsage @ 0x14065745C (MiDrainCrossPartitionUsage.c)
 *     MiStoreDeletePartition @ 0x140659A64 (MiStoreDeletePartition.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065AA54 (MmStoreFlushOutstandingEvictions.c)
 *     sub_14066A530 @ 0x14066A530 (sub_14066A530.c)
 *     MiInSwapStore @ 0x14067E2E4 (MiInSwapStore.c)
 *     PnpDeviceEventWorker @ 0x1406892C0 (PnpDeviceEventWorker.c)
 *     WdtpCancelTimer @ 0x14068AA80 (WdtpCancelTimer.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140692AB4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpDisableTraceProviders @ 0x140693E28 (EtwpDisableTraceProviders.c)
 *     WmipOpenBlock @ 0x14069AF1C (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x14069BDF4 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x14069BED4 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectOrEvent @ 0x14069C2A8 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x14069C39C (WmipIsQuerySetGuid.c)
 *     WmipDeleteMethod @ 0x14069C630 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14069CE70 (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     WmipPrepareForWnodeAD @ 0x14069E360 (WmipPrepareForWnodeAD.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CD670 (PiControlGetSetDeviceStatus.c)
 *     sub_1406DF1C0 @ 0x1406DF1C0 (sub_1406DF1C0.c)
 *     CmpParseKey @ 0x1406E7480 (CmpParseKey.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IoDisconnectInterrupt @ 0x1406F41C0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1406F49E0 (IopDestroyActiveConnectBlock.c)
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x1406F6A4C (IopFilterResourceRequirementsCall.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x1406F75C8 (IopUncacheInterfaceInformation.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14072054C (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140720680 (IoVolumeDeviceToDosName.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x14072BBD0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14072BD40 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpGetVolumeClusterSize @ 0x14072EFBC (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x140731D18 (CmpFileFlushAndPurge.c)
 *     PopBsdFlush @ 0x14073AE24 (PopBsdFlush.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x140749078 (EtwpSynchronizeWithLogger.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     AlpcpWaitForPortReferences @ 0x140756B9C (AlpcpWaitForPortReferences.c)
 *     NtNotifyChangeSession @ 0x14075E0F0 (NtNotifyChangeSession.c)
 *     IopSynchronousApiServiceTail @ 0x14076E298 (IopSynchronousApiServiceTail.c)
 *     IopCancelIrpsInThreadList @ 0x1407701C8 (IopCancelIrpsInThreadList.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407745C4 (WmipGetGuidObjectInstanceInfo.c)
 *     NtGetMUIRegistryInfo @ 0x140779C90 (NtGetMUIRegistryInfo.c)
 *     RtlDecompressFragmentLZNT1 @ 0x14077E7B0 (RtlDecompressFragmentLZNT1.c)
 *     RtlDecompressBufferLZNT1 @ 0x14077EA00 (RtlDecompressBufferLZNT1.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     FsRtlSetKernelEaFile @ 0x140786AA0 (FsRtlSetKernelEaFile.c)
 *     WmipDisableCollectOrEvent @ 0x140786E44 (WmipDisableCollectOrEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1407870B0 (WmipSendEnableDisableRequest.c)
 *     WmipQueryGuidInfo @ 0x140787880 (WmipQueryGuidInfo.c)
 *     WmipEnumerateMofResources @ 0x140787950 (WmipEnumerateMofResources.c)
 *     FsRtlQueryCachedVdl @ 0x14078A8E0 (FsRtlQueryCachedVdl.c)
 *     IopGetSetObjectId @ 0x14079602C (IopGetSetObjectId.c)
 *     EtwpStartTrace @ 0x140796150 (EtwpStartTrace.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140798ED0 (EtwpCrimsonProvEnableCallback.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140799754 (SPCallServerHandleWaitForDisplayWindow.c)
 *     FsRtlSetFileSize @ 0x14079BDF4 (FsRtlSetFileSize.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     ObWaitForSingleObject @ 0x1407CFF10 (ObWaitForSingleObject.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407D7750 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlQueryKernelEaFile @ 0x1407D8DE0 (FsRtlQueryKernelEaFile.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     PspUserThreadStartup @ 0x1407ED430 (PspUserThreadStartup.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 *     MiReadImageHeaders @ 0x1407F17D4 (MiReadImageHeaders.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 *     WmipUpdateDataSource @ 0x1407FB4E8 (WmipUpdateDataSource.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x1407FC518 (PopSanityCheckHiberFile.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407FFD30 (PopDirectedDripsWorkerRoutine.c)
 *     IopLegacyResourceAllocation @ 0x140801DA4 (IopLegacyResourceAllocation.c)
 *     HalpPutAcpiHacksInRegistry @ 0x14080237C (HalpPutAcpiHacksInRegistry.c)
 *     IopAllocateBootResources @ 0x140804670 (IopAllocateBootResources.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 *     WmipAddMofResource @ 0x1408199DC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140819B9C (WmipFindMRByNames.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14081BD08 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14081BD34 (PnpWaitForEmptyDeviceActionQueue.c)
 *     ArbBuildAssignmentOrdering @ 0x14081E6C8 (ArbBuildAssignmentOrdering.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1408215A0 (HalGetAdapterV2.c)
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 *     PopAcquireTransitionLock @ 0x14082AD04 (PopAcquireTransitionLock.c)
 *     MiZeroPageFileFirstPage @ 0x140835D20 (MiZeroPageFileFirstPage.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835E18 (FsRtlIssueFileNotificationFsctl.c)
 *     MiInsertPageFileInList @ 0x140835F30 (MiInsertPageFileInList.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140847284 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140847424 (IopAcquireReleaseDispatcherLock.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140847A74 (WmipSendWmiIrpToTraceDeviceList.c)
 *     ArbArbiterHandler @ 0x140849900 (ArbArbiterHandler.c)
 *     WmipLegacyEtwWorker @ 0x14084D950 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14084DA68 (WmipProcessLegacyEtwRegister.c)
 *     FsRtlpRegisterUncProvider @ 0x14084EEE8 (FsRtlpRegisterUncProvider.c)
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408535C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140857778 (PdcAcquireRwLockExclusive2.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14085C3E4 (IopInsertLegacyBusDeviceNode.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14085C738 (CmpWaitOnHiveWriteQueue.c)
 *     WheapProcessWaitingETWEvents @ 0x14085D1A0 (WheapProcessWaitingETWEvents.c)
 *     IoWMISetNotificationCallback @ 0x14085EE10 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x140861480 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x140861910 (FsRtlWaitForSmssEvent.c)
 *     WmipAddDataSource @ 0x140867978 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1408680E4 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x140868484 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1408686A8 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x1408688F8 (WmipFindISinGEbyName.c)
 *     WmipProcessSynchronousEtw @ 0x1408689F0 (WmipProcessSynchronousEtw.c)
 *     PiDrvDbLoadNode @ 0x1408693C4 (PiDrvDbLoadNode.c)
 *     WmipSetTraceNotify @ 0x140869620 (WmipSetTraceNotify.c)
 *     IoWMIRegistrationControl @ 0x140869750 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140869828 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x140869990 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x140869A6C (WmipUpdateDeviceStackSize.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086B440 (FsRtlIssueDeviceIoControl.c)
 *     WmipRegistrationWorker @ 0x14086D070 (WmipRegistrationWorker.c)
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 *     FsRtlBalanceReads @ 0x140872300 (FsRtlBalanceReads.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408729DC (PnpSynchronizeDeviceEventQueue.c)
 *     IopLoadFileSystemDriver @ 0x140872E40 (IopLoadFileSystemDriver.c)
 *     IoReportTargetDeviceChange @ 0x14087D430 (IoReportTargetDeviceChange.c)
 *     IopInvalidateVolumesForDevice @ 0x14087D588 (IopInvalidateVolumesForDevice.c)
 *     WmipDeregisterDevice @ 0x14087DDC8 (WmipDeregisterDevice.c)
 *     WmipDSCleanup @ 0x14087DEB0 (WmipDSCleanup.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14087EB44 (WmipDisableCollectionForRemovedGuid.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1408803F8 (PopFxUnregisterDeviceOrWait.c)
 *     HalpQueryAcpiRealTimeClock @ 0x14092FF88 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140930098 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140930940 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpGetDynamicDevicePointer @ 0x140930A44 (HalpGetDynamicDevicePointer.c)
 *     HalpCallWakeAlarmDriver @ 0x140931F9C (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093207C (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140932B30 (HalpQueryPccInterface.c)
 *     DbgkpQueueMessage @ 0x140934EE8 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140935E70 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140937F04 (DbgkpLkmdLaunchSnapApc.c)
 *     EmPowerPagingEnabled @ 0x140939B3C (EmPowerPagingEnabled.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093A078 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14093AB20 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14093BDB0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14093D3C0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x14094140C (IopCancelAlertedRequest.c)
 *     IopGetVolumeId @ 0x140941CCC (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x140941E20 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x140942874 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140943484 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140943D90 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140944740 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14094E098 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14094E9BC (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14094F28C (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140951CD0 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140953AA8 (PnpRequestHwProfileChangeNotification.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140960AF0 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x14096A1AC (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x14096AF78 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B0E0 (PnpQueueQueryAndRemoveEvent.c)
 *     PipSendGuestAssignedNotification @ 0x14096C094 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x14096C1CC (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14097C168 (PfTCleanup.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x14097E7CC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopDeactiveThermalRequest @ 0x14097FEC8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1409800A8 (PopDisableCoolingExtension.c)
 *     PopFxNotifySxTransitionState @ 0x1409825D4 (PopFxNotifySxTransitionState.c)
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 *     PoUnregisterPowerSettingCallback @ 0x140984070 (PoUnregisterPowerSettingCallback.c)
 *     PopGetWakeSource @ 0x140984368 (PopGetWakeSource.c)
 *     PopClearHiberFileSignature @ 0x14098544C (PopClearHiberFileSignature.c)
 *     PopReadPagesFromHiberFile @ 0x140985B2C (PopReadPagesFromHiberFile.c)
 *     PopResizeHiberFile @ 0x140985EE0 (PopResizeHiberFile.c)
 *     PopSetSystemAwayMode @ 0x140987890 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x140988010 (PopThermalZoneRemove.c)
 *     NtInitiatePowerAction @ 0x140988360 (NtInitiatePowerAction.c)
 *     PopInitSystemSleeperThread @ 0x1409887A0 (PopInitSystemSleeperThread.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140990D0C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140991090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409915D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x140992740 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x140994310 (PopFanRemove.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140997860 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopPepUnregisterDevice @ 0x14099A948 (PopPepUnregisterDevice.c)
 *     SshSessionManagerFlushBuffers @ 0x14099E7B8 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AA20C (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 *     PsSetVmProcessorHostProcess @ 0x1409ADB18 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x1409B099C (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1409B0E8C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x1409B3730 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x1409B3880 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B48B0 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x1409B5354 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B54A8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B58F4 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409BF360 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     PdcWaitForEvent @ 0x1409C5C1C (PdcWaitForEvent.c)
 *     SmProcessResizeRequest @ 0x1409D4470 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D4588 (SmProcessStatsRequest.c)
 *     SmStoreCompressionStop @ 0x1409D4AD8 (SmStoreCompressionStop.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D4DC0 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5F0C (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1409D6744 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D6804 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409D7038 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409D70D4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7778 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1409DBCF0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1409DCDD8 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1409DD790 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1409DD9FC (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1409DDB94 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409DEAD0 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x1409DEE58 (WmipWaitForCollectionEnabled.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPmcProfileSource @ 0x1409E31B0 (EtwpGetPmcProfileSource.c)
 *     EtwpSetPmcProfileSource @ 0x1409E3C40 (EtwpSetPmcProfileSource.c)
 *     EtwpEnableDisableUMGL @ 0x1409E4568 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E4B6C (EtwpUpdatePerProcessTracing.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409E9198 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1409E91F4 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x1409EA6F0 (EtwpKsrCallback.c)
 *     EtwpSampledProfileRunDown @ 0x1409ECE34 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409ED100 (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1409EE130 (EtwpCovSampCaptureFlush.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 *     ExpWorkQueueDestroy @ 0x1409FDC74 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x140A019E0 (NtStartProfile.c)
 *     NtStopProfile @ 0x140A01C50 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x140A01E50 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A02210 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x140A05070 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A05140 (WheaAttemptPhysicalPageOffline.c)
 *     MiInjectThreadForHotPatch @ 0x140A34C94 (MiInjectThreadForHotPatch.c)
 *     sub_140A49A48 @ 0x140A49A48 (sub_140A49A48.c)
 *     sub_140A4AACC @ 0x140A4AACC (sub_140A4AACC.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A6C404 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A70420 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     VhdiMountVhdFile @ 0x140A7058C (VhdiMountVhdFile.c)
 *     VhdiVerifyBootDisk @ 0x140A70CE0 (VhdiVerifyBootDisk.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A96E64 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140A99894 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9ADE0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140A9D25C (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140AA3378 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140AA3FCC (PopBuildDeviceNotifyList.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     MiZeroAllPageFiles @ 0x140AA8C04 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 *     IovpUnloadDriver @ 0x140ABEEB8 (IovpUnloadDriver.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACAAA8 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140ACEBEC (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140ACEF70 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140AD7230 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140ADC600 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140AE9FB8 (AnFwFadeCompletion.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     IopStoreBootDriveLetter @ 0x140B54800 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B54C8C (IopCreateArcNamesCd.c)
 *     EtwpFixBootLoggers @ 0x140B6569C (EtwpFixBootLoggers.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B6625C (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9874C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B98940 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140B98D18 (SbpWaitForVmbus.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiFastExitThreadWait @ 0x140239300 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x1402AE04C (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 *p_WaitIrql; // r13
  unsigned __int8 v8; // r14
  BOOLEAN v9; // di
  KPROCESSOR_MODE v10; // r12
  unsigned __int8 v11; // r12
  bool v12; // zf
  ULONG_PTR v13; // rdi
  __int64 v14; // rcx
  volatile __int64 WaitStatus; // rsi
  unsigned __int8 v16; // al
  __int64 *v17; // r11
  unsigned int v18; // r14d
  struct _KPRCB *v19; // r15
  int v20; // edx
  __int64 v21; // r9
  unsigned int v22; // r10d
  unsigned __int64 v23; // rax
  __int64 **v24; // rcx
  __int64 *v25; // r15
  unsigned __int8 v26; // dl
  int v27; // eax
  unsigned __int64 v28; // rdi
  _KWAIT_STATUS_REGISTER v29; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v32; // r11
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  volatile unsigned __int8 DpcRoutineActive; // cl
  volatile signed __int32 v38; // eax
  char v39; // al
  __int64 *p_AbWaitObject; // r9
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v42; // rcx
  __int64 v43; // rcx
  _KWAIT_STATUS_REGISTER v44; // al
  _DWORD *v45; // r10
  __int64 v46; // r8
  unsigned __int8 v47; // dl
  struct _KPRCB *v48; // rcx
  unsigned __int8 v49; // cl
  unsigned __int8 v50; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v52; // rdx
  _DWORD *v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rax
  ULONG_PTR v56; // rax
  __int64 v57; // rax
  char v58; // bl
  __int64 *v59; // rax
  __int64 v60; // rdx
  __int64 *v61; // r11
  char v62; // r10
  __int64 v63; // rdx
  unsigned int v64; // r10d
  __int64 *v65; // rcx
  char v66; // bl
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v68; // rdx
  __int64 *v69; // r11
  char v70; // r10
  __int64 v71; // rdx
  unsigned int v72; // r10d
  __int64 *v73; // rcx
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // rcx
  _DWORD *v76; // rdx
  unsigned __int8 v77; // cl
  struct _KPRCB *v78; // r9
  _DWORD *v79; // r8
  int v80; // eax
  signed __int32 v81[8]; // [rsp+0h] [rbp-100h] BYREF
  KPROCESSOR_MODE v82; // [rsp+30h] [rbp-D0h]
  bool v83; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v84; // [rsp+32h] [rbp-CEh]
  BOOLEAN v85; // [rsp+33h] [rbp-CDh]
  unsigned int v86; // [rsp+34h] [rbp-CCh]
  LONGLONG QuadPart; // [rsp+38h] [rbp-C8h]
  __int64 v88; // [rsp+40h] [rbp-C0h]
  int v89; // [rsp+48h] [rbp-B8h] BYREF
  KWAIT_REASON v90; // [rsp+4Ch] [rbp-B4h]
  int v91; // [rsp+50h] [rbp-B0h] BYREF
  int v92; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v93; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+68h] [rbp-98h] BYREF
  __int64 v96; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v97[2]; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  __int128 v99; // [rsp+90h] [rbp-70h]
  __int64 v100; // [rsp+A0h] [rbp-60h]
  _DWORD v101[84]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v102[84]; // [rsp+200h] [rbp+100h] BYREF

  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2 = (ULONG_PTR)Object;
  v85 = Alertable;
  v82 = WaitMode;
  v90 = WaitReason;
  v97[0] = 0LL;
  QuadPart = 0LL;
  v83 = 0;
  v88 = 0LL;
  v84 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( v84 )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v32) = 4;
      else
        v32 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v32;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v86 = 1;
    }
    else
    {
      p_WaitIrql = &CurrentThread->WaitIrql;
      v86 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v86 = 0;
  }
  while ( 1 )
  {
    v8 = *p_WaitIrql;
    v9 = v85;
    v10 = v82;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v10;
      if ( v9 )
        CurrentThread->MiscFlags |= 0x10u;
      v89 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v89);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || v8 || CurrentThread->SpecialApcDisable )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        v50 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v50 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v52 = CurrentPrcb->SchedulerAssist;
          v12 = (v52[5] & 0xFFFF0003) == 0;
          v52[5] &= 0xFFFF0003;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v49 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
      {
        v53 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v49 == 2 )
          LODWORD(v54) = 4;
        else
          v54 = (-1LL << (v49 + 1)) & 4;
        v53[5] |= v54;
      }
      *p_WaitIrql = 0;
    }
    v11 = v84;
    v12 = v9 == 0;
    v13 = BugCheckParameter2;
    if ( v12 )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v82 )
      {
        LODWORD(WaitStatus) = 192;
LABEL_99:
        CurrentThread->ThreadLock = 0LL;
        v47 = v8;
        v48 = KeGetCurrentPrcb();
LABEL_100:
        KiCheckForThreadDispatch((__int64)v48, v47);
        return WaitStatus;
      }
      v14 = 0LL;
    }
    else
    {
      if ( CurrentThread->Alerted[v82] )
      {
        CurrentThread->Alerted[v82] = 0;
        LODWORD(WaitStatus) = 257;
        v14 = 0LL;
      }
      else if ( !v82
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        v14 = 0LL;
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          LODWORD(WaitStatus) = 257;
        }
        else
        {
          LODWORD(WaitStatus) = 0;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        LODWORD(WaitStatus) = 192;
        v14 = 0LL;
      }
      if ( (_DWORD)WaitStatus )
        goto LABEL_99;
    }
    v16 = v90;
    v17 = (__int64 *)&CurrentThread->320;
    CurrentThread->WaitBlockFill6[68] = 5;
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitReason = v16;
    v18 = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v19 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)v13;
    if ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v13 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v13, 7u) );
      v17 = (__int64 *)&CurrentThread->320;
    }
    v20 = *(_DWORD *)(v13 + 4);
    if ( (*(_BYTE *)v13 & 0x7F) == 2 )
      break;
    if ( v20 > 0 )
    {
      if ( (*(_BYTE *)v13 & 7) == 1 )
      {
        v27 = 0;
      }
      else
      {
        if ( (*(_BYTE *)v13 & 0x7F) != 5 )
          goto LABEL_36;
        v27 = v20 - 1;
      }
      *(_DWORD *)(v13 + 4) = v27;
      goto LABEL_36;
    }
LABEL_23:
    v21 = QuadPart;
    v22 = v86;
    v23 = QuadPart;
    if ( v86 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v34 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v23 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !*p_WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v23 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v86 )
        goto LABEL_25;
      if ( !QuadPart )
      {
LABEL_55:
        LODWORD(WaitStatus) = 258;
        goto LABEL_36;
      }
      v34 = MEMORY[0xFFFFF78000000014];
    }
    if ( v34 > v23 )
      goto LABEL_55;
LABEL_25:
    v24 = *(__int64 ***)(v13 + 16);
    if ( *v24 != (__int64 *)(v13 + 8) )
      goto LABEL_156;
    *v17 = v13 + 8;
    v17[1] = (__int64)v24;
    *v24 = v17;
    *(_QWORD *)(v13 + 16) = v17;
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    v12 = !v83;
    CurrentThread->WaitBlockCount = 1;
    if ( v12 )
    {
      v25 = (__int64 *)v88;
    }
    else
    {
      v55 = KeAbPreAcquire(v13, 0LL);
      v21 = QuadPart;
      v17 = (__int64 *)&CurrentThread->320;
      v22 = v86;
      v25 = (__int64 *)v55;
      v88 = v55;
    }
    if ( v25 )
    {
      KeAbPreWait(v25);
      LODWORD(WaitStatus) = (unsigned int)KiCommitThreadWait(
                                            (ULONG_PTR)CurrentThread,
                                            (__int64 *)&CurrentThread->320,
                                            v86,
                                            QuadPart,
                                            v97);
      if ( (WaitStatus & 0xFFFFFF7F) != 0 )
      {
        v56 = KeAbPreAcquire(v13, (__int64)v25);
        KeAbPostReleaseEx(v13, v56);
        v88 = 0LL;
      }
      else
      {
        v88 = KeAbPreAcquire(v13, (__int64)v25);
        *(_BYTE *)(v88 + 18) = 1;
      }
    }
    else
    {
      LODWORD(WaitStatus) = (unsigned int)KiCommitThreadWait((ULONG_PTR)CurrentThread, v17, v22, v21, v97);
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( (_DWORD)WaitStatus != 256 )
      return WaitStatus;
    v84 = 0;
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
    {
      v45 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v26 == 2 )
        LODWORD(v46) = 4;
      else
        v46 = (-1LL << (v26 + 1)) & 4;
      v45[5] |= v46;
    }
    *p_WaitIrql = v26;
  }
  v83 = (*(_BYTE *)(v13 + 48) & 2) != 0;
  if ( v20 <= 0 && (CurrentThread != *(struct _KTHREAD **)(v13 + 40) || *(_BYTE *)(v13 + 2) != v19->DpcRoutineActive) )
    goto LABEL_23;
  v35 = *(_DWORD *)(v13 + 4);
  if ( v35 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    KiFastExitThreadWait((__int64)v19, (__int64)CurrentThread, v11);
    RtlRaiseStatus(-1073741423);
  }
  v36 = v35 - 1;
  *(_DWORD *)(v13 + 4) = v36;
  if ( v36 )
  {
LABEL_36:
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v81, 0);
    if ( CurrentThread->ThreadLock )
    {
      v92 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v92);
        while ( CurrentThread->ThreadLock );
      }
      CurrentThread->ThreadLock = 0LL;
    }
    v28 = *p_WaitIrql;
    v29.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    v95 = 0LL;
    if ( (v29.Flags & 0x38) != 0 )
    {
      if ( (v29.Flags & 0x18) != 0 )
      {
        if ( (v29.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v96 = 0LL;
        v66 = 0;
        memset(v102, 0, sizeof(v102));
        KiAcquirePrcbLocksForIsolationUnit((__int64)v19, 0, &v95);
        if ( !v19->NextThread )
        {
          KiStartRescheduleContext((__int64)v102, &v95, 0LL);
          RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v102, (__int64)v19);
          KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v68, 0, 1);
          if ( (v70 & 2) != 0 )
          {
            v71 = LOBYTE(v102[0]);
            v72 = 0;
            if ( LOBYTE(v102[0]) )
            {
              do
              {
                v73 = (__int64 *)&v102[10 * v72 + 4];
                if ( v73 != v69 )
                {
                  KiAdjustRescheduleContextEntryForThreadRemoval(v73, v71, 0, 1);
                  v71 = LOBYTE(v102[0]);
                }
                ++v72;
              }
              while ( v72 < (unsigned __int8)v71 );
            }
            v102[1] = 0;
          }
          KiSearchForNewThreadsForRescheduleContext(v102, (__int64)&v96);
          v66 = KiCommitRescheduleContext((unsigned __int8 *)v102, v19, 0, &v96);
        }
        KiReleasePrcbLocksForIsolationUnit(&v95);
        if ( v66 )
        {
          KiCompleteRescheduleContext(v102, (__int64)v19);
          KiFlushSoftwareInterruptBatch((__int64)&v19->DeferredDispatchInterrupts);
        }
        KiProcessDeferredReadyList((__int64)v19, (__int64)&v96, v28);
        return WaitStatus;
      }
      goto LABEL_171;
    }
    goto LABEL_38;
  }
  CurrentThread->WaitStatus = 0LL;
  v91 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v91);
    while ( CurrentThread->ThreadLock );
  }
  if ( *(_BYTE *)(v13 + 49) )
    --CurrentThread->KernelApcDisable;
  if ( v19->CurrentThread == CurrentThread )
    DpcRoutineActive = v19->DpcRoutineActive;
  else
    DpcRoutineActive = 0;
  v100 = 0LL;
  v38 = *(_DWORD *)v13;
  v99 = 0LL;
  LODWORD(v99) = v38;
  BYTE2(v99) = DpcRoutineActive;
  *(_DWORD *)v13 = v99;
  v39 = *(_BYTE *)(v13 + 48);
  *(_QWORD *)(v13 + 40) = CurrentThread;
  if ( (v39 & 1) != 0 )
  {
    *(_BYTE *)(v13 + 48) = v39 & 0xFE;
    CurrentThread->WaitStatus |= 0x80uLL;
  }
  if ( (*(_BYTE *)(v13 + 48) & 2) != 0 )
    CurrentThread->AbWaitObject = (void *volatile)v13;
  else
    CurrentThread->AbWaitObject = 0LL;
  p_AbWaitObject = (__int64 *)&CurrentThread->AbWaitObject;
  Blink = CurrentThread->MutantListHead.Blink;
  v42 = (struct _LIST_ENTRY *)(v13 + 24);
  if ( Blink->Flink != &CurrentThread->MutantListHead )
LABEL_156:
    __fastfail(3u);
  v42->Flink = &CurrentThread->MutantListHead;
  *(_QWORD *)(v13 + 32) = Blink;
  Blink->Flink = v42;
  CurrentThread->MutantListHead.Blink = v42;
  _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  WaitStatus = CurrentThread->WaitStatus;
  v43 = *p_AbWaitObject;
  if ( *p_AbWaitObject )
  {
    *p_AbWaitObject = 0LL;
    v57 = KeAbPreAcquire(v43, 0LL);
    if ( v57 )
      *(_BYTE *)(v57 + 18) = 1;
  }
  v28 = *p_WaitIrql;
  v44.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  v93 = 0LL;
  if ( (v44.Flags & 0x38) != 0 )
  {
    if ( (v44.Flags & 0x18) != 0 )
    {
      if ( (v44.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      v94 = 0LL;
      v58 = 0;
      memset(v101, 0, sizeof(v101));
      KiAcquirePrcbLocksForIsolationUnit((__int64)v19, 0, &v93);
      if ( !v19->NextThread )
      {
        KiStartRescheduleContext((__int64)v101, &v93, 0LL);
        v59 = KiFindRescheduleContextEntryForPrcb(v101, (__int64)v19);
        KiAdjustRescheduleContextEntryForThreadRemoval(v59, v60, 0, 1);
        if ( (v62 & 2) != 0 )
        {
          v63 = LOBYTE(v101[0]);
          v64 = 0;
          if ( LOBYTE(v101[0]) )
          {
            do
            {
              v65 = (__int64 *)&v101[10 * v64 + 4];
              if ( v65 != v61 )
              {
                KiAdjustRescheduleContextEntryForThreadRemoval(v65, v63, 0, 1);
                v63 = LOBYTE(v101[0]);
              }
              ++v64;
            }
            while ( v64 < (unsigned __int8)v63 );
          }
          v101[1] = 0;
        }
        KiSearchForNewThreadsForRescheduleContext(v101, (__int64)&v94);
        v58 = KiCommitRescheduleContext((unsigned __int8 *)v101, v19, 0, &v94);
      }
      KiReleasePrcbLocksForIsolationUnit(&v93);
      if ( v58 )
      {
        KiCompleteRescheduleContext(v101, (__int64)v19);
        KiFlushSoftwareInterruptBatch((__int64)&v19->DeferredDispatchInterrupts);
      }
      KiProcessDeferredReadyList((__int64)v19, (__int64)&v94, v28);
      return WaitStatus;
    }
LABEL_171:
    KiCheckForThreadDispatch((__int64)v19, 1u);
    KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      v74 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v74 - 2) <= 0xDu )
      {
        v75 = KeGetCurrentPrcb();
        v76 = v75->SchedulerAssist;
        v12 = (v76[5] & 0xFFFF0001) == 0;
        v76[5] &= 0xFFFF0001;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v75);
      }
    }
    __writecr8(0LL);
    return WaitStatus;
  }
LABEL_38:
  if ( v11 )
  {
    v48 = v19;
    v47 = v28;
    goto LABEL_100;
  }
  if ( KiIrqlFlags )
  {
    v77 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v77 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v77 >= 2u )
    {
      v78 = KeGetCurrentPrcb();
      v79 = v78->SchedulerAssist;
      v80 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
      v12 = (v80 & v79[5]) == 0;
      v79[5] &= v80;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v78);
    }
  }
  __writecr8(v28);
  return WaitStatus;
}
