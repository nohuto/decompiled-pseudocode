/*
 * XREFs of ExReleasePushLockEx @ 0x1402CB580
 * Callers:
 *     NtTraceEvent @ 0x14025C4C0 (NtTraceEvent.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     CcPostWorkQueueAsyncRead @ 0x140278CE4 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140278EE8 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcGetVirtualAddressIfMapped @ 0x14028FAC4 (CcGetVirtualAddressIfMapped.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402913A4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x1402934F0 (CcUnmapVacbArray.c)
 *     CcAllocateInitializeBcb @ 0x14029D410 (CcAllocateInitializeBcb.c)
 *     CcGetVirtualAddress @ 0x1402A15A0 (CcGetVirtualAddress.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402CA690 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402EEC90 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402FAB20 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402FB0F0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402FB1E0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1402FFC10 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileContext @ 0x140318D00 (FsRtlInsertPerFileContext.c)
 *     FsRtlLookupPerFileContext @ 0x14031D9F0 (FsRtlLookupPerFileContext.c)
 *     CcCompleteAsyncReadWorker @ 0x140325640 (CcCompleteAsyncReadWorker.c)
 *     EtwpUnlockBufferList @ 0x14032F2D4 (EtwpUnlockBufferList.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     ObpUnlockDirectory @ 0x140347B1C (ObpUnlockDirectory.c)
 *     PnpDeviceActionWorker @ 0x14036F9F0 (PnpDeviceActionWorker.c)
 *     IopCleanupNotifications @ 0x14037BEC8 (IopCleanupNotifications.c)
 *     CcGetNumberOfMappedPages @ 0x140394470 (CcGetNumberOfMappedPages.c)
 *     ExpUnlockCallbackListExclusive @ 0x1403A5F6C (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x1403B72F0 (CcAsyncReadWorker.c)
 *     CcAsyncReadWorkerThread @ 0x1404EC500 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerFileContext @ 0x1404F1080 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1404F1180 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x14050E718 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x14056A770 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     CmSetCallbackObjectContext @ 0x1405D5830 (CmSetCallbackObjectContext.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405D642C (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405D6690 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405D6B4C (CmpFreeCallbackObjectContexts.c)
 *     ObpCallPreOperationCallbacks @ 0x1405E9760 (ObpCallPreOperationCallbacks.c)
 *     EtwpRegisterUMGuid @ 0x1405EBAF0 (EtwpRegisterUMGuid.c)
 *     CmpUnlockHashEntry @ 0x1405EC638 (CmpUnlockHashEntry.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockNameHashEntry @ 0x1405EFE60 (CmpUnlockNameHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405EFEA0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     EtwpDeleteRegistrationObject @ 0x1405FC900 (EtwpDeleteRegistrationObject.c)
 *     ObQueryDeviceMapInformation @ 0x1406254C0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140625954 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140625B10 (ObpReferenceDeviceMap.c)
 *     ObpFreeObject @ 0x14063DC40 (ObpFreeObject.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406405D0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x140641110 (CmpCallbackFillObjectContext.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x140642D80 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x140643680 (ObpIncrementHandleCountEx.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     CmpOKToFollowLink @ 0x140649730 (CmpOKToFollowLink.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     NtQuerySymbolicLinkObject @ 0x140666310 (NtQuerySymbolicLinkObject.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140668240 (FsRtlTeardownPerStreamContexts.c)
 *     CmpGetCallbackObjectContext @ 0x14066FB84 (CmpGetCallbackObjectContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140676FE8 (ObSetCurrentProcessDeviceMap.c)
 *     EtwpRundownNotifications @ 0x14067766C (EtwpRundownNotifications.c)
 *     FsRtlTeardownPerFileContexts @ 0x14067B590 (FsRtlTeardownPerFileContexts.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140681E4C (CmpInsertCallbackInListByAltitude.c)
 *     ObpRemoveNamespaceFromTable @ 0x14068AEEC (ObpRemoveNamespaceFromTable.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406912B0 (EtwpRealtimeUpdateConsumers.c)
 *     ObDereferenceDeviceMap @ 0x140693AD4 (ObDereferenceDeviceMap.c)
 *     EtwpFreeGuidEntry @ 0x140695B4C (EtwpFreeGuidEntry.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140695E80 (PiDmObjectGetCachedObjectReference.c)
 *     ObCheckActiveHandles @ 0x1406967CC (ObCheckActiveHandles.c)
 *     ExpWatchProductTypeWork @ 0x140696830 (ExpWatchProductTypeWork.c)
 *     EtwpFreeLoggerContext @ 0x14069817C (EtwpFreeLoggerContext.c)
 *     WdipTimeoutCheckRoutine @ 0x140698FB0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140699060 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406990E8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     CmpGetLastHive @ 0x140699A30 (CmpGetLastHive.c)
 *     EtwpRealtimeConnect @ 0x14069B8B8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14069BCE8 (EtwpRealtimeDisconnectConsumer.c)
 *     ObpSetDeviceMap @ 0x1406A04E4 (ObpSetDeviceMap.c)
 *     EtwpTrackProviderBinary @ 0x1406A2A08 (EtwpTrackProviderBinary.c)
 *     PiDqIrpQueryGetResult @ 0x1406A6E58 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A7660 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x1406A79D0 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1406A7E9C (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x1406A83CC (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406AE240 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406AE5B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406AF534 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406AFC64 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406AFE2C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x1406B050C (PiDmObjectIsEnumerable.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BC360 (EtwpAddRegEntryToGroup.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x1406D8070 (ObSetSecurityDescriptorInfo.c)
 *     DelistKeyBodyFromKCB @ 0x1406E0720 (DelistKeyBodyFromKCB.c)
 *     CmpAssignSecurityToKcb @ 0x1406E2F20 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x1406E2FD4 (CmUnlockHiveSecurity.c)
 *     CmpFreeKeyByCell @ 0x1406E4070 (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406E4E40 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1406E5814 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1406E9BF4 (CmpGetNextHive.c)
 *     CmpGetNextActiveHive @ 0x1406EB310 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406EB4E0 (CmpLockRegistryFreezeAware.c)
 *     PopUmpoProcessMessage @ 0x1406F3304 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x1406F55A4 (PopReleaseUmpoPushLock.c)
 *     ObMakeTemporaryObject @ 0x1406F62F0 (ObMakeTemporaryObject.c)
 *     ObpDecrementHandleCount @ 0x1406F6CE4 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1406F6EB0 (ObpDeleteNameCheck.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406F7F08 (ObDestroyHandleRevocationBlock.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406F8330 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406F83A8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406F8970 (ObpDeleteSymbolicLinkName.c)
 *     ObpCreateSymbolicLinkName @ 0x14070CE9C (ObpCreateSymbolicLinkName.c)
 *     EtwpStopLoggerInstance @ 0x140710AB0 (EtwpStopLoggerInstance.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1407149E4 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1407150A4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x140717450 (EtwpAddGuidEntry.c)
 *     EtwpQueueNotification @ 0x140717AEC (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x14071802C (EtwpReceiveNotification.c)
 *     NtOpenPrivateNamespace @ 0x140718550 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x140718720 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x140718E48 (ObpRegisterPrivateNamespace.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 *     CmpUnlockHiveList @ 0x14071C694 (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x14071C6B4 (UnlockShutdown.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14072A360 (CmpCopyMergeOfLayeredKeyNode.c)
 *     EtwpGetTraceGuidInfo @ 0x14072EB7C (EtwpGetTraceGuidInfo.c)
 *     PiDmListRemoveList @ 0x140730C80 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140730DA4 (PiDmListRemoveObject.c)
 *     NtMakePermanentObject @ 0x140731EE0 (NtMakePermanentObject.c)
 *     PiDmListAddObject @ 0x1407353A4 (PiDmListAddObject.c)
 *     IopRegisterDeviceInterface @ 0x140744910 (IopRegisterDeviceInterface.c)
 *     PiDmObjectReleaseLock @ 0x140745C88 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407464B0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407468F4 (PiDmObjectProcessPropertyChange.c)
 *     EtwUnregister @ 0x14075F9C0 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x140762340 (EtwpRegisterProvider.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140762740 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140762AE4 (PiDqQueryApplyObjectEvent.c)
 *     ExpGetNextCallback @ 0x14076C6A0 (ExpGetNextCallback.c)
 *     PiDmListAddList @ 0x14076E0B4 (PiDmListAddList.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14076F7B8 (CmpUnlockTwoSecurityCaches.c)
 *     ObRevokeHandles @ 0x14077979C (ObRevokeHandles.c)
 *     CmpEnumerateCallback @ 0x14077CCB0 (CmpEnumerateCallback.c)
 *     WdipSemReserveInstanceTableEntry @ 0x1407884D8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140788620 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x140789250 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407893A0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x1407894DC (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x1407897AC (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140789870 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x1407899C8 (WdipSemEnableContextProvider.c)
 *     ObCreateObjectTypeEx @ 0x140790780 (ObCreateObjectTypeEx.c)
 *     WdipSemInitialize @ 0x140793E98 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x140795A88 (EtwInitializeSiloState.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x140799CB0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmpStartSiloKeyLockTracker @ 0x1407A5BA0 (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     WdipSemAllocatePool @ 0x1407C084C (WdipSemAllocatePool.c)
 *     CmLockKeyForWrite @ 0x1407C37B0 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1407C39A0 (CmpGlobalLockKeyForWrite.c)
 *     ObRegisterCallbacks @ 0x1407CA730 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1407CA904 (ObpInsertCallbackByAltitude.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407CB890 (CmpMachineHiveLoadedWorkItem.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407CE2F0 (ObIsDosDeviceLocallyMapped.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5620 (EtwpTracingProvEnableCallback.c)
 *     CmUnRegisterCallback @ 0x140869C60 (CmUnRegisterCallback.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A0F0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpSyncNextBackupHive @ 0x1408714B0 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x140872380 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140872844 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140872968 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x140872B80 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140875C0C (CmpUnlockHashEntryByIndex.c)
 *     CmDumpKey @ 0x14087BD68 (CmDumpKey.c)
 *     IoRegisterContainerNotification @ 0x140894A90 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140894CD0 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A31CC (PiPnpRtlEnsureObjectCached.c)
 *     PiDqQueryUnlock @ 0x1408A4BEC (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x1408DC32C (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x1408DC4E0 (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408DC970 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408DCA30 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408DD2A8 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1408DDB50 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1408DDC90 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E46D4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PsRegisterAltSystemCallHandler @ 0x14090BB40 (PsRegisterAltSystemCallHandler.c)
 *     WdipSemUpdate @ 0x14092FBA4 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409300C4 (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x140933C54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140933F3C (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1409347A4 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14093EFA0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093F06C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F200 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093F990 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14094131C (EtwpTrackGuidEntryRegistrations.c)
 *     PopReleaseAwaymodeLock @ 0x140990D54 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x1409B2C98 (ExShutdownSystem.c)
 *     PsNotifyCoreDriversInitialized @ 0x140A5EF60 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x140271AC0 (ExfReleasePushLock.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoQoS @ 0x1402DD248 (PsBoostThreadIoQoS.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostIoPriority @ 0x14032A2E0 (KiAbThreadUnboostIoPriority.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14035EACC (KiAbThreadUnboostCpuPriority.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A73A0 (EtwTraceAutoBoostClearFloor.c)
 */

