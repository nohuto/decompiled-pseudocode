/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x1402E5430
 * Callers:
 *     PspStorageEmptyArrayNonReadonly @ 0x140200C90 (PspStorageEmptyArrayNonReadonly.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     NtCancelTimer @ 0x140248470 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     PspUnlockProcessListExclusive @ 0x140251C28 (PspUnlockProcessListExclusive.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14025A688 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExpDeleteTimer @ 0x14025FA00 (ExpDeleteTimer.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402630AC (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmpKeyedStoreEntryGet @ 0x140264198 (SmpKeyedStoreEntryGet.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140264F1C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140265D80 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140266538 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026A65C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     CcApplyLowIoPriorityToThread @ 0x140276988 (CcApplyLowIoPriorityToThread.c)
 *     MiCreatePrototypePtes @ 0x140278478 (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x1402854CC (MiRemoveFromSystemSpace.c)
 *     RtlpHpSegContextCompact @ 0x140286E50 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140287430 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140287DB0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140288450 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402898E8 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14028A070 (RtlpHpSegPageRangeAllocate.c)
 *     MiManageSubsectionView @ 0x140291780 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x140292B80 (MiObtainSystemCacheView.c)
 *     MiUnlockVad @ 0x140294CD8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140294EE0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x140295C70 (MiAddViewsForSection.c)
 *     MiGetWsAndInsertVad @ 0x140296700 (MiGetWsAndInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140296E08 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFinishVadDeletion @ 0x140297440 (MiFinishVadDeletion.c)
 *     PfFileInfoNotify @ 0x14029DC90 (PfFileInfoNotify.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402AA080 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402BC110 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpLfhSlotAllocate @ 0x1402BD4D0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF820 (RtlpHpVsChunkSplit.c)
 *     KeAbEntryFree @ 0x1402C91B0 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1402CACA0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x1402CAE10 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1402F9E90 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402FBDA0 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402FC8A0 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1402FD14C (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402FD80C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402FDBE0 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeFree @ 0x1402FDE04 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402FDFBC (RtlpHpLargeAlloc.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402FFEE8 (RtlInsertDynamicFunctionTable.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140303A38 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140303FA4 (MiUnlockDynamicMemoryExclusive.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14030479C (RtlRemoveDynamicFunctionTable.c)
 *     CcAmILowPriorityWriter @ 0x1403080A0 (CcAmILowPriorityWriter.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403085A0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140308854 (RtlpHpLfhBucketAddSubsegment.c)
 *     MiExpandPtes @ 0x14030A9E8 (MiExpandPtes.c)
 *     MiObtainSessionVa @ 0x14030B904 (MiObtainSessionVa.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1403116A8 (CcBoostLowPriorityWorkerThread.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1403131AC (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     PspUnlockThreadSecurityExclusive @ 0x1403164E8 (PspUnlockThreadSecurityExclusive.c)
 *     PspUnlockQuotaExpansion @ 0x140318984 (PspUnlockQuotaExpansion.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140319688 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegMgrCommitComplete @ 0x14032106C (RtlpHpSegMgrCommitComplete.c)
 *     EtwpFreeCompression @ 0x1403213C4 (EtwpFreeCompression.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140322E08 (SSHSupportReleasePushLockExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140324DF8 (PspUnlockProcessExclusive.c)
 *     RtlpHpHeapExtendContext @ 0x140326BBC (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x140326F34 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiDereferenceExtendInfo @ 0x140328F64 (MiDereferenceExtendInfo.c)
 *     MiReleaseSessionVa @ 0x14032A55C (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsAllocate @ 0x14032B0B0 (RtlpHpFixedVsAllocate.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403306A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     SepDeleteSessionLowboxEntries @ 0x14034CFD4 (SepDeleteSessionLowboxEntries.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14034DDA4 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034E538 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14034F1F0 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     MmOutSwapVirtualAddresses @ 0x1403504CC (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140351A08 (SmpKeyedStoreSetVaRanges.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140352B08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MiUnlockLoaderEntry @ 0x140358A50 (MiUnlockLoaderEntry.c)
 *     FlushLookUpTableBucket @ 0x14036D0F0 (FlushLookUpTableBucket.c)
 *     KsepShimDbChanged @ 0x140372DD0 (KsepShimDbChanged.c)
 *     MiUnlockDriverMappings @ 0x1403731A8 (MiUnlockDriverMappings.c)
 *     RtlpHpFixedVsFree @ 0x1403800B0 (RtlpHpFixedVsFree.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380800 (ExQueryHandleExceptionsPermanency.c)
 *     PfTSetTraceWorkerPriority @ 0x140382E94 (PfTSetTraceWorkerPriority.c)
 *     KiAbCrossThreadRelease @ 0x14038E150 (KiAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x140390ECC (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14039133C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403916E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140393C54 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140393E5C (ExpSaPageGroupFreeMemory.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403A84B4 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     EmpQueueRuleUpdateState @ 0x1403B3B68 (EmpQueueRuleUpdateState.c)
 *     PopPepRemoveDevice @ 0x1403BD4C0 (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x1403BDBF4 (PopFxInsertDevice.c)
 *     PopPepInsertDevice @ 0x1403BE1E8 (PopPepInsertDevice.c)
 *     PopFxRemoveDevice @ 0x1403BE844 (PopFxRemoveDevice.c)
 *     EmpRuleUpdateWorkerThread @ 0x1403C5E80 (EmpRuleUpdateWorkerThread.c)
 *     MiFreeUnusedPfnPages @ 0x1403CD9E0 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403CEBDC (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x1403CF5DC (PspUnlockQuotaListExclusive.c)
 *     PfLockExclusiveRelease @ 0x1403CF9D0 (PfLockExclusiveRelease.c)
 *     HalpLeaveDmaDomain @ 0x1404C4DEC (HalpLeaveDmaDomain.c)
 *     HalpIommuBlockDevice @ 0x1404C8DA0 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404C9DC0 (HalpIommuUnblockDevice.c)
 *     IommuBeginDeviceReset @ 0x1404D7A50 (IommuBeginDeviceReset.c)
 *     IommuFinalizeDeviceReset @ 0x1404D8710 (IommuFinalizeDeviceReset.c)
 *     CcChangeBackingFileObject @ 0x1404E8A28 (CcChangeBackingFileObject.c)
 *     MiUpControlAreaRefs @ 0x14052AAB0 (MiUpControlAreaRefs.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x14052F544 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiMarkSystemVaAllocated @ 0x14053DBB0 (MiMarkSystemVaAllocated.c)
 *     MiCommitPageTableRangesForVad @ 0x1405451CC (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x14054C5B4 (MiIncrementAweMapCount.c)
 *     MiRemovePlaceholderVad @ 0x1405552A8 (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C3F0 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x140561394 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140561858 (MiDeletePartitionResources.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140568860 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140569350 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405695C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x140569F98 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x14056ACA8 (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14056BA4C (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRegisterPluginEx @ 0x14056BE38 (PopFxRegisterPluginEx.c)
 *     PopFxRemoveAcpiDevice @ 0x14056C2D4 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x1405753FC (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057CB90 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     SshpSetCollectionActive @ 0x14057FD7C (SshpSetCollectionActive.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x140581894 (PspUnlockAffinityUpdateExclusive.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x140581B14 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x140582780 (PspUnlockProcessExclusiveUnsafe.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140584314 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x14058464C (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x140584A7C (PsLoadVsmEnclaveData.c)
 *     NormalizationList__Unlock @ 0x140594318 (NormalizationList__Unlock.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140594B70 (RtlpHpSegMgrVaCtxFree.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140598C94 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140598ED0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059E4BC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059E8C0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14059EE68 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC43C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x1405AC9DC (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x1405ACCE0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405AD098 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x1405AD7A4 (EtwpSetCompressionSettings.c)
 *     ExDisableHandleTracing @ 0x1405B28D8 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x1405B6088 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B71C0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B7E40 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B8270 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B8DB4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA41C (ExpSaPageGroupDescriptorFree.c)
 *     EmpParseInfDatabase @ 0x140A455E8 (EmpParseInfDatabase.c)
 *     MiInitializePagedPoolEvents @ 0x140A4EB3C (MiInitializePagedPoolEvents.c)
 *     MiInitializeMirroring @ 0x140A54728 (MiInitializeMirroring.c)
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14029CF60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x1402E57C8 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x1402E5850 (RtlRbReplaceNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node)
{
  __int64 v2; // rax
  volatile LONG *v3; // r15
  _RTL_RB_TREE *v4; // r14
  unsigned __int8 CurrentIrql; // r12
  int i; // edi
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_RB_TREE *v13; // rcx
  char v14; // al
  char *v15; // rcx
  __int64 result; // rax
  _RTL_BALANCED_NODE *v17; // rdi
  __int64 v18; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int64 v25; // [rsp+20h] [rbp-68h]
  unsigned int ParentValue; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+48h] [rbp-40h] BYREF

  ParentValue = Node[1].ParentValue;
  v25 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v25 >> 4) & 0x3FF) << 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (volatile LONG *)((char *)&KiAbTreeArray + v2 + 16);
  memset(&v28, 0, sizeof(v28));
  v4 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  for ( i = BYTE3(Node[1].Left) & 1; ; i = 1 )
  {
    if ( i )
      ExAcquireSpinLockExclusiveAtDpcLevel(v3);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v3);
    Min = v4->Min;
    Root = (unsigned __int64)v4->Root;
    if ( ((unsigned __int8)Min & 1) != 0 && Root )
      Root ^= (unsigned __int64)v4;
    v9 = (unsigned __int8)Min & 1;
    while ( Root )
    {
      v10 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v10 < v25 )
        goto LABEL_29;
      if ( v10 > v25 )
        goto LABEL_13;
      v11 = *(_DWORD *)(Root + 40);
      if ( v11 == ParentValue )
        break;
      if ( v11 < ParentValue )
      {
LABEL_29:
        v12 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( v9 && v12 )
        {
LABEL_33:
          Root ^= (unsigned __int64)v12;
          continue;
        }
      }
      else
      {
LABEL_13:
        v12 = *(_RTL_BALANCED_NODE **)Root;
        if ( v9 && v12 )
          goto LABEL_33;
      }
      Root = (unsigned __int64)v12;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Root + 80));
    if ( (PRTL_BALANCED_NODE)Root != Node )
      break;
    if ( i )
    {
      if ( *(_QWORD *)(Root + 64) )
      {
        v13 = (_RTL_RB_TREE *)(Root + 64);
      }
      else
      {
        v13 = (_RTL_RB_TREE *)(Root + 48);
        if ( !*(_QWORD *)(Root + 48) )
          goto LABEL_20;
      }
      if ( v13 )
      {
        v17 = v13->Root;
        RtlRbRemoveNode(v13, v13->Root);
        RtlRbReplaceNode(v4, Root, v17);
        v28.LockQueue.Next = 0LL;
        v28.LockQueue.Lock = (unsigned __int64 *volatile)&v17[3].Children[1];
        KxAcquireQueuedSpinLock((__int64)&v28, (volatile __int64 *)&v17[3].Children[1]);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v17[2].0 = *($657F03FA94A954BB9D31D3A421B28642 *)(Root + 48);
        *(_OWORD *)&v17[2].0 = *(_OWORD *)(Root + 64);
        *((_WORD *)&v17[3].1 + 1) ^= (*((_WORD *)&v17[3].1 + 1) ^ *(_WORD *)(Root + 90)) & 0x1FE;
        *((_WORD *)&v17[3].1 + 1) = *(_WORD *)(Root + 90) ^ (*((_WORD *)&v17[3].1 + 1) ^ *(_WORD *)(Root + 90)) & 0x1FF;
        KiAbTryDecrementIoWaiterCounts(Root, v17);
        BYTE3(v17[1].Left) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
      }
      else
      {
LABEL_20:
        RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)Root);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v14 = *(_BYTE *)(Root + 27);
        if ( (v14 & 2) != 0 )
        {
          *(_WORD *)(Root + 90) ^= (*(_WORD *)(Root + 90) ^ (2 * ((*(_WORD *)(Root + 90) >> 1) - 1))) & 0x1FE;
          *(_BYTE *)(Root + 27) &= ~2u;
          v14 = *(_BYTE *)(Root + 27);
        }
        if ( (v14 & 4) != 0 )
        {
          *(_WORD *)(Root + 90) = *(_WORD *)(Root + 90) & 0x1FF | (((*(_WORD *)(Root + 90) >> 9) - 1) << 9);
          *(_BYTE *)(Root + 27) &= ~4u;
        }
      }
      *(_BYTE *)(Root + 39) &= ~0x80u;
      *(_BYTE *)(Root + 27) &= ~1u;
      goto LABEL_25;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  HIBYTE(Node[1].Right) &= ~0x80u;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
  {
    KiAbTryDecrementIoWaiterCounts(Node, Root);
    v18 = 64LL;
  }
  else
  {
    v18 = 48LL;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(Root + v18), Node);
LABEL_25:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v15 = (char *)Node - 16 * LOBYTE(Node[1].Children[0]);
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v15[793];
  else
    _InterlockedExchangeAdd8(v15 + 871, 0xFFu);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
