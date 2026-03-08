/*
 * XREFs of ?IsPromotionQueue@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C01F90D8
 * Callers:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F8B60 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01F9644 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPromotionQueue(const struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  return a1 == (const struct tagMOUSE_PROMOTION_QUEUE *)(SGDGetUserSessionState(a1) + 16184);
}
