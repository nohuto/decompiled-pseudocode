/*
 * XREFs of IsMFMWFPWindow @ 0x1C02192F8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C021931C (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C02195D4 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C021A850 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C023457C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0234718 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0234910 (xxxMNUpdateDraggingInfo.c)
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
