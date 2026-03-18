/*
 * XREFs of ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01F8474
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01F7A38 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F8A18 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?IsPromotionQueue@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C01F7F08 (-IsPromotionQueue@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?SaveLastEntryPromotionQueued@@YAXXZ @ 0x1C01F8594 (-SaveLastEntryPromotionQueued@@YAXXZ.c)
 */

void __fastcall QueueMousePromotionEntry(struct tagMOUSE_PROMOTION_QUEUE *a1, struct tagMOUSE_PROMOTION_ENTRY *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( v2 )
    *v2 = a2;
  else
    *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 1) = a2;
  if ( IsPromotionQueue(a1) )
    SaveLastEntryPromotionQueued();
}
