/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1407095E4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036C734 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     PspSetProcessPpmPolicy @ 0x140695650 (PspSetProcessPpmPolicy.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     ExTraceTimerResolution @ 0x1406F90C4 (ExTraceTimerResolution.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x140709FF0 (NtSetTimerResolution.c)
 *     PopPolicyTimeChange @ 0x14077A1F0 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x1407A94CC (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407A95E8 (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x14094B3CC (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14094BD60 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x14098F840 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409B8FB0 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
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
