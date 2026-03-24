/*
 * XREFs of BgpGxMarkClean @ 0x14032D28C
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x1409F192C (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x1409F763C (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
