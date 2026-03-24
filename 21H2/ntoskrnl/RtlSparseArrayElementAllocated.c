/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x1403094EC
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1402A3484 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x1402A501C (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14030944C (RtlpHpVaMgrCtxQuery.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x140309548 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
