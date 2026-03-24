/*
 * XREFs of CmpIsKeyDeleted @ 0x1406E9D20
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1406CDD50 (CmpVEExecuteOpenLogic.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406E385C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406E89F0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x140870C20 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpStartKcbStack @ 0x140648AA0 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x140648C10 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140648C60 (CmpIsKeyStackDeleted.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int16 v5; // dx
  char IsKeyStackDeleted; // bl
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  v5 = *(_WORD *)(a1 + 66);
  v9 = 0LL;
  WORD1(v9) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( (int)CmpStartKcbStack((__int64)&v9, v5, a3, a4) >= 0 )
    CmpPopulateKcbStack((__int64)&v9, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted((__int64)&v9, a2);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return IsKeyStackDeleted;
}
