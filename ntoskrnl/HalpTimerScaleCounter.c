/*
 * XREFs of HalpTimerScaleCounter @ 0x1403BE604
 * Callers:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x14022BAA0 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x14022BD80 (KiUpdateTime.c)
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     HalpTimerClockArm @ 0x1402CBD60 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x1402CBEE0 (HalpSetTimer.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     HalpTimerMeasureFrequencies @ 0x140376B78 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403773C0 (HalpTimerPropagateQpcBiasUpdate.c)
 *     EtwpLogContextSwapEvent @ 0x140384C90 (EtwpLogContextSwapEvent.c)
 *     HalCalibratePerformanceCounter @ 0x1404FC150 (HalCalibratePerformanceCounter.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404FC68C (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x1405069D0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140506BD0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpVpptArmTimer @ 0x140507810 (HalpVpptArmTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050A680 (HalpTimerMeasureProcessorsWorker.c)
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
