/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x1405B33A0
 * Callers:
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405A97B8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405A9BA8 (RtlpCreateSplitBlock.c)
 *     RtlpPopulateListIndex @ 0x1405B3494 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x1409BAEE0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x1405B3324 (RtlpHeapListCompare.c)
 */

__int64 *__fastcall RtlpHeapRemoveListEntry(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // esi
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 *result; // rax
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rbp

  v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = *(_DWORD *)(a2 + 12) == 0;
  v10 = *(_QWORD *)(a2 + 48);
  v11 = 2 * v8;
  if ( v9 )
    v11 = v8;
  v12 = (unsigned int)v11;
  result = *(__int64 **)(v10 + 8 * v11);
  v14 = *(_DWORD *)(a2 + 8);
  --*(_DWORD *)(a2 + 16);
  v15 = v14 - 1;
  if ( a5 == v14 - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( result == a4 )
  {
    v16 = *a4;
    result = *(__int64 **)(a2 + 32);
    if ( *(_QWORD *)a2 )
      v15 = v14;
    if ( a5 >= v15 )
    {
      if ( (__int64 *)v16 != result )
      {
        *(_QWORD *)(v10 + 8 * v12) = v16;
        return result;
      }
      *(_QWORD *)(v10 + 8 * v12) = 0LL;
    }
    else
    {
      if ( (__int64 *)v16 != result && !(unsigned int)RtlpHeapListCompare(a1, v16, a6, 1) )
      {
        result = *(__int64 **)(a2 + 48);
        result[v12] = v16;
        return result;
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v12) = 0LL;
    }
    result = *(__int64 **)(a2 + 40);
    *((_DWORD *)result + ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
