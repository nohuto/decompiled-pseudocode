/*
 * XREFs of ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C02134EC
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C02138A8 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C0213A00 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0213AC4 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearMousePromotionQueueUntil(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2)
{
  struct tagMOUSE_PROMOTION_ENTRY *i; // rcx

  for ( i = *a1; i && i != a2; i = *a1 )
  {
    *a1 = *(struct tagMOUSE_PROMOTION_ENTRY **)i;
    Win32FreePool(i);
  }
}
