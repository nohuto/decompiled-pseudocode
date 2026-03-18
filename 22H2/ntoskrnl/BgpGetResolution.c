/*
 * XREFs of BgpGetResolution @ 0x14036E2D8
 * Callers:
 *     LogFwReport @ 0x140AED0B8 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x140AED50C (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x140AEF26C (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x140AEF6A0 (BgpConsoleInitialize.c)
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
