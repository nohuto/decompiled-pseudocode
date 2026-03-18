/*
 * XREFs of ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0213DC0
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C0213458 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C021424C (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall QueueMousePromotionEntry(struct tagMOUSE_PROMOTION_QUEUE *a1, struct tagMOUSE_PROMOTION_ENTRY *a2)
{
  _QWORD *v2; // rax
  __int128 v3; // xmm0

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( v2 )
    *v2 = a2;
  else
    *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 1) = a2;
  if ( a1 == (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0335D10 )
  {
    xmmword_1C0335D20 = *(_OWORD *)qword_1C0335D18;
    xmmword_1C0335D30 = *(_OWORD *)(qword_1C0335D18 + 16);
    v3 = *(_OWORD *)(qword_1C0335D18 + 32);
    *(_QWORD *)&xmmword_1C0335D20 = 0LL;
    xmmword_1C0335D40 = v3;
  }
}
