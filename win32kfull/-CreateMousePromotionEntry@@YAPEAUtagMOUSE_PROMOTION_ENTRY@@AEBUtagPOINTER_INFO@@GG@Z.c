/*
 * XREFs of ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F8D70
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F9BE8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?PopulateMousePromotionEntry@@YAXPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F9170 (-PopulateMousePromotionEntry@@YAXPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 */

struct tagMOUSE_PROMOTION_ENTRY *__fastcall CreateMousePromotionEntry(
        const struct tagPOINTER_INFO *a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax
  __int64 v7; // r11

  result = (struct tagMOUSE_PROMOTION_ENTRY *)Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( result )
  {
    PopulateMousePromotionEntry(result, a1, a2, a3);
    return (struct tagMOUSE_PROMOTION_ENTRY *)v7;
  }
  return result;
}
