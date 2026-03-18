/*
 * XREFs of BgpGetBitsPerPixel @ 0x140384700
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140383D58 (BgpGxProcessQrCodeBitmap.c)
 *     BgpTxtDisplayCharacter @ 0x140384188 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14038444C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1403844DC (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x140671B60 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140673134 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x140AED0B8 (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x140AED49C (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140AED50C (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEE0D0 (AnFwpFadeAnimationTimer.c)
 *     AnFwConfigureProgressResources @ 0x140AEF8E0 (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140C0E450 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C0E450 == 5 )
    return 32LL;
  return result;
}
