/*
 * XREFs of CmpPopulateKcbStack @ 0x1407AF248
 * Callers:
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A1D6E8 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 * Callees:
 *     CmpSetKcbAtLayerHeight @ 0x140785EE8 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpPopulateKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r10

  result = *(unsigned __int16 *)(a2 + 66);
  *(_WORD *)(a1 + 2) = result;
  v4 = *(__int16 *)(a2 + 66);
  if ( (_WORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 192);
    while ( v5 )
    {
      result = CmpSetKcbAtLayerHeight(a1, v4, *(_QWORD *)(v5 + 16));
      v5 = *(_QWORD *)(v6 + 24);
      LOWORD(v4) = v4 - 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v4 + 8) = a2;
  }
  return result;
}
