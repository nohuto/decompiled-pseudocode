/*
 * XREFs of IsMFMWFPWindow @ 0x1C0236498
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02339B8 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C02364C4 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C02369E8 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238110 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C024961C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C024988C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0249B78 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
