/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x1403449DC
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140344EE0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14039843C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0ED8 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x140224030 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x140344A10 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
