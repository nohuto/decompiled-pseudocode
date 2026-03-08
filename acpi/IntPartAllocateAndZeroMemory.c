/*
 * XREFs of IntPartAllocateAndZeroMemory @ 0x1C005ECC4
 * Callers:
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1C00A02C0 (ProcessorpSelectProcessorSetFromPartitions.c)
 *     IntPartArbInit @ 0x1C00A318C (IntPartArbInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntPartAllocateAndZeroMemory(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1232102209LL);
}
