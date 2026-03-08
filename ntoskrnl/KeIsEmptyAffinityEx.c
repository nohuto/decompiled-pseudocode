/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140237C30
 * Callers:
 *     HalRequestIpiSpecifyVector @ 0x140230C90 (HalRequestIpiSpecifyVector.c)
 *     KiIpiSetTargetAffinity @ 0x140233704 (KiIpiSetTargetAffinity.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140233850 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KiComputeCpuSetAffinity @ 0x140237838 (KiComputeCpuSetAffinity.c)
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 *     KeRemoveQueueDpcEx @ 0x14028DB50 (KeRemoveQueueDpcEx.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     MmOutSwapProcess @ 0x1402C00EC (MmOutSwapProcess.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140328330 (KiGetNextTimerExpirationDueTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14037F6F0 (KiConfigureCpuSetSchedulingInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14038F314 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiForwardTick @ 0x1403C61D0 (KiForwardTick.c)
 *     PoExecuteIdleCheck @ 0x1403C65A0 (PoExecuteIdleCheck.c)
 *     HalpQueryProfileSource @ 0x140505B3C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140505CD8 (HalpQueryProfileSourceList.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14051BCC0 (EmonReleaseProfileResourcesInternal.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140572310 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140581880 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140583CC8 (PpmUnlockProcessors.c)
 *     PpmParkComputeUnparkMask @ 0x14059A174 (PpmParkComputeUnparkMask.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059C04C (PPmHeteroHgsUpdateOrderValue.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x14078B504 (PspSetEffectiveJobLimits.c)
 *     RtlUpdateSwapReference @ 0x140818560 (RtlUpdateSwapReference.c)
 *     PpmParkParkingAvailable @ 0x1408266FC (PpmParkParkingAvailable.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140828BE8 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140970358 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeDeleteCpuPartition @ 0x140972338 (KeDeleteCpuPartition.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409ACA80 (PspSetProcessAffinityUpdateMode.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1528 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     PsInitializeBootCpuPartitions @ 0x140B6EAD4 (PsInitializeBootCpuPartitions.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140B937E4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax

  v1 = 0;
  if ( !*a1 )
    return 1LL;
  while ( !*(_QWORD *)&a1[4 * v1 + 4] )
  {
    if ( ++v1 >= *a1 )
      return 1LL;
  }
  return 0LL;
}
