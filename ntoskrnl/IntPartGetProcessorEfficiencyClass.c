/*
 * XREFs of IntPartGetProcessorEfficiencyClass @ 0x14037FFF4
 * Callers:
 *     IntpAllocateProcessorContext @ 0x140B439C8 (IntpAllocateProcessorContext.c)
 *     IntPartGetClassAffinityGroup @ 0x140B43A84 (IntPartGetClassAffinityGroup.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KiGetProcessorEfficiencyClass @ 0x14036A2D4 (KiGetProcessorEfficiencyClass.c)
 */

bool __fastcall IntPartGetProcessorEfficiencyClass(struct _PROCESSOR_NUMBER *a1)
{
  ULONG ProcessorIndexFromNumber; // eax

  if ( (KiInterruptSteeringFlags & 0x10) != 0 )
    return 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a1);
  return KiGetProcessorEfficiencyClass(KiProcessorBlock[ProcessorIndexFromNumber]);
}
