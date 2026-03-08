/*
 * XREFs of KeEnumerateNextProcessor @ 0x140234A60
 * Callers:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     PpmEstimateIdleDuration @ 0x14022A74C (PpmEstimateIdleDuration.c)
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140233850 (KiIpiEnlightenedGuestPriorityKick.c)
 *     PpmCheckComputeEnergy @ 0x140233D90 (PpmCheckComputeEnergy.c)
 *     PpmCheckSnapAllUtility @ 0x140233FD0 (PpmCheckSnapAllUtility.c)
 *     PpmCheckRecordAllUtility @ 0x1402340F0 (PpmCheckRecordAllUtility.c)
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140234630 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmParkDistributeUtility @ 0x140234820 (PpmParkDistributeUtility.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140235F24 (PpmIdleWaitForDependentTransitions.c)
 *     PopQueueTargetDpc @ 0x140235F8C (PopQueueTargetDpc.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeRemoveQueueDpcEx @ 0x14028DB50 (KeRemoveQueueDpcEx.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14028EFF0 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     HalGetMessageRoutingInfo @ 0x14028F220 (HalGetMessageRoutingInfo.c)
 *     KiIntSteerLogStatus @ 0x1402A8FAC (KiIntSteerLogStatus.c)
 *     KeFlushQueuedDpcs @ 0x1402AF200 (KeFlushQueuedDpcs.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     PopCheckForIdleness @ 0x1402BC5F0 (PopCheckForIdleness.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1402D3B88 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x1402DFFD0 (KiDpcRuntimeHistoryHashTableCleanupTimerCallback.c)
 *     PpmParkReportParkedCores @ 0x1402E3AE0 (PpmParkReportParkedCores.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1402E7970 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x1402EA9E0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x1402EAA30 (PpmParkReportUnparkedCores.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1402EB350 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfApplyProcessorStates @ 0x1402ED3A0 (PpmPerfApplyProcessorStates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 *     KiSendThawExecution @ 0x14036B330 (KiSendThawExecution.c)
 *     KiSendFreeze @ 0x14036B528 (KiSendFreeze.c)
 *     HalSendNMI @ 0x14036B5E0 (HalSendNMI.c)
 *     PpmParkRegisterParking @ 0x14038D880 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x14038E5E0 (PpmParkApplyPolicy.c)
 *     KeUpdateSoftParkRankList @ 0x14038ECCC (KeUpdateSoftParkRankList.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x14038EE6C (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14038F314 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroDetectHgsCores @ 0x14038F40C (PpmHeteroDetectHgsCores.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1403A807C (KeEtwInitializeCpuStarvationProvider.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140505958 (HalpPmuReservedResourcesProcessorCallback.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1405472B0 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055A46C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056BAF0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiStopProfileTarget @ 0x140572310 (KiStopProfileTarget.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057833C (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057AB44 (KiForceIdleUpdateSchedulerParkState.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057DE20 (WheaFlushETWEventsSelectProcessor.c)
 *     PopDetermineBucketFrequencies @ 0x140581250 (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405821CC (PpmIdleCheckCoordinatedDependency.c)
 *     PpmUnlockProcessors @ 0x140583CC8 (PpmUnlockProcessors.c)
 *     PpmCheckComputeHeteroResponse @ 0x140593FE0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140594838 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmHeteroDistributeUtility @ 0x140594ED0 (PpmHeteroDistributeUtility.c)
 *     PpmCapturePerformanceDistribution @ 0x14059558C (PpmCapturePerformanceDistribution.c)
 *     PpmEventHgsHardwareTable @ 0x140597E5C (PpmEventHgsHardwareTable.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059C04C (PPmHeteroHgsUpdateOrderValue.c)
 *     PopEtIsrDpcQuery @ 0x1407824C0 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14078A138 (PopProcessorInformation.c)
 *     PpmHeteroDetectFavoredCores @ 0x14079C25C (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x140828CC4 (PpmPerfResetHistoryAll.c)
 *     PpmPerfGetFrequencyBandStats @ 0x14083F534 (PpmPerfGetFrequencyBandStats.c)
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 *     ExProcessorCounterSetCallback @ 0x14086BB50 (ExProcessorCounterSetCallback.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140970358 (KiPrepareUpdateCoresHeteroMask.c)
 *     KiSynchNumaCounterSetCallback @ 0x140971030 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x140983918 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x140983ACC (PpmPerfResizeHistoryAll.c)
 *     KiConfigureSchedulingInformation @ 0x140A8B1B4 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140A96FB0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x140A97E30 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A98D24 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x140A9A884 (PnprQuiesceProcessors.c)
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140B43D24 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     VslConnectSwInterrupt @ 0x140B6F5B0 (VslConnectSwInterrupt.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B937E4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int16 v7; // ax

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_4:
    _BitScanForward64(&v5, v4);
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v5];
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = *((_WORD *)a2 + 8) + 1;
      *((_WORD *)a2 + 8) = v7;
      if ( v7 >= v3 )
        return 3221226021LL;
      v4 = *(_QWORD *)&(*a2)[4 * v7 + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_4;
    }
  }
}
