/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C021918C
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02189B8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0218CCC (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C033ABB8 )
    *(_DWORD *)(qword_1C033ABB8 + 1120) = 0;
  word_1C033ABB0 = 0;
  dword_1C033ABB4 = 0;
  qword_1C033ABB8 = 0LL;
  dword_1C033ABC0 = 0;
}
