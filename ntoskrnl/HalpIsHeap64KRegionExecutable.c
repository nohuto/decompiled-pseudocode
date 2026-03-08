/*
 * XREFs of HalpIsHeap64KRegionExecutable @ 0x1405035F0
 * Callers:
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIsHeap64KRegionExecutable(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 v4; // rax

  v1 = a1 & 0xFFFFFFFFFFFF0000uLL;
  v2 = v1 + 0x10000;
  if ( v1 < HalpOriginalHeapStart || v2 > HalpOriginalHeapEnd )
    return 1;
  while ( v1 < v2 )
  {
    v4 = *(_QWORD *)(8 * ((v1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    if ( (v4 & 1) != 0 && v4 >= 0 )
      return 1;
    v1 += 4096LL;
  }
  return 0;
}
