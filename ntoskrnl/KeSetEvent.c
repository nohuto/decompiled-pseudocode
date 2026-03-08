/*
 * XREFs of KeSetEvent @ 0x14025C2C0
 * Callers:
 *     PopFxActivateDevice @ 0x140202154 (PopFxActivateDevice.c)
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 *     EtwpSwitchBuffer @ 0x140205FF4 (EtwpSwitchBuffer.c)
 *     WmipUnreferenceRegEntry @ 0x140208DE4 (WmipUnreferenceRegEntry.c)
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiDecrementControlAreaCount @ 0x1402150F8 (MiDecrementControlAreaCount.c)
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140216768 (CcPostWorkQueueAsyncRead.c)
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x140219A70 (CcWriteBehindPreProcess.c)
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     CcFlushCacheOneRange @ 0x14021B070 (CcFlushCacheOneRange.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcFreeVirtualAddress @ 0x14021E5D0 (CcFreeVirtualAddress.c)
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PopQueueTargetDpc @ 0x140235F8C (PopQueueTargetDpc.c)
 *     ExpWakePushLock @ 0x140238F70 (ExpWakePushLock.c)
 *     MiFinishVadDeletion @ 0x140248200 (MiFinishVadDeletion.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1402720E0 (MiHandleTransitionFault.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     MiIncreaseAvailablePages @ 0x140288238 (MiIncreaseAvailablePages.c)
 *     PfFileInfoNotify @ 0x14028C770 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x14028D560 (PfSnReferenceProcessTrace.c)
 *     PoFxPrepareDevice @ 0x140291E3C (PoFxPrepareDevice.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140298C90 (LZNT1DecompressChunkWorkItem.c)
 *     CcPurgeAndClearCacheSection @ 0x14029FCE4 (CcPurgeAndClearCacheSection.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     KiDecrementProcessStackCount @ 0x1402A7824 (KiDecrementProcessStackCount.c)
 *     MiWakeZeroingThreads @ 0x1402A7E98 (MiWakeZeroingThreads.c)
 *     MiAddZeroingThreads @ 0x1402A7F38 (MiAddZeroingThreads.c)
 *     MiQueueWorkingSetRequest @ 0x1402B8A34 (MiQueueWorkingSetRequest.c)
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopIrpWorker @ 0x1402B9440 (PopIrpWorker.c)
 *     PopFxReleasePowerIrp @ 0x1402BA1B4 (PopFxReleasePowerIrp.c)
 *     PopRequestPowerIrp @ 0x1402BA570 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x1402BAC6C (PopFxAllocatePowerIrp.c)
 *     PopRequestCompletion @ 0x1402BB410 (PopRequestCompletion.c)
 *     PopPowerRequestCallbackWorker @ 0x1402BC180 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1402BCCE4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1402BE330 (PopUpdateWatchdogNoWorkersEvent.c)
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 *     KiInswapAndReadyThread @ 0x1402C06E8 (KiInswapAndReadyThread.c)
 *     KiRequestProcessInSwap @ 0x1402C0908 (KiRequestProcessInSwap.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1402C79D0 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x1402C9DA0 (ExfReleaseRundownProtection.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     ExNotifyWithProcessing @ 0x1402D2F20 (ExNotifyWithProcessing.c)
 *     MiInsertUnusedSubsection @ 0x1402D4DE8 (MiInsertUnusedSubsection.c)
 *     PoFxPowerControl @ 0x1402D91A0 (PoFxPowerControl.c)
 *     IoReleaseRemoveLockEx @ 0x1402D9240 (IoReleaseRemoveLockEx.c)
 *     MiSignalZeroingPassComplete @ 0x1402E1384 (MiSignalZeroingPassComplete.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x1402E6C84 (SmKmStoreHelperSendCommand.c)
 *     SepRmCallLsa @ 0x1402E8690 (SepRmCallLsa.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402EC070 (KiBalanceSetManagerDeferredRoutine.c)
 *     CmpCompleteFlushAndPurgeIrp @ 0x1402ECC90 (CmpCompleteFlushAndPurgeIrp.c)
 *     PfpEventHandleFullBuffer @ 0x1402EE0E0 (PfpEventHandleFullBuffer.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402F2810 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopQueueDirectedDripsWork @ 0x1402F3054 (PopQueueDirectedDripsWork.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402F6A24 (ExpPartitionCreateThreadIfNecessary.c)
 *     PopFxComponentWork @ 0x1402F9590 (PopFxComponentWork.c)
 *     IopCopyCompleteReadRequest @ 0x1402F9BA0 (IopCopyCompleteReadRequest.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1402FA4B0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CmpLazyFlushDpcRoutine @ 0x1402FA750 (CmpLazyFlushDpcRoutine.c)
 *     MiReclaimSystemVa @ 0x1402FBD7C (MiReclaimSystemVa.c)
 *     CcPrepareMdlWrite @ 0x1402FD600 (CcPrepareMdlWrite.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x140302580 (ExpWorkQueueManagerReaperTimer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140302B00 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x1403031F8 (VfPoolDelayFreeIfPossible.c)
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x14030698C (PopFxCompleteComponentActivation.c)
 *     KiDetachProcess @ 0x14030E460 (KiDetachProcess.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     MiIssueHardFaultIo @ 0x1403435F0 (MiIssueHardFaultIo.c)
 *     MiReplenishSlabAllocatorWorker @ 0x14034A100 (MiReplenishSlabAllocatorWorker.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiDecreaseAvailablePages @ 0x1403504C0 (MiDecreaseAvailablePages.c)
 *     ExpWorkerThread @ 0x140352200 (ExpWorkerThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403565C0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140356AC0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140358810 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     PfSnRemoveProcessTrace @ 0x14035B324 (PfSnRemoveProcessTrace.c)
 *     MiQueuePageAccessLog @ 0x14035B540 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x14035B644 (PfpReturnAccessBuffer.c)
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 *     MiScheduleZeroPageThreads @ 0x14036072C (MiScheduleZeroPageThreads.c)
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140379B70 (HalpReleaseSecondaryIcEntryShared.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x14037D97C (WheapAddErrorSource.c)
 *     ExCompareExchangeCallBack @ 0x140388EF8 (ExCompareExchangeCallBack.c)
 *     KeBalanceSetManager @ 0x140390D00 (KeBalanceSetManager.c)
 *     MiSyncCommitSignals @ 0x1403929E0 (MiSyncCommitSignals.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140394AB8 (MiSignalNonPagedPoolWatchers.c)
 *     PnpCompleteSystemStartProcess @ 0x14039C088 (PnpCompleteSystemStartProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x14039DF6C (KiConnectSecondaryInterrupt.c)
 *     KiProcessDisconnectList @ 0x14039E548 (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14039E8DC (KiInvokeInterruptServiceRoutine.c)
 *     MiStoreEvictThread @ 0x1403A3150 (MiStoreEvictThread.c)
 *     MiUpdateAvailableEvents @ 0x1403A9340 (MiUpdateAvailableEvents.c)
 *     MiZeroPageThread @ 0x1403AAC50 (MiZeroPageThread.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403AAF40 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403ADDE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroEngineSetOptimalCount @ 0x1403AF760 (MiZeroEngineSetOptimalCount.c)
 *     EtwpLoggerDpc @ 0x1403B0600 (EtwpLoggerDpc.c)
 *     PopBatteryWakeDpc @ 0x1403B0980 (PopBatteryWakeDpc.c)
 *     CcNotifyWriteBehindVolume @ 0x1403BBE2C (CcNotifyWriteBehindVolume.c)
 *     CcPostDeferredWrites @ 0x1403BBEB8 (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403BC0E4 (CcDeletePrivateVolumeCacheMap.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403BDFF4 (PnpUnlockDeviceActionQueue.c)
 *     CcDeleteBcbs @ 0x1403C0748 (CcDeleteBcbs.c)
 *     ExpEnumerateCallback @ 0x1403CABE0 (ExpEnumerateCallback.c)
 *     PnpUnlockMountableDevice @ 0x1403CFA9C (PnpUnlockMountableDevice.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D0950 (PnpRemoveDeviceActionRequests.c)
 *     PopFxAllocatePowerIrpLegacy @ 0x14040B520 (PopFxAllocatePowerIrpLegacy.c)
 *     PspGetSetContextSpecialApc @ 0x140420250 (PspGetSetContextSpecialApc.c)
 *     FsFilterFreeCompletionStack @ 0x140456CDA (FsFilterFreeCompletionStack.c)
 *     PopFxReleaseDevice @ 0x14045A79C (PopFxReleaseDevice.c)
 *     SmFpFree @ 0x14045DA58 (SmFpFree.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140461B58 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140461BD0 (EtwpCovSampCaptureQueueDpc.c)
 *     ExReleaseRundownProtectionEx @ 0x140462E40 (ExReleaseRundownProtectionEx.c)
 *     HalpProcessSecondarySignalList @ 0x140517EB0 (HalpProcessSecondarySignalList.c)
 *     HalpReleaseSecondaryIcEntryExclusive @ 0x140518028 (HalpReleaseSecondaryIcEntryExclusive.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140532CE0 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcNotifyWriteBehindInternal @ 0x14053467C (CcNotifyWriteBehindInternal.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     CcAsyncLazywriteWorker @ 0x14053741C (CcAsyncLazywriteWorker.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140537D14 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1405387F4 (CcAsyncLazywriteWorkerMulti.c)
 *     FsRtlStackOverflowRead @ 0x14053CFD0 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x14055313C (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1405531AC (IopFreeReserveIrp.c)
 *     IopCompleteIoRingEntry @ 0x140556F5C (IopCompleteIoRingEntry.c)
 *     IopMcDereferenceMdl @ 0x14055CB10 (IopMcDereferenceMdl.c)
 *     PnprQuiesce @ 0x140560D88 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140562810 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x14056CFF0 (KeRetryOutswapProcess.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14056F468 (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140577730 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140577CB0 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x140577CEC (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140577D20 (KiSynchronizePassiveInterruptExecution.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x140580330 (NtSignalAndWaitForSingleObject.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140580900 (PfpScenCtxWaiterTimedOut.c)
 *     PopPropogateCoolingChange @ 0x140584860 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x140584F70 (PopDeviceIdleCompletion.c)
 *     PoFxAddComponentRelation @ 0x1405851D0 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405855F0 (PoFxAddDeviceRelation.c)
 *     PoFxNotifySurprisePowerOn @ 0x140585B10 (PoFxNotifySurprisePowerOn.c)
 *     PoFxRemoveComponentRelation @ 0x140585C70 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140586060 (PoFxRemoveDeviceRelation.c)
 *     PopFxClearDeviceConstraints @ 0x140586DE0 (PopFxClearDeviceConstraints.c)
 *     PopFxCompleteComponentPerfState @ 0x1405870F8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1405871FC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x1405873E0 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1405878B4 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x140587AD0 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x140587BB0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x140588DC0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x140588FC0 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14058917C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x140589F60 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14058A070 (PopFxUpdateProcessorIdleState.c)
 *     PopUnregisterPowerSettingCallback @ 0x14058B784 (PopUnregisterPowerSettingCallback.c)
 *     PopUserPresentSet @ 0x14058BAC4 (PopUserPresentSet.c)
 *     PopUserPresentSetWorker @ 0x14058BD10 (PopUserPresentSetWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14058DE90 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCompleteNotifyTransitionCommon @ 0x14058DFFC (PopCompleteNotifyTransitionCommon.c)
 *     PopBatteryIrpComplete @ 0x1405967A0 (PopBatteryIrpComplete.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x14059B1B0 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepPlatformStateRegistered @ 0x14059D504 (PopPepPlatformStateRegistered.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x14059D910 (PopPepStartDeviceUnregisterActivity.c)
 *     PopFxAcpiForwardNotification @ 0x14059E718 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14059E7BC (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14059E858 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1405BC324 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405BC3EC (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C0460 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     SmKmGenericCompletion @ 0x1405C9120 (SmKmGenericCompletion.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405CA1A8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CAEC0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1405CAFA0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmIoRequestComplete @ 0x1405CB06C (SmIoRequestComplete.c)
 *     DifKeSetEventWrapper @ 0x1405E3560 (DifKeSetEventWrapper.c)
 *     EtwSendTraceBuffer @ 0x1405FCD90 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x1405FF6A0 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140600B88 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140601310 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140607080 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1406070D0 (ExRegisterBootDevice.c)
 *     WheapProcessWorkQueueItem @ 0x14060EC70 (WheapProcessWorkQueueItem.c)
 *     MiDecrementVadsBeingDeleted @ 0x140615D58 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140616AC8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x140617730 (MiZeroPageFile.c)
 *     MiFreeExcessSegments @ 0x1406225DC (MiFreeExcessSegments.c)
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 *     MiProcessingPageExtendComplete @ 0x140623220 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x140623600 (MiQueueControlAreaDelete.c)
 *     MiFinishResume @ 0x1406244A0 (MiFinishResume.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14062F780 (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x14062F98C (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x140630368 (MiMarkMdlComplete.c)
 *     MiHandleForceTrimWorkingSets @ 0x1406326A0 (MiHandleForceTrimWorkingSets.c)
 *     MiObtainFreePages @ 0x140632B0C (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x140633A40 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x140633BC0 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140635960 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1406376C8 (MiFinishPageFileExtension.c)
 *     MiFlushAllPagesWorker @ 0x1406378D4 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1406379DC (MiFlushAllStoreSwapPages.c)
 *     MiIrpCompletionApcRoutine @ 0x1406388F0 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1406391E0 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiWakeModifiedPageWriter @ 0x14063982C (MiWakeModifiedPageWriter.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406401D8 (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x14064B500 (MiPageNotZero.c)
 *     MiWakeAllZeroConductors @ 0x140653030 (MiWakeAllZeroConductors.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x140658D80 (MiReturnCrossPartitionCharges.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x1406598F8 (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDecrementOutstandingWrites @ 0x140659A2C (MiStoreDecrementOutstandingWrites.c)
 *     MiStoreDeletePartition @ 0x140659A64 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x14065A300 (MiStoreRundownWritesApc.c)
 *     MiStoreSetEvictPageFile @ 0x14065A380 (MiStoreSetEvictPageFile.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065A3EC (MiStoreSetPageFileRunEvicted.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065AA54 (MmStoreFlushOutstandingEvictions.c)
 *     MiReadFromMemoryPagefile @ 0x14065E368 (MiReadFromMemoryPagefile.c)
 *     MiDecrementCloneHeaderCount @ 0x14066182C (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x140661860 (MiDeleteCloneDescriptor.c)
 *     MiInSwapStoreWorker @ 0x14067E3D0 (MiInSwapStoreWorker.c)
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 *     EtwpDisassociateConsumer @ 0x14067F51C (EtwpDisassociateConsumer.c)
 *     PnpDeviceEventWorker @ 0x1406892C0 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x14068C1BC (PnpCompleteDeviceEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x14068DA18 (PiUEventDereferenceEventEntry.c)
 *     EtwpQueueNotification @ 0x14069039C (EtwpQueueNotification.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406913C8 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1406A2090 (EtwpRealtimeInjectEtwBuffer.c)
 *     MiPfExecuteReadList @ 0x1406A3F98 (MiPfExecuteReadList.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     CmpPostNotify @ 0x1406B3790 (CmpPostNotify.c)
 *     IopWriteFile @ 0x1406B3E10 (IopWriteFile.c)
 *     CmpSignalDeferredPosts @ 0x1406B5564 (CmpSignalDeferredPosts.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406C0080 (CmpWakeWriteQueueWaiters.c)
 *     sub_1406DF1C0 @ 0x1406DF1C0 (sub_1406DF1C0.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406F4184 (EtwpRealtimeDisconnectAllConsumers.c)
 *     IopDestroyActiveConnectBlock @ 0x1406F49E0 (IopDestroyActiveConnectBlock.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F8844 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14071B5C8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x14071C224 (ExpWnfNotifySubscription.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     PfGenerateTrace @ 0x14073A870 (PfGenerateTrace.c)
 *     PopBsdFlush @ 0x14073AE24 (PopBsdFlush.c)
 *     PopSystemIdleWorker @ 0x14073B6A0 (PopSystemIdleWorker.c)
 *     EtwpStopLoggerInstance @ 0x140748874 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x140749078 (EtwpSynchronizeWithLogger.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     NtSetEvent @ 0x1407598A0 (NtSetEvent.c)
 *     NtNotifyChangeSession @ 0x14075E0F0 (NtNotifyChangeSession.c)
 *     MmSetSessionObjectIoEvent @ 0x14075E414 (MmSetSessionObjectIoEvent.c)
 *     MiStartZeroEngineThreads @ 0x14076C01C (MiStartZeroEngineThreads.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140770310 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     RtlDecompressFragmentLZNT1 @ 0x14077E7B0 (RtlDecompressFragmentLZNT1.c)
 *     RtlDecompressBufferLZNT1 @ 0x14077EA00 (RtlDecompressBufferLZNT1.c)
 *     IopLoadUnloadDriver @ 0x140780340 (IopLoadUnloadDriver.c)
 *     CmpPostApc @ 0x140785260 (CmpPostApc.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x140795040 (CmpGetVolumeClusterSizeCompletion.c)
 *     IopTrackLink @ 0x140795688 (IopTrackLink.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     AlpcpTrackPortReferences @ 0x1407C9E94 (AlpcpTrackPortReferences.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     CmNotifyRunDown @ 0x1407D9F54 (CmNotifyRunDown.c)
 *     NtCopyFileChunk @ 0x1407DEE00 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     PfSnEndTrace @ 0x1407E37B8 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x1407E6840 (PfTReplaceCurrentBuffer.c)
 *     PfGetCompletedTrace @ 0x1407E76DC (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1407E797C (PfTTraceListAdd.c)
 *     EtwInitialize @ 0x14080AAA4 (EtwInitialize.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmpInitializeSystemHivesLoad @ 0x140817810 (CmpInitializeSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x14081E6C8 (ArbBuildAssignmentOrdering.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1408215A0 (HalGetAdapterV2.c)
 *     PopReleaseTransitionLock @ 0x14082AD60 (PopReleaseTransitionLock.c)
 *     MmStoreRegister @ 0x140834CA4 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x140835F30 (MiInsertPageFileInList.c)
 *     PfTLoggingWorker @ 0x140839670 (PfTLoggingWorker.c)
 *     MUIRegistrySystemRoutine @ 0x1408435A0 (MUIRegistrySystemRoutine.c)
 *     PopThermalWorker @ 0x140846460 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140846840 (PopFanWorker.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140847284 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140847424 (IopAcquireReleaseDispatcherLock.c)
 *     ExpPartitionCreatePool @ 0x1408480E8 (ExpPartitionCreatePool.c)
 *     ArbArbiterHandler @ 0x140849900 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x14084B55C (CmpWaitForHiveMount.c)
 *     MiHotAddBootDeferredDescriptors @ 0x14084E170 (MiHotAddBootDeferredDescriptors.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140857DB0 (SshpSessionManagerFlushControlEventBuffer.c)
 *     WheapProcessWaitingETWEvents @ 0x14085D1A0 (WheapProcessWaitingETWEvents.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408674A0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     WmipProcessSynchronousEtw @ 0x1408689F0 (WmipProcessSynchronousEtw.c)
 *     WmipReleaseCollectionEnabled @ 0x140872A3C (WmipReleaseCollectionEnabled.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x14087B3D0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     IopInvalidateVolumesForDevice @ 0x14087D588 (IopInvalidateVolumesForDevice.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1408803F8 (PopFxUnregisterDeviceOrWait.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A3E60 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A4B3A (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140930940 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpGetDynamicDevicePointer @ 0x140930A44 (HalpGetDynamicDevicePointer.c)
 *     DbgkpCloseObject @ 0x1409341B0 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140934EE8 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1409351E4 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1409354D4 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140935970 (NtDebugContinue.c)
 *     DbgkRegisterErrorPort @ 0x1409369A4 (DbgkRegisterErrorPort.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140938180 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14093B670 (FsRtlpOplockWaitCompleteRoutine.c)
 *     HvlQuerySetBootPagesInfo @ 0x14093E004 (HvlQuerySetBootPagesInfo.c)
 *     IopConnectLinkTrackingPort @ 0x140941890 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x140942874 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140944740 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14094F28C (PnpShutdownDevices.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14096C1CC (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x14097C168 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14097CF90 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x14097D180 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 *     PopFxUpdateVetoMaskWork @ 0x140982F50 (PopFxUpdateVetoMaskWork.c)
 *     PopCompleteAction @ 0x140986760 (PopCompleteAction.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140990FE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopBatteryReadTag @ 0x1409926B4 (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x1409A8F78 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409A92D8 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1409A9DB0 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1409A9EC0 (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409AEA50 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x1409B478C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1409B48B0 (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x1409B4B30 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1409BF33C (RtlpCtSelfSubscribe.c)
 *     Pdcv2pActivationClientCallback @ 0x1409C5AA0 (Pdcv2pActivationClientCallback.c)
 *     SmpFlushStorePages @ 0x1409D58C0 (SmpFlushStorePages.c)
 *     SmcCacheAdd @ 0x1409D7BE0 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1409D7D8C (SmcCacheDelete.c)
 *     WmipQueueNotification @ 0x1409DE654 (WmipQueueNotification.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1409EDBAC (EtwpCovSampCaptureContextSetPaused.c)
 *     ExpPartitionDestroy @ 0x1409FDA98 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140A05740 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     CmpPostApcRunDown @ 0x140A0CAC0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     WdtpBarkWorkerThread @ 0x140A6C3D0 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x140A70E30 (SbpVmbusNotificationHandler.c)
 *     PfpScenCtxScenarioSet @ 0x140A84910 (PfpScenCtxScenarioSet.c)
 *     EmpReleasePagingReference @ 0x140A853F4 (EmpReleasePagingReference.c)
 *     HalpPiix4Detect @ 0x140A85B70 (HalpPiix4Detect.c)
 *     PnprInitiateReplaceOperation @ 0x140A99894 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A9ADE0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140A9D178 (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140A9DD6C (PopHandleWakeSources.c)
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 *     PopFlushVolumeWorker @ 0x140AA3140 (PopFlushVolumeWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA3750 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140AA40F0 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     ExpSetSwappingKernelApc @ 0x140AA7FA0 (ExpSetSwappingKernelApc.c)
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140AA8C04 (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 *     KdpTimeSlipWork @ 0x140AAD010 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140ACAE60 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140ACEEB0 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140ADC9F0 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEA110 (AnFwpFadeAnimationTimer.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     MiInitializePagedPoolEvents @ 0x140B6FC8C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r12
  LONG SignalState; // ebp
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v11; // rcx
  __int64 v12; // r10
  struct _LIST_ENTRY *Blink; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v16; // r9
  char v17; // al
  bool v18; // zf
  char v19; // cl
  __int64 v20; // r8
  unsigned __int8 v21; // cl
  _QWORD *v22; // r9
  __int64 v23; // rcx
  char v24; // al
  int v25; // r10d
  struct _LIST_ENTRY *v26; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v28; // r9
  __int64 v29; // r10
  _DWORD *v30; // r9
  __int64 v31; // rdx
  unsigned __int8 v32; // cl
  struct _LIST_ENTRY **p_Blink; // r10
  struct _LIST_ENTRY *v34; // rcx
  char v35; // al
  int Flink_high; // r9d
  struct _LIST_ENTRY *v37; // r8
  unsigned __int8 v38; // al
  __int64 v39; // r9
  __int64 v40; // r10
  _DWORD *v41; // r9
  __int64 v42; // rdx
  LIST_ENTRY *v43; // [rsp+30h] [rbp-58h]
  struct _LIST_ENTRY *v44; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v45; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v46; // [rsp+40h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-40h]
  _KTHREAD *v48; // [rsp+48h] [rbp-40h]
  int v49; // [rsp+90h] [rbp+8h]
  __int64 v50; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v51; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v52; // [rsp+A8h] [rbp+20h]
  struct _LIST_ENTRY *v53; // [rsp+A8h] [rbp+20h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v49 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v49 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v16) = 4;
      else
        v16 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v16;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(Event);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_11;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v49 )
    {
      if ( Flink != p_WaitListHead )
      {
        while ( 1 )
        {
          v11 = Flink->Flink;
          v12 = (__int64)Flink;
          v52 = Flink;
          Blink = Flink->Blink;
          v43 = v11;
          if ( v11->Blink != (struct _LIST_ENTRY *)v12 || Blink->Flink != (struct _LIST_ENTRY *)v12 )
            goto LABEL_8;
          Blink->Flink = v11;
          v11->Blink = Blink;
          v17 = *(_BYTE *)(v12 + 16);
          switch ( v17 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
              {
                v18 = Event->Header.SignalState-- == 1;
                if ( v18 )
                  goto LABEL_11;
              }
              break;
            case 2:
              *(_BYTE *)(v12 + 17) = 5;
              v50 = *(_QWORD *)(v12 + 24);
              *(_QWORD *)v12 = 0LL;
              v21 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
              {
                v30 = KeGetCurrentPrcb()->SchedulerAssist;
                if ( v21 == 2 )
                  LODWORD(v31) = 4;
                else
                  v31 = (-1LL << (v21 + 1)) & 4;
                v30[5] |= v31;
              }
              v46 = KeGetCurrentPrcb();
              CurrentThread = v46->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v46->CurrentThread);
                EtwTraceEnqueueWork(v28, v29, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v50);
              v22 = (_QWORD *)(v50 + 8);
              v23 = v50;
              if ( (_QWORD *)*v22 == v22
                || *(_DWORD *)(v50 + 40) >= *(_DWORD *)(v50 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v50 && CurrentThread->WaitReason == 15 )
              {
LABEL_45:
                v25 = *(_DWORD *)(v23 + 4);
                *(_DWORD *)(v23 + 4) = v25 + 1;
                v26 = *(struct _LIST_ENTRY **)(v23 + 32);
                if ( v26->Flink != (struct _LIST_ENTRY *)(v23 + 24) )
                  goto LABEL_8;
                v52->Flink = (struct _LIST_ENTRY *)(v23 + 24);
                v52->Blink = v26;
                v26->Flink = v52;
                *(_QWORD *)(v23 + 32) = v52;
                if ( !v25 && (_QWORD *)*v22 != v22 )
                {
                  KiWakeOtherQueueWaiters(v46, v23);
                  v23 = v50;
                }
              }
              else
              {
                v24 = KiWakeQueueWaiter(v46, v50, v52);
                v23 = v50;
                if ( !v24 )
                {
                  v22 = (_QWORD *)(v50 + 8);
                  goto LABEL_45;
                }
                v52->Flink = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
              break;
            case 4:
              *(_BYTE *)(v12 + 17) = 5;
              Event->Header.SignalState = 0;
              KiInsertQueueDpc(*(_QWORD *)(v12 + 24), (__int64)Event, v12, 0LL, 0);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
              break;
          }
          Flink = v43;
          if ( v43 == p_WaitListHead )
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
      KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
      return SignalState;
    }
    while ( 1 )
    {
      v53 = Flink;
      v44 = Flink->Flink;
      v19 = (char)Flink[1].Flink;
      switch ( v19 )
      {
        case 1:
          v20 = WORD1(Flink[1].Flink);
          break;
        case 2:
          BYTE1(Flink[1].Flink) = 5;
          v51 = Flink[1].Blink;
          Flink->Flink = 0LL;
          v32 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
          {
            v41 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v32 == 2 )
              LODWORD(v42) = 4;
            else
              v42 = (-1LL << (v32 + 1)) & 4;
            v41[5] |= v42;
          }
          v45 = KeGetCurrentPrcb();
          v48 = v45->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v38 = KeIsThreadRunning(v45->CurrentThread);
            EtwTraceEnqueueWork(v39, v40, v38);
          }
          KiAcquireKobjectLockSafe(v51);
          p_Blink = &v51->Blink;
          v34 = v51;
          if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
            || LODWORD(v51[2].Blink) >= HIDWORD(v51[2].Blink)
            || (struct _LIST_ENTRY *)v48->Queue == v51 && v48->WaitReason == 15 )
          {
LABEL_64:
            Flink_high = HIDWORD(v34->Flink);
            HIDWORD(v34->Flink) = Flink_high + 1;
            v37 = v34[2].Flink;
            if ( v37->Flink != (struct _LIST_ENTRY *)&v34[1].Blink )
LABEL_8:
              __fastfail(3u);
            v53->Flink = (struct _LIST_ENTRY *)((char *)v34 + 24);
            v53->Blink = v37;
            v37->Flink = v53;
            v34[2].Flink = v53;
            if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
            {
              KiWakeOtherQueueWaiters(v45, v34);
              v34 = v51;
            }
          }
          else
          {
            v35 = KiWakeQueueWaiter(v45, v51, v53);
            v34 = v51;
            if ( !v35 )
            {
              p_Blink = &v51->Blink;
              goto LABEL_64;
            }
            v53->Flink = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v34, 0xFFFFFF7F);
          goto LABEL_28;
        case 4:
          BYTE1(Flink[1].Flink) = 5;
          Event->Header.SignalState = 0;
          KiInsertQueueDpc((ULONG_PTR)Flink[1].Blink, (__int64)Event, (__int64)Flink, 0LL, 0);
          goto LABEL_28;
        default:
          v20 = 256LL;
          break;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)Flink, v20, 0LL);
LABEL_28:
      Flink = v44;
      if ( v44 == p_WaitListHead )
        goto LABEL_10;
    }
  }
  return 1;
}
