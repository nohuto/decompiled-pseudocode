/*
 * XREFs of ?HasPendingPromotion@@YAHXZ @ 0x1C01F7E94
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C015611E (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x1C01F79C4 (-CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     ?HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C01F7EC0 (-HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x1C01F7F3C (-MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01F811C (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01F8C9C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasPendingPromotion(__int64 a1)
{
  return *(_WORD *)(SGDGetUserSessionState(a1) + 16280) != 0;
}
