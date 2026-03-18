/*
 * XREFs of PspGetRateControlSize @ 0x140684F74
 * Callers:
 *     PspFreeRateControl @ 0x140684EAC (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140684EF8 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x140206E08 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
