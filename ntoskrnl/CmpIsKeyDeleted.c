/*
 * XREFs of CmpIsKeyDeleted @ 0x14077B358
 * Callers:
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1407ABF48 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407ACFB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x1407B6770 (CmpVEExecuteOpenLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x140A17510 (CmpSyncKcbCacheForHive.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140A17568 (CmpVEExecuteRealStoreParseLogic.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1)
{
  bool IsKeyStackDeleted; // bl
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    return 1;
  v3 = 0LL;
  WORD1(v3) = -1;
  *(_OWORD *)Privileges = 0LL;
  CmpStartKcbStackForTopLayerKcb(&v3, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted((__int64)&v3);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return IsKeyStackDeleted;
}
