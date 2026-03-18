/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x14075FE64
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201B70 (ExCleanTimerResolutionRequest.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1407DD0A0 (NtSetTimerResolution.c)
 *     PspSetProcessTimerResolutionPolicy @ 0x1407E0180 (PspSetProcessTimerResolutionPolicy.c)
 *     ExpRefreshSystemTime @ 0x140840884 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140854624 (ExpReadLeapSecondData.c)
 *     PopPolicyTimeChange @ 0x1409945F0 (PopPolicyTimeChange.c)
 *     ExpSetTimeZoneInformation @ 0x1409F76DC (ExpSetTimeZoneInformation.c)
 *     ExTraceTimerResolution @ 0x1409F7C58 (ExTraceTimerResolution.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8168 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F8340 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x140A920C0 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140AB1480 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
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
