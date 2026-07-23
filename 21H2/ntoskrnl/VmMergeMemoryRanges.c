/*
 * XREFs of VmMergeMemoryRanges @ 0x14092F1D0
 * Callers:
 *     <none>
 * Callees:
 *     VmpMergeMemoryRanges @ 0x1405A4570 (VmpMergeMemoryRanges.c)
 */

__int64 __fastcall VmMergeMemoryRanges(unsigned __int64 a1, __int64 a2)
{
  volatile LONG *v5; // rcx

  if ( a2 == -1 || (a1 & 0xFFF) != 0 )
    return 3221225485LL;
  v5 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5];
  if ( v5 )
    return VmpMergeMemoryRanges(v5, a1 >> 12, a2);
  else
    return 3221225608LL;
}
