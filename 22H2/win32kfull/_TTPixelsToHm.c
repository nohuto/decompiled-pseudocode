/*
 * XREFs of _TTPixelsToHm @ 0x1C0157B80
 * Callers:
 *     ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01E4084 (-DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C01E6AD8 (TouchTargetChildTree.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C024D6BC (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C024DA88 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 *     TouchTargetingBigTargetWindow @ 0x1C024DE04 (TouchTargetingBigTargetWindow.c)
 *     TouchTargetingRankForRect @ 0x1C024E46C (TouchTargetingRankForRect.c)
 * Callees:
 *     LongLongToLong @ 0x1C00149AC (LongLongToLong.c)
 */

__int64 __fastcall TTPixelsToHm(int a1, int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  plResult = 0;
  v2 = (unsigned __int128)(a2 * (__int64)a1 * (__int128)0x20C49BA5E353F7CFLL) >> 64;
  if ( LongLongToLong(((unsigned __int64)v2 >> 63) + (v2 >> 7), &plResult) >= 0 )
    return (unsigned int)plResult;
  return v3;
}
