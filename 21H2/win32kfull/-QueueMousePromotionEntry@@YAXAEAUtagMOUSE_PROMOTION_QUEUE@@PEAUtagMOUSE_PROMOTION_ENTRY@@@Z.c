/*
 * XREFs of ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C02190A8
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C02185AC (-CancelAutoPromotion@@YAXXZ.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C0219628 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
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
  if ( a1 == (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C033AB50 )
  {
    xmmword_1C033AB60 = *(_OWORD *)qword_1C033AB58;
    xmmword_1C033AB70 = *(_OWORD *)(qword_1C033AB58 + 16);
    v3 = *(_OWORD *)(qword_1C033AB58 + 32);
    *(_QWORD *)&xmmword_1C033AB60 = 0LL;
    xmmword_1C033AB80 = v3;
  }
}
