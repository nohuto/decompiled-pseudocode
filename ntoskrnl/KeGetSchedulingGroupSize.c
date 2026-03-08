/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1402F1604
 * Callers:
 *     MiSessionObjectCreate @ 0x140757A78 (MiSessionObjectCreate.c)
 *     PspGetRateControlSize @ 0x140783388 (PspGetRateControlSize.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
