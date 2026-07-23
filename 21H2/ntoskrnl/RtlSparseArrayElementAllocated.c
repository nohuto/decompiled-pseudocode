/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x14031423C
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1402208C4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x14022245C (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14031419C (RtlpHpVaMgrCtxQuery.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x140314298 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
