/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x14021D020
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x1402012D8 (PsIoRateControlOverQuotaNotify.c)
 *     MiWalkPageTablesRecursively @ 0x14020BD60 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14021CFC0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MmPurgeSection @ 0x140238510 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x140238AE0 (MiDeleteSubsectionPages.c)
 *     SepInitSingletonEntry @ 0x140250D60 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1402512F4 (SepCleanupMarkedForDeletionEntries.c)
 *     MmEnforceWorkingSetLimit @ 0x140251A38 (MmEnforceWorkingSetLimit.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140252E40 (IoSetDiskIoAttributionOnProcess.c)
 *     PspJobIoRateQueryHistory @ 0x140252F88 (PspJobIoRateQueryHistory.c)
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140255428 (MiGatherMappedPages.c)
 *     MiRemoveSecureEntry @ 0x14025AE40 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x14025B21C (MiInsertVadEvent.c)
 *     PopPepTryPowerDownDevice @ 0x140260C70 (PopPepTryPowerDownDevice.c)
 *     PopPepLockActivityLink @ 0x1402617D8 (PopPepLockActivityLink.c)
 *     PopFxArmResidentTimer @ 0x14026231C (PopFxArmResidentTimer.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402637E8 (MmQueryProcessWorkingSetSwapPages.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265340 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140265610 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140265C70 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140266374 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiTrimSection @ 0x14026FD60 (MiTrimSection.c)
 *     MiDeleteControlArea @ 0x140278164 (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x14027828C (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x140278384 (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x14027842C (MiDrainControlAreaWrites.c)
 *     MiCreatePrototypePtes @ 0x140278478 (MiCreatePrototypePtes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402788E0 (MiUpdateSystemProtoPtesTree.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140279098 (MiCheckAndUpdateIoAttribution.c)
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14027D05C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x1402854CC (MiRemoveFromSystemSpace.c)
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiSynchronizeSystemVa @ 0x1402922C0 (MiSynchronizeSystemVa.c)
 *     MiReleaseControlAreaCharges @ 0x140294C48 (MiReleaseControlAreaCharges.c)
 *     MiDereferenceControlAreaBySection @ 0x1402950EC (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     MiFlushRelease @ 0x140295690 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140295C70 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140296380 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140296630 (MiCheckPurgeAndUpMapCount.c)
 *     MiFreePhysicalView @ 0x140298638 (MiFreePhysicalView.c)
 *     MiReferenceControlAreaPfn @ 0x14029A610 (MiReferenceControlAreaPfn.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     PfSnGetFileInformation @ 0x14029C120 (PfSnGetFileInformation.c)
 *     MiDeletePagablePteRange @ 0x1402B79F0 (MiDeletePagablePteRange.c)
 *     MiReferenceControlArea @ 0x1402D6FD4 (MiReferenceControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x1402D7BB8 (MiDecrementModifiedWriteCount.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x1402DD664 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402E0190 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402E0AD8 (IoStopDiskIoAttributionForContext.c)
 *     MiContractPagingFiles @ 0x1402E9D90 (MiContractPagingFiles.c)
 *     MiDereferenceIoPages @ 0x1402EAAB8 (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x1402EB19C (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402EB774 (MiDeleteRotateAndStopFaults.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F4E60 (MiDereferenceControlAreaPfnList.c)
 *     MiFlushAcquire @ 0x1402F8FD8 (MiFlushAcquire.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402F93FC (MiCanFileBeTruncatedInternal.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1402F9584 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x1402F963C (MiLockControlAreaSectionExtend.c)
 *     MiAppendSubsectionChain @ 0x1402F97CC (MiAppendSubsectionChain.c)
 *     MiInsertSubsectionNode @ 0x1402F994C (MiInsertSubsectionNode.c)
 *     MiUpdateLastSubsectionSize @ 0x1402F9A78 (MiUpdateLastSubsectionSize.c)
 *     MiSetSubsectionBase @ 0x1402F9BC4 (MiSetSubsectionBase.c)
 *     RtlpCSparseBitmapLock @ 0x1402FD4EC (RtlpCSparseBitmapLock.c)
 *     MiSetTrimWhileAgingState @ 0x1403044BC (MiSetTrimWhileAgingState.c)
 *     PfSnNameQueryWorker @ 0x140308320 (PfSnNameQueryWorker.c)
 *     PfSnNameRemove @ 0x14030CB04 (PfSnNameRemove.c)
 *     MiUpdateControlAreaCommitCount @ 0x14030F5E0 (MiUpdateControlAreaCommitCount.c)
 *     MmFlushImageSection @ 0x1403107A0 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140310910 (MiForceSectionClosed.c)
 *     MiFreeSlabEntries @ 0x140312360 (MiFreeSlabEntries.c)
 *     MiImageUnused @ 0x140314D6C (MiImageUnused.c)
 *     MiDeleteEmptySubsections @ 0x14031676C (MiDeleteEmptySubsections.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031711C (MmAdjustWorkingSetSizeEx.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140317EF8 (MmStoreFlushOutstandingEvictions.c)
 *     MiInsertMappingNode @ 0x14031BB08 (MiInsertMappingNode.c)
 *     MmChangeSectionBackingFile @ 0x14031C484 (MmChangeSectionBackingFile.c)
 *     MiDereferencePageRunsEx @ 0x14031C868 (MiDereferencePageRunsEx.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14031CF70 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14031D010 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14031D0A0 (MiRefPageFileSpaceBitmaps.c)
 *     MiCleanWorkingSet @ 0x14031D4D4 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x1403222F0 (MiMakeSecureExclusive.c)
 *     MiReleaseFaultCharges @ 0x14032243C (MiReleaseFaultCharges.c)
 *     MiDeleteCloneZombies @ 0x14032267C (MiDeleteCloneZombies.c)
 *     MiRetainSubsection @ 0x140322A84 (MiRetainSubsection.c)
 *     MiDecrementSubsection @ 0x140325E50 (MiDecrementSubsection.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x140326F34 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiUpdatePerSessionProto @ 0x1403284F4 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14032951C (MiFlowThroughInsertNode.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14032998C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiWaitForRotateToComplete @ 0x14032BD70 (MiWaitForRotateToComplete.c)
 *     MiZeroSectionObjectPointer @ 0x14032C98C (MiZeroSectionObjectPointer.c)
 *     MiDereferenceControlArea @ 0x14032CAF8 (MiDereferenceControlArea.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiGatherPagefilePages @ 0x1403318B4 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x140333724 (MiFindFreePageFileSpace.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiDeleteStaleCacheMaps @ 0x14033ABE0 (MiDeleteStaleCacheMaps.c)
 *     MiAdjustModifiedPageLoad @ 0x14033BADC (MiAdjustModifiedPageLoad.c)
 *     MiLockSectionControlArea @ 0x14033D954 (MiLockSectionControlArea.c)
 *     MiBeginProcessClean @ 0x140350150 (MiBeginProcessClean.c)
 *     MiOutlawInswaps @ 0x14035024C (MiOutlawInswaps.c)
 *     MmInSwapWorkingSet @ 0x140350CF4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x140351618 (MiOutSwapWorkingSet.c)
 *     MiSectionCreated @ 0x140359E2C (MiSectionCreated.c)
 *     MiCopyHeaderIfResident @ 0x14035A290 (MiCopyHeaderIfResident.c)
 *     MiReleaseImageSection @ 0x14035A920 (MiReleaseImageSection.c)
 *     MiCombiningInProgress @ 0x140366608 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiFreeCombineBlock @ 0x14036B080 (MiFreeCombineBlock.c)
 *     FlushLookUpTableBucket @ 0x14036D0F0 (FlushLookUpTableBucket.c)
 *     PoFxIdleDevice @ 0x14036EFF4 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036F190 (PopFxActivateDevice.c)
 *     MiRemoveMappingNode @ 0x14037A060 (MiRemoveMappingNode.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14037B680 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     MiLocateOldestSecure @ 0x14037DC38 (MiLocateOldestSecure.c)
 *     MiCleanSection @ 0x14037EA3C (MiCleanSection.c)
 *     MiSetControlAreaSystemVa @ 0x14037EB94 (MiSetControlAreaSystemVa.c)
 *     MiProcessDereferenceList @ 0x14038746C (MiProcessDereferenceList.c)
 *     MmStealTopLevelPage @ 0x140387ED8 (MmStealTopLevelPage.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140388354 (PopFxIncrementDeviceSleepCount.c)
 *     MiDeleteSessionAddressSpace @ 0x140388EEC (MiDeleteSessionAddressSpace.c)
 *     MiWritePageFileHash @ 0x1403898C4 (MiWritePageFileHash.c)
 *     MiSessionRemoveImage @ 0x14038A8F8 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x14038B498 (PopPepSurprisePowerOn.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14038C710 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     ExDeleteFastResource @ 0x140393420 (ExDeleteFastResource.c)
 *     PopFxAllocatePowerIrp @ 0x140399310 (PopFxAllocatePowerIrp.c)
 *     ExpAddResourceToSystemResourceList @ 0x14039951C (ExpAddResourceToSystemResourceList.c)
 *     MiInsertSlabEntry @ 0x1403999CC (MiInsertSlabEntry.c)
 *     MmManageFaultRange @ 0x14039D408 (MmManageFaultRange.c)
 *     MiCountSystemImageCommitment @ 0x14039E594 (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039E848 (MiFreePrivateFixupEntryForSystemImage.c)
 *     PoFxReportDevicePoweredOn @ 0x14039F580 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateConstraints @ 0x14039FE6C (PopPepUpdateConstraints.c)
 *     MiSessionInsertImage @ 0x1403A2274 (MiSessionInsertImage.c)
 *     PopFxReleasePowerIrp @ 0x1403A4614 (PopFxReleasePowerIrp.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A51D8 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiZeroLargePageThread @ 0x1403AEB30 (MiZeroLargePageThread.c)
 *     ExCompareExchangeCallBack @ 0x1403AEFFC (ExCompareExchangeCallBack.c)
 *     MiDeleteBootRange @ 0x1403B4B18 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B848C (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B8FF0 (MiFreeUnusedPfnPagesDpc.c)
 *     PopPepWaitForDeviceRelease @ 0x1403BD728 (PopPepWaitForDeviceRelease.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BD9C0 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x1403BDB2C (PopPepDeviceStarted.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BDE34 (PopFxAssignDeviceToDevNode.c)
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 *     MiUpdatePageFileList @ 0x1403BF708 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x1403BF9E8 (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x1403C0C60 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C81C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiMapMdlCommon @ 0x1403C8614 (MiMapMdlCommon.c)
 *     SmFpPreAllocate @ 0x1403C8964 (SmFpPreAllocate.c)
 *     PspAddPartitionToGlobalList @ 0x1403CA22C (PspAddPartitionToGlobalList.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1403CAE50 (PoFxRegisterDripsWatchdogCallback.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CB604 (MiInitializeWorkingSetManagerParameters.c)
 *     SepExpandSingletonArrays @ 0x1403CD8C0 (SepExpandSingletonArrays.c)
 *     HalpNumaAddRangeProximity @ 0x1404D1BA0 (HalpNumaAddRangeProximity.c)
 *     HalpUpdateCoolingPacket @ 0x1404DC940 (HalpUpdateCoolingPacket.c)
 *     MiDeleteCachedSegment @ 0x140528AF8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528CEC (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140529604 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1405296D4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529CA8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140529ED8 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x14052A17C (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x14052A1F0 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x14052A55C (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052A864 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14052A954 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x14052AAB0 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x14052B418 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C2A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C494 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C648 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x14052CBD0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CC34 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052CE6C (MmSetCommitReleaseEligibility.c)
 *     MiZeroPageFile @ 0x14052D690 (MiZeroPageFile.c)
 *     MiInitializeDynamicPfns @ 0x14052E4E0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x14052E978 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x140531664 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x140535C88 (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x140535DAC (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140536AF8 (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x140537390 (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x14053A6D4 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x14053CD80 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x14053CE20 (MiUpdateActiveSubsection.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053E170 (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E21C (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053EA44 (MiFinishHoldingDirtyFaults.c)
 *     MiChangingSubsectionProtos @ 0x14053F858 (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x140540350 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405413C0 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541830 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x140541F90 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x1405423C4 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x140542514 (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x140542848 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x140542A10 (MiAttemptPageFileReductionApc.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x140542F08 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x140542FD0 (MiExtendPagingFileMaximum.c)
 *     MiFinishPageFileExtension @ 0x140543530 (MiFinishPageFileExtension.c)
 *     MiIssuePageExtendRequest @ 0x140543884 (MiIssuePageExtendRequest.c)
 *     MiPageFileNoFreeSpace @ 0x140543B74 (MiPageFileNoFreeSpace.c)
 *     MiQueuePageFileExtension @ 0x140543D3C (MiQueuePageFileExtension.c)
 *     MiUpdatePagingFileMinimum @ 0x140543E7C (MiUpdatePagingFileMinimum.c)
 *     MiCloneCaptureVadCommit @ 0x140544F8C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetExclusive @ 0x14054F6F0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054F718 (MiLockWorkingSetForLargeMapping.c)
 *     MiApplyCommitDelay @ 0x140550170 (MiApplyCommitDelay.c)
 *     MiImageCantMove @ 0x140554BC0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140554C60 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x1405552A8 (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140557DF0 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559A00 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140559CEC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A078 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x14055B238 (MiLockDownWorkingSet.c)
 *     MiComparePageHash @ 0x14055D280 (MiComparePageHash.c)
 *     MiClearPartitionPageBitMap @ 0x140561394 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140561858 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x140561FDC (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x140562368 (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x140562480 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x140562AD0 (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x140562C04 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x140562D50 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x1405633B4 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14056AF00 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x140573F14 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x140574930 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x140574CDC (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576040 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14058202C (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140582280 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x140583B20 (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x14058425C (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x1405977FC (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140598BE4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x14059EB8C (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x14059EC50 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405A254C (ViIrpDatabaseAcquireLockExclusive.c)
 *     EtwpRegisterPartitionPages @ 0x1405B06A4 (EtwpRegisterPartitionPages.c)
 *     EtwpUnregisterPartitionPages @ 0x1405B0A70 (EtwpUnregisterPartitionPages.c)
 *     ExGetBigPoolInfo @ 0x1405B369C (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x140997030 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x140A4F20C (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x140A929A8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  KIRQL CurrentIrql; // bp
  unsigned int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v8; // rcx
  volatile unsigned int v9; // eax
  __int64 v10; // rcx
  _DWORD *v12; // rcx
  volatile unsigned int v13; // ett
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-8h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)v1 | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    v6 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v8[6];
        v8[6] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v12[6] - 1;
          v12[6] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, CurrentIrql);
    }
    v9 = *SpinLock;
    v10 = *(unsigned int *)SpinLock;
    LODWORD(v10) = v10 & 0xBFFFFFFF;
    if ( (_DWORD)v10 != 0x80000000 )
    {
      do
      {
        if ( (v9 & 0x40000000) != 0
          || (v10 = v9,
              LODWORD(v10) = v9 | 0x40000000,
              v13 = v9,
              v9 = _InterlockedCompareExchange(SpinLock, v9 | 0x40000000, v9),
              v13 == v9) )
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v1, v2, SchedulerAssist, v16) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
          v9 = *SpinLock;
        }
        v10 = v9;
        LODWORD(v10) = v9 & 0xBFFFFFFF;
      }
      while ( (v9 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  return CurrentIrql;
}
