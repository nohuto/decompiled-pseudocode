/*
 * XREFs of BgpGxMarkClean @ 0x1403031CC
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x140AE9388 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x140AEF654 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
