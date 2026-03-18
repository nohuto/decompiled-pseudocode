/*
 * XREFs of IsMFMWFPWindow @ 0x1C0230060
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C023008C (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0230320 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C02454E4 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C024568C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02458A8 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
