/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1402DD93C
 * Callers:
 *     PspGetRateControlSize @ 0x14065CC70 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x140786384 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
