/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x140362978
 * Callers:
 *     RtlpHpVaMgrRangeFind @ 0x14023D5F4 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrCtxFree @ 0x14023D6AC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403628D8 (RtlpHpVaMgrCtxQuery.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1403629E0 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
