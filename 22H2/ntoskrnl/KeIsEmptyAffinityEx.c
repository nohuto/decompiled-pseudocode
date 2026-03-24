/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140228520
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x140225560 (KiGetNextTimerExpirationDueTime.c)
 *     PoExecuteIdleCheck @ 0x140227E10 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x140228E20 (PpmParkSteerInterrupts.c)
 *     MmOutSwapProcess @ 0x140249E04 (MmOutSwapProcess.c)
 *     KeRemoveQueueDpcEx @ 0x1403214A0 (KeRemoveQueueDpcEx.c)
 *     KiIpiSendRequest @ 0x140343EE0 (KiIpiSendRequest.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x1403443A4 (KiIpiEnlightenedGuestPriorityKick.c)
 *     EmonQueryInformation @ 0x140376660 (EmonQueryInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C1DF4 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpQueryProfileSourceList @ 0x1404BEF50 (HalpQueryProfileSourceList.c)
 *     Amd64QueryInformation @ 0x1404DDCE0 (Amd64QueryInformation.c)
 *     HvlParkedVirtualProcessors @ 0x1404F7BD0 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x14051C2A0 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140565450 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140567C38 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1406937D4 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14077CD80 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     PpmParkParkingAvailable @ 0x1407BB1D0 (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1407BC0F8 (PpmHeteroComputeRelativePerformance.c)
 *     RtlUpdateSwapReference @ 0x1407CABDC (RtlUpdateSwapReference.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A5DC (EtwpLoadMicroarchitecturalProfileGroup.c)
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
