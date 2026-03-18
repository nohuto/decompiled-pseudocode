/*
 * XREFs of KiIsQosGroupingActive @ 0x14034ECE8
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1402C8460 (KiCheckPreferredHeteroProcessor.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14034EB90 (PpmPerfArbitratorApplyProcessorState.c)
 *     KiHeteroIdleSetReduction @ 0x1404616EC (KiHeteroIdleSetReduction.c)
 *     KiSelectProcessorToPreempt @ 0x14046191C (KiSelectProcessorToPreempt.c)
 * Callees:
 *     <none>
 */

bool KiIsQosGroupingActive()
{
  char v0; // cl

  if ( (KiHeteroSchedulerOptionsMask & 2) != 0 )
    return (KiHeteroSchedulerOptions & 2) != 0;
  v0 = 0;
  if ( (KiVelocityFlags & 0x800) != 0 )
    return KeHeteroSystemQos != 0;
  return v0;
}
