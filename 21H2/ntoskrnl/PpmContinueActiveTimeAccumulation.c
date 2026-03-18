/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x140293988
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x14023B798 (PpmPerfApplyProcessorState.c)
 *     PopGetIdleTimesCallback @ 0x140293600 (PopGetIdleTimesCallback.c)
 *     PpmInstallFeedbackCounters @ 0x1403CE4FC (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x1402939BC (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403072A0 (PpmUpdatePerformanceFeedback.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
