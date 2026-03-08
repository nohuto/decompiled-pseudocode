/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x140236CD0
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140236080 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x1402ED59C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x14038F058 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14022E540 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x140235C64 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2)
{
  PpmUpdateTimeAccumulation(a1, a2, 1);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