char __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v6; // rax
  __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rdi
  int v9; // ebx
  unsigned int SessionId; // r8d
  unsigned __int8 v11; // r15
  unsigned int v12; // edx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdx
  char v19; // [rsp+72h] [rbp+1Ah]

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = *(_QWORD *)BugCheckParameter2,
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != v6) )
  {
    LOBYTE(v6) = ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v19 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      goto LABEL_27;
    while ( 1 )
    {
      v15 = (__int64)&CurrentThread->LockEntries[v14];
      v12 &= ~(1 << v14);
      if ( (*(_BYTE *)(v15 + 26) & 1) != 0
        && (*(_DWORD *)(v15 + 32) & 1) == 0
        && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v15 + 40) == SessionId )
      {
        *(_BYTE *)(v15 + 26) &= ~1u;
        if ( *(_QWORD *)(v15 + 32) )
          break;
      }
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      if ( v13 )
        goto LABEL_27;
    }
    if ( !v15 )
    {
LABEL_27:
      LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( (v6 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v15 + 32) |= 2u;
      if ( *(__int64 *)(v15 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
      v9 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
      v16 = *(_DWORD *)(v15 + 88) & 0xFFFE0000;
      *(_BYTE *)(v15 + 25) &= ~1u;
      v19 = BYTE2(v9);
      *(_DWORD *)(v15 + 88) = v16;
      *(_QWORD *)(v15 + 32) = 0LL;
      v17 = (signed __int64)(v15 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v11 == 1 )
      {
        LODWORD(v6) = CurrentThread->AbEntrySummary | (1 << v17);
        CurrentThread->AbEntrySummary = v6;
      }
      else
      {
        v14 = (unsigned int)v17;
        LOBYTE(v6) = 1 << v17;
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
      }
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority(CurrentThread, 0LL);
      if ( (v19 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        PsBoostThreadIoQoS(CurrentThread, 1LL);
      }
      LOBYTE(v6) = -1;
      if ( (v9 & 0x7FFF) != 0 )
        LOBYTE(v6) = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        LOBYTE(v6) = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery(v14);
  }
  return v6;
}
