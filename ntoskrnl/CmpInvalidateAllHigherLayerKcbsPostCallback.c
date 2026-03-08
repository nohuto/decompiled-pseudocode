/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140A1D0D0
 * Callers:
 *     <none>
 * Callees:
 *     CmpMarkKeyUnbacked @ 0x14074AD64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 *     CmpInvalidateSubtree @ 0x14074C208 (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, int *a3)
{
  CmpInvalidateSubtree(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1, a2);
    CmpFlushNotifiesOnKeyBodyList(a1, (unsigned int)*a3, a2, 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
