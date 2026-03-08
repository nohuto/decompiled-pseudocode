/*
 * XREFs of BgpGxRectangleDestroy @ 0x140AEAA70
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140381108 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x14038118C (BgpGxConvertRectangle.c)
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1403817FC (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14038188C (GxpWriteFrameBufferPixels.c)
 *     BgpGxParseBitmap @ 0x140AE942C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140AE94D8 (BgpGxReadRectangle.c)
 *     BgpTxtDestroyRegion @ 0x140AE9904 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x140AE9FB8 (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEA598 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AEA9C8 (TxtpAddCacheEntry.c)
 *     BgpTxtCreateRegion @ 0x140AEB2AC (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x140AEC610 (AnFwpDisableProgressTimer.c)
 *     ResFwFreeContext @ 0x140AEEED4 (ResFwFreeContext.c)
 *     BgpGxBlendRectangle @ 0x140AEF430 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140AEF720 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x140AEF7A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
