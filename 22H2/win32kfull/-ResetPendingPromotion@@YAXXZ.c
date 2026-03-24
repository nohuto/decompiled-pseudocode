/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C0218BCC
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02183F8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C021870C (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C0339BB8 )
    *(_DWORD *)(qword_1C0339BB8 + 1120) = 0;
  word_1C0339BB0 = 0;
  dword_1C0339BB4 = 0;
  qword_1C0339BB8 = 0LL;
  dword_1C0339BC0 = 0;
}
