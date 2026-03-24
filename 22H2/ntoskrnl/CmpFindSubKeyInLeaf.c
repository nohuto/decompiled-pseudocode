/*
 * XREFs of CmpFindSubKeyInLeaf @ 0x14087A5F0
 * Callers:
 *     CmpAddToLeaf @ 0x1406E290C (CmpAddToLeaf.c)
 *     CmpRemoveSubKeyFromList @ 0x1406E4460 (CmpRemoveSubKeyFromList.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405EDFE0 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyInLeaf(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 *a4, _DWORD *a5)
{
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = 0;
  CmpFindSubKeyInLeafWithStatus(a1, a2, a3, a4, a5, (int *)v6);
  return v6[0];
}
