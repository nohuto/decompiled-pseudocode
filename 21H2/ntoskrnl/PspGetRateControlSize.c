/*
 * XREFs of PspGetRateControlSize @ 0x1405DA0A0
 * Callers:
 *     PspFreeRateControl @ 0x1405D9FBC (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1405DA00C (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x140204CEC (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
