/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1407E2A54
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201AD0 (ExCleanTimerResolutionRequest.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     PspSetProcessTimerResolutionPolicy @ 0x140790FB0 (PspSetProcessTimerResolutionPolicy.c)
 *     NtSetTimerResolution @ 0x1407DFD50 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     ExpRefreshSystemTime @ 0x1408132EC (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140850DB4 (ExpReadLeapSecondData.c)
 *     PopPolicyTimeChange @ 0x140991540 (PopPolicyTimeChange.c)
 *     ExpSetTimeZoneInformation @ 0x1409F484C (ExpSetTimeZoneInformation.c)
 *     ExTraceTimerResolution @ 0x1409F4DC8 (ExTraceTimerResolution.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F52D8 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F54B0 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x140A8EE20 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140AAD010 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

char __fastcall ExAcquireTimeRefreshLock(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireResourceExclusiveLite(&ExpTimeRefreshLock, a1) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
