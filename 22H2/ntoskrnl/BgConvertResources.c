/*
 * XREFs of BgConvertResources @ 0x140AF2198
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B5FA0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x140383DDC (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C0E538, a1);
}
