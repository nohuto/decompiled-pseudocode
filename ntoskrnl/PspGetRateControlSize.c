/*
 * XREFs of PspGetRateControlSize @ 0x140783388
 * Callers:
 *     PspFreeRateControl @ 0x1407832C0 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14078330C (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1402F1604 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
