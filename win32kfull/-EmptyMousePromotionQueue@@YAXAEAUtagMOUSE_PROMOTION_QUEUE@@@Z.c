/*
 * XREFs of ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C0077D38
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C01493FE (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01F8C08 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F93F8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01F9678 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EmptyMousePromotionQueue(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  _QWORD *i; // rcx

  for ( i = *(_QWORD **)a1; i; i = *(_QWORD **)a1 )
  {
    *(_QWORD *)a1 = *i;
    Win32FreePool(i);
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
