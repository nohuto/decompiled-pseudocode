/*
 * XREFs of PpmConvertTime @ 0x140235D70
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x1402356B4 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmUpdateTimeAccumulation @ 0x140235C64 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140236080 (PopGetIdleTimesCallback.c)
 *     PpmParkApplyPolicy @ 0x14038E5E0 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x14039B004 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeTo @ 0x1403A1D04 (PpmConvertTimeTo.c)
 *     PpmConvertTimeFrom @ 0x1403A4058 (PpmConvertTimeFrom.c)
 *     PoNotifySystemTimeSet @ 0x1403B11A8 (PoNotifySystemTimeSet.c)
 *     PopCalculateIdleInformation @ 0x1403C2C3C (PopCalculateIdleInformation.c)
 *     PpmGetThroughputInfoCallback @ 0x14045ABA0 (PpmGetThroughputInfoCallback.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1405828E8 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140583970 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140583BB0 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14058EE94 (PopCalculateCsSummary.c)
 *     PopDiagTraceCsResiliencyExit @ 0x14058FDB4 (PopDiagTraceCsResiliencyExit.c)
 *     PpmTranslateIdleAccounting @ 0x140595AC0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140595CF8 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PopCalculateWakeTimeAdjustment @ 0x140984168 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x14098C828 (PopDiagTraceHiberStats.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA472C (PopDiagComputeEarlyHiberStats.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AA74F4 (PopSstDiagInitializeResumeTimer.c)
 *     PpmInitIdlePolicy @ 0x140B64730 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140B69E2C (PopInitDripsWakeAccounting.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a1 || !a2 || a2 == a3 )
    return a1;
  if ( is_mul_ok(a1, a3) )
    return a1 * (unsigned __int128)a3 / a2;
  return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
}
