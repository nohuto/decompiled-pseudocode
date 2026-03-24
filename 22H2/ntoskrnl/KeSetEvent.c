/*
 * XREFs of KeSetEvent @ 0x1402C3C30
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140205140 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1402056F0 (AlpcpSignal.c)
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x140207A40 (KiDecrementProcessStackCount.c)
 *     MiProcessWorkingSets @ 0x140207B60 (MiProcessWorkingSets.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140217410 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     PpmReleaseLock @ 0x14022A470 (PpmReleaseLock.c)
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x14022D3E0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140235D30 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     ExpQueueWorkItem @ 0x140240E10 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1402417F0 (ExpWorkerThread.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     KiReadyThread @ 0x140247FB0 (KiReadyThread.c)
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     ExReferenceCallBackBlock @ 0x14025A1B0 (ExReferenceCallBackBlock.c)
 *     MiQueuePageAccessLog @ 0x14025B88C (MiQueuePageAccessLog.c)
 *     IoAcquireRemoveLockEx @ 0x140260020 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1402600A4 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140260964 (PopFxCompleteComponentActivation.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402630AC (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265340 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140265C70 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140267590 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x140268604 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x1402686A4 (SmFpFree.c)
 *     PfSnRemoveProcessTrace @ 0x14026D79C (PfSnRemoveProcessTrace.c)
 *     PfpReturnAccessBuffer @ 0x14026EDF8 (PfpReturnAccessBuffer.c)
 *     CcPurgeAndClearCacheSection @ 0x14026F814 (CcPurgeAndClearCacheSection.c)
 *     ExpWakePushLock @ 0x140271C20 (ExpWakePushLock.c)
 *     CcWorkerThread @ 0x140273870 (CcWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x14027445C (CcDeleteSharedCacheMap.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     CcUninitializeCacheMap @ 0x140276F30 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x1402773AC (CcDereferencePartition.c)
 *     MiDecrementControlAreaCount @ 0x140278268 (MiDecrementControlAreaCount.c)
 *     CcPostWorkQueueAsyncRead @ 0x140278CE4 (CcPostWorkQueueAsyncRead.c)
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x14027F560 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x14027F7A8 (MiWakePageZeroing.c)
 *     MiWakeZeroingThreads @ 0x14027FA50 (MiWakeZeroingThreads.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     MiFreeExcessSegments @ 0x1402953D0 (MiFreeExcessSegments.c)
 *     MiFinishVadDeletion @ 0x140297440 (MiFinishVadDeletion.c)
 *     MiDecreaseAvailablePages @ 0x140299A00 (MiDecreaseAvailablePages.c)
 *     PfFileInfoNotify @ 0x14029DC90 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x14029E950 (PfSnReferenceProcessTrace.c)
 *     CcPinFileData @ 0x14029FCC0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1402A1080 (CcFreeVirtualAddress.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402A9B00 (MiInsertProtectedStandbyPage.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402DEA70 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1402EFA70 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x1402F1D20 (ExfReleaseRundownProtection.c)
 *     KiRequestProcessInSwap @ 0x1402F28A0 (KiRequestProcessInSwap.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402F3240 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpUnblockPushLock @ 0x1402F4D68 (ExpUnblockPushLock.c)
 *     MiInsertUnusedSubsection @ 0x1402F5120 (MiInsertUnusedSubsection.c)
 *     IoReleaseRemoveLockEx @ 0x140303900 (IoReleaseRemoveLockEx.c)
 *     MiIssueHardFaultIo @ 0x140306F74 (MiIssueHardFaultIo.c)
 *     ExNotifyWithProcessing @ 0x140307DA8 (ExNotifyWithProcessing.c)
 *     MiReclaimSystemVa @ 0x14030B8D8 (MiReclaimSystemVa.c)
 *     PfpEventHandleFullBuffer @ 0x14030F520 (PfpEventHandleFullBuffer.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140312490 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140312670 (SmKmStoreHelperWorker.c)
 *     MiReduceZeroingThreads @ 0x1403146D0 (MiReduceZeroingThreads.c)
 *     SmKmGenericCompletion @ 0x140316A40 (SmKmGenericCompletion.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140317EF8 (MmStoreFlushOutstandingEvictions.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14031925C (ExpPartitionCreateThreadIfNecessary.c)
 *     CcNotifyWriteBehindInternal @ 0x14031B410 (CcNotifyWriteBehindInternal.c)
 *     MiStoreSetEvictPageFile @ 0x14031E52C (MiStoreSetEvictPageFile.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403203AC (PnpUnlockDeviceActionQueue.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1403205B0 (LZNT1DecompressChunkWorkItem.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1403230F0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x140324440 (CmpLazyFlushDpcRoutine.c)
 *     ExpEnumerateCallback @ 0x140324810 (ExpEnumerateCallback.c)
 *     CcPrepareMdlWrite @ 0x1403259D0 (CcPrepareMdlWrite.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1403294D0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     CcDeleteBcbs @ 0x14032B8C0 (CcDeleteBcbs.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14032C0D0 (ExpWorkQueueManagerReaperTimer.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14032CD00 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiIrpCompletionApcRoutine @ 0x14032D1E0 (MiIrpCompletionApcRoutine.c)
 *     WmipUnreferenceRegEntry @ 0x14032E244 (WmipUnreferenceRegEntry.c)
 *     EtwpSwitchBuffer @ 0x14032EE9C (EtwpSwitchBuffer.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiStoreUpdateMemoryConditions @ 0x14033A2F4 (MiStoreUpdateMemoryConditions.c)
 *     MiWorkingSetManager @ 0x14033BC70 (MiWorkingSetManager.c)
 *     PopQueueTargetDpc @ 0x140344920 (PopQueueTargetDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140349850 (PopUpdateWatchdogNoWorkersEvent.c)
 *     SepRmCallLsa @ 0x14034D310 (SepRmCallLsa.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14034DA30 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034E538 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x14034F580 (SmKmStoreHelperSendCommand.c)
 *     MiWakeModifiedPageWriter @ 0x140350344 (MiWakeModifiedPageWriter.c)
 *     MiFlushAllHintedStorePages @ 0x1403503A0 (MiFlushAllHintedStorePages.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036D080 (PnpDiagnosticCompletionRoutine.c)
 *     PoFxPrepareDevice @ 0x14036E7C0 (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x14036F190 (PopFxActivateDevice.c)
 *     PnpDeviceActionWorker @ 0x14036F9F0 (PnpDeviceActionWorker.c)
 *     PopRequestPowerIrp @ 0x140370580 (PopRequestPowerIrp.c)
 *     PopQueueDirectedDripsWork @ 0x14037A018 (PopQueueDirectedDripsWork.c)
 *     PopRequestCompletion @ 0x14037A370 (PopRequestCompletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037B860 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14037E460 (VfPoolDelayFreeIfPossible.c)
 *     PopUnregisterPowerSettingCallback @ 0x1403806BC (PopUnregisterPowerSettingCallback.c)
 *     PnpRemoveDeviceActionRequests @ 0x140380A94 (PnpRemoveDeviceActionRequests.c)
 *     PopFxComponentWork @ 0x140381080 (PopFxComponentWork.c)
 *     MiFlushAllPagesWorker @ 0x14038282C (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x1403841B0 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x14038746C (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403880B8 (PopCompleteNotifyTransitionCommon.c)
 *     MiMarkSessionDeletePending @ 0x1403896B0 (MiMarkSessionDeletePending.c)
 *     PoFxNotifySurprisePowerOn @ 0x14038B410 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x14038C670 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x14038D240 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038D458 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14038D570 (PfpScenCtxWaiterTimedOut.c)
 *     PnpUnlockMountableDevice @ 0x140393718 (PnpUnlockMountableDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140399310 (PopFxAllocatePowerIrp.c)
 *     PopIrpWorker @ 0x14039F770 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14039FE6C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403A0020 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxReleasePowerIrp @ 0x1403A4614 (PopFxReleasePowerIrp.c)
 *     MiAddZeroingThreads @ 0x1403A4EA0 (MiAddZeroingThreads.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5454 (MiQueueWorkingSetRequest.c)
 *     PopUserPresentSet @ 0x1403A5804 (PopUserPresentSet.c)
 *     PopBatteryWakeDpc @ 0x1403A73C0 (PopBatteryWakeDpc.c)
 *     MiZeroPageCalibrate @ 0x1403AAC44 (MiZeroPageCalibrate.c)
 *     MiZeroNodePages @ 0x1403AB040 (MiZeroNodePages.c)
 *     ExCompareExchangeCallBack @ 0x1403AEFFC (ExCompareExchangeCallBack.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403B5B18 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403B63E4 (MiUpdateAvailableEvents.c)
 *     KeBalanceSetManager @ 0x1403B8A80 (KeBalanceSetManager.c)
 *     WheaLogInternalEvent @ 0x1403BA6F0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403BA9C4 (WheapAddErrorSource.c)
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x1403BF584 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x1403C0C60 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x1403C3078 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x1403C95B4 (PopPropogateCoolingChange.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1403CF9B0 (PopPepStartDeviceUnregisterActivity.c)
 *     IopCopyCompleteReadRequest @ 0x1403F1040 (IopCopyCompleteReadRequest.c)
 *     HalpProcessSecondarySignalList @ 0x1404D11C0 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x1404D1360 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404D1404 (HalpReleaseSecondaryIcEntryShared.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404E89C0 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1404EA230 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1404EBBC0 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x1404F0E18 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1404F12E0 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x140500734 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1405007A4 (IopFreeReserveIrp.c)
 *     PnprQuiesce @ 0x14050F658 (PnprQuiesce.c)
 *     KeRetryOutswapProcess @ 0x140513808 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140518F94 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14051914C (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140521280 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1405218AC (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140521BF0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x140521C2C (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x140521D04 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140521D40 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x140525C08 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x14052A17C (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x14052A55C (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x14052B5B4 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C2A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C494 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x14052D690 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140538FCC (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1405391E8 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x140539B00 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x14053B4C4 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x14053D0A0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14053D1B4 (MiFreeOverlappedFlushEntry.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053EA44 (MiFinishHoldingDirtyFaults.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FCB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540074 (MiCopyImageExtentContents.c)
 *     MiAttemptPageFileReductionApc @ 0x140542A10 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140543530 (MiFinishPageFileExtension.c)
 *     MiPageNotZero @ 0x14054F0B0 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x140559F00 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140559F34 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x140561858 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x140562AD0 (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x1405648B0 (NtSignalAndWaitForSingleObject.c)
 *     PopDeviceIdleCompletion @ 0x140568EB0 (PopDeviceIdleCompletion.c)
 *     PopFxClearDeviceConstraints @ 0x140569D04 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x14056A398 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x14056A49C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x14056A660 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x14056A770 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x14056A800 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x14056A8E0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x14056B8D0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14056BC80 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056C26C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x14056C2A0 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14056D600 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14056D710 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x14056F120 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x140573D50 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x14057DCAC (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14057DD50 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14057DDE4 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140598BE4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059F8B0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14059F990 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x1405A5E70 (EtwSendTraceBuffer.c)
 *     EtwpLoggerDpc @ 0x1405AA680 (EtwpLoggerDpc.c)
 *     EtwpThreadRundownApc @ 0x1405AB790 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405AE868 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AEFA8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AF010 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1405AF070 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1405B3020 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1405B3070 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x1405B59D0 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1405BBB10 (WheapProcessWorkQueueItem.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E55B0 (AlpcpCompleteDispatchMessage.c)
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604FA0 (PspEvaluateAndNotifyEmptyJob.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140610CEC (ExpWnfNotifyNameSubscribers.c)
 *     PfSnEndTrace @ 0x14062CC78 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x14062FD1C (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14062FFAC (PfTTraceListAdd.c)
 *     PfTReplaceCurrentBuffer @ 0x140632024 (PfTReplaceCurrentBuffer.c)
 *     PnpCompleteDeviceEvent @ 0x140634B74 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x140634FF0 (PnpDeviceEventWorker.c)
 *     MiPfExecuteReadList @ 0x140636824 (MiPfExecuteReadList.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     IopTrackLink @ 0x14065E674 (IopTrackLink.c)
 *     RtlDecompressBufferLZNT1 @ 0x140662050 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406621C0 (RtlDecompressFragmentLZNT1.c)
 *     NtSetEvent @ 0x140662510 (NtSetEvent.c)
 *     NtNotifyChangeSession @ 0x1406791D0 (NtNotifyChangeSession.c)
 *     CmpPostApc @ 0x140681440 (CmpPostApc.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140682540 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ExpWnfNotifySubscription @ 0x14068E4D4 (ExpWnfNotifySubscription.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406912B0 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpFreeLoggerContext @ 0x14069817C (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406987E4 (EtwpRealtimeDisconnectAllConsumers.c)
 *     AlpcpTrackPortReferences @ 0x14069B178 (AlpcpTrackPortReferences.c)
 *     EtwpSynchronizeWithLogger @ 0x14069BD8C (EtwpSynchronizeWithLogger.c)
 *     CmpWakeWriteQueueWaiters @ 0x14069ECA8 (CmpWakeWriteQueueWaiters.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406A0020 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpDisassociateConsumer @ 0x1406A4F60 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406A6690 (PfSnTracingStateExWorkerRoutine.c)
 *     EtwpLogger @ 0x1406BE4D0 (EtwpLogger.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1406BEC0C (EtwpRealtimeInjectEtwBuffer.c)
 *     CmNotifyRunDown @ 0x1406C5510 (CmNotifyRunDown.c)
 *     CmpSignalDeferredPosts @ 0x1406E0680 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     MiInSwapStoreWorker @ 0x1406FB070 (MiInSwapStoreWorker.c)
 *     EtwpStopLoggerInstance @ 0x140710AB0 (EtwpStopLoggerInstance.c)
 *     EtwpQueueNotification @ 0x140717AEC (EtwpQueueNotification.c)
 *     PiUEventDereferenceEventEntry @ 0x14071A38C (PiUEventDereferenceEventEntry.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14071C168 (CmpSignalUnloadEventArrayForHive.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725C90 (PiDrvDbLoadNodeWorkerCallback.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140735A30 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14074C4D8 (PopFxUnregisterDeviceOrWait.c)
 *     WmipQueueNotification @ 0x140754E44 (WmipQueueNotification.c)
 *     WmipAddDataSource @ 0x140756098 (WmipAddDataSource.c)
 *     IopDestroyActiveConnectBlock @ 0x140761C70 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x140763E30 (HalGetAdapterV2.c)
 *     PiUEventHandleVetoEvent @ 0x14076DDE8 (PiUEventHandleVetoEvent.c)
 *     ArbArbiterHandler @ 0x140771250 (ArbArbiterHandler.c)
 *     PopCompleteAction @ 0x1407747C8 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140775580 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PfGenerateTrace @ 0x1407772D4 (PfGenerateTrace.c)
 *     MiDereferenceSessionFinal @ 0x140778220 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140778834 (PopFinalizeWakeInfo.c)
 *     HalpGetDynamicDevicePointer @ 0x140778DD4 (HalpGetDynamicDevicePointer.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B720 (IopInvalidateVolumesForDevice.c)
 *     IopLoadUnloadDriver @ 0x140780720 (IopLoadUnloadDriver.c)
 *     WmipReleaseCollectionEnabled @ 0x140781894 (WmipReleaseCollectionEnabled.c)
 *     MmSetSessionObjectIoEvent @ 0x14078D804 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14078D9D4 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x14078EA40 (PopUserPresentSetWorker.c)
 *     MUIRegistrySystemRoutine @ 0x1407901D0 (MUIRegistrySystemRoutine.c)
 *     EtwInitialize @ 0x140793C24 (EtwInitialize.c)
 *     CmpInitializeSystemHivesLoad @ 0x140799F94 (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A29A8 (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     PfTLoggingWorker @ 0x1407AD3A0 (PfTLoggingWorker.c)
 *     PopFxUnregisterDevice @ 0x1407B495C (PopFxUnregisterDevice.c)
 *     MmStoreRegister @ 0x1407B6B30 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x1407B7790 (MiInsertPageFileInList.c)
 *     PopFanWorker @ 0x1407C0930 (PopFanWorker.c)
 *     PopThermalWorker @ 0x1407C0A30 (PopThermalWorker.c)
 *     ExpPartitionCreatePool @ 0x1407C2A48 (ExpPartitionCreatePool.c)
 *     HalGetAdapterV3 @ 0x1407C3B70 (HalGetAdapterV3.c)
 *     CmpWaitForHiveMount @ 0x1407C4644 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4EE0 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407CB890 (CmpMachineHiveLoadedWorkItem.c)
 *     WheapEtwEnableCallback @ 0x1407D34F0 (WheapEtwEnableCallback.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140864910 (HalpDynamicDeviceInterfaceNotification.c)
 *     CmpPostApcRunDown @ 0x14086A1E0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140872380 (CmThawRegistry.c)
 *     DbgkpCloseObject @ 0x140884880 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140885568 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140885860 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140885B60 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140885FA0 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x140886A94 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140888620 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14088C140 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x140891510 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x140892110 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140893F30 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14089B99C (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A153C (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1408B4660 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1408BD7AC (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408E040C (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1408E0C50 (PfpParametersWatcher.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5860 (PopFxUpdateVetoMaskWork.c)
 *     PopBatteryReadTag @ 0x1408ED5CC (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x1409053DC (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14090574C (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140906250 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1409062FC (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090A510 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x14090E14C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14090E274 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14090E4F4 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1409196D0 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x14092D324 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x14092D4BC (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140942298 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942B10 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140944D90 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x140955EC4 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14095D880 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WdtpBarkWorkerThread @ 0x14097FF70 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x1409804E0 (SbpVmbusNotificationHandler.c)
 *     EmpReleasePagingReference @ 0x1409901C8 (EmpReleasePagingReference.c)
 *     PopTransitionToSleep @ 0x140990620 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140996240 (PopEndMirroring.c)
 *     ExpSetSwappingKernelApc @ 0x140997C50 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x140997F90 (PopFlushVolumeWorker.c)
 *     PopHandleWakeSources @ 0x140998400 (PopHandleWakeSources.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140998C10 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x14099AB88 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1409AD93C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AEDA0 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1409AFEF8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1409B00B0 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B2650 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1409B26E0 (PopBuildDeviceNotifyListWatchdog.c)
 *     KdpTimeSlipWork @ 0x1409B8FB0 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x1409D1920 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D5DF4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x1409E5700 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F24C0 (AnFwpFadeAnimationTimer.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     MiInitializePagedPoolEvents @ 0x140A4EB3C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  _DWORD *SchedulerAssist; // r9
  BOOLEAN v4; // di
  KPRIORITY v5; // r15d
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // r8
  LONG SignalState; // esi
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v13; // rax
  __int64 v14; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // r8
  unsigned __int8 v22; // cl
  __int64 CurrentThread; // r9
  __int64 v24; // r9
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  int v28; // r10d
  struct _LIST_ENTRY *v29; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v31; // rdx
  __int64 v32; // r9
  _DWORD *v33; // r9
  unsigned __int8 v34; // cl
  __int64 v35; // r9
  _QWORD *v36; // r9
  __int64 v37; // rcx
  char v38; // al
  int v39; // r10d
  unsigned __int8 v40; // al
  __int64 v41; // rdx
  __int64 v42; // r9
  _DWORD *v43; // r9
  struct _KPRCB *v44; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v45; // [rsp+38h] [rbp-50h]
  __int64 v46; // [rsp+40h] [rbp-48h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  int v48; // [rsp+90h] [rbp+8h]
  __int64 v49; // [rsp+90h] [rbp+8h]
  __int64 v50; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v51; // [rsp+A8h] [rbp+20h]
  _QWORD *v52; // [rsp+A8h] [rbp+20h]

  v4 = Wait;
  v5 = Increment;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v48 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v48 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&Increment = (-1LL << (CurrentIrql + 1)) & 4;
      *(_QWORD *)&Wait = (unsigned int)Increment | SchedulerAssist[5];
      SchedulerAssist[5] = Wait;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(&Event->Header.Lock, *(__int64 *)&Increment, Wait, (__int64)SchedulerAssist);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_11;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v48 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v13 = Flink->Flink;
          v14 = (__int64)Flink;
          v51 = Flink;
          Flink = v13;
          Blink = v51->Blink;
          if ( v13->Blink != v51 || Blink->Flink != (struct _LIST_ENTRY *)v14 )
            goto LABEL_8;
          Blink->Flink = v13;
          v13->Blink = Blink;
          v17 = *(_BYTE *)(v14 + 16);
          if ( v17 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
            {
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
            }
          }
          else
          {
            if ( v17 == 2 )
            {
              *(_BYTE *)(v14 + 17) = 5;
              v49 = *(_QWORD *)(v14 + 24);
              *(_QWORD *)v14 = 0LL;
              v22 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
              {
                v33 = KeGetCurrentPrcb()->SchedulerAssist;
                v9 = (unsigned int)(-1LL << (v22 + 1)) & 4 | v33[5];
                v14 = (__int64)v51;
                v33[5] = v9;
              }
              v45 = KeGetCurrentPrcb();
              CurrentThread = (__int64)v45->CurrentThread;
              v46 = CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(CurrentThread);
                EtwTraceEnqueueWork(v32, v31, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v49, v14, v9, CurrentThread);
              v25 = (_QWORD *)(v49 + 8);
              v26 = v49;
              if ( (_QWORD *)*v25 == v25
                || *(_DWORD *)(v49 + 40) >= *(_DWORD *)(v49 + 44)
                || *(_QWORD *)(v46 + 232) == v49 && *(_BYTE *)(v46 + 643) == 15 )
              {
LABEL_38:
                v28 = *(_DWORD *)(v26 + 4);
                v9 = v26 + 24;
                *(_DWORD *)(v26 + 4) = v28 + 1;
                v29 = *(struct _LIST_ENTRY **)(v26 + 32);
                if ( v29->Flink != (struct _LIST_ENTRY *)(v26 + 24) )
                  goto LABEL_8;
                v51->Flink = (struct _LIST_ENTRY *)v9;
                v51->Blink = v29;
                v29->Flink = v51;
                *(_QWORD *)(v26 + 32) = v51;
                if ( !v28 && (_QWORD *)*v25 != v25 )
                {
                  KiWakeOtherQueueWaiters((__int64)v45, v26);
                  v26 = v49;
                }
              }
              else
              {
                v27 = KiWakeQueueWaiter((__int64)v45, v49, (__int64)v51, v24);
                v26 = v49;
                if ( !v27 )
                {
                  v25 = (_QWORD *)(v49 + 8);
                  goto LABEL_38;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
              goto LABEL_62;
            }
            KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
          }
LABEL_62:
          if ( Flink == p_WaitListHead )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_10:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
LABEL_11:
      _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, v4 != 0 ? 3 : 0, 1, v5, CurrentIrql);
      return SignalState;
    }
    while ( 1 )
    {
      v19 = (__int64)Flink;
      Flink = Flink->Flink;
      v52 = (_QWORD *)v19;
      v20 = *(_BYTE *)(v19 + 16);
      if ( v20 == 1 )
      {
        v21 = *(unsigned __int16 *)(v19 + 18);
      }
      else
      {
        if ( v20 == 2 )
        {
          *(_BYTE *)(v19 + 17) = 5;
          v50 = *(_QWORD *)(v19 + 24);
          *(_QWORD *)v19 = 0LL;
          v34 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
          {
            v43 = KeGetCurrentPrcb()->SchedulerAssist;
            v9 = (unsigned int)(-1LL << (v34 + 1)) & 4 | v43[5];
            v43[5] = v9;
          }
          v44 = KeGetCurrentPrcb();
          v35 = (__int64)v44->CurrentThread;
          v47 = v35;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v40 = KeIsThreadRunning(v35);
            EtwTraceEnqueueWork(v42, v41, v40);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v50, v19, v9, v35);
          v36 = (_QWORD *)(v50 + 8);
          v37 = v50;
          if ( (_QWORD *)*v36 == v36
            || *(_DWORD *)(v50 + 40) >= *(_DWORD *)(v50 + 44)
            || *(_QWORD *)(v47 + 232) == v50 && *(_BYTE *)(v47 + 643) == 15 )
          {
LABEL_55:
            v39 = *(_DWORD *)(v37 + 4);
            *(_DWORD *)(v37 + 4) = v39 + 1;
            v9 = *(_QWORD *)(v37 + 32);
            if ( *(_QWORD *)v9 != v37 + 24 )
LABEL_8:
              __fastfail(3u);
            *v52 = v37 + 24;
            v52[1] = v9;
            *(_QWORD *)v9 = v52;
            *(_QWORD *)(v37 + 32) = v52;
            if ( !v39 && (_QWORD *)*v36 != v36 )
            {
              KiWakeOtherQueueWaiters((__int64)v44, v37);
              v37 = v50;
            }
          }
          else
          {
            v38 = KiWakeQueueWaiter((__int64)v44, v50, (__int64)v52, v50 + 8);
            v37 = v50;
            if ( !v38 )
            {
              v36 = (_QWORD *)(v50 + 8);
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v37, 0xFFFFFF7F);
          goto LABEL_22;
        }
        v21 = 256LL;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, v19, v21, 0LL);
LABEL_22:
      if ( Flink == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
