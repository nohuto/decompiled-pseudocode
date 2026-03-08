/*
 * XREFs of BgpGetBitsPerPixel @ 0x140381AB0
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140381108 (BgpGxProcessQrCodeBitmap.c)
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1403817FC (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14038188C (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x14066F510 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140670AE4 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x140AE90F4 (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x140AE94D8 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140AE9548 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEA110 (AnFwpFadeAnimationTimer.c)
 *     AnFwConfigureProgressResources @ 0x140AEB920 (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140C0E350 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C0E350 == 5 )
    return 32LL;
  return result;
}
