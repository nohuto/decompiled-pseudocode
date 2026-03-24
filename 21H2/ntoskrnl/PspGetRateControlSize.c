/*
 * XREFs of PspGetRateControlSize @ 0x14067F600
 * Callers:
 *     PspFreeRateControl @ 0x14067F51C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14067F56C (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x140287B4C (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
