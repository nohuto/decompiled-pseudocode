/*
 * XREFs of KiStackAttachProcess @ 0x14030DF30
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020037C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     KiUpdateProcessConcurrencyCount @ 0x14022B7A0 (KiUpdateProcessConcurrencyCount.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiDeleteFinalPageTables @ 0x1402A54F4 (MiDeleteFinalPageTables.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiAttachWorkingSet @ 0x1402D4FE4 (MiAttachWorkingSet.c)
 *     KeForceAttachProcess @ 0x1402E6610 (KeForceAttachProcess.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SepRmCallLsa @ 0x1402E8690 (SepRmCallLsa.c)
 *     PsQueryProcessCommandLine @ 0x1402E8A40 (PsQueryProcessCommandLine.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     IoRemoveIoCompletion @ 0x140315A70 (IoRemoveIoCompletion.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1403889B4 (CmSiSetProcessWorkingSetMaximum.c)
 *     CmSiProcessTupleStartFromHandle @ 0x140388A6C (CmSiProcessTupleStartFromHandle.c)
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140554680 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14056D170 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x14057CAEC (KiTpWriteMemory.c)
 *     PopStateTransitionTimeoutDispatch @ 0x14058D1B0 (PopStateTransitionTimeoutDispatch.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405BF358 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405BF8A0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     SmQuerySystemInformation @ 0x1405CB680 (SmQuerySystemInformation.c)
 *     ExpSvmServicePageFault @ 0x14060C5F0 (ExpSvmServicePageFault.c)
 *     MmSetCommitReleaseEligibility @ 0x14061762C (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1406332BC (MmUpdateOldWorkingSetPages.c)
 *     MiLockDownWorkingSet @ 0x140662BB0 (MiLockDownWorkingSet.c)
 *     MiInSwapStoreWorker @ 0x14067E3D0 (MiInSwapStoreWorker.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1406A2090 (EtwpRealtimeInjectEtwBuffer.c)
 *     AlpcViewDestroyProcedure @ 0x1406A2290 (AlpcViewDestroyProcedure.c)
 *     MmProbeAndLockProcessPages @ 0x1406A40F0 (MmProbeAndLockProcessPages.c)
 *     PfSnPopulateReadList @ 0x1406A42B0 (PfSnPopulateReadList.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     MmCreatePeb @ 0x140706A60 (MmCreatePeb.c)
 *     PspSetupUserProcessAddressSpace @ 0x14070733C (PspSetupUserProcessAddressSpace.c)
 *     PspSetupReservedUserMappings @ 0x140707AE8 (PspSetupReservedUserMappings.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     ExpWnfWriteStateData @ 0x14071B1B0 (ExpWnfWriteStateData.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14071D7DC (EtwQueryProcessTelemetryInfo.c)
 *     PspQueryQuotaLimits @ 0x14071F77C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     PsMapSystemDlls @ 0x1407279B4 (PsMapSystemDlls.c)
 *     MmInitializeProcessAddressSpace @ 0x1407291A8 (MmInitializeProcessAddressSpace.c)
 *     NtResetWriteWatch @ 0x140755F20 (NtResetWriteWatch.c)
 *     NtSetInformationVirtualMemory @ 0x14075BCB0 (NtSetInformationVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14077C5B8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwpTiQueryVad @ 0x140793610 (EtwpTiQueryVad.c)
 *     PspSetQuotaLimits @ 0x140794940 (PspSetQuotaLimits.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140799184 (SmProcessStoreMemoryPriorityRequest.c)
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1407C7210 (NtProtectVirtualMemory.c)
 *     ObSetHandleAttributes @ 0x1407D8910 (ObSetHandleAttributes.c)
 *     SmFirstTimeInit @ 0x1407DDCE0 (SmFirstTimeInit.c)
 *     PfSnAsyncPrefetchWorker @ 0x1407E3C20 (PfSnAsyncPrefetchWorker.c)
 *     PspWriteTebIdealProcessor @ 0x1407ED78C (PspWriteTebIdealProcessor.c)
 *     MiCombineIdenticalPages @ 0x1407F7D84 (MiCombineIdenticalPages.c)
 *     MmCreateShadowMapping @ 0x14080B624 (MmCreateShadowMapping.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     PsStartSiloMonitor @ 0x140848CF0 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x140855B00 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x14085D06C (MmInitializeHandBuiltProcess2.c)
 *     PspIumGetPhysicalPage @ 0x1408A11F0 (PspIumGetPhysicalPage.c)
 *     DbgkSendSystemDllMessages @ 0x140933E74 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140934758 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140934820 (DbgkpPostFakeThreadMessages.c)
 *     DbgkUserReportWorkRoutine @ 0x140936CD0 (DbgkUserReportWorkRoutine.c)
 *     IopRaiseHardError @ 0x1409423B0 (IopRaiseHardError.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1409726C0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x140973724 (KiTpReadImageData.c)
 *     PfSnAppLaunchScenarioControl @ 0x14097C6E0 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1409AB250 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409ABD84 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1409AC050 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1409ACBB0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimits @ 0x1409AEF10 (PspApplyWorkingSetLimits.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1070 (PsUnregisterSiloMonitor.c)
 *     VmpPrefetchWorker @ 0x1409DA890 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1409E4A14 (EtwpUMGLEnabled.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409ECC80 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409EF5D0 (EtwpCovSampEnumerateProcess.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F2804 (EtwpTrackGuidEntryRegistrations.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A025D0 (NtPssCaptureVaSpaceBulk.c)
 *     MmQueryBadAddresses @ 0x140A2D108 (MmQueryBadAddresses.c)
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3892C (MiQueryProcessActivePatches.c)
 *     MmDeleteShadowMapping @ 0x140A39B58 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3B45C (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x140A3BAD0 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A3BD1C (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x140A3BE40 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140A3C320 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x140A3C600 (NtLoadEnclaveData.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3CCE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140A40560 (MiInSwapSharedWorkingSetWorker.c)
 *     MmProcessWorkingSetControl @ 0x140A408A4 (MmProcessWorkingSetControl.c)
 *     MiScrubActiveLargePage @ 0x140A43704 (MiScrubActiveLargePage.c)
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x140A46058 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x140A4642C (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140A466EC (MiCopyLargeVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAA0D0 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140AAED30 (ExpDebuggerWorker.c)
 *     PspInitPhase3 @ 0x140B726D0 (PspInitPhase3.c)
 *     EmpMapPhysicalAddress @ 0x140B8FC4C (EmpMapPhysicalAddress.c)
 * Callees:
 *     KiAttachProcess @ 0x14030E080 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // si
  volatile int result; // eax
  int v9; // ecx
  _DWORD *SchedulerAssist; // r8
  __int64 v11; // r9
  int v12; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  result = KeGetPcr()->Prcb.DpcRequestSummary;
  if ( (result & 0x10001) != 0 )
  {
    v9 = a2 & 2;
    if ( (a2 & 2) == 0 )
LABEL_22:
      KeBugCheckEx(
        5u,
        (ULONG_PTR)BugCheckParameter1,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  }
  else
  {
    v9 = a2 & 2;
  }
  if ( (*(_DWORD *)&BugCheckParameter1->0 & 0x800) != 0 )
    goto LABEL_22;
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    if ( !v9 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v11) = 4;
        else
          v11 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v11;
      }
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( CurrentThread->ThreadLock );
      }
    }
    if ( CurrentThread->ApcStateIndex )
    {
      return KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, a2, a3);
    }
    else
    {
      result = KiAttachProcess(
                 (_DWORD)CurrentThread,
                 (_DWORD)BugCheckParameter1,
                 CurrentIrql,
                 a2,
                 (__int64)&CurrentThread->600);
      *(_QWORD *)(a3 + 32) = 0LL;
    }
  }
  return result;
}
