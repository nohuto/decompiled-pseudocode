/*
 * XREFs of DxgkGetPresentHistory @ 0x1C0283370
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetPresentHistoryInternal @ 0x1C0100460 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, __int64 a2, __int64 a3)
{
  return DxgkGetPresentHistoryInternal(a1, 1, a3);
}
