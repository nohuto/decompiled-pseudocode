/*
 * XREFs of KiStackAttachProcess @ 0x14025BB40
 * Callers:
 *     IoRemoveIoCompletion @ 0x140204390 (IoRemoveIoCompletion.c)
 *     MmEnforceWorkingSetLimit @ 0x140251A38 (MmEnforceWorkingSetLimit.c)
 *     KeForceAttachProcess @ 0x14025BAD8 (KeForceAttachProcess.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiDeleteFinalPageTables @ 0x1402EA0BC (MiDeleteFinalPageTables.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
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
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
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
 *     MiMapImageInSystemSpace @ 0x14066BCCC (MiMapImageInSystemSpace.c)
 *     PspWow64InitThread @ 0x140679DC0 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14067AC88 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PoEnergyContextStart @ 0x14067C358 (PoEnergyContextStart.c)
 *     MmProcessWorkingSetControl @ 0x140689770 (MmProcessWorkingSetControl.c)
 *     PspWow64SetupUserStack @ 0x140692AAC (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x14069895C (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x14069E23C (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406A13E4 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1406A1938 (PspDeleteUserStack.c)
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
 *     ObpDecrementHandleCount @ 0x1406F6CE4 (ObpDecrementHandleCount.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObSetHandleAttributes @ 0x1406F9440 (ObSetHandleAttributes.c)
 *     MiInSwapStoreWorker @ 0x1406FB070 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x1406FB498 (MmPrefetchVirtualMemory.c)
 *     MmInitializeProcessAddressSpace @ 0x1406FBB04 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1406FC94C (PsMapSystemDlls.c)
 *     MmNewProcessInitialized @ 0x140706F00 (MmNewProcessInitialized.c)
 *     MiCombineIdenticalPages @ 0x140726870 (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C8DC (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x1407925D0 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x1407A04DC (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AB024 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407C4430 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x1407CC1D4 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D0DE4 (MmInitializeHandBuiltProcess2.c)
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
 *     EmpMapPhysicalAddress @ 0x140A477DC (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A4B0C0 (PspInitPhase3.c)
 * Callees:
 *     KiAttachProcess @ 0x140207300 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x140207990 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x1402F27D0 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FA9E0 (HvlSwitchVirtualAddressSpace.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v6; // r10
  char v7; // r14
  unsigned __int64 v9; // rax
  int v10; // ebp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  $B1BEF1DC70D0553D212470EE5F0BB1FC *v13; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _KTHREAD *v15; // r8
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  struct _KPRCB *v19; // rcx
  _KPROCESS *Process; // r12
  unsigned __int64 GroupIndex; // r15
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r14
  _DWORD *v30; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v32; // rcx
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  bool v49; // zf
  int v51[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v52; // [rsp+90h] [rbp+18h]
  int v53; // [rsp+98h] [rbp+20h] BYREF

  v52 = a3;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  v6 = a3;
  v7 = a2;
  LOBYTE(SchedulerAssist) = (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0;
  LOBYTE(v9) = (a2 & 2) == 0;
  if ( ((unsigned __int8)SchedulerAssist & (unsigned __int8)v9) != 0 || (*(_DWORD *)&BugCheckParameter1->0 & 0x400) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    v10 = a2 & 2;
    if ( (a2 & 2) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        a3 = (unsigned int)a2 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v53 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v35 = v12[6];
          v12[6] = v35 + 1;
          if ( v35 == -1 )
LABEL_47:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v33 = CurrentPrcb->SchedulerAssist;
        if ( v33 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v36 = v33[6] - 1;
            v33[6] = v36;
            if ( !v36 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v53, a2, a3, (__int64)SchedulerAssist);
        while ( CurrentThread->ThreadLock );
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v34[6];
            v34[6] = v37 + 1;
            if ( v37 == -1 )
              goto LABEL_47;
          }
        }
      }
      v6 = v52;
    }
    if ( CurrentThread->ApcStateIndex )
    {
      LOBYTE(v9) = KiAttachProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql, v7, v6);
    }
    else
    {
      v13 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      Flink = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( Flink == (struct _KTHREAD *)&CurrentThread->152 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v13;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v13;
        Blink->Flink = (struct _LIST_ENTRY *)v13;
      }
      v15 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v16 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v15 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v16->Flink = v16;
        CurrentThread->SavedApcState.UserApcPendingAll = 0;
      }
      else
      {
        v32 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v16->Flink = (struct _LIST_ENTRY *)v15;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v32;
        v15->Header.WaitListHead.Flink = v16;
        v32->Flink = v16;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[0].Flink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcStateIndex = 1;
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      if ( (v7 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        KiReleaseThreadLockSafe(CurrentThread);
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        v28 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
        {
          v27 = KeGetCurrentPrcb()->SchedulerAssist;
          v25 = (-1LL << (v28 + 1)) & 4;
          v26 = (unsigned int)v25 | v27[5];
          v27[5] = v26;
        }
        v29 = KeGetCurrentPrcb();
        v51[0] = 0;
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v38 = v30[6];
            v30[6] = v38 + 1;
            if ( v38 == -1 )
LABEL_59:
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v39 = v29->SchedulerAssist;
          if ( v39 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v40 = v39[6] - 1;
              v39[6] = v40;
              if ( !v40 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
          do
            KeYieldProcessorEx(v51, v25, v26, (__int64)v27);
          while ( CurrentThread->ThreadLock );
          v41 = v29->SchedulerAssist;
          if ( v41 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v42 = v41[6];
              v41[6] = v42 + 1;
              if ( v42 == -1 )
                goto LABEL_59;
            }
          }
        }
        v6 = v52;
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      if ( !v10 )
      {
        CurrentThread->ThreadLock = 0LL;
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v43 = v18[6] - 1;
            v18[6] = v43;
            if ( !v43 )
            {
              KiRemoveSystemWorkPriorityKick(v17);
              v6 = v52;
            }
          }
        }
      }
      v19 = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = v19->GroupIndex;
      v22 = 8LL * v19->Group + 376;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v22),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v24 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v24 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x9000u, v24);
        KiSetAddressPolicy();
        v6 = v52;
      }
      LOBYTE(v9) = HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
      {
        LOBYTE(v9) = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
        v6 = v52;
      }
      else
      {
        __writecr3(DirectoryTableBase);
      }
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v44 = __readcr4();
        if ( (v44 & 0x20080) != 0 )
        {
          LOBYTE(v9) = v44 ^ 0x80;
          __writecr4(v44 ^ 0x80);
          __writecr4(v44);
        }
        else
        {
          v9 = __readcr3();
          __writecr3(v9);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v10 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v45 = KeGetCurrentIrql();
            if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
            {
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v49 = (v48 & v47[5]) == 0;
              v47[5] &= v48;
              if ( v49 )
              {
                KiRemoveSystemWorkPriorityKick(v46);
                v6 = v52;
              }
            }
          }
        }
        LOBYTE(v9) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      *(_QWORD *)(v6 + 32) = 0LL;
    }
  }
  return v9;
}
