/*
 * XREFs of BgpGxRectangleDestroy @ 0x140AEEA30
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140383D58 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x140383DDC (BgpGxConvertRectangle.c)
 *     BgpTxtDisplayCharacter @ 0x140384188 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14038444C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1403844DC (GxpWriteFrameBufferPixels.c)
 *     BgpGxParseBitmap @ 0x140AED3F0 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140AED49C (BgpGxReadRectangle.c)
 *     BgpTxtDestroyRegion @ 0x140AED8C8 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x140AEDF7C (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEE558 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AEE988 (TxtpAddCacheEntry.c)
 *     BgpTxtCreateRegion @ 0x140AEF26C (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x140AF05E0 (AnFwpDisableProgressTimer.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 *     BgpGxBlendRectangle @ 0x140AF3430 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140AF3720 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x140AF37A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
