/*
 * XREFs of CmRmIsKCBVisible @ 0x1407B3F90
 * Callers:
 *     CmRmIsKcbStackVisible @ 0x140680480 (CmRmIsKcbStackVisible.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5730 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DB080 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1407696D0 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 240);
  return !v3 || CmEqualTrans(a2, v3) != 0;
}
