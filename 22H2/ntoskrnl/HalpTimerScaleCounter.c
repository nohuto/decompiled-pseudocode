/*
 * XREFs of HalpTimerScaleCounter @ 0x1403C3EC4
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1402340E0 (EtwpReserveTraceBuffer.c)
 *     KiRetireDpcList @ 0x1402459D0 (KiRetireDpcList.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C3390 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x1402C3670 (KiUpdateTime.c)
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 *     HalpTimerClockArm @ 0x1403375C0 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x140337740 (HalpSetTimer.c)
 *     HalpTimerMeasureFrequencies @ 0x14037A528 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x14037AD70 (HalpTimerPropagateQpcBiasUpdate.c)
 *     EtwpLogContextSwapEvent @ 0x140388190 (EtwpLogContextSwapEvent.c)
 *     HalCalibratePerformanceCounter @ 0x1404FE230 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404FE76C (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140508AB0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140508CB0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x1405098F0 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050C760 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerScaleCounter(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( a1 && a2 && a2 != a3 )
    return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  else
    return a1;
}
