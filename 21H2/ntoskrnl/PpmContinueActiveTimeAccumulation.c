/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14027B9CC
 * Callers:
 *     PopGetIdleTimesCallback @ 0x14027BED0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x140398B3C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1403C1278 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x140224070 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x14027BA00 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
