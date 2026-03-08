/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1407E2A30
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201AD0 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeRefreshWork @ 0x140A8EE20 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140AAD010 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
