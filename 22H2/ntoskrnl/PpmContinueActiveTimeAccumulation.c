/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14034EB5C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140251FC0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14034EA0C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1403914F8 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x1402552E4 (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C6D10 (PpmUpdatePerformanceFeedback.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2)
{
  PpmUpdateTimeAccumulation(a1, a2, 1);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
