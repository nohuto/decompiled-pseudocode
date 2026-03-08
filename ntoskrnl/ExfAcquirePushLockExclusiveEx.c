/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x1402411C0
 * Callers:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14020B028 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140239F00 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14023A860 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquirePushLockExclusive @ 0x1402411A0 (ExfAcquirePushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExpSaAllocatorFree @ 0x140295774 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140295994 (ExpSaPageGroupFreeMemory.c)
 *     MiGetChannelInformation @ 0x140295C20 (MiGetChannelInformation.c)
 *     ExpSaAllocatorAllocate @ 0x140296390 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14029661C (ExpSaPageGroupAllocateMemory.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiLockLoaderEntry @ 0x1402A6B58 (MiLockLoaderEntry.c)
 *     FsRtlInsertPerStreamContext @ 0x1402C99C0 (FsRtlInsertPerStreamContext.c)
 *     NtCancelTimer @ 0x1402CD830 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     ExpDeleteTimer @ 0x1402F5CD0 (ExpDeleteTimer.c)
 *     MiDereferenceExtendInfo @ 0x1402FAE84 (MiDereferenceExtendInfo.c)
 *     MmResourcesAvailable @ 0x140311DB0 (MmResourcesAvailable.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiInsertVad @ 0x1403312E0 (MiInsertVad.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     MiLockAddressSpaceToo @ 0x140332B7C (MiLockAddressSpaceToo.c)
 *     MiSetVadDeleted @ 0x140332ED8 (MiSetVadDeleted.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     MiManageSubsectionView @ 0x140335DC0 (MiManageSubsectionView.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14034CD5C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MmDecodeExportSection @ 0x14035D424 (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14035D5C0 (MmEncodeExportSection.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiLockDriverMappings @ 0x14036C498 (MiLockDriverMappings.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403887C0 (CmpNotifyMachineHiveLoaded.c)
 *     MiLateInitializeSystemCache @ 0x1403A852C (MiLateInitializeSystemCache.c)
 *     MiFreeUnusedPfnPages @ 0x1403AD0D0 (MiFreeUnusedPfnPages.c)
 *     MiLockPartitionSystemThreads @ 0x1403B04F0 (MiLockPartitionSystemThreads.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403CA3BC (ExpAcquireFannedOutPushLockExclusive.c)
 *     FlushLookUpTableBucket @ 0x1403CA80C (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403CFF54 (ExpSaPageGroupDescriptorFree.c)
 *     DifExfAcquirePushLockExclusiveWrapper @ 0x1405D7E20 (DifExfAcquirePushLockExclusiveWrapper.c)
 *     ExGetWakeTimerList @ 0x140609248 (ExGetWakeTimerList.c)
 *     ExWakeTimersPause @ 0x14060966C (ExWakeTimersPause.c)
 *     ExInitializeDeviceAts @ 0x140609E90 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14060A134 (ExUninitializeDeviceAts.c)
 *     ExSvmBeginDeviceReset @ 0x14060ACD0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14060AEA0 (ExSvmFinalizeDeviceReset.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060B7D4 (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060C208 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14060DDEC (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaRegisterErrorSourceOverride @ 0x140611120 (WheaRegisterErrorSourceOverride.c)
 *     WheaUnregisterErrorSourceOverride @ 0x140611410 (WheaUnregisterErrorSourceOverride.c)
 *     MiLockDynamicMemoryExclusive @ 0x140619164 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x140619288 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x1406193A8 (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiFinishResume @ 0x1406244A0 (MiFinishResume.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14063C214 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x1406413B4 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140650250 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140652D30 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiClearPartitionPageBitMap @ 0x1406569F0 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     MiGetPartitionNodeInformation @ 0x140657AE0 (MiGetPartitionNodeInformation.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     NtAllocateUuids @ 0x14067EB00 (NtAllocateUuids.c)
 *     PdcAcquireRwLockExclusive @ 0x14067F16C (PdcAcquireRwLockExclusive.c)
 *     ExpWnfInvalidateDataStores @ 0x14067F77C (ExpWnfInvalidateDataStores.c)
 *     MiSelectRelocationStartHint @ 0x1406A1BE8 (MiSelectRelocationStartHint.c)
 *     MiObtainRelocationBits @ 0x1406A1D10 (MiObtainRelocationBits.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     CmSiRWLockAcquireExclusive @ 0x1406A419C (CmSiRWLockAcquireExclusive.c)
 *     WbGetWarbirdProcess @ 0x1406AEEB8 (WbGetWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x1406AF248 (WbGetWarbirdThread.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406AFCA0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpLockAppHiveLoadList @ 0x1406BE50C (CmpLockAppHiveLoadList.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406C00DC (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406C01CC (CmpDoQueueLateUnloadWorker.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     ExUuidCreate @ 0x1406F7EF0 (ExUuidCreate.c)
 *     MmLinkJobProcess @ 0x1407006C4 (MmLinkJobProcess.c)
 *     ExpWnfDeleteScopeById @ 0x140704810 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140704AB8 (ExpWnfDeleteProcessContext.c)
 *     WbRemoveWarbirdProcess @ 0x14070546C (WbRemoveWarbirdProcess.c)
 *     ExpWnfCreateNameInstance @ 0x140718994 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140718E50 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140719114 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfResolveScopeInstance @ 0x14071A508 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14071AB90 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x14071AFB0 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x14071B1B0 (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x14071B750 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfDeleteSubscription @ 0x14071D44C (ExpWnfDeleteSubscription.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14072B8A0 (CmpVolumeManagerGetContextForFile.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     CmpLockHiveListExclusive @ 0x140731734 (CmpLockHiveListExclusive.c)
 *     CmpTrimHive @ 0x1407317CC (CmpTrimHive.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140731984 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140736258 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140736830 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140736B44 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpLoadDifferencingHive @ 0x1407375CC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1407379FC (VrpUnloadDifferencingHive.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140737CA8 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140738160 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementSiloCount @ 0x14073895C (VrpIncrementSiloCount.c)
 *     CmpLockContextListExclusive @ 0x140738BC4 (CmpLockContextListExclusive.c)
 *     CmLockHive @ 0x14074A650 (CmLockHive.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14074B1B8 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14074B4AC (CmpVolumeContextDecrementRefCount.c)
 *     CmpFlushNotify @ 0x14074B6C4 (CmpFlushNotify.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 *     WbAllocateUserMemory @ 0x140754868 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140754BA0 (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140754E94 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140755130 (WbAddHeapExecutedBlockToLRU.c)
 *     WbReEncryptEncryptionSegment @ 0x1407552F8 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407553D8 (WbDecryptEncryptionSegment.c)
 *     WbAddWarbirdEncryptionSegment @ 0x14075554C (WbAddWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140755694 (WbGetInitializedEncryptionSegment.c)
 *     MiGetNewSessionId @ 0x140757858 (MiGetNewSessionId.c)
 *     MiInitializeSessionGlobals @ 0x14075793C (MiInitializeSessionGlobals.c)
 *     MiDereferencePerSessionProtos @ 0x14075B72C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14075B874 (MiCreatePerSessionProtos.c)
 *     MiPopulateCfgBitMap @ 0x14075C600 (MiPopulateCfgBitMap.c)
 *     MiInitializePartialVad @ 0x140760134 (MiInitializePartialVad.c)
 *     MiCaptureRetpolineImportInfo @ 0x14076CDAC (MiCaptureRetpolineImportInfo.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140770B14 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140770C2C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140770D60 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeMemoryBlockRegion @ 0x140773BBC (WbFreeMemoryBlockRegion.c)
 *     ExpWnfDeleteNameInstance @ 0x1407792F0 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x14077968C (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateProcessContext @ 0x140781634 (ExpWnfCreateProcessContext.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14078D724 (ExpWnfDispatchKernelSubscription.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14078F258 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140793770 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExpWnfGetPermanentDataStore @ 0x140794E80 (ExpWnfGetPermanentDataStore.c)
 *     CmpTransMgrSyncHive @ 0x140798AD0 (CmpTransMgrSyncHive.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14079B558 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     HvpDoAllocateCell @ 0x1407A6420 (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpLockHashEntryExclusive @ 0x1407AB0BC (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1407AB174 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpReportNotifyHelper @ 0x1407AF050 (CmpReportNotifyHelper.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1407B00A0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1407B01F0 (CmpGetNameControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     MiSectionDelete @ 0x1407C8780 (MiSectionDelete.c)
 *     MiReturnImageBase @ 0x1407C8860 (MiReturnImageBase.c)
 *     MiFinishCreateSection @ 0x1407D0800 (MiFinishCreateSection.c)
 *     MiMarkSharedImageCfgBits @ 0x1407D20C4 (MiMarkSharedImageCfgBits.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1407D63F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407D6770 (MiRemoveSharedCommitNode.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     MmCommitSessionMappedView @ 0x1407F1600 (MmCommitSessionMappedView.c)
 *     MiChargeSegmentCommit @ 0x1407F1988 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MmCreateShadowMapping @ 0x14080B624 (MmCreateShadowMapping.c)
 *     ExRegisterExtension @ 0x14080ECD0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14080EEF0 (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x14080F588 (TlgRegisterAggregateProviderEx.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmFcpManagerSoftwareHiveReady @ 0x140818060 (CmFcpManagerSoftwareHiveReady.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408185D0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140818CE8 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x140835F30 (MiInsertPageFileInList.c)
 *     MiInitializePartition @ 0x140837D40 (MiInitializePartition.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x140846350 (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x1408463A4 (CmpLockSiloKeyLockTrackerExclusive.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084C910 (ExpKdPullRemoteFileForUser.c)
 *     NtSetUuidSeed @ 0x14084E2E0 (NtSetUuidSeed.c)
 *     CmpLockCallbackListExclusive @ 0x14084E9C8 (CmpLockCallbackListExclusive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14085184C (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     MiFreeRetpolineImportInfo @ 0x14085ACF4 (MiFreeRetpolineImportInfo.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 *     ExUnregisterExtension @ 0x1409FE880 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x140A01E50 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A02210 (NtWaitForKeyedEvent.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A047F8 (ExpWnfDeleteScopeInstances.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x140A048DC (ExpWnfDestroyPermanentDataStore.c)
 *     WheaSelLogCheckPoint @ 0x140A04B94 (WheaSelLogCheckPoint.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140A052E0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A05460 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140A05790 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheaExecuteRowFailureCheck @ 0x140A05CDC (WheaExecuteRowFailureCheck.c)
 *     WheapPfaReset @ 0x140A06240 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A063BC (WheapPredictiveFailureAnalysis.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140A0C960 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1A1E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmLockHiveSecurityExclusive @ 0x140A1C7D8 (CmLockHiveSecurityExclusive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1C82C (CmpLockHashEntryByIndexExclusive.c)
 *     HvFoldBackDirtyData @ 0x140A1DD50 (HvFoldBackDirtyData.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A1E428 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpMarkEntireIndexDirty @ 0x140A21868 (CmpMarkEntireIndexDirty.c)
 *     HvIsRangeDirty @ 0x140A22C54 (HvIsRangeDirty.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A240B0 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A2416C (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140A2452C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A24640 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A24A68 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x140A24EF0 (CmFcpManagerDrainUsageNotificationsWorker.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x140A25190 (CmFcpManagerRetryUsageNotificationsWorker.c)
 *     MiAllocatePartitionId @ 0x140A2CBB0 (MiAllocatePartitionId.c)
 *     MiFreePartitionId @ 0x140A2CD28 (MiFreePartitionId.c)
 *     MmEnumerateBadPages @ 0x140A2CF14 (MmEnumerateBadPages.c)
 *     MiFreeSessionId @ 0x140A2F7B4 (MiFreeSessionId.c)
 *     MmGetPageFileForCrashDump @ 0x140A30138 (MmGetPageFileForCrashDump.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A30D1C (MiCreateFileOnlyImageFixupList.c)
 *     MiLockFileExtentsExclusive @ 0x140A31480 (MiLockFileExtentsExclusive.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteHotPatchEntry @ 0x140A33A90 (MiDeleteHotPatchEntry.c)
 *     MiDeleteHotPatchRecord @ 0x140A33BA4 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140A34E80 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatchForUserSid @ 0x140A35638 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatchForUserSid @ 0x140A3940C (MiUnloadHotPatchForUserSid.c)
 *     MmDeleteShadowMapping @ 0x140A39B58 (MmDeleteShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 *     MiAcquireKernelCfgLock @ 0x140A41184 (MiAcquireKernelCfgLock.c)
 *     MiAddSpecialPurposeMemoryPrepare @ 0x140A44160 (MiAddSpecialPurposeMemoryPrepare.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A445E8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4470C (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiLockNestedVad @ 0x140A44F48 (MiLockNestedVad.c)
 *     MiSelectOverflowDllBase @ 0x140A4555C (MiSelectOverflowDllBase.c)
 *     MiInsertChildVads @ 0x140A4642C (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140A466EC (MiCopyLargeVad.c)
 *     VrpDecrementSiloCount @ 0x140A6F2D4 (VrpDecrementSiloCount.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A6F45C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140A6F964 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A6FB9C (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A6FD28 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreUnloadKey @ 0x140A70314 (VrpPreUnloadKey.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A70420 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     WheaConfigureErrorSource @ 0x140A8D100 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140AA8760 (WheaUnconfigureErrorSource.c)
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140AA8C04 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAA0D0 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140AAA2F8 (MiDeleteEnclavePages.c)
 *     WheaInitialize @ 0x140B3E1A0 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B6383C (ExpWorkerInitialization.c)
 *     MiInitializePagedPoolEvents @ 0x140B6FC8C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140241660 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402416E0 (ExpOptimizePushLockList.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  signed __int64 result; // rax
  bool v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned int)(unsigned __int8)v21 + 3;
  while ( (v6 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v9 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = v7;
    Object[5] = 0LL;
    if ( (v6 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (unsigned __int64)Object | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v10 = 11LL;
      Object[4] = Object;
      LODWORD(Object[6]) = v6 >> 4;
      if ( SLODWORD(Object[6]) <= 1 )
        v10 = v7;
      v11 = (unsigned __int64)Object | v10;
      if ( !(unsigned int)(v6 >> 4) )
        LODWORD(Object[6]) = -2;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_13;
    if ( v9 )
      ExpOptimizePushLockList(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v16 = __rdtsc();
        v17 = v16 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v16;
          v19 = __rdtsc();
          v16 = v19;
          if ( v19 <= v18 || v19 >= v17 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0;
              (Object[6] & 0x200000000LL) != 0 && i != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
              ++i )
        {
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2, 0LL);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_13:
    RtlBackoff(&v21);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
