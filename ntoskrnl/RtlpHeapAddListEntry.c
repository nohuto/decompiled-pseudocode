/*
 * XREFs of RtlpHeapAddListEntry @ 0x1405B30D4
 * Callers:
 *     RtlpCreateSplitBlock @ 0x1405A9BA8 (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x1405AAE88 (RtlpFreeHeap.c)
 *     RtlpInsertFreeBlock @ 0x1405AB78C (RtlpInsertFreeBlock.c)
 *     RtlpPopulateListIndex @ 0x1405B3494 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x1409BAEE0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x1405B3324 (RtlpHeapListCompare.c)
 */

__int64 __fastcall RtlpHeapAddListEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 result; // rax

  v6 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  v7 = a4;
  v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = 2 * v9;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = v9;
  v11 = (unsigned int)v10;
  v12 = *(_QWORD *)(v6 + 8 * v10);
  if ( a5 == *(_DWORD *)(a2 + 8) - 1 )
    ++*(_DWORD *)(a2 + 20);
  if ( !v12 || (LOBYTE(a4) = 1, result = RtlpHeapListCompare(a1, v12, a6, a4), (int)result <= 0) )
  {
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(result + 8 * v11) = v7;
    if ( !v12 )
    {
      result = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(result + 4 * ((unsigned __int64)v9 >> 5)) |= 1 << (v9 & 0x1F);
    }
  }
  return result;
}
