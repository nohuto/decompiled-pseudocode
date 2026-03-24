/*
 * XREFs of RtlpHpSegAlloc @ 0x140289ED0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402BC8A0 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1402E8470 (ExAllocateContiguousHeapPool.c)
 *     RtlpHpMetadataAlloc @ 0x1402FE634 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapInternal @ 0x1402FE8BC (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegSubAllocate @ 0x140314B1C (RtlpHpSegSubAllocate.c)
 *     ExAllocateHeapPages @ 0x140375EA8 (ExAllocateHeapPages.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B9CBC (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     RtlpHpSegPageRangeAllocate @ 0x14028A070 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x14028A930 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14028B0E0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402AA080 (RtlpHpSegPageRangeShrink.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall RtlpHpSegAlloc(__int64 a1, size_t a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r8
  unsigned int v8; // r13d
  __int64 result; // rax
  __int64 v10; // rbx
  int v11; // ebp
  int v12; // r12d
  unsigned int v13; // eax
  __int64 v14; // r8
  void *v15; // rbx

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  result = RtlpHpSegPageRangeAllocate(a1, v8, a5);
  v10 = result;
  if ( result )
  {
    v11 = *(unsigned __int8 *)(result + 31);
    v12 = (unsigned __int16)~*(_WORD *)(result + 28);
    if ( !(_DWORD)v5 )
      goto LABEL_9;
    v13 = a5 & 0xFFFFFFFD;
    if ( !v12 )
      v13 = a5;
    if ( (int)RtlpHpSegPageRangeCommit(a1, v13, 0LL) < 0 )
    {
      RtlpHpSegPageRangeShrink(a1, v10, v14, a5);
      return 0LL;
    }
    else
    {
LABEL_9:
      if ( (a5 & 4) != 0 )
        RtlpHpSegPageRangeCommit(a1, 0, 0LL);
      *(_DWORD *)(v10 + 4) = (v11 << *(_BYTE *)(a1 + 8)) - a2;
      v15 = (void *)((v10 & *(_QWORD *)a1) + ((v10 - (v10 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)));
      if ( (a5 & 2) != 0
        && (v12
         || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
         || (*(_BYTE *)(a1 + 13) & 7) != 0
         && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v15, (unsigned int)a2) <= 2) )
      {
        memset(v15, 0, a2);
      }
      return (__int64)v15;
    }
  }
  return result;
}
