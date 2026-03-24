/*
 * XREFs of BgConvertResources @ 0x1409F6550
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CC600 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x1403CDF94 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C13578, a1);
}
