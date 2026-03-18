/*
 * XREFs of CmpStartKcbStack @ 0x1406D7DD0
 * Callers:
 *     CmpQueryKeySecurity @ 0x1406D5C50 (CmpQueryKeySecurity.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7C1C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1406D7C60 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406DD670 (CmpConstructNameFromKeyNodes.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140A207E0 (CmpSubtreeEnumeratorStart.c)
 *     CmpPartialPromoteSubkeys @ 0x140A26450 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A2665C (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x14022CF0C (CmpAllocatePool.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  __int64 Pool; // rax
  __int64 result; // rax

  Pool = 0LL;
  if ( a2 > 1 )
  {
    Pool = CmpAllocatePool(256LL, 8LL * (unsigned int)(a2 - 1), 892751171LL);
    if ( !Pool )
      return 3221225626LL;
  }
  *(_QWORD *)(a1 + 24) = Pool;
  *(_WORD *)(a1 + 2) = -1;
  result = 0LL;
  *(_WORD *)a1 = a2;
  return result;
}
