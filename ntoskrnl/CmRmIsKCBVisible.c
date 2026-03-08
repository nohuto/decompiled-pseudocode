/*
 * XREFs of CmRmIsKCBVisible @ 0x14075E0B0
 * Callers:
 *     CmRmIsKcbStackVisible @ 0x14067D55C (CmRmIsKcbStackVisible.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407ACFB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 * Callees:
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 240);
  return !v3 || CmEqualTrans(a2, v3) != 0;
}
