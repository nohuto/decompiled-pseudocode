/*
 * XREFs of ExAcquireFastMutex @ 0x140230720
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402010B8 (FsRtlpWaitOnIrp.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230340 (FsRtlLookupPerStreamContextInternal.c)
 *     CcPinFileData @ 0x140263770 (CcPinFileData.c)
 *     PopIrpWorker @ 0x14028D230 (PopIrpWorker.c)
 *     CcWriteBehindPostProcess @ 0x14029AF18 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14029B740 (CcWriteBehindPreProcess.c)
 *     CcAcquireByteRangeForWrite @ 0x14029CF10 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x14029EFF0 (CcGetVacbMiss.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402A0F50 (CcAcquireBcbLockAndVacbLock.c)
 *     CcZeroEndOfLastPage @ 0x1402A21C8 (CcZeroEndOfLastPage.c)
 *     CcSetDirtyInMask @ 0x1402C8FC0 (CcSetDirtyInMask.c)
 *     CcGetFlushedValidData @ 0x1402F0A50 (CcGetFlushedValidData.c)
 *     CcDeleteMbcb @ 0x1402F3E04 (CcDeleteMbcb.c)
 *     PoRunDownDeviceObject @ 0x140304F58 (PoRunDownDeviceObject.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14032041C (PnpUnregisterPlugPlayNotification.c)
 *     RawInitiateDeleteVolume @ 0x140321C68 (RawInitiateDeleteVolume.c)
 *     RawCompletionRoutine @ 0x140321F00 (RawCompletionRoutine.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140328450 (FsRtlPrivateInitializeFileLock.c)
 *     PopGetPowerSettingValue @ 0x14032CA60 (PopGetPowerSettingValue.c)
 *     FsRtlInsertPerStreamContext @ 0x140333C20 (FsRtlInsertPerStreamContext.c)
 *     HalpAcpiGetTable @ 0x140336E50 (HalpAcpiGetTable.c)
 *     CcGetDirtyPagesHelper @ 0x1403386A0 (CcGetDirtyPagesHelper.c)
 *     FsRtlAddLargeMcbEntry @ 0x140339D60 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x140339DD0 (FsRtlTruncateLargeMcb.c)
 *     PopCreateDynamicIrpWorker @ 0x1403418B8 (PopCreateDynamicIrpWorker.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140360570 (FsRtlpCancelOplockRHIrp.c)
 *     CcPrepareMdlWrite @ 0x140368B40 (CcPrepareMdlWrite.c)
 *     HalpAcpiGetAllTables @ 0x14037DD68 (HalpAcpiGetAllTables.c)
 *     PopInitilizeAcDcSettings @ 0x140383A54 (PopInitilizeAcDcSettings.c)
 *     HalpAcpiGetFacsMapping @ 0x140394CB8 (HalpAcpiGetFacsMapping.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1403A1C60 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1403A5FB0 (FsRtlGetNextLargeMcbEntry.c)
 *     CcRepinBcb @ 0x1403A89A0 (CcRepinBcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1403AB680 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1403ABFB0 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1403AFCC0 (FsRtlNumberOfRunsInLargeMcb.c)
 *     PopIrpWorkerControl @ 0x1403B0E50 (PopIrpWorkerControl.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403B1D20 (FsRtlpCancelExclusiveIrp.c)
 *     CcGetLsnForFileObject @ 0x140537A60 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538490 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14053CBD0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x14053CD80 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x14053CF30 (FsRtlSplitLargeMcb.c)
 *     FsRtlRemovePerStreamContext @ 0x14053D160 (FsRtlRemovePerStreamContext.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14053E250 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14053E334 (FsRtlpCancelWaitingIrp.c)
 *     PnpDisableUserModeNotifications @ 0x140561598 (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x14057F490 (KiOpPatchCode.c)
 *     PopRunMaximumIrpWorkers @ 0x140598B64 (PopRunMaximumIrpWorkers.c)
 *     PopRunNormalIrpWorkers @ 0x140598C3C (PopRunNormalIrpWorkers.c)
 *     RawVerifyVolume @ 0x1405A6CEC (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x1405B1668 (RtlpTraceDatabaseAcquireLock.c)
 *     DifExAcquireFastMutexWrapper @ 0x1405D7040 (DifExAcquireFastMutexWrapper.c)
 *     DifKeAcquireGuardedMutexWrapper @ 0x1405E22C0 (DifKeAcquireGuardedMutexWrapper.c)
 *     DbgkClearProcessDebugObject @ 0x14068277C (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x140682954 (PopFreeSessionState.c)
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x140688310 (PnpDeferNotification.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406891D8 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDelayFreeCmRm @ 0x140698BDC (CmpDelayFreeCmRm.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2B0 (DbgkCopyProcessDebugPort.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C0210 (EtwpReleaseProviderTraitsReference.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBF54 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14072387C (FsRtlAcquireToCreateMappedSection.c)
 *     CmpAddToDelayedClose @ 0x14073EAD8 (CmpAddToDelayedClose.c)
 *     PfSnEndTrace @ 0x14074AD58 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x14075EF48 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14075F1E8 (PfTTraceListAdd.c)
 *     CmpDelayCloseWorker @ 0x14076A640 (CmpDelayCloseWorker.c)
 *     CmpRemoveFromDelayedClose @ 0x14076C2C8 (CmpRemoveFromDelayedClose.c)
 *     PiUEventHandleUnregisterClient @ 0x14077E8B8 (PiUEventHandleUnregisterClient.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E900 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyClient @ 0x14077EAEC (PiUEventNotifyClient.c)
 *     PiUEventReferenceEventEntry @ 0x14077EC34 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14077EC70 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077F198 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x14077F838 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x14077FBAC (PiUEventHandleRegistration.c)
 *     PiUEventProcessEventWorker @ 0x1407825F0 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x140782728 (PiUEventDereferenceEventEntry.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140782C60 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x140782D84 (PopCallPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x140782F08 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078386C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783A54 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x140783EFC (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x140786840 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407869A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpDeviceEventWorker @ 0x140786D70 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x140787054 (PnpProcessDeferredRegistrations.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140788430 (PiDqObjectManagerHandleObjectEvent.c)
 *     IopDestroyDeviceNode @ 0x14078E9E0 (IopDestroyDeviceNode.c)
 *     PnpFreeDeviceInstancePath @ 0x14078EC18 (PnpFreeDeviceInstancePath.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F790 (PnpNotifyDeviceClassChange.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14078FD74 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x140790854 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x140790FAC (PnpProcessAssignResources.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140791798 (PiUEventNotifyDeviceInterfaceChange.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407918D0 (FsRtlTeardownPerStreamContexts.c)
 *     RawScanDeletedList @ 0x140791BAC (RawScanDeletedList.c)
 *     RawDispatch @ 0x140791C40 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x140791E64 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140791F24 (RawCreate.c)
 *     RawClose @ 0x1407920A8 (RawClose.c)
 *     RawCleanup @ 0x140792128 (RawCleanup.c)
 *     RawMountVolume @ 0x14079287C (RawMountVolume.c)
 *     IoGetDeviceProperty @ 0x140792EB0 (IoGetDeviceProperty.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C854 (PipProcessRebuildPowerRelationsQueue.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x14079EC30 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlAddToTunnelCacheEx @ 0x14079F1D0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x14079F500 (FsRtlFindInTunnelCacheEx.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7570 (PoRegisterPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1407A8F30 (PopLogDisabledSleepReason.c)
 *     PiUEventBroadcastEventWorker @ 0x1407AA660 (PiUEventBroadcastEventWorker.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1407D620C (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1407D74BC (PfSnGetCompletedTrace.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407DBF6C (PnpBusTypeGuidGetIndex.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1407DE3E4 (PiUEventQueueBroadcastEventEntry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407E22C8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     CmpAddStringToMapping @ 0x1407E4470 (CmpAddStringToMapping.c)
 *     CmpDelayFreeRMWorker @ 0x1407E9430 (CmpDelayFreeRMWorker.c)
 *     PnpBusTypeGuidGet @ 0x1407E9BC4 (PnpBusTypeGuidGet.c)
 *     PopDispatchNotificationsToList @ 0x1407EC5C8 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1407EC720 (PopGetSettingValue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA618 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1407FB79C (PiDqObjectManagerUnregisterQuery.c)
 *     IopLegacyResourceAllocation @ 0x140817DC4 (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140817F2C (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x1408185D4 (PnpBuildCmResourceLists.c)
 *     HalpIrtAllocateIndex @ 0x140820818 (HalpIrtAllocateIndex.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822950 (KeRegisterProcessorChangeCallback.c)
 *     PopRequestShutdownWait @ 0x14082D494 (PopRequestShutdownWait.c)
 *     PfTStart @ 0x140847C60 (PfTStart.c)
 *     PfTInitialize @ 0x140848CBC (PfTInitialize.c)
 *     HalpIrtExtendRemappingRange @ 0x14085E3CC (HalpIrtExtendRemappingRange.c)
 *     PopDiagTraceControlCallback @ 0x140862C00 (PopDiagTraceControlCallback.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140863FCC (PiRegisterKernelSoftRestartNotification.c)
 *     WheaCrashDumpInitializationComplete @ 0x140864E7C (WheaCrashDumpInitializationComplete.c)
 *     PoVolumeDevice @ 0x14087269C (PoVolumeDevice.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140872830 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     RawUserFsCtrl @ 0x140882664 (RawUserFsCtrl.c)
 *     PiUEventHandleVetoEvent @ 0x140882E18 (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x1408832B4 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14088507C (PnpCleanupDeviceRegistryValues.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140934750 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendApertureRange @ 0x1409348A0 (HalpIrtExtendApertureRange.c)
 *     HalpIrtFreeIndex @ 0x1409349C4 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140934B00 (HalpIrtReleaseDeviceAperture.c)
 *     DbgkOpenProcessDebugPort @ 0x140936D90 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x1409371C0 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x1409374BC (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140937EFC (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1409381F8 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140938990 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140938D00 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140938E90 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x140944790 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140945FE8 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14095674C (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x140958D6C (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14095C538 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14096390C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140963B40 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140963BC8 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140963C74 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140963DC4 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140963E84 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140963ED4 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x140964658 (PnpRemoveEventFromQueue.c)
 *     PipKsrNotifyDrivers @ 0x14096D3F0 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x14096F2BC (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x14097F218 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140980040 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x140984060 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x140984120 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x140986E70 (PoQueueShutdownWorkItem.c)
 *     PoUnregisterPowerSettingCallback @ 0x140987120 (PoUnregisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x14098BB7C (PopQueryPowerSettingUlong.c)
 *     ExpUpdateDebugInfo @ 0x1409F9308 (ExpUpdateDebugInfo.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
 *     WheapReportDeferredLiveDumps @ 0x140A09224 (WheapReportDeferredLiveDumps.c)
 *     CmpGetMappingHiveForString @ 0x140A19C18 (CmpGetMappingHiveForString.c)
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PopFlushVolumeWorker @ 0x140AA6370 (PopFlushVolumeWorker.c)
 *     PopFlushVolumes @ 0x140AA65A8 (PopFlushVolumes.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140AABAB4 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140AABB64 (WheapSaveRecordForLiveDump.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // si
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  unsigned int v12; // [rsp+30h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(FastMutex, CurrentThread)) != 0 )
  {
    _BitScanForward(&v5, AbEntrySummary);
    v12 = v5;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v12);
    if ( (unsigned __int64)FastMutex - qword_140C65AE8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended(FastMutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
