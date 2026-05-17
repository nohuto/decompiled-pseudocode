/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x180005380
 * Callers:
 *     RtlpHpVaMgrCtxQuery @ 0x1800037E8 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxFree @ 0x180005248 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x180005DA8 (RtlpHpVaMgrRangeFind.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1800053DC (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
