/*
 * XREFs of BgpGxMarkClean @ 0x14036EB7C
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x140AED34C (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x140AF3654 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
