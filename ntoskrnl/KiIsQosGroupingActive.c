/*
 * XREFs of KiIsQosGroupingActive @ 0x1402ED844
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x14022FC90 (KiCheckPreferredHeteroProcessor.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ED6EC (PpmPerfArbitratorApplyProcessorState.c)
 *     KiHeteroIdleSetReduction @ 0x14045974C (KiHeteroIdleSetReduction.c)
 *     KiSelectProcessorToPreempt @ 0x14045997C (KiSelectProcessorToPreempt.c)
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
