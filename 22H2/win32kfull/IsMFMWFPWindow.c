/*
 * XREFs of IsMFMWFPWindow @ 0x1C0216738
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C021675C (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0216A14 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0217C90 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0218950 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0231868 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0231A04 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0231BFC (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMFMWFPWindow(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( a1 != 4294967291LL )
      return a1 != 0xFFFFFFFFLL;
  }
  return result;
}
