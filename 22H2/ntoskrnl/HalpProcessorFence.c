/*
 * XREFs of HalpProcessorFence @ 0x1403F9340
 * Callers:
 *     KeStallExecutionProcessor @ 0x14022A1F0 (KeStallExecutionProcessor.c)
 *     HalpTscAdvSynchTarget @ 0x14039CAEC (HalpTscAdvSynchTarget.c)
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x14039CBF4 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 *     HalpTscAdvSynchReadTimeStamp @ 0x14039CD28 (HalpTscAdvSynchReadTimeStamp.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403AF6F0 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403B0A68 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403B0D68 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403B0E4C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B1468 (HalpTimerStallExecutionProcessor.c)
 *     HalpFlushAndWait @ 0x1403F9770 (HalpFlushAndWait.c)
 *     HalpTscAdvSynchComputeMinimumDelta @ 0x1404C0F8C (HalpTscAdvSynchComputeMinimumDelta.c)
 *     HalpTscAdvSynchSkewCounter @ 0x1404C1054 (HalpTscAdvSynchSkewCounter.c)
 *     HalpTscCompatibilitySynchronization @ 0x1404C141C (HalpTscCompatibilitySynchronization.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3500 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 HalpProcessorFence()
{
  unsigned __int64 result; // rax

  result = __readcr2();
  __writecr2(result);
  return result;
}
