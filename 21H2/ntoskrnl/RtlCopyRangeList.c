/*
 * XREFs of RtlCopyRangeList @ 0x14083A400
 * Callers:
 *     ArbTestAllocation @ 0x140839900 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x140839BE0 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x14090B4C0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14090B860 (ArbRetestAllocation.c)
 *     RtlMergeRangeLists @ 0x1409B59D0 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     RtlpCopyRangeListEntry @ 0x14083A490 (RtlpCopyRangeListEntry.c)
 */

__int64 __fastcall RtlCopyRangeList(__int64 a1, __int64 *a2)
{
  __int64 *i; // rax
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 **v7; // rcx
  __int64 *v8; // rax

  if ( *(_DWORD *)(a1 + 20) )
    return 3221225485LL;
  *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(a1 + 20) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(a1 + 24) = *((_DWORD *)a2 + 6);
  for ( i = (__int64 *)*a2; ; i = (__int64 *)v5[5] )
  {
    v5 = i - 5;
    if ( a2 == i )
      return 0LL;
    v6 = RtlpCopyRangeListEntry(i - 5);
    if ( !v6 )
      break;
    v7 = *(__int64 ***)(a1 + 8);
    v8 = (__int64 *)(v6 + 40);
    if ( *v7 != (__int64 *)a1 )
      __fastfail(3u);
    *v8 = a1;
    v8[1] = (__int64)v7;
    *v7 = v8;
    *(_QWORD *)(a1 + 8) = v8;
  }
  RtlFreeRangeList(a1);
  return 3221225626LL;
}
