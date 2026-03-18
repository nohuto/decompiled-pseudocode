/*
 * XREFs of IntPartAllocateAndZeroMemory @ 0x1C005ECE4
 * Callers:
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1C00A02D0 (ProcessorpSelectProcessorSetFromPartitions.c)
 *     IntPartArbInit @ 0x1C00A319C (IntPartArbInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntPartAllocateAndZeroMemory(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1232102209LL);
}
