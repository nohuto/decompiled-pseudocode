/*
 * XREFs of PpmConvertTime @ 0x14027C22C
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140220810 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140220BD0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x140221190 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     PpmUpdateTimeAccumulation @ 0x14027BA00 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x14027BED0 (PopGetIdleTimesCallback.c)
 *     PpmParkApplyPolicy @ 0x1403C1C84 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x1403C48B4 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeFrom @ 0x1403C94E4 (PpmConvertTimeFrom.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14056670C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140567940 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140567BE0 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14056FEA0 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140570410 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1405712F4 (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x140576F98 (PpmConvertTimeTo.c)
 *     PpmGetThroughputInfoCallback @ 0x1405770B0 (PpmGetThroughputInfoCallback.c)
 *     PpmTranslateIdleAccounting @ 0x140577280 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1405774C0 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     PpmInitIdlePolicy @ 0x140A6C6A4 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140A6E89C (PopInitDripsWakeAccounting.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024ED98 (RtlULongLongMult.c)
 */

ULONGLONG __fastcall PpmConvertTime(ULONGLONG a1, __int64 a2, ULONGLONG a3)
{
  ULONGLONG v4; // r10
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  v4 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( RtlULongLongMult(a1, a3, &pullResult) < 0 )
      return a3 * (v6 / v7) + a3 * (v6 % v7) / v7;
    else
      return pullResult / v7;
  }
  return v4;
}
