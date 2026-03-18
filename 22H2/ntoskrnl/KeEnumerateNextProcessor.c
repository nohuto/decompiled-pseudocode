/*
 * XREFs of KeEnumerateNextProcessor @ 0x140257190
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CF00 (HalSendNMI.c)
 *     KiSendFreeze @ 0x14020D170 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x14020D230 (KiSendThawExecution.c)
 *     KeFreezeExecution @ 0x14020D560 (KeFreezeExecution.c)
 *     KiIntSteerLogStatus @ 0x14022185C (KiIntSteerLogStatus.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140254520 (KiIpiEnlightenedGuestPriorityKick.c)
 *     HalpInterruptSendIpi @ 0x140254C30 (HalpInterruptSendIpi.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140255180 (PpmIdleWaitForDependentTransitions.c)
 *     PpmCheckComputeEnergy @ 0x1402564C0 (PpmCheckComputeEnergy.c)
 *     PpmCheckSnapAllUtility @ 0x140256700 (PpmCheckSnapAllUtility.c)
 *     PpmCheckRecordAllUtility @ 0x140256820 (PpmCheckRecordAllUtility.c)
 *     PpmParkSteerInterrupts @ 0x140256900 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256D60 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmParkDistributeUtility @ 0x140256F50 (PpmParkDistributeUtility.c)
 *     KeFlushQueuedDpcs @ 0x14028F8A0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     PopQueueTargetDpc @ 0x1402BFC20 (PopQueueTargetDpc.c)
 *     PpmEstimateIdleDuration @ 0x1402C203C (PpmEstimateIdleDuration.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     KeRemoveQueueDpcEx @ 0x14031EEF0 (KeRemoveQueueDpcEx.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14031FE10 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     HalGetMessageRoutingInfo @ 0x140320040 (HalGetMessageRoutingInfo.c)
 *     PopCheckForIdleness @ 0x14032C440 (PopCheckForIdleness.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x14033C618 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x14034B080 (KiDpcRuntimeHistoryHashTableCleanupTimerCallback.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     PpmPerfApplyProcessorStates @ 0x14034E810 (PpmPerfApplyProcessorStates.c)
 *     PpmParkReportParkedCores @ 0x1403507C0 (PpmParkReportParkedCores.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140353230 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x140356610 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140356660 (PpmParkReportUnparkedCores.c)
 *     PpmCheckMakeupSkippedChecks @ 0x140356DE0 (PpmCheckMakeupSkippedChecks.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmParkRegisterParking @ 0x14038FD40 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x140390A80 (PpmParkApplyPolicy.c)
 *     KeUpdateSoftParkRankList @ 0x14039116C (KeUpdateSoftParkRankList.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x14039130C (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403917B4 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroDetectHgsCores @ 0x1403918AC (PpmHeteroDetectHgsCores.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D3C4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1403AD65C (KeEtwInitializeCpuStarvationProvider.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507A38 (HalpPmuReservedResourcesProcessorCallback.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140549750 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055C90C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E0E0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiStopProfileTarget @ 0x140574820 (KiStopProfileTarget.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057A84C (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057D054 (KiForceIdleUpdateSchedulerParkState.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x140580350 (WheaFlushETWEventsSelectProcessor.c)
 *     PopDetermineBucketFrequencies @ 0x140583780 (PopDetermineBucketFrequencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405846FC (PpmIdleCheckCoordinatedDependency.c)
 *     PpmUnlockProcessors @ 0x1405861F8 (PpmUnlockProcessors.c)
 *     PpmCheckComputeHeteroResponse @ 0x140596500 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140596D58 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmHeteroDistributeUtility @ 0x1405973F0 (PpmHeteroDistributeUtility.c)
 *     PpmCapturePerformanceDistribution @ 0x140597AAC (PpmCapturePerformanceDistribution.c)
 *     PpmEventHgsHardwareTable @ 0x14059A37C (PpmEventHgsHardwareTable.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059E56C (PPmHeteroHgsUpdateOrderValue.c)
 *     PopProcessorInformation @ 0x1407A5E74 (PopProcessorInformation.c)
 *     PopEtIsrDpcQuery @ 0x1407B3964 (PopEtIsrDpcQuery.c)
 *     PpmHeteroDetectFavoredCores @ 0x1407EAFFC (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x14082E9E0 (PopInitializeHeteroProcessors.c)
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x140830D34 (PpmPerfResetHistoryAll.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140841B88 (PpmPerfGetFrequencyBandStats.c)
 *     PpmEventTraceControlCallback @ 0x1408650B0 (PpmEventTraceControlCallback.c)
 *     ExProcessorCounterSetCallback @ 0x14086E070 (ExProcessorCounterSetCallback.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140973378 (KiPrepareUpdateCoresHeteroMask.c)
 *     KiSynchNumaCounterSetCallback @ 0x140974050 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1409869C8 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x140986B7C (PpmPerfResizeHistoryAll.c)
 *     KiConfigureSchedulingInformation @ 0x140A8E7A4 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140A9A0F0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AF70 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A9BE64 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x140A9D9C4 (PnprQuiesceProcessors.c)
 *     PopEndMirroring @ 0x140AA28E0 (PopEndMirroring.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140B542B4 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     VslConnectSwInterrupt @ 0x140B7391C (VslConnectSwInterrupt.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B979F4 (PspCopyNodeRelativeMaskToAffinityEx.c)
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
