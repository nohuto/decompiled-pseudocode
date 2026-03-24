/*
 * XREFs of KeEnumerateNextProcessor @ 0x1402293C0
 * Callers:
 *     PpmIdlePrepare @ 0x140224F50 (PpmIdlePrepare.c)
 *     PpmParkSteerInterrupts @ 0x140228E20 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140229440 (KeIntSteerPeriodic.c)
 *     PpmParkDistributeUtility @ 0x14022A4B0 (PpmParkDistributeUtility.c)
 *     PpmParkReportParkedCores @ 0x140303400 (PpmParkReportParkedCores.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1403059D0 (PpmCheckMakeupSkippedChecks.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140305BF0 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x140307C00 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140307C50 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14031A4E0 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeRemoveQueueDpcEx @ 0x1403214A0 (KeRemoveQueueDpcEx.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x1403443A4 (KiIpiEnlightenedGuestPriorityKick.c)
 *     PopQueueTargetDpc @ 0x140344920 (PopQueueTargetDpc.c)
 *     PopCheckForIdleness @ 0x140349EF0 (PopCheckForIdleness.c)
 *     KeFlushQueuedDpcs @ 0x14035DC40 (KeFlushQueuedDpcs.c)
 *     HalGetMessageRoutingInfo @ 0x140376DF0 (HalGetMessageRoutingInfo.c)
 *     PpmPerfApplyProcessorStates @ 0x140398250 (PpmPerfApplyProcessorStates.c)
 *     PpmParkRegisterParking @ 0x1403C10C0 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x1403C18E4 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x1403C1D98 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C1DF4 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonAllocateResources @ 0x1404D30F8 (EmonAllocateResources.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404FA7B0 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14050B6D8 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x14051BFE0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x14051C2A0 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x14051D630 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14051E0C0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x14051E190 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14052275C (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405233F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmEstimateIdleDuration @ 0x140565914 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140566080 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405670C4 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x140567C38 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x140576B5C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x140577B50 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x140577E80 (PpmHeteroDistributeUtility.c)
 *     PopEtIsrDpcQuery @ 0x140686790 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x140780D7C (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407BB3CC (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x1407BC164 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x1407D5310 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BB000 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E625C (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E63F4 (PpmPerfResizeHistoryAll.c)
 *     PopEndMirroring @ 0x140996240 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x14099F9F0 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ABDE0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409ACB98 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409ACF2C (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1409AE8B4 (PnprQuiesceProcessors.c)
 *     VslConnectSwInterrupt @ 0x140A5F044 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

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
    while ( (unsigned __int16)++*((_WORD *)a2 + 8) < v3 )
    {
      v4 = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_4;
    }
    return 3221226021LL;
  }
}
