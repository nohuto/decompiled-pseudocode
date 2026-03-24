/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1402CC2B0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14024FE28 (SepDesktopAppxSubProcessToken.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025522C (FsRtlAcquireFileForModWriteEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1402905C0 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x14029FCC0 (CcPinFileData.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14032ABC0 (SeTokenSetNoChildProcessRestricted.c)
 *     SepQueueWorkItem @ 0x14034D010 (SepQueueWorkItem.c)
 *     SepRmCallLsa @ 0x14034D310 (SepRmCallLsa.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140364690 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiProcessLoaderEntry @ 0x140372B40 (MiProcessLoaderEntry.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037F3E0 (PnpUnregisterPlugPlayNotification.c)
 *     IoConfigureCrashDump @ 0x1403BFA60 (IoConfigureCrashDump.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1403F8680 (SeTokenSetRedirectionTrustPolicy.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA6A0 (CcUnpinRepinnedBcb.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405028CC (IoUpdateDumpPhysicalRanges.c)
 *     PiSwIrpCancelStartCreate @ 0x14050FCB0 (PiSwIrpCancelStartCreate.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x140510528 (PiDmaGuardQueueRemoveEntry.c)
 *     RtlpAllocateHeap @ 0x140588A70 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x14058AAD4 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14058B818 (RtlpSetupExtendedBlock.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140595B2C (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405974C0 (SeSetSecurityAttributesTokenEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405B52D0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     NtAdjustGroupsToken @ 0x1405DA5F0 (NtAdjustGroupsToken.c)
 *     SepReferenceLogonSessionSilo @ 0x1405DC7FC (SepReferenceLogonSessionSilo.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605A6C (PspApplyWorkingSetLimitsToProcess.c)
 *     NtAdjustPrivilegesToken @ 0x140608190 (NtAdjustPrivilegesToken.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PspLockJobChain @ 0x1406166A0 (PspLockJobChain.c)
 *     PspLockJobConditionally @ 0x1406167C8 (PspLockJobConditionally.c)
 *     PspLockJobExclusive @ 0x140618BD4 (PspLockJobExclusive.c)
 *     PiDrvDbUnloadNode @ 0x14062A278 (PiDrvDbUnloadNode.c)
 *     PiDrvDbLoadNode @ 0x14062A394 (PiDrvDbLoadNode.c)
 *     PfSnCheckActionsNeeded @ 0x140630F78 (PfSnCheckActionsNeeded.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406552D0 (FsRtlAcquireFileExclusiveCommon.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockRootJobExclusive @ 0x14065CFF0 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x14065D058 (PspFreezeJobTree.c)
 *     CmpStopRMLog @ 0x14066D768 (CmpStopRMLog.c)
 *     NtGetMUIRegistryInfo @ 0x140681030 (NtGetMUIRegistryInfo.c)
 *     SepCreateLogonSessionTrack @ 0x1406850AC (SepCreateLogonSessionTrack.c)
 *     IoOpenDeviceRegistryKey @ 0x140688170 (IoOpenDeviceRegistryKey.c)
 *     PspSetQuotaLimits @ 0x140688A74 (PspSetQuotaLimits.c)
 *     _CmGetDeviceSoftwareKey @ 0x14068A7FC (_CmGetDeviceSoftwareKey.c)
 *     SepUpdateLogonSessionTrack @ 0x140692474 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x14069D5A0 (SeSetSessionIdToken.c)
 *     PspSetBackgroundJobTree @ 0x14069F420 (PspSetBackgroundJobTree.c)
 *     SeSetVirtualizationToken @ 0x1406A1878 (SeSetVirtualizationToken.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406A5970 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     PiPnpRtlEndOperation @ 0x1406ACCB8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406AD460 (PiPnpRtlBeginOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406B29FC (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406B2A34 (PpDevNodeLockTree.c)
 *     IopGetDeviceInterfaces @ 0x1406B32E8 (IopGetDeviceInterfaces.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406B93DC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406B9478 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1406BFFC4 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtCreateTimer @ 0x1406C5B20 (NtCreateTimer.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 *     SeSetMandatoryPolicyToken @ 0x1406EF250 (SeSetMandatoryPolicyToken.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 *     SepDeReferenceLogonSession @ 0x1406F7CC4 (SepDeReferenceLogonSession.c)
 *     MiCancelPhase0Locking @ 0x1406FE47C (MiCancelPhase0Locking.c)
 *     MmLockPagableDataSection @ 0x1406FE5A0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140709EBC (PfSnPrefetchCacheEntryUpdate.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14070DE2C (PspSetEnergyTrackingStateJobTree.c)
 *     PnpNotifyTargetDeviceChange @ 0x14071AD38 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14071B508 (PiDcHandleCustomDeviceEvent.c)
 *     PspLockJobsAndProcessExclusive @ 0x14071FB3C (PspLockJobsAndProcessExclusive.c)
 *     PopAcquireAdaptiveLock @ 0x1407252B4 (PopAcquireAdaptiveLock.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140725BC0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140727CD0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072BED0 (IoGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x14072C52C (PiCMDeleteDevice.c)
 *     PiDmListRemoveObjectWorker @ 0x140730E70 (PiDmListRemoveObjectWorker.c)
 *     PiSwDeviceFree @ 0x1407342E0 (PiSwDeviceFree.c)
 *     PiDmListAddObjectWorker @ 0x1407352C0 (PiDmListAddObjectWorker.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407358D4 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140736144 (PiPnpRtlSetDeviceRegProperty.c)
 *     PnpNotifyDeviceClassChange @ 0x140739A78 (PnpNotifyDeviceClassChange.c)
 *     PpCheckInDriverDatabase @ 0x140739F60 (PpCheckInDriverDatabase.c)
 *     IopDoDeferredSetInterfaceState @ 0x14073A250 (IopDoDeferredSetInterfaceState.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140741C2C (PiPnpRtlSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x14074307C (PnpSetDevicePropertyData.c)
 *     PiSwLock @ 0x140743564 (PiSwLock.c)
 *     IopRegisterDeviceInterface @ 0x140744910 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140744D98 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140744E48 (PiDmAddCacheReferenceForObject.c)
 *     IoSetDeviceInterfaceState @ 0x140745500 (IoSetDeviceInterfaceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407464B0 (PiPnpRtlObjectEventWorker.c)
 *     PpDeviceRegistration @ 0x140748200 (PpDeviceRegistration.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14074A960 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14074AADC (PnpUnlinkDeviceRemovalRelations.c)
 *     PiSwStopDestroy @ 0x14074BAC8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x14074BC04 (PiSwProcessParentRemoveIrp.c)
 *     PnpChainDereferenceComplete @ 0x14074C614 (PnpChainDereferenceComplete.c)
 *     PnpDisableDeviceInterfaces @ 0x14074C9E8 (PnpDisableDeviceInterfaces.c)
 *     PnpDelayedRemoveWorker @ 0x14074CB70 (PnpDelayedRemoveWorker.c)
 *     PiSwCompleteCreate @ 0x14074DC58 (PiSwCompleteCreate.c)
 *     IopGetRootDevices @ 0x14074E2DC (IopGetRootDevices.c)
 *     PiSwPdoPnPDispatch @ 0x14074E8B0 (PiSwPdoPnPDispatch.c)
 *     MiRememberUnloadedDriver @ 0x14075F2E4 (MiRememberUnloadedDriver.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140762740 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpTransWriteLog @ 0x1407631B8 (CmpTransWriteLog.c)
 *     CmpAccountForLogReservation @ 0x140766850 (CmpAccountForLogReservation.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076A88C (IopSetDeviceSecurityDescriptor.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14076C090 (IoEnumerateRegisteredFiltersList.c)
 *     PiSwProcessParentStartIrp @ 0x14076D458 (PiSwProcessParentStartIrp.c)
 *     PiSwIrpSetLifetime @ 0x14076E848 (PiSwIrpSetLifetime.c)
 *     CmpCleanupTransactionState @ 0x140770144 (CmpCleanupTransactionState.c)
 *     IopBootLog @ 0x1407716E0 (IopBootLog.c)
 *     PiSwIrpCleanup @ 0x1407734BC (PiSwIrpCleanup.c)
 *     SepBlockAccessForLogonSession @ 0x14077946C (SepBlockAccessForLogonSession.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x14077A28C (WmiAcquireSmbiosLockExclusive.c)
 *     SepDeleteLogonSessionTrack @ 0x14077A570 (SepDeleteLogonSessionTrack.c)
 *     IoUnregisterFileSystem @ 0x14077D010 (IoUnregisterFileSystem.c)
 *     CmpStartRMLog @ 0x14077D3E4 (CmpStartRMLog.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077DDA8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoRegisterFileSystem @ 0x1407807C0 (IoRegisterFileSystem.c)
 *     PiSwIrpPropertySet @ 0x14078A4A4 (PiSwIrpPropertySet.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     MiWriteProtectSystemImages @ 0x1407A1A34 (MiWriteProtectSystemImages.c)
 *     PpDevCfgProcessDevices @ 0x1407A36EC (PpDevCfgProcessDevices.c)
 *     SepRmCommandServerThread @ 0x1407AD670 (SepRmCommandServerThread.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407B3F48 (MmFreeBootDriverInitializationCode.c)
 *     IoInitializeCrashDump @ 0x1407B7F14 (IoInitializeCrashDump.c)
 *     SeExchangePrimaryToken @ 0x1407BC404 (SeExchangePrimaryToken.c)
 *     PpReleaseBootDDB @ 0x1407BD504 (PpReleaseBootDDB.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407BDA04 (PiSwIrpInterfacePropertySet.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407C5470 (SepRmGlobalSaclSetWrkr.c)
 *     IoReportRootDevice @ 0x1407C7D80 (IoReportRootDevice.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9B60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407CB578 (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407CCD30 (IoOpenDeviceInterfaceRegistryKey.c)
 *     NtFlushInstallUILanguage @ 0x1407CF9B0 (NtFlushInstallUILanguage.c)
 *     FsRtlCopyWrite @ 0x14088A8E0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B300 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlpHeatRegisterVolume @ 0x14088D118 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14088D2B0 (FsRtlpHeatUnregisterVolume.c)
 *     IopBootLogToFile @ 0x140890F14 (IopBootLogToFile.c)
 *     IopInitializeBootLogging @ 0x140891768 (IopInitializeBootLogging.c)
 *     IoUnregisterFsRegistrationChange @ 0x140893E60 (IoUnregisterFsRegistrationChange.c)
 *     IoCaptureLiveDump @ 0x1408962E8 (IoCaptureLiveDump.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E568 (PiGetDeviceRegistryProperty.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089F8F8 (PnpDeleteDeviceInterfaces.c)
 *     PnpNotifyHwProfileChange @ 0x14089FB18 (PnpNotifyHwProfileChange.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A0EE0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiSwIrpGetLifetime @ 0x1408AEAC0 (PiSwIrpGetLifetime.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B05E0 (PiCMGenerateDeviceInstance.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1148 (PiCMUnregisterDeviceInterface.c)
 *     PipKsrNotifyDrivers @ 0x1408B2FC8 (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1408B91A4 (PiDmaGuardQueueFlush.c)
 *     PipDgqInsertEntry @ 0x1408B92E0 (PipDgqInsertEntry.c)
 *     PopDripsWatchdogAcquireContextLock @ 0x1408EEE00 (PopDripsWatchdogAcquireContextLock.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408EF280 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408EF4A0 (PopDripsWatchdogNotifySessionStart.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408EF5A4 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408EF714 (PopDripsWatchdogStopWatchdog.c)
 *     TtmpStopCallout @ 0x1408FD458 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x1408FDE40 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408FE090 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408FE53C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408FE6AC (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1408FF640 (TtmpAcquireSessionById.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1408FFB00 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1408FFFD4 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x140900080 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1409003D0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140900984 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCloseEventQueue @ 0x1409053DC (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409055DC (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14090574C (TtmiWriteEventToSingleQueue.c)
 *     TtmpDeleteQueue @ 0x140905910 (TtmpDeleteQueue.c)
 *     PspGetMemoryPartitionFromJobList @ 0x140908E90 (PspGetMemoryPartitionFromJobList.c)
 *     PspSetJobMemoryPartition @ 0x14090958C (PspSetJobMemoryPartition.c)
 *     RtlZeroHeap @ 0x140915980 (RtlZeroHeap.c)
 *     SeSetPrivateNameSpaceToken @ 0x14091C8B8 (SeSetPrivateNameSpaceToken.c)
 *     SepSetServerSiloToken @ 0x14091CCB4 (SepSetServerSiloToken.c)
 *     SepAddTokenLogonSession @ 0x140923720 (SepAddTokenLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14092381C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409239CC (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x140923C20 (SepRemoveTokenLogonSession.c)
 *     ExpQuerySingleModuleInformation @ 0x14094B270 (ExpQuerySingleModuleInformation.c)
 *     NtMapCMFModule @ 0x140959B70 (NtMapCMFModule.c)
 *     AdtpBuildAccessesString @ 0x14096E308 (AdtpBuildAccessesString.c)
 *     _PnpCtxCloseMachine @ 0x140974584 (_PnpCtxCloseMachine.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 *     IoShutdownSystem @ 0x1409AAF18 (IoShutdownSystem.c)
 *     PipResetDevices @ 0x140A53B50 (PipResetDevices.c)
 *     MiUnlockBootPageSections @ 0x140A544E0 (MiUnlockBootPageSections.c)
 *     MiInitializeKernelCfg @ 0x140A55E64 (MiInitializeKernelCfg.c)
 *     IopInitCrashDumpRegCallback @ 0x140A67640 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x1402C2A60 (ExpWaitForResource.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x1402CDEB0 (ExpTryAcquireResourceExclusive.c)
 *     ExpBoostIoAfterAcquire @ 0x1402DD0E0 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x14030EAD0 (ExpApplyPrewaitBoost.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x1403113E0 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038DD64 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AACCC (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB198 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  unsigned __int8 v4; // cl
  __int16 v5; // ax
  struct _KTHREAD *v6; // rbp
  bool v7; // si
  __int64 v8; // rcx
  BOOLEAN v9; // di
  ULONG v10; // ecx
  unsigned __int64 OldIrql; // rbp
  ULONG v13; // edi
  ULONG v14; // edi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r8
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v40[4]; // [rsp+48h] [rbp-40h] BYREF

  v4 = (Wait == 0) + 1;
  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v5 = Resource->Flag & 1;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > v4 )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v4, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v5 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    memset(v40, 0, 48);
    v6 = KeGetCurrentThread();
    v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    __incgsdword(0x8678u);
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    v9 = ExpTryAcquireResourceExclusive(Resource);
    if ( v9 )
    {
      v10 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)v6;
      Resource->OwnerEntry.TableSize = v10 | 8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      __incgsdword(0x867Cu);
      __incgsdword(0x8664u);
      if ( v7 )
        PerfLogExecutiveResourceAcquire(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v9;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == v6 )
    {
      v13 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v13;
      v14 = v13 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v15 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8(v15);
      __incgsdword(0x8680u);
      __incgsdword(0x8664u);
      if ( !v7 )
        return 1;
      v37 = v14;
      v38 = 65585LL;
    }
    else
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v19 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v24 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
        }
        __writecr8(v19);
        __incgsdword(0x8688u);
        return 0;
      }
      ExpPrepareToWaitForResourceExclusive(v8, v6, v40);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v16 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
      }
      __writecr8(v16);
      __incgsdword(0x8684u);
      if ( v7 )
        PerfLogExecutiveResourceWait(65572LL, Resource, 0LL);
      ExpApplyPrewaitBoost(Resource);
      ExpWaitForResource(
        &Resource->SystemResourcesList,
        (__int64)v40,
        0x10224u,
        (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
      ExpBoostIoAfterAcquire(Resource, v6, 0LL);
      __incgsdword(0x867Cu);
      __incgsdword(0x8664u);
      if ( !v7 )
        return 1;
      v37 = 1LL;
      v38 = 65569LL;
    }
    PerfLogExecutiveResourceAcquire(v38, Resource, v37, Resource->ContentionCount);
    return 1;
  }
  return ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
}
