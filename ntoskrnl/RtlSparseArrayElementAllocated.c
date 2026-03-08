/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x14030967C
 * Callers:
 *     RtlpHpVaMgrRangeFind @ 0x1402F4D60 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403095E0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxFree @ 0x14030BD10 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1403096E0 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
