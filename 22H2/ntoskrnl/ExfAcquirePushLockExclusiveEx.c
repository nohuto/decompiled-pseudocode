/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x1402FCE10
 * Callers:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     MiLockDriverMappings @ 0x14020B4F8 (MiLockDriverMappings.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14021022C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiRemoveFromSystemSpace @ 0x1402137A0 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14021BAA0 (MiCreatePrototypePtes.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     ExpSaAllocatorAllocate @ 0x1402236F0 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14022397C (ExpSaPageGroupAllocateMemory.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F760 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiInsertVad @ 0x140287B70 (MiInsertVad.c)
 *     MiAddViewsForSection @ 0x140288650 (MiAddViewsForSection.c)
 *     MiLockAddressSpaceToo @ 0x14028940C (MiLockAddressSpaceToo.c)
 *     MiSetVadDeleted @ 0x140289764 (MiSetVadDeleted.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140289F20 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiRemoveVad @ 0x14028A350 (MiRemoveVad.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiLockLoaderEntry @ 0x140292044 (MiLockLoaderEntry.c)
 *     MiLockVad @ 0x14029C6B0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029C82C (LOCK_ADDRESS_SPACE.c)
 *     MiManageSubsectionView @ 0x1402A03E0 (MiManageSubsectionView.c)
 *     MmResourcesAvailable @ 0x1402AEEA0 (MmResourcesAvailable.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1402BC7E0 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     MiGetChannelInformation @ 0x1402F9C74 (MiGetChannelInformation.c)
 *     ExfAcquirePushLockExclusive @ 0x1402FCDF0 (ExfAcquirePushLockExclusive.c)
 *     MiPerformVadSplitting @ 0x14030B4C4 (MiPerformVadSplitting.c)
 *     NtCancelTimer @ 0x14032E090 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14032E684 (ExpSetTimerObject.c)
 *     FsRtlInsertPerStreamContext @ 0x140333C20 (FsRtlInsertPerStreamContext.c)
 *     MmOutSwapWorkingSet @ 0x140341B10 (MmOutSwapWorkingSet.c)
 *     MmDecodeExportSection @ 0x14034B4CC (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034B668 (MmEncodeExportSection.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     ExpSaAllocatorFree @ 0x14035C324 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035C544 (ExpSaPageGroupFreeMemory.c)
 *     ExpDeleteTimer @ 0x140360A70 (ExpDeleteTimer.c)
 *     MiDereferenceExtendInfo @ 0x140366114 (MiDereferenceExtendInfo.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140374A38 (CmpNotifyMachineHiveLoaded.c)
 *     MiLateInitializeSystemCache @ 0x1403AD7E8 (MiLateInitializeSystemCache.c)
 *     MiFreeUnusedPfnPages @ 0x1403B1E20 (MiFreeUnusedPfnPages.c)
 *     MiLockPartitionSystemThreads @ 0x1403B5190 (MiLockPartitionSystemThreads.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C577C (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403CF96C (ExpAcquireFannedOutPushLockExclusive.c)
 *     FlushLookUpTableBucket @ 0x1403CFDB8 (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D54E4 (ExpSaPageGroupDescriptorFree.c)
 *     DifExfAcquirePushLockExclusiveWrapper @ 0x1405DA2D0 (DifExfAcquirePushLockExclusiveWrapper.c)
 *     ExGetWakeTimerList @ 0x14060B698 (ExGetWakeTimerList.c)
 *     ExWakeTimersPause @ 0x14060BAB8 (ExWakeTimersPause.c)
 *     ExInitializeDeviceAts @ 0x14060C2E0 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14060C57C (ExUninitializeDeviceAts.c)
 *     ExSvmBeginDeviceReset @ 0x14060D110 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14060D2E0 (ExSvmFinalizeDeviceReset.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060DC10 (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060E628 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14061020C (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaRegisterErrorSourceOverride @ 0x140613540 (WheaRegisterErrorSourceOverride.c)
 *     WheaUnregisterErrorSourceOverride @ 0x140613830 (WheaUnregisterErrorSourceOverride.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061B614 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14061B734 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x14061B854 (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CAD4 (MiSplitReducedCommitClonePage.c)
 *     MiMarkHugePfnBad @ 0x140621688 (MiMarkHugePfnBad.c)
 *     MiUpControlAreaRefs @ 0x140625F6C (MiUpControlAreaRefs.c)
 *     MiFinishResume @ 0x140626940 (MiFinishResume.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14063E684 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F8DC (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x140643814 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1406528B0 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x140652CBC (MmOutSwapVirtualAddresses.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140655380 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiClearPartitionPageBitMap @ 0x140659030 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1406594F8 (MiDeletePartitionResources.c)
 *     MiGetPartitionNodeInformation @ 0x14065A118 (MiGetPartitionNodeInformation.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x14067F798 (CmFcManagerRegisterFeatureUsageProvider.c)
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x14067F890 (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x14067FC68 (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     NtAllocateUuids @ 0x140681EE0 (NtAllocateUuids.c)
 *     PdcAcquireRwLockExclusive @ 0x14068254C (PdcAcquireRwLockExclusive.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140688C2C (CmpVolumeContextDecrementRefCount.c)
 *     CmpLockContextListExclusive @ 0x14068F02C (CmpLockContextListExclusive.c)
 *     CmpFlushNotify @ 0x140699940 (CmpFlushNotify.c)
 *     MmLinkJobProcess @ 0x14069FC10 (MmLinkJobProcess.c)
 *     MiSelectRelocationStartHint @ 0x1406AACDC (MiSelectRelocationStartHint.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmpReportNotifyHelper @ 0x1406D54F0 (CmpReportNotifyHelper.c)
 *     CmpLockKcbExclusive @ 0x1406D8518 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406D8E40 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1406D8F90 (CmpGetNameControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701CB8 (CmpVolumeManagerGetContextForFile.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1407030D0 (CmpReorganizeHive.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmExtendSection @ 0x1407065B4 (MmExtendSection.c)
 *     HvpDoAllocateCell @ 0x14070A4F0 (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x14070AC90 (HvFreeCell.c)
 *     CmpFreeKeyByCell @ 0x14070B2C4 (CmpFreeKeyByCell.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     ExpWnfCreateNameInstance @ 0x1407118A4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140711D60 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140712024 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfResolveScopeInstance @ 0x140713418 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140713AA0 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140713EC0 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x1407140C0 (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140714660 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiSectionDelete @ 0x140721C30 (MiSectionDelete.c)
 *     MiReturnImageBase @ 0x140721D10 (MiReturnImageBase.c)
 *     MiInsertSharedCommitNode @ 0x140722090 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140722410 (MiRemoveSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x140722DA0 (MiFinishCreateSection.c)
 *     MiMarkSharedImageCfgBits @ 0x140747214 (MiMarkSharedImageCfgBits.c)
 *     HvpMarkCellDirty @ 0x1407474B0 (HvpMarkCellDirty.c)
 *     CmSiRWLockAcquireExclusive @ 0x14074787C (CmSiRWLockAcquireExclusive.c)
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     CmLockHive @ 0x1407484C4 (CmLockHive.c)
 *     MiChargeSegmentCommit @ 0x140748518 (MiChargeSegmentCommit.c)
 *     MmCommitSessionMappedView @ 0x1407488B0 (MmCommitSessionMappedView.c)
 *     CmpDeleteHive @ 0x14074EBE4 (CmpDeleteHive.c)
 *     CmpTrimHive @ 0x14074ED94 (CmpTrimHive.c)
 *     CmpLockHiveListExclusive @ 0x14074EEC4 (CmpLockHiveListExclusive.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140751744 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140752244 (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x1407523B8 (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140753CF8 (CmpLockRegistryFreezeAware.c)
 *     WbRemoveWarbirdProcess @ 0x140761414 (WbRemoveWarbirdProcess.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140761CE0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140762020 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14076214C (WbAddHeapExecutedBlockToLRU.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14076301C (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x1407636B4 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140763B10 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140764478 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1407647B0 (WbAllocateSlots.c)
 *     WbFreeMemoryBlockRegion @ 0x140764A7C (WbFreeMemoryBlockRegion.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1407685A0 (CmpCloseKeyObject.c)
 *     CmpTransMgrPrepare @ 0x140768FAC (CmpTransMgrPrepare.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140769AA0 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x14076A928 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A9E0 (CmpLockHashEntryExclusiveByKcb.c)
 *     ExpWnfDeleteSubscription @ 0x14076CF0C (ExpWnfDeleteSubscription.c)
 *     MiInitializePartialVad @ 0x14076DBFC (MiInitializePartialVad.c)
 *     VrpPreLoadKey @ 0x14077A954 (VrpPreLoadKey.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077ACF8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14077B278 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14077B6E0 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpLoadDifferencingHive @ 0x14077BFAC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14077C3DC (VrpUnloadDifferencingHive.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C688 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14077CB40 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementSiloCount @ 0x14077D33C (VrpIncrementSiloCount.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14077D6B4 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     MiCaptureRetpolineImportInfo @ 0x14079DBF8 (MiCaptureRetpolineImportInfo.c)
 *     MiPopulateCfgBitMap @ 0x1407A4E80 (MiPopulateCfgBitMap.c)
 *     MiGetNewSessionId @ 0x1407A9F4C (MiGetNewSessionId.c)
 *     MiInitializeSessionGlobals @ 0x1407AA030 (MiInitializeSessionGlobals.c)
 *     MiDereferencePerSessionProtos @ 0x1407B6168 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B62B0 (MiCreatePerSessionProtos.c)
 *     ExpWnfDeleteNameInstance @ 0x1407C9BD0 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1407C9F6C (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteProcessContext @ 0x1407CCBB8 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteScopeById @ 0x1407CCDEC (ExpWnfDeleteScopeById.c)
 *     ExpWnfCreateProcessContext @ 0x1407D0684 (ExpWnfCreateProcessContext.c)
 *     WbReEncryptEncryptionSegment @ 0x1407D2464 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407D2544 (WbDecryptEncryptionSegment.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D26B8 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1407D2800 (WbGetInitializedEncryptionSegment.c)
 *     CmpLockAppHiveLoadList @ 0x1407D7634 (CmpLockAppHiveLoadList.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1407DCB34 (ExpWnfDispatchKernelSubscription.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1407DE37C (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1407E0B20 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1407E0C38 (WbHeapExecutionUnloadModule.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x1407E2E00 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExpWnfGetPermanentDataStore @ 0x1407E45C0 (ExpWnfGetPermanentDataStore.c)
 *     CmpTransMgrSyncHive @ 0x1407E7F30 (CmpTransMgrSyncHive.c)
 *     TlgRegisterAggregateProviderEx @ 0x140803380 (TlgRegisterAggregateProviderEx.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     CmFcpManagerSoftwareHiveReady @ 0x140810140 (CmFcpManagerSoftwareHiveReady.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408106E0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140810CDC (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MmCreateShadowMapping @ 0x140820130 (MmCreateShadowMapping.c)
 *     ExRegisterExtension @ 0x140823170 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140823390 (ExRegisterHost.c)
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x140835BE0 (MiInsertPageFileInList.c)
 *     MiInitializePartition @ 0x140838DF0 (MiInitializePartition.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x1408494B0 (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x140849504 (CmpLockSiloKeyLockTrackerExclusive.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084FCC0 (ExpKdPullRemoteFileForUser.c)
 *     NtSetUuidSeed @ 0x140851720 (NtSetUuidSeed.c)
 *     CmpLockCallbackListExclusive @ 0x140851E08 (CmpLockCallbackListExclusive.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1408550BC (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpAssignKeySecurity @ 0x1408593F0 (CmpAssignKeySecurity.c)
 *     MiFreeRetpolineImportInfo @ 0x14085EBF4 (MiFreeRetpolineImportInfo.c)
 *     CmpCreateHiveRootCell @ 0x14087495C (CmpCreateHiveRootCell.c)
 *     ExUnregisterExtension @ 0x140A01570 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x140A04B40 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A04F00 (NtWaitForKeyedEvent.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A074E8 (ExpWnfDeleteScopeInstances.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x140A075CC (ExpWnfDestroyPermanentDataStore.c)
 *     WheaSelLogCheckPoint @ 0x140A07884 (WheaSelLogCheckPoint.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140A07FD0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A08150 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140A08480 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheaExecuteRowFailureCheck @ 0x140A089CC (WheaExecuteRowFailureCheck.c)
 *     WheapPfaReset @ 0x140A08F30 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A090AC (WheapPredictiveFailureAnalysis.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140A0F670 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFreezeRegistry @ 0x140A133B0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1CF34 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmLockHiveSecurityExclusive @ 0x140A1F52C (CmLockHiveSecurityExclusive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1F580 (CmpLockHashEntryByIndexExclusive.c)
 *     HvFoldBackDirtyData @ 0x140A20AB0 (HvFoldBackDirtyData.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A21188 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpMarkEntireIndexDirty @ 0x140A245C8 (CmpMarkEntireIndexDirty.c)
 *     HvIsRangeDirty @ 0x140A259B4 (HvIsRangeDirty.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140A26E10 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A26ECC (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140A2728C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A273A0 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A277C8 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x140A27C50 (CmFcpManagerDrainUsageNotificationsWorker.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x140A27EF0 (CmFcpManagerRetryUsageNotificationsWorker.c)
 *     MiAllocatePartitionId @ 0x140A2F8F0 (MiAllocatePartitionId.c)
 *     MiFreePartitionId @ 0x140A2FA68 (MiFreePartitionId.c)
 *     MmEnumerateBadPages @ 0x140A2FC54 (MmEnumerateBadPages.c)
 *     MiFreeSessionId @ 0x140A324E4 (MiFreeSessionId.c)
 *     MmGetPageFileForCrashDump @ 0x140A32E68 (MmGetPageFileForCrashDump.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A33A4C (MiCreateFileOnlyImageFixupList.c)
 *     MiLockFileExtentsExclusive @ 0x140A341B0 (MiLockFileExtentsExclusive.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35650 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteHotPatchEntry @ 0x140A367C0 (MiDeleteHotPatchEntry.c)
 *     MiDeleteHotPatchRecord @ 0x140A368D4 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140A37BB0 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatchForUserSid @ 0x140A38368 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatchForUserSid @ 0x140A3C0F0 (MiUnloadHotPatchForUserSid.c)
 *     MmDeleteShadowMapping @ 0x140A3C840 (MmDeleteShadowMapping.c)
 *     MiCreateHardwareEnclave @ 0x140A3D7F8 (MiCreateHardwareEnclave.c)
 *     MiAcquireKernelCfgLock @ 0x140A43E58 (MiAcquireKernelCfgLock.c)
 *     MiAddSpecialPurposeMemoryPrepare @ 0x140A46E30 (MiAddSpecialPurposeMemoryPrepare.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A472B8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A473DC (MiInitializePartitionSpecialPurposeMemory.c)
 *     MiLockNestedVad @ 0x140A47C18 (MiLockNestedVad.c)
 *     MiSelectOverflowDllBase @ 0x140A4822C (MiSelectOverflowDllBase.c)
 *     MiInsertChildVads @ 0x140A490FC (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140A493BC (MiCopyLargeVad.c)
 *     VrpDecrementSiloCount @ 0x140A71FD4 (VrpDecrementSiloCount.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A7215C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140A72664 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A7289C (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140A72A28 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreUnloadKey @ 0x140A73014 (VrpPreUnloadKey.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A73120 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     WheaConfigureErrorSource @ 0x140A90590 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140AAB990 (WheaUnconfigureErrorSource.c)
 *     MiShutdownSystem @ 0x140AABC30 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140AABE34 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD300 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140AAD528 (MiDeleteEnclavePages.c)
 *     WheaInitialize @ 0x140B4C7E8 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B674AC (ExpWorkerInitialization.c)
 *     MiInitializePagedPoolEvents @ 0x140B73D5C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402FD2B0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402FD330 (ExpOptimizePushLockList.c)
 *     memset @ 0x140435400 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  signed __int64 result; // rax
  bool v11; // cl
  __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  int i; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v8 = *a1;
  v9 = (unsigned int)(unsigned __int8)v21 + 3;
  while ( (v8 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2, v6, v7);
    v11 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = v9;
    Object[5] = 0LL;
    if ( (v8 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v8 & 0xFFFFFFFFFFFFFFF0uLL;
      v6 = (unsigned __int64)Object | v8 & 8 | 7;
      v11 = (v8 & 4) == 0;
    }
    else
    {
      v12 = 11LL;
      Object[4] = Object;
      LODWORD(Object[6]) = v8 >> 4;
      if ( SLODWORD(Object[6]) <= 1 )
        v12 = v9;
      v6 = (unsigned __int64)Object | v12;
      if ( !(unsigned int)(v8 >> 4) )
        LODWORD(Object[6]) = -2;
    }
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6, v8);
    v13 = v8 == v14;
    v8 = v14;
    if ( !v13 )
      goto LABEL_13;
    if ( v11 )
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
        v7 = __rdtsc();
        v17 = v7 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          v6 = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v7;
          v19 = __rdtsc();
          v6 = (unsigned __int64)HIDWORD(v19) << 32;
          v7 = v19;
          if ( v19 <= v18 || v19 >= v17 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          v6 = HIDWORD(Object[6]);
          if ( (Object[6] & 0x200000000LL) == 0 || i == ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6] )
            break;
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8 + 1, v8);
  if ( v8 != result )
  {
    if ( a2 )
      KeAbPreWait(a2, v6, v7);
LABEL_13:
    RtlBackoff(&v21);
    v8 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
