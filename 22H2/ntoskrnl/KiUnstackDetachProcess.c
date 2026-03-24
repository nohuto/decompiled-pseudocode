/*
 * XREFs of KiUnstackDetachProcess @ 0x140206FC0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140204390 (IoRemoveIoCompletion.c)
 *     MmEnforceWorkingSetLimit @ 0x140251A38 (MmEnforceWorkingSetLimit.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiDeleteFinalPageTables @ 0x1402EA0BC (MiDeleteFinalPageTables.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x140311DD8 (KeForceDetachProcess.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140313730 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     PsQueryProcessCommandLine @ 0x1403184E0 (PsQueryProcessCommandLine.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14031DD54 (PspIsProcessReadyForRemoteThread.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     SepRmCallLsa @ 0x14034D310 (SepRmCallLsa.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034E538 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1403509D8 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140352B08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MiFlushAllPages @ 0x140382774 (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x1403A2D30 (MiEmptyAccessLogs.c)
 *     SepAdtLogAuditRecord @ 0x1403C20B4 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x1405058F0 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x140513980 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x14051D43C (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x14052CE6C (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053C92C (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x140546D20 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x14055B238 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599544 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140599900 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x1405B93A0 (ExpSvmServicePageFault.c)
 *     CmpDelayCloseWorker @ 0x1405EC390 (CmpDelayCloseWorker.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x1405F7640 (MiFindNextEnclaveBoundary.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     EtwpWriteProcessEvent @ 0x140602B04 (EtwpWriteProcessEvent.c)
 *     ExSweepHandleTable @ 0x1406045D0 (ExSweepHandleTable.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605A6C (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x140605C30 (MmAssignProcessToJob.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     ExpWnfWriteStateData @ 0x140610910 (ExpWnfWriteStateData.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611674 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x140611BDC (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1406121F8 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x140612AB4 (PspWritePebAffinityInfo.c)
 *     AlpcViewDestroyProcedure @ 0x14061E250 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x14061E510 (MiUnmapViewOfSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E9B0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     AlpcpRestoreWriteAccess @ 0x14061FD70 (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x14061FE30 (MmProbeAndLockProcessPages.c)
 *     EtwTraceAppStateChange @ 0x14062B3BC (EtwTraceAppStateChange.c)
 *     PfSnAsyncPrefetchWorker @ 0x14062E400 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x140632CA0 (PfSnPopulateReadList.c)
 *     MmDeleteTeb @ 0x140636AF0 (MmDeleteTeb.c)
 *     MiMapViewOfSection @ 0x140639150 (MiMapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x14063AD20 (MmFreeVirtualMemory.c)
 *     ObCloseHandleTableEntry @ 0x140642D80 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x140643680 (ObpIncrementHandleCountEx.c)
 *     MmFlushVirtualMemory @ 0x140668FB4 (MmFlushVirtualMemory.c)
 *     MiUnmapImageInSystemSpace @ 0x14066BB40 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x14066BCCC (MiMapImageInSystemSpace.c)
 *     CmpCleanUpKCBCacheTable @ 0x14066D23C (CmpCleanUpKCBCacheTable.c)
 *     NtCommitRegistryTransaction @ 0x14066D8A0 (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x14066DB30 (CmpCleanupLightWeightTransaction.c)
 *     PspWow64InitThread @ 0x140679DC0 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14067AC88 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PoEnergyContextStart @ 0x14067C358 (PoEnergyContextStart.c)
 *     NtQueryMultipleValueKey @ 0x140686BA0 (NtQueryMultipleValueKey.c)
 *     MmProcessWorkingSetControl @ 0x140689770 (MmProcessWorkingSetControl.c)
 *     PspWow64SetupUserStack @ 0x140692AAC (PspWow64SetupUserStack.c)
 *     NtFlushKey @ 0x140696C00 (NtFlushKey.c)
 *     PspSetupReservedUserMappings @ 0x14069895C (PspSetupReservedUserMappings.c)
 *     CmLoadKey @ 0x14069DA54 (CmLoadKey.c)
 *     EtwpTiQueryVad @ 0x14069E23C (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406A13E4 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1406A1938 (PspDeleteUserStack.c)
 *     CmRmFinalizeRecovery @ 0x1406A24AC (CmRmFinalizeRecovery.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BC360 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1406BEC0C (EtwpRealtimeInjectEtwBuffer.c)
 *     PspWriteTebIdealProcessor @ 0x1406C0488 (PspWriteTebIdealProcessor.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     MmCreateTeb @ 0x1406C4BCC (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1406C5144 (PspSetupUserStack.c)
 *     PspWriteTebImpersonationInfo @ 0x1406D4040 (PspWriteTebImpersonationInfo.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406DA940 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1406DADA8 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406DAFE8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406DE9E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpInitHiveFromFile @ 0x1406E9D98 (CmpInitHiveFromFile.c)
 *     ObpDecrementHandleCount @ 0x1406F6CE4 (ObpDecrementHandleCount.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObSetHandleAttributes @ 0x1406F9440 (ObSetHandleAttributes.c)
 *     MiInSwapStoreWorker @ 0x1406FB070 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x1406FB498 (MmPrefetchVirtualMemory.c)
 *     MmInitializeProcessAddressSpace @ 0x1406FBB04 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1406FC94C (PsMapSystemDlls.c)
 *     MmNewProcessInitialized @ 0x140706F00 (MmNewProcessInitialized.c)
 *     MiCombineIdenticalPages @ 0x140726870 (MiCombineIdenticalPages.c)
 *     NtSaveKeyEx @ 0x140729810 (NtSaveKeyEx.c)
 *     NtRollbackRegistryTransaction @ 0x140733A80 (NtRollbackRegistryTransaction.c)
 *     CmpCleanupTransactionState @ 0x140770144 (CmpCleanupTransactionState.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C8DC (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x1407925D0 (EtwpProcessEnumCallback.c)
 *     CmpInitializeRegistryProcess @ 0x140799280 (CmpInitializeRegistryProcess.c)
 *     MmCreateShadowMapping @ 0x1407A04DC (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AB024 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407C4430 (PsStartSiloMonitor.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C8C58 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x1407CC1D4 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D0DE4 (MmInitializeHandBuiltProcess2.c)
 *     NtCompressKey @ 0x140868330 (NtCompressKey.c)
 *     NtRenameKey @ 0x140868C80 (NtRenameKey.c)
 *     NtRestoreKey @ 0x140869520 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1408697F0 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140869A30 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x140869AC0 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x14086A3B8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x14086A6C8 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AB7C (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F224 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpFlushBackupHive @ 0x140870F90 (CmpFlushBackupHive.c)
 *     CmReconcileAndValidateAllHives @ 0x1408725F0 (CmReconcileAndValidateAllHives.c)
 *     CmpRmUnDoPhase @ 0x140875A44 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x140876D00 (CmpForceFlushWorker.c)
 *     DbgkSendSystemDllMessages @ 0x14088452C (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x140884B7C (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140884E1C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140886860 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140886DA0 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x140891974 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140891C50 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x1408BD2DC (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C35C0 (AlpcpForceUnlinkSecureView.c)
 *     MiHotPatchAllProcesses @ 0x1408CA2C8 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408CC00C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CDF38 (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x1408D1070 (MmIsFileMapped.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12F0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmDeleteShadowMapping @ 0x1408D19B4 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D21D8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3214 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3A0C (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D3C4C (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x1408D3D70 (NtCreateEnclave.c)
 *     MiAllocateChildVads @ 0x1408D8AE0 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D90B0 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D9404 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x1408D97D0 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D9B50 (MiInSwapSharedWorkingSetWorker.c)
 *     MiCopyLargeVad @ 0x1408D9D70 (MiCopyLargeVad.c)
 *     MiScrubProcesses @ 0x1408DC060 (MiScrubProcesses.c)
 *     PspShutdownCsrProcess @ 0x1409066A0 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x140907510 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907D54 (PspProcessDynamicEHContinuationTargets.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140908770 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x140909FEC (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x14090A62C (PspSetupUserShadowStack.c)
 *     PsUnregisterSiloMonitor @ 0x14090B530 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14090CB8C (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x14092FA80 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x14093433C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1409345D0 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EBB0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14094131C (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x140944AD0 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 *     EmpCacheBiosDate @ 0x140A4768C (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x140A477DC (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A4B0C0 (PspInitPhase3.c)
 * Callees:
 *     KiSwapProcess @ 0x1402071F0 (KiSwapProcess.c)
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 *     KiMoveApcState @ 0x1402079C0 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x140207A40 (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FD550 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, int a2)
{
  __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  int v6; // esi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v9; // rcx
  $C459BD0D405E8E46662177FB3D0A143F *v10; // rdi
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  bool v20; // zf
  _DWORD *v21; // r9
  struct _KPRCB *v22; // rdi
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+68h] [rbp+10h]
  int v35; // [rsp+70h] [rbp+18h] BYREF

  v34 = a2;
  result = *(_QWORD *)(a1 + 32);
  v3 = a2;
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess();
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v6 = a2 & 2;
      if ( (a2 & 2) != 0 )
      {
        CurrentIrql = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v33 = 0;
        v9 = CurrentPrcb->SchedulerAssist;
        if ( v9 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v9[6];
            v9[6] = v15 + 1;
            if ( v15 == -1 )
LABEL_35:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v12 = CurrentPrcb->SchedulerAssist;
          if ( v12 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v16 = v12[6] - 1;
              v12[6] = v16;
              if ( !v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v33);
          while ( CurrentThread->ThreadLock );
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v17 = v13[6];
              v13[6] = v17 + 1;
              if ( v17 == -1 )
                goto LABEL_35;
            }
          }
        }
      }
      if ( CurrentThread->ApcState.KernelApcPending )
      {
        do
        {
          if ( CurrentIrql || CurrentThread->SpecialApcDisable )
            break;
          KiReleaseThreadLockSafe(CurrentThread);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v18 = KeGetCurrentPrcb();
              v19 = v18->SchedulerAssist;
              v20 = (v19[5] & 0xFFFF0001) == 0;
              v19[5] &= 0xFFFF0001;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v21 = KeGetCurrentPrcb()->SchedulerAssist;
            v21[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v22 = KeGetCurrentPrcb();
          v35 = 0;
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v24 = v23[6];
              v23[6] = v24 + 1;
              if ( v24 == -1 )
LABEL_55:
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v25 = v22->SchedulerAssist;
            if ( v25 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v26 = v25[6] - 1;
                v25[6] = v26;
                if ( !v26 )
                  KiRemoveSystemWorkPriorityKick(v22);
              }
            }
            do
              KeYieldProcessorEx(&v35);
            while ( CurrentThread->ThreadLock );
            v27 = v22->SchedulerAssist;
            if ( v27 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v28 = v27[6];
                v27[6] = v28 + 1;
                if ( v28 == -1 )
                  goto LABEL_55;
              }
            }
          }
        }
        while ( CurrentThread->ApcState.KernelApcPending );
        v3 = v34;
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($C459BD0D405E8E46662177FB3D0A143F *)v10->ApcState.ApcListHead[0].Flink != v10)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState(&CurrentThread->600, &CurrentThread->152);
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v6 )
        KiReleaseThreadLockSafe(CurrentThread);
      result = KiSwapProcess(CurrentThread->ApcState.Process, Process);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v6 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v11 = (unsigned int)CurrentIrql + 1;
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v20 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( (v3 & 1) == 0 )
        result = KiDecrementProcessStackCount(Process);
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        LOBYTE(v11) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(v11);
      }
    }
  }
  return result;
}
