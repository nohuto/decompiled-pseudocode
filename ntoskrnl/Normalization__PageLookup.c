/*
 * XREFs of Normalization__PageLookup @ 0x1409BEC04
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1405AE1C4 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1405AE32C (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405AE6BC (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
