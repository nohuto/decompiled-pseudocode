/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1407095C0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036C734 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x140709FF0 (NtSetTimerResolution.c)
 *     ExpReadLeapSecondData @ 0x1407A95E8 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14094BD60 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x14098F840 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409B8FB0 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
