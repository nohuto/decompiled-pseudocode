/*
 * XREFs of PspGetRateControlSize @ 0x14065CC70
 * Callers:
 *     PspFreeRateControl @ 0x14065CB8C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14065CBDC (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1402DD93C (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
