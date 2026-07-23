/*
 * XREFs of KeWaitForSingleObject @ 0x1402C5E00
 * Callers:
 *     AlpcpSignalAndWait @ 0x140205140 (AlpcpSignalAndWait.c)
 *     PpmCheckPeriodicStart @ 0x14022AD30 (PpmCheckPeriodicStart.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     MiZeroLargePages @ 0x140231E90 (MiZeroLargePages.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     PoFxActivateComponent @ 0x140262040 (PoFxActivateComponent.c)
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     PopFxProcessWorkPool @ 0x140262E94 (PopFxProcessWorkPool.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265340 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140266538 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     IopWaitForLockAlertable @ 0x140271220 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     CcWriteBehind @ 0x1402767E0 (CcWriteBehind.c)
 *     CcUnmapVacbArray @ 0x1402934F0 (CcUnmapVacbArray.c)
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AA8C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     ExpWaitForResource @ 0x1402C2A60 (ExpWaitForResource.c)
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402E2190 (MiWaitForCollidedFaultComplete.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402EE2CC (FsRtlpWaitForIoAtEof.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402F4C80 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402F4D68 (ExpUnblockPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1402FAFE0 (ExfWaitForRundownProtectionRelease.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403014B4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140302064 (LdrpGetFromMUIMemCache.c)
 *     MiIssueSynchronousFlush @ 0x140306D10 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x14030E348 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x14030FEE0 (CcWaitForUninitializeCacheMap.c)
 *     SmKmStoreHelperWorker @ 0x140312670 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140317EF8 (MmStoreFlushOutstandingEvictions.c)
 *     IoSynchronousCallDriver @ 0x140318390 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x1403193E8 (MiZeroPageWrite.c)
 *     WmipReceiveNotifications @ 0x140319C9C (WmipReceiveNotifications.c)
 *     PnpLockDeviceActionQueue @ 0x140320450 (PnpLockDeviceActionQueue.c)
 *     CmpDoFileRead @ 0x140320C7C (CmpDoFileRead.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140320DB8 (SmKmStoreDeleteWhenEmpty.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140325030 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14032BAF0 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14032D01C (MiQueueSyncModifiedWriterApc.c)
 *     WmipFindRegEntryByProviderId @ 0x14032E180 (WmipFindRegEntryByProviderId.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403306A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRetryNonPagedAllocation @ 0x14033DC4C (MiRetryNonPagedAllocation.c)
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     PopExecuteOnTargetProcessors @ 0x1403447EC (PopExecuteOnTargetProcessors.c)
 *     PopSetWatchdog @ 0x140349578 (PopSetWatchdog.c)
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034E538 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14034E950 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14034F4D8 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14034FF88 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403541C4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     IopCompleteUnloadOrDelete @ 0x140360440 (IopCompleteUnloadOrDelete.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140360810 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     CcSetValidData @ 0x1403615C4 (CcSetValidData.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14036F0E8 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x14036F190 (PopFxActivateDevice.c)
 *     WmipFindRegEntryByDevice @ 0x1403717C4 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140371884 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x140371974 (WmipDeregisterRegEntry.c)
 *     PpmTryAcquireLock @ 0x14037D768 (PpmTryAcquireLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC0C (LdrpSetAlternateResourceModuleHandle.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14037F348 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F520 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380DCC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     ExUnregisterCallback @ 0x1403812B0 (ExUnregisterCallback.c)
 *     PopWakeDeviceList @ 0x1403830C4 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403832A4 (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x1403886C8 (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x14038B108 (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x14038BCE0 (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038D458 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038D670 (PopIgnoreBatteryStatusChange.c)
 *     PnpLockMountableDevice @ 0x1403936BC (PnpLockMountableDevice.c)
 *     IopLoadDriverImage @ 0x140399778 (IopLoadDriverImage.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14039A740 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x14039F770 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14039FE6C (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5454 (MiQueueWorkingSetRequest.c)
 *     WmiQueryTraceProviderCount @ 0x1403AA2A0 (WmiQueryTraceProviderCount.c)
 *     MiZeroPageCalibrate @ 0x1403AAC44 (MiZeroPageCalibrate.c)
 *     MiZeroLargePageThread @ 0x1403AEB30 (MiZeroLargePageThread.c)
 *     KeSwapProcessOrStack @ 0x1403B3A30 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B8D40 (CcQueueLazyWriteScanThread.c)
 *     WheaLogInternalEvent @ 0x1403BA6F0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403BA9C4 (WheapAddErrorSource.c)
 *     PopFxActivateComponent @ 0x1403BE4A0 (PopFxActivateComponent.c)
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x1403BFD00 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x1403C0C60 (MiStoreEvictThread.c)
 *     WmipBuildTraceDeviceList @ 0x1403C5840 (WmipBuildTraceDeviceList.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C81C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorkerControl @ 0x1403CB8B0 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x1403CE390 (PnpSerializeBoot.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F08E4 (IopWaitForSynchronousIoEvent.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404D0770 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcDeleteSectionsForPartition @ 0x1404EBDC4 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0970 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x1404F0D3C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1404F1354 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1404FFD50 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FFFF0 (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x14050F658 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1405103DC (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140518EE4 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x140520DB8 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1405218AC (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x140521D04 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140521D40 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x140525E60 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CC34 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140538FCC (MiPfCompleteCoalescedIo.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E21C (MiCheckHoldFaultForHotPatch.c)
 *     MiIssuePageExtendRequest @ 0x140543884 (MiIssuePageExtendRequest.c)
 *     MiWaitForFreePagesToZero @ 0x14054FECC (MiWaitForFreePagesToZero.c)
 *     MiApplyCommitDelay @ 0x140550170 (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x14055BFE4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C3F0 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x140561FDC (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x1405648B0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14056B298 (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x140583C30 (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x14059ED2C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059F6A4 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x14059FF84 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405AB7CC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AE99C (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1405B3070 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1405B32E0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1405BBB10 (WheapProcessWorkQueueItem.c)
 *     sub_1405BF110 @ 0x1405BF110 (sub_1405BF110.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405FCB60 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     IopGetFileInformation @ 0x140620E34 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140620F70 (IoVolumeDeviceToDosName.c)
 *     PiDrvDbLoadNode @ 0x14062A394 (PiDrvDbLoadNode.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 *     PnpDeviceEventWorker @ 0x140634FF0 (PnpDeviceEventWorker.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     ObWaitForSingleObject @ 0x14063DFD0 (ObWaitForSingleObject.c)
 *     CmpParseKey @ 0x140646330 (CmpParseKey.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140650DF0 (IopDeleteFile.c)
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     IopGetSetObjectId @ 0x14065F03C (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x14066164C (AlpcpWaitForPortReferences.c)
 *     RtlDecompressBufferLZNT1 @ 0x140662050 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406621C0 (RtlDecompressFragmentLZNT1.c)
 *     FsRtlSetFileSize @ 0x140669A10 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140669B30 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140669CD0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140669ED0 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeSession @ 0x1406791D0 (NtNotifyChangeSession.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     NtGetMUIRegistryInfo @ 0x140681030 (NtGetMUIRegistryInfo.c)
 *     IopCancelIrpsInThreadList @ 0x140682588 (IopCancelIrpsInThreadList.c)
 *     SmStoreCompressionStop @ 0x14068999C (SmStoreCompressionStop.c)
 *     WmipEnumerateMofResources @ 0x14068B7E0 (WmipEnumerateMofResources.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406954F0 (FsRtlIssueDeviceIoControl.c)
 *     EtwpSynchronizeWithLogger @ 0x14069BD8C (EtwpSynchronizeWithLogger.c)
 *     FsRtlQueryCachedVdl @ 0x1406A0FD0 (FsRtlQueryCachedVdl.c)
 *     WmipDisableCollectOrEvent @ 0x1406A4630 (WmipDisableCollectOrEvent.c)
 *     FsRtlBalanceReads @ 0x1406A5700 (FsRtlBalanceReads.c)
 *     WmipDeleteMethod @ 0x1406B2300 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x1406B23F8 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1406B24CC (WmipForwardWmiIrp.c)
 *     PiControlGetSetDeviceStatus @ 0x1406B2710 (PiControlGetSetDeviceStatus.c)
 *     WmipPrepareForWnodeAD @ 0x1406B6E50 (WmipPrepareForWnodeAD.c)
 *     WmipIsQuerySetGuid @ 0x1406B77F8 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x1406B7860 (WmipEnableCollectOrEvent.c)
 *     WmipFindGEByGuid @ 0x1406B7FB0 (WmipFindGEByGuid.c)
 *     WmipOpenBlock @ 0x1406B8098 (WmipOpenBlock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BC864 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLogger @ 0x1406BE4D0 (EtwpLogger.c)
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406DC020 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1406EB4E0 (CmpLockRegistryFreezeAware.c)
 *     PnpDisableWatchdog @ 0x1406F02D0 (PnpDisableWatchdog.c)
 *     MiInSwapStore @ 0x1406FAF88 (MiInSwapStore.c)
 *     MiReadImageHeaders @ 0x1406FF22C (MiReadImageHeaders.c)
 *     FsRtlGetFileSize @ 0x140702130 (FsRtlGetFileSize.c)
 *     EtwpStartTrace @ 0x140710EBC (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     EtwpDisableTraceProviders @ 0x1407147C8 (EtwpDisableTraceProviders.c)
 *     CmpFileFlushAndPurge @ 0x14071D008 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14071D1A8 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14071D3C0 (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x140721620 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140721790 (IoVolumeDeviceNameToGuidPath.c)
 *     PiQueueDeviceRequest @ 0x14072F6CC (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F89C (PnpQueueQueryAndRemoveEvent.c)
 *     IopGetVolumeId @ 0x1407337A0 (IopGetVolumeId.c)
 *     PiIrpQueryRemoveDevice @ 0x14073463C (PiIrpQueryRemoveDevice.c)
 *     PnpStartDeviceNode @ 0x14073A3A4 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14073A898 (IopUncacheInterfaceInformation.c)
 *     PipProcessDevNodeTree @ 0x14073D6A4 (PipProcessDevNodeTree.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14074C4D8 (PopFxUnregisterDeviceOrWait.c)
 *     PnpAllocateResources @ 0x14074F4D8 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140750270 (IopFilterResourceRequirementsCall.c)
 *     IopLegacyResourceAllocation @ 0x140752C64 (IopLegacyResourceAllocation.c)
 *     WmipDeregisterDevice @ 0x140754674 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x140754720 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x1407547F8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x140754964 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x140754A3C (WmipUpdateDeviceStackSize.c)
 *     WmipAddDataSource @ 0x140756098 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140756868 (WmipDetermineInstanceBaseIndex.c)
 *     WmipPrepareWnodeSI @ 0x140756DF4 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x1407572BC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140757570 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140757904 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipFindISinGEbyName @ 0x140757B58 (WmipFindISinGEbyName.c)
 *     IoDisconnectInterrupt @ 0x140761030 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140761C70 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x140763E30 (HalGetAdapterV2.c)
 *     PnpQueryInterface @ 0x1407653A4 (PnpQueryInterface.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 *     WmipDSCleanup @ 0x14076C400 (WmipDSCleanup.c)
 *     WmipRegistrationWorker @ 0x14076C580 (WmipRegistrationWorker.c)
 *     IoReportTargetDeviceChange @ 0x14076CEC0 (IoReportTargetDeviceChange.c)
 *     PnpCallDriverEntry @ 0x140770084 (PnpCallDriverEntry.c)
 *     ArbArbiterHandler @ 0x140771250 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x140772340 (PoUnregisterPowerSettingCallback.c)
 *     PopResizeHiberFile @ 0x140773D58 (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x1407743E4 (ExSwapinWorkerThreads.c)
 *     NtInitiatePowerAction @ 0x140775A10 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140776788 (PopPowerAggregatorNotifySuspendResume.c)
 *     EmPowerPagingEnabled @ 0x140777428 (EmPowerPagingEnabled.c)
 *     PopFxNotifySxTransitionState @ 0x140777584 (PopFxNotifySxTransitionState.c)
 *     PopGetWakeSource @ 0x1407786B8 (PopGetWakeSource.c)
 *     HalpGetDynamicDevicePointer @ 0x140778DD4 (HalpGetDynamicDevicePointer.c)
 *     PopInitSystemSleeperThread @ 0x1407798D8 (PopInitSystemSleeperThread.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B720 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14077BFD0 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14077D0D4 (IopLoadFileSystemDriver.c)
 *     WmipSendEnableDisableRequest @ 0x14077DF00 (WmipSendEnableDisableRequest.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     WmipSetTraceNotify @ 0x140780C58 (WmipSetTraceNotify.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14078CC7C (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14078D1A4 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D5B4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x14078D978 (PopAcquireTransitionLock.c)
 *     PopSanityCheckHiberFile @ 0x14078E178 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14078E594 (PopClearHiberFileSignature.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140792E60 (EtwpUpdateGlobalGroupMasks.c)
 *     CmCompleteRegistryInitialization @ 0x14079A330 (CmCompleteRegistryInitialization.c)
 *     PopCreateHiberFile @ 0x14079BC20 (PopCreateHiberFile.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A29A8 (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407ACAD8 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407ACB04 (PnpWaitForEmptyDeviceActionQueue.c)
 *     SepRmCommandServerThread @ 0x1407AD670 (SepRmCommandServerThread.c)
 *     PopFxUnregisterDevice @ 0x1407B495C (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x1407B4CBC (PopPepUnregisterDevice.c)
 *     IopAllocateBootResources @ 0x1407B6200 (IopAllocateBootResources.c)
 *     MiZeroPageFileFirstPage @ 0x1407B7DC8 (MiZeroPageFileFirstPage.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407BA150 (PopDirectedDripsWorkerRoutine.c)
 *     WmipAddMofResource @ 0x1407BEADC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1407BED18 (WmipFindMRByNames.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1407BF290 (EtwpCrimsonProvEnableCallback.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1DF4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     HalGetAdapterV3 @ 0x1407C3B70 (HalGetAdapterV3.c)
 *     WmipUpdateDataSource @ 0x1407C4788 (WmipUpdateDataSource.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4EE0 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x1407C5780 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C58E0 (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407C69E4 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407C7838 (FsRtlpRegisterUncProvider.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9B60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiPagePathSetState @ 0x1407C9D60 (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x1407D34F0 (WheapEtwEnableCallback.c)
 *     IoWMISetNotificationCallback @ 0x1407D3BA0 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x1407D4C70 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x1407D5280 (FsRtlWaitForSmssEvent.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140863F3C (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140864020 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140864910 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpCallWakeAlarmDriver @ 0x1408662B0 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140866390 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140866ACC (HalpQueryPccInterface.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A0F0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087268C (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140884290 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140885568 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x1408864A0 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x1408873C0 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1408883A4 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088AD4C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14088B7C0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14088C2D0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088D850 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x1408910DC (IopCancelAlertedRequest.c)
 *     IopHardErrorThread @ 0x1408916B0 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x140892110 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140892D40 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140893670 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140893F30 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089A978 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14089B114 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14089B99C (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14089E490 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089FDE8 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A153C (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408AB3C8 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x1408B31B0 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x1408B44B0 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1408B4660 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1408B98A4 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1408E040C (PfTCleanup.c)
 *     PopDeactiveThermalRequest @ 0x1408E2C38 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1408E2E18 (PopDisableCoolingExtension.c)
 *     PopReadPagesFromHiberFile @ 0x1408E6F3C (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1408E7820 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1408E7DD0 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1408ED670 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408F1780 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409065D4 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x140909DF8 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x14090AE48 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14090B33C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14090D0E0 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x14090D220 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14090E274 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14090F384 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090F4D8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090F928 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140919700 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessResizeRequest @ 0x140929F8C (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x14092A088 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A558 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B644 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14092BEB4 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14092BF68 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14092C02C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14092C78C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092C828 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CEC4 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x140930D80 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140931C78 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14093243C (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x140932694 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14093282C (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x140932E0C (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x140933620 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x140933944 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x140934268 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140934494 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1409375AC (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409385B0 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x14093CEA4 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14093CF00 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x14093ED58 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x14094168C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x140942820 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x140948770 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x1409560A8 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140959B70 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x14095AE20 (NtStartProfile.c)
 *     NtStopProfile @ 0x14095B090 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x14095B290 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095B650 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x14095D2E0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14095D3A0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_14096208C @ 0x14096208C (sub_14096208C.c)
 *     sub_140963860 @ 0x140963860 (sub_140963860.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14097FFA4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x14098038C (VhdiVerifyBootDisk.c)
 *     PopTransitionToSleep @ 0x140990620 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 *     PopCaptureTimeOnProcZero @ 0x140990E6C (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x1409910A8 (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140996240 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x1409971A8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140997CDC (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x1409AAF18 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB274 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1409AD93C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AEDA0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409B00B0 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 *     VfDriverLock @ 0x1409C25C8 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x1409C5A28 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1520 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x1409D5B34 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1409D5EB0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409E0350 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x1409E5310 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x1409F21B4 (AnFwFadeCompletion.c)
 *     IopAssignBootDriveLetter @ 0x140A61AA8 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8F9DC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A955E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A957E8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A95BC4 (SbpWaitForVmbus.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140230540 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KiFastExitThreadWait @ 0x140341258 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1403413C4 (KiCheckForThreadDispatch.c)
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r10
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int8 WaitIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  unsigned __int8 v13; // r12
  $AC3BF0C7EA58B0FE9399BAAA5443B647 *v14; // r15
  unsigned int v15; // r14d
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *v18; // r13
  volatile __int64 WaitStatus; // rsi
  __int64 ThreadTimerDelay; // rdx
  int v21; // r10d
  unsigned __int64 v22; // rax
  PVOID *v23; // rcx
  __int64 v24; // r13
  unsigned __int8 v25; // r10
  unsigned __int64 v26; // rdi
  _KWAIT_STATUS_REGISTER v27; // al
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rsi
  _DWORD *v34; // rcx
  volatile unsigned __int8 DpcRoutineActive; // cl
  int v36; // eax
  char v37; // al
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v39; // rcx
  struct _KPRCB *v40; // rcx
  __int64 v41; // rdx
  ULONG_PTR AbWaitObject; // rcx
  _KWAIT_STATUS_REGISTER v43; // al
  struct _KPRCB *v44; // rbx
  _DWORD *v45; // rcx
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  _DWORD *v54; // rcx
  int v55; // eax
  int v56; // eax
  unsigned __int8 v57; // cl
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  int v60; // eax
  _DWORD *SchedulerAssist; // r9
  int v62; // eax
  int v63; // eax
  int v64; // eax
  struct _KPRCB *v65; // rcx
  _DWORD *v66; // rdx
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // edi
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  int v76; // eax
  _DWORD *v77; // rcx
  int v78; // eax
  _DWORD *v79; // rcx
  int v80; // eax
  int v81; // eax
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rdx
  struct _KPRCB *v84; // rbx
  _DWORD *v85; // rcx
  int v86; // eax
  _DWORD *v87; // rcx
  int v88; // eax
  _DWORD *v89; // rcx
  int v90; // eax
  struct _KPRCB *v91; // rcx
  _DWORD *v92; // rdx
  int v93; // eax
  struct _KPRCB *v94; // rcx
  _DWORD *v95; // rdx
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r9
  _DWORD *v98; // r8
  int v99; // eax
  signed __int32 v100[8]; // [rsp+0h] [rbp-91h] BYREF
  unsigned __int8 v101; // [rsp+30h] [rbp-61h]
  unsigned __int8 v102; // [rsp+31h] [rbp-60h]
  LONGLONG QuadPart; // [rsp+38h] [rbp-59h]
  __int64 v104; // [rsp+40h] [rbp-51h]
  int v105; // [rsp+48h] [rbp-49h] BYREF
  int v106; // [rsp+4Ch] [rbp-45h] BYREF
  int v107; // [rsp+50h] [rbp-41h] BYREF
  int v108; // [rsp+54h] [rbp-3Dh] BYREF
  int v109; // [rsp+58h] [rbp-39h] BYREF
  __int64 v110; // [rsp+60h] [rbp-31h] BYREF
  __int64 v111; // [rsp+68h] [rbp-29h] BYREF
  __int64 v112; // [rsp+70h] [rbp-21h] BYREF
  __int128 v113; // [rsp+78h] [rbp-19h]
  __int64 v114; // [rsp+88h] [rbp-9h]
  __int64 v115; // [rsp+90h] [rbp-1h]
  unsigned __int8 v117; // [rsp+F8h] [rbp+67h]
  KPROCESSOR_MODE v118; // [rsp+100h] [rbp+6Fh]
  int Timeouta; // [rsp+110h] [rbp+7Fh]

  v118 = WaitMode;
  v117 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v112 = 0LL;
  QuadPart = 0LL;
  v101 = 0;
  v104 = 0LL;
  v115 = 0LL;
  v102 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v102 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitMode = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = WaitMode;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v8 = 0xFFFFF78000000008uLL;
  v9 = 1LL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      Timeouta = 1;
    }
    else
    {
      Timeouta = 2;
      v9 = MEMORY[0xFFFFF78000000008]
         - MEMORY[0xFFFFF780000003B0]
         - (Timeout->QuadPart
          + CurrentThread->RelativeTimerBias);
      QuadPart = v9;
    }
  }
  else
  {
    Timeouta = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v118;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v105 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v62 = v12[6];
          v12[6] = v62 + 1;
          if ( v62 == -1 )
LABEL_136:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v48 = CurrentPrcb->SchedulerAssist;
        if ( v48 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v63 = v48[6] - 1;
            v48[6] = v63;
            if ( !v63 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v105, v8, WaitMode, v9);
        while ( CurrentThread->ThreadLock );
        v49 = CurrentPrcb->SchedulerAssist;
        if ( v49 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v64 = v49[6];
            v49[6] = v64 + 1;
            if ( v64 == -1 )
              goto LABEL_136;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || WaitIrql || CurrentThread->SpecialApcDisable )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = (v66[5] & 0xFFFF0003) == 0;
          v66[5] &= 0xFFFF0003;
          if ( v67 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      v57 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 <= 0xFu )
      {
        v9 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        *(_QWORD *)&WaitMode = *(unsigned int *)(v9 + 20);
        v8 = WaitMode | ~((unsigned __int8)(1LL << (v57 + 1)) - 1) & 4u;
        *(_DWORD *)(v9 + 20) = v8;
      }
      CurrentThread->WaitIrql = 0;
    }
    v13 = v102;
    v14 = &CurrentThread->320;
    if ( Alertable )
    {
      *(_QWORD *)&WaitMode = v118;
      if ( CurrentThread->Alerted[v118] )
      {
        CurrentThread->Alerted[v118] = 0;
        v70 = 257;
        goto LABEL_114;
      }
      if ( v118 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_113:
        v70 = 192;
LABEL_114:
        KiReleaseThreadLockSafe(CurrentThread);
        KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql);
        LODWORD(WaitStatus) = v70;
        return WaitStatus;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v70 = 257;
        goto LABEL_114;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v118 )
    {
      goto LABEL_113;
    }
    v15 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v117;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v60 = v17[6] - 1;
        v17[6] = v60;
        if ( !v60 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    v18 = KeGetCurrentPrcb();
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v17, WaitMode, v9) )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
    }
    ThreadTimerDelay = *((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      if ( (int)ThreadTimerDelay <= 0 )
      {
        *(_QWORD *)&WaitMode = v101;
        goto LABEL_19;
      }
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = ThreadTimerDelay - 1;
      }
      goto LABEL_32;
    }
    v30 = *((unsigned __int8 *)Object + 48);
    WaitMode = (v30 & 2) != 0;
    v101 = WaitMode;
    if ( (int)ThreadTimerDelay > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == v18->DpcRoutineActive )
    {
      break;
    }
LABEL_19:
    v9 = QuadPart;
    v21 = Timeouta;
    v22 = QuadPart;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v29 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v22 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v22 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_21;
      if ( !QuadPart )
        goto LABEL_31;
      v29 = MEMORY[0xFFFFF78000000014];
    }
    if ( v29 > v22 )
    {
LABEL_31:
      LODWORD(WaitStatus) = 258;
      goto LABEL_32;
    }
LABEL_21:
    v23 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v23 != (char *)Object + 8 )
      goto LABEL_201;
    v14->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v23;
    *v23 = v14;
    *((_QWORD *)Object + 2) = v14;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    if ( WaitMode )
    {
      v68 = KeAbPreAcquire((ULONG_PTR)Object);
      LODWORD(v9) = QuadPart;
      v24 = v68;
      v21 = Timeouta;
      v104 = v68;
    }
    else
    {
      v24 = v104;
    }
    if ( v24 )
    {
      KeAbPreWait(v24);
      LODWORD(v9) = QuadPart;
      v21 = Timeouta;
    }
    LODWORD(WaitStatus) = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, v21, v9, (__int64)&v112);
    if ( v24 )
    {
      v69 = KeAbPreAcquire((ULONG_PTR)Object);
      if ( (WaitStatus & 0xFFFFFF7F) != 0 )
      {
        KeAbPostReleaseEx((ULONG_PTR)Object);
        v104 = 0LL;
      }
      else
      {
        *(_BYTE *)(v69 + 26) |= 1u;
        v104 = v69;
      }
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( (_DWORD)WaitStatus != 256 )
      return WaitStatus;
    v102 = 0;
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
    {
      v9 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitMode = *(unsigned int *)(v9 + 20);
      v8 = WaitMode | ~((unsigned __int8)(1LL << (v25 + 1)) - 1) & 4u;
      *(_DWORD *)(v9 + 20) = v8;
    }
    CurrentThread->WaitIrql = v25;
  }
  v31 = *((_DWORD *)Object + 1);
  if ( v31 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    KiFastExitThreadWait(v18, CurrentThread, v13);
    RtlRaiseStatus(-1073741423);
  }
  v32 = v31 - 1;
  *((_DWORD *)Object + 1) = v32;
  if ( v32 )
  {
LABEL_32:
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v100, 0);
    if ( CurrentThread->ThreadLock )
    {
      v50 = KeGetCurrentPrcb();
      v108 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v52 = v51[6];
          v51[6] = v52 + 1;
          if ( v52 == -1 )
LABEL_106:
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v53 = v50->SchedulerAssist;
        if ( v53 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v56 = v53[6] - 1;
            v53[6] = v56;
            if ( !v56 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        do
          KeYieldProcessorEx(&v108, ThreadTimerDelay, WaitMode, v9);
        while ( CurrentThread->ThreadLock );
        v54 = v50->SchedulerAssist;
        if ( v54 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v55 = v54[6];
            v54[6] = v55 + 1;
            if ( v55 == -1 )
              goto LABEL_106;
          }
        }
      }
      KiReleaseThreadLockSafe(CurrentThread);
    }
    v26 = CurrentThread->WaitIrql;
    v27.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    if ( (v27.Flags & 0x38) == 0 )
    {
LABEL_34:
      if ( v13 )
      {
        KiCheckForThreadDispatch(v18, (unsigned __int8)v26);
      }
      else
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v96 = KeGetCurrentIrql();
            if ( v96 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v96 >= 2u )
            {
              v97 = KeGetCurrentPrcb();
              v98 = v97->SchedulerAssist;
              v99 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
              v67 = (v99 & v98[5]) == 0;
              v98[5] &= v99;
              if ( v67 )
                KiRemoveSystemWorkPriorityKick(v97);
            }
          }
        }
        __writecr8(v26);
      }
      return WaitStatus;
    }
    if ( (v27.Flags & 0x18) != 0 )
    {
      if ( (v27.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      v111 = 0LL;
      v84 = KeGetCurrentPrcb();
      v109 = 0;
      v85 = v84->SchedulerAssist;
      if ( v85 )
      {
        if ( v84->NestingLevel <= 1u )
        {
          v86 = v85[6];
          v85[6] = v86 + 1;
          if ( v86 == -1 )
LABEL_207:
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
      {
        v87 = v84->SchedulerAssist;
        if ( v87 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v88 = v87[6] - 1;
            v87[6] = v88;
            if ( !v88 )
              KiRemoveSystemWorkPriorityKick(v84);
          }
        }
        do
          KeYieldProcessorEx(&v109, ThreadTimerDelay, WaitMode, v9);
        while ( v18->PrcbLock );
        v89 = v84->SchedulerAssist;
        if ( v89 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v90 = v89[6];
            v89[6] = v90 + 1;
            if ( v90 == -1 )
              goto LABEL_207;
          }
        }
      }
      if ( !v18->NextThread )
        KiSelectNextThread(v18, (__int64)&v111);
      _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
      v91 = KeGetCurrentPrcb();
      v92 = v91->SchedulerAssist;
      if ( v92 )
      {
        if ( v91->NestingLevel <= 1u )
        {
          v93 = v92[6] - 1;
          v92[6] = v93;
          if ( !v93 )
            KiRemoveSystemWorkPriorityKick(v91);
        }
      }
      KiProcessDeferredReadyList((__int64)v18, (__int64)&v111, v26);
      return WaitStatus;
    }
    LOBYTE(ThreadTimerDelay) = 1;
    KiCheckForThreadDispatch(v18, ThreadTimerDelay);
    KiDeliverApc(0, 0, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v94 = KeGetCurrentPrcb();
        v95 = v94->SchedulerAssist;
        v67 = (v95[5] & 0xFFFF0001) == 0;
        v95[5] &= 0xFFFF0001;
        if ( v67 )
          KiRemoveSystemWorkPriorityKick(v94);
      }
    }
LABEL_127:
    __writecr8(0LL);
    return WaitStatus;
  }
  CurrentThread->WaitStatus = 0LL;
  v33 = KeGetCurrentPrcb();
  v106 = 0;
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v71 = v34[6];
      v34[6] = v71 + 1;
      if ( v71 == -1 )
LABEL_165:
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v58 = v33->SchedulerAssist;
    if ( v58 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v72 = v58[6] - 1;
        v58[6] = v72;
        if ( !v72 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    do
      KeYieldProcessorEx(&v106, ThreadTimerDelay, WaitMode, v9);
    while ( CurrentThread->ThreadLock );
    v59 = v33->SchedulerAssist;
    if ( v59 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v73 = v59[6];
        v59[6] = v73 + 1;
        if ( v73 == -1 )
          goto LABEL_165;
      }
    }
  }
  if ( *((_BYTE *)Object + 49) )
    --CurrentThread->KernelApcDisable;
  if ( v18->CurrentThread == CurrentThread )
    DpcRoutineActive = v18->DpcRoutineActive;
  else
    DpcRoutineActive = 0;
  v114 = 0LL;
  v36 = *(_DWORD *)Object;
  v113 = 0LL;
  LODWORD(v113) = v36;
  BYTE2(v113) = DpcRoutineActive;
  *(_DWORD *)Object = v113;
  v37 = *((_BYTE *)Object + 48);
  *((_QWORD *)Object + 5) = CurrentThread;
  if ( (v37 & 1) != 0 )
  {
    *((_BYTE *)Object + 48) = v37 & 0xFE;
    CurrentThread->WaitStatus |= 0x80uLL;
    v37 = *((_BYTE *)Object + 48);
  }
  if ( (v37 & 2) != 0 )
    CurrentThread->AbWaitObject = Object;
  else
    CurrentThread->AbWaitObject = 0LL;
  Blink = CurrentThread->MutantListHead.Blink;
  v39 = (struct _LIST_ENTRY *)((char *)Object + 24);
  if ( Blink->Flink != &CurrentThread->MutantListHead )
LABEL_201:
    __fastfail(3u);
  v39->Flink = &CurrentThread->MutantListHead;
  *((_QWORD *)Object + 4) = Blink;
  Blink->Flink = v39;
  CurrentThread->MutantListHead.Blink = v39;
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  v40 = KeGetCurrentPrcb();
  v41 = (__int64)v40->SchedulerAssist;
  if ( v41 )
  {
    if ( v40->NestingLevel <= 1u )
    {
      v74 = *(_DWORD *)(v41 + 24) - 1;
      *(_DWORD *)(v41 + 24) = v74;
      if ( !v74 )
        KiRemoveSystemWorkPriorityKick(v40);
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v75 = KeAbPreAcquire(AbWaitObject);
    if ( v75 )
      *(_BYTE *)(v75 + 26) |= 1u;
  }
  v26 = CurrentThread->WaitIrql;
  v43.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v43.Flags & 0x38) == 0 )
    goto LABEL_34;
  if ( (v43.Flags & 0x18) == 0 )
  {
    LOBYTE(v41) = 1;
    KiCheckForThreadDispatch(v18, v41);
    KiDeliverApc(0, 0, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v67 = (v83[5] & 0xFFFF0001) == 0;
        v83[5] &= 0xFFFF0001;
        if ( v67 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
    goto LABEL_127;
  }
  if ( (v43.Flags & 8) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
  v110 = 0LL;
  v44 = KeGetCurrentPrcb();
  v107 = 0;
  v45 = v44->SchedulerAssist;
  if ( v45 )
  {
    if ( v44->NestingLevel <= 1u )
    {
      v76 = v45[6];
      v45[6] = v76 + 1;
      if ( v76 == -1 )
LABEL_181:
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
  {
    v77 = v44->SchedulerAssist;
    if ( v77 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v78 = v77[6] - 1;
        v77[6] = v78;
        if ( !v78 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    do
      KeYieldProcessorEx(&v107, v41, WaitMode, v9);
    while ( v18->PrcbLock );
    v79 = v44->SchedulerAssist;
    if ( v79 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v80 = v79[6];
        v79[6] = v80 + 1;
        if ( v80 == -1 )
          goto LABEL_181;
      }
    }
  }
  if ( !v18->NextThread )
    KiSelectNextThread(v18, (__int64)&v110);
  _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
  v46 = KeGetCurrentPrcb();
  v47 = v46->SchedulerAssist;
  if ( v47 )
  {
    if ( v46->NestingLevel <= 1u )
    {
      v81 = v47[6] - 1;
      v47[6] = v81;
      if ( !v81 )
        KiRemoveSystemWorkPriorityKick(v46);
    }
  }
  KiProcessDeferredReadyList((__int64)v18, (__int64)&v110, v26);
  return WaitStatus;
}
