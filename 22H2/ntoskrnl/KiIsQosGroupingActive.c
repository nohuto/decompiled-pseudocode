/*
 * XREFs of KiIsQosGroupingActive @ 0x140398754
 * Callers:
 *     KeClockInterruptNotify @ 0x140221600 (KeClockInterruptNotify.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140258460 (KiCheckPreferredHeteroProcessor.c)
 *     KeUpdateQosGroupingSets @ 0x1403986FC (KeUpdateQosGroupingSets.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051F440 (KiHeteroChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14051FCB8 (KiSelectProcessorToPreempt.c)
 * Callees:
 *     <none>
 */

bool KiIsQosGroupingActive()
{
  char v0; // cl

  v0 = 1;
  if ( (KiHeteroSchedulerOptions & 1) != 0 )
    return (KiHeteroSchedulerOptions & 2) != 0;
  if ( (KiVelocityFlags & 0x800) == 0 || !KeHeteroSystemQos )
    return 0;
  return v0;
}
