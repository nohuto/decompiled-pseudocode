/*
 * XREFs of ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C01F900C
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F9BE8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01F9678 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 */

__int64 __fastcall HandleLossOfPrimary(struct tagPOINTER_INFO *a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *((_DWORD *)a1 + 3);
  if ( (v1 & 0x40004) == 0 || (v1 & 0x10000) != 0 )
  {
    ResetMousePromotionInfo(0, v1);
    return 0LL;
  }
  else
  {
    v2 = 303104;
    *((_DWORD *)a1 + 3) = 303104;
    if ( (v1 & 2) != 0 )
    {
      v2 = 303106;
      *((_DWORD *)a1 + 3) = 303106;
    }
    if ( (v1 & 0x4000) != 0 )
      *((_DWORD *)a1 + 3) = v2 | 0x4000;
    return 1LL;
  }
}
