/*
 * XREFs of BgpGetResolution @ 0x14032CEB0
 * Callers:
 *     LogFwReport @ 0x1409F1524 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x1409F1A40 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x1409F30D4 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x1409F4820 (BgpConsoleInitialize.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BgpGetResolution(_DWORD *a1)
{
  *a1 = DWORD2(BgInternal);
  a1[1] = DWORD1(BgInternal);
  a1[2] = HIDWORD(BgInternal);
  return a1;
}
