/*
 * XREFs of ExAcquireFastMutex @ 0x140262DC0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x140201018 (FsRtlpWaitOnIrp.c)
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x140219A70 (CcWriteBehindPreProcess.c)
 *     CcAcquireByteRangeForWrite @ 0x14021A220 (CcAcquireByteRangeForWrite.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14021BD30 (CcAcquireBcbLockAndVacbLock.c)
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140241910 (FsRtlLookupPerStreamContextInternal.c)
 *     RawInitiateDeleteVolume @ 0x14028DD58 (RawInitiateDeleteVolume.c)
 *     RawCompletionRoutine @ 0x14028DFF0 (RawCompletionRoutine.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14028F5FC (PnpUnregisterPlugPlayNotification.c)
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     CcDeleteMbcb @ 0x14029CBA4 (CcDeleteMbcb.c)
 *     CcGetFlushedValidData @ 0x1402A1120 (CcGetFlushedValidData.c)
 *     PopIrpWorker @ 0x1402B9440 (PopIrpWorker.c)
 *     PopGetPowerSettingValue @ 0x1402BCC10 (PopGetPowerSettingValue.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402C32B0 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlInsertPerStreamContext @ 0x1402C99C0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlAddLargeMcbEntry @ 0x1402D00C0 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x1402D0130 (FsRtlTruncateLargeMcb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1402F57D0 (FsRtlpCancelOplockRHIrp.c)
 *     CcPrepareMdlWrite @ 0x1402FD600 (CcPrepareMdlWrite.c)
 *     PopCreateDynamicIrpWorker @ 0x140300A40 (PopCreateDynamicIrpWorker.c)
 *     CcGetVacbMiss @ 0x140335850 (CcGetVacbMiss.c)
 *     CcGetDirtyPagesHelper @ 0x140336020 (CcGetDirtyPagesHelper.c)
 *     CcZeroEndOfLastPage @ 0x140343FA8 (CcZeroEndOfLastPage.c)
 *     PoRunDownDeviceObject @ 0x140368158 (PoRunDownDeviceObject.c)
 *     HalpAcpiGetFacsMapping @ 0x1403705F8 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTables @ 0x14037A3B8 (HalpAcpiGetAllTables.c)
 *     PopInitilizeAcDcSettings @ 0x140380E04 (PopInitilizeAcDcSettings.c)
 *     FsRtlLookupLargeMcbEntry @ 0x14039D700 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1403A1210 (FsRtlGetNextLargeMcbEntry.c)
 *     CcRepinBcb @ 0x1403A3B90 (CcRepinBcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1403A60B0 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1403A6B20 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1403AAF70 (FsRtlNumberOfRunsInLargeMcb.c)
 *     PopIrpWorkerControl @ 0x1403AC100 (PopIrpWorkerControl.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403ACFD0 (FsRtlpCancelExclusiveIrp.c)
 *     CcGetLsnForFileObject @ 0x140535590 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x14053A730 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x14053A8E0 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x14053AA90 (FsRtlSplitLargeMcb.c)
 *     FsRtlRemovePerStreamContext @ 0x14053ACC0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14053BDB0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14053BE94 (FsRtlpCancelWaitingIrp.c)
 *     PnpDisableUserModeNotifications @ 0x14055F0F8 (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x14057CF80 (KiOpPatchCode.c)
 *     PopRunMaximumIrpWorkers @ 0x140596644 (PopRunMaximumIrpWorkers.c)
 *     PopRunNormalIrpWorkers @ 0x14059671C (PopRunNormalIrpWorkers.c)
 *     RawVerifyVolume @ 0x1405A483C (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x1405AF1B8 (RtlpTraceDatabaseAcquireLock.c)
 *     DifExAcquireFastMutexWrapper @ 0x1405D4B90 (DifExAcquireFastMutexWrapper.c)
 *     DifKeAcquireGuardedMutexWrapper @ 0x1405DFE10 (DifKeAcquireGuardedMutexWrapper.c)
 *     DbgkClearProcessDebugObject @ 0x14067F39C (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x14067F574 (PopFreeSessionState.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140680140 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyClient @ 0x14068032C (PiUEventNotifyClient.c)
 *     PiUEventReferenceEventEntry @ 0x140680474 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1406804B0 (PiUEventNotifyClientPendingEvent.c)
 *     PnpProcessAssignResources @ 0x140681528 (PnpProcessAssignResources.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140681F08 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140688EF0 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpDeviceEventWorker @ 0x1406892C0 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x1406895A4 (PnpProcessDeferredRegistrations.c)
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x14068C820 (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14068CA08 (PiUEventNotifyTargetDeviceChange.c)
 *     PopGetSettingNotificationName @ 0x14068CCC4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14068D630 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x14068D754 (PopCallPowerSettingCallback.c)
 *     PiUEventProcessEventWorker @ 0x14068D8E0 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x14068DA18 (PiUEventDereferenceEventEntry.c)
 *     PiUEventHandleGetEvent @ 0x14068E028 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x14068E738 (PiUEventHandleRegistration.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140695900 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x140695C68 (EtwpSetProviderTraitsCommon.c)
 *     CmpAddToDelayedClose @ 0x1406B7220 (CmpAddToDelayedClose.c)
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     RawDispatch @ 0x1406F2E80 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x1406F30A4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1406F3164 (RawCreate.c)
 *     RawClose @ 0x1406F32E8 (RawClose.c)
 *     RawCleanup @ 0x1406F3368 (RawCleanup.c)
 *     RawMountVolume @ 0x1406F37D0 (RawMountVolume.c)
 *     RawScanDeletedList @ 0x1406F3E5C (RawScanDeletedList.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406F3F30 (FsRtlTeardownPerStreamContexts.c)
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1406F5340 (PnpDeferNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1406F5818 (PnpNotifyDeviceClassChange.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406F6080 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x1406F6B60 (PiQueryResourceRequirements.c)
 *     DbgkCopyProcessDebugPort @ 0x14070E820 (DbgkCopyProcessDebugPort.c)
 *     CmpAddStringToMapping @ 0x140734140 (CmpAddStringToMapping.c)
 *     PoRegisterPowerSettingCallback @ 0x14073B960 (PoRegisterPowerSettingCallback.c)
 *     PopDispatchNotificationsToList @ 0x14073CE68 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x14073CFC0 (PopGetSettingValue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140747D8C (PiDqObjectManagerUnregisterQuery.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14074AE98 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpRemoveFromDelayedClose @ 0x14074BFBC (CmpRemoveFromDelayedClose.c)
 *     CmpDelayFreeCmRm @ 0x14074C598 (CmpDelayFreeCmRm.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140751F40 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1407524E0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140752810 (FsRtlFindInTunnelCacheEx.c)
 *     PopLogDisabledSleepReason @ 0x140760A60 (PopLogDisabledSleepReason.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140773F48 (KeSynchronizeWithDynamicProcessors.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140778E48 (PiDqObjectManagerHandleObjectEvent.c)
 *     IopDestroyDeviceNode @ 0x140782FD0 (IopDestroyDeviceNode.c)
 *     PnpFreeDeviceInstancePath @ 0x140783208 (PnpFreeDeviceInstancePath.c)
 *     PfSnGetCompletedTrace @ 0x140788154 (PfSnGetCompletedTrace.c)
 *     PnpBusTypeGuidGetIndex @ 0x14078CC74 (PnpBusTypeGuidGetIndex.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14078DA7C (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14078F2C0 (PiUEventQueueBroadcastEventEntry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140792BF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUEventHandleUnregisterClient @ 0x140796DDC (PiUEventHandleUnregisterClient.c)
 *     CmpDelayFreeRMWorker @ 0x14079A480 (CmpDelayFreeRMWorker.c)
 *     PnpBusTypeGuidGet @ 0x14079AB44 (PnpBusTypeGuidGet.c)
 *     CmpDelayCloseWorker @ 0x1407AB950 (CmpDelayCloseWorker.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1407D17DC (FsRtlAcquireToCreateMappedSection.c)
 *     PfSnEndTrace @ 0x1407E37B8 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x1407E76DC (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1407E797C (PfTTraceListAdd.c)
 *     PiUEventBroadcastEventWorker @ 0x1407F80C0 (PiUEventBroadcastEventWorker.c)
 *     IopLegacyResourceAllocation @ 0x140801DA4 (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140801F0C (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140803A38 (PnpBuildCmResourceLists.c)
 *     HalpIrtAllocateIndex @ 0x14080BD48 (HalpIrtAllocateIndex.c)
 *     KeRegisterProcessorChangeCallback @ 0x14080FF70 (KeRegisterProcessorChangeCallback.c)
 *     PopRequestShutdownWait @ 0x140825424 (PopRequestShutdownWait.c)
 *     PfTStart @ 0x140844B00 (PfTStart.c)
 *     PfTInitialize @ 0x140845B5C (PfTInitialize.c)
 *     HalpIrtExtendRemappingRange @ 0x14085A40C (HalpIrtExtendRemappingRange.c)
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x14085FB0C (PiRegisterKernelSoftRestartNotification.c)
 *     WheaCrashDumpInitializationComplete @ 0x14086086C (WheaCrashDumpInitializationComplete.c)
 *     PoVolumeDevice @ 0x14087017C (PoVolumeDevice.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140870310 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     RawUserFsCtrl @ 0x14087D8B4 (RawUserFsCtrl.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 *     PnpOrphanNotification @ 0x14087E510 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14088039C (PnpCleanupDeviceRegistryValues.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140931740 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendApertureRange @ 0x140931890 (HalpIrtExtendApertureRange.c)
 *     HalpIrtFreeIndex @ 0x1409319B4 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140931AF0 (HalpIrtReleaseDeviceAperture.c)
 *     DbgkOpenProcessDebugPort @ 0x140933D80 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x1409341B0 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x1409344AC (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140934EE8 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1409351E4 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140935970 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140935CE0 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140935E70 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x140941770 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14095372C (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x140955D4C (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140959518 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1409608EC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140960B20 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140960BA8 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140960C54 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140960DA4 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140960E64 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140960EB4 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x140961638 (PnpRemoveEventFromQueue.c)
 *     PipKsrNotifyDrivers @ 0x14096A3D0 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x14096C29C (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x14097C168 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14097CF90 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x140980FB0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x140981070 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x140983DC0 (PoQueueShutdownWorkItem.c)
 *     PoUnregisterPowerSettingCallback @ 0x140984070 (PoUnregisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x140988ACC (PopQueryPowerSettingUlong.c)
 *     ExpUpdateDebugInfo @ 0x1409F6478 (ExpUpdateDebugInfo.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 *     WheapReportDeferredLiveDumps @ 0x140A06534 (WheapReportDeferredLiveDumps.c)
 *     CmpGetMappingHiveForString @ 0x140A16EC8 (CmpGetMappingHiveForString.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PopFlushVolumeWorker @ 0x140AA3140 (PopFlushVolumeWorker.c)
 *     PopFlushVolumes @ 0x140AA3378 (PopFlushVolumes.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140AA8884 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140AA8934 (WheapSaveRecordForLiveDump.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( (unsigned __int64)FastMutex - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((__int64)FastMutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
