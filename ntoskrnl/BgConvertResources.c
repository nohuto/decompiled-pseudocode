/*
 * XREFs of BgConvertResources @ 0x140AEE198
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B1310 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x14038118C (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C0E438, a1);
}
