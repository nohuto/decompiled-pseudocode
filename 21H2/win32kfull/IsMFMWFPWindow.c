/*
 * XREFs of IsMFMWFPWindow @ 0x1C0236A58
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0236A84 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0236FA8 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02386D0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C02396FC (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0249BDC (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0249E4C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024A138 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
