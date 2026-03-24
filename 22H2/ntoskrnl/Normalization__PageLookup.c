/*
 * XREFs of Normalization__PageLookup @ 0x140918DF8
 * Callers:
 *     NormBuffer__GetLastChar @ 0x14058DAD8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x14058DC28 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14058DFB4 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
