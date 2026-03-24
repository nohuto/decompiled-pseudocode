/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1408762F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1406E5718 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406E5970 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406E59F0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x1407729A0 (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, int *a3)
{
  CmpInvalidateSubtree(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1);
    CmpFlushNotifiesOnKeyBodyList(a1, (unsigned int)*a3, a2, 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
