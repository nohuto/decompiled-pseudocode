/*
 * XREFs of BgpGxDrawBitmapImage @ 0x140AF3720
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140AED07C (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF31E0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x14038444C (BgpGxDrawRectangle.c)
 *     BgpGxParseBitmap @ 0x140AED3F0 (BgpGxParseBitmap.c)
 *     BgpGxRectangleDestroy @ 0x140AEEA30 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawBitmapImage(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _BYTE *v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v3 = BgpGxParseBitmap(a1, (__int64 *)&v5);
  if ( v3 >= 0 )
  {
    v3 = BgpGxDrawRectangle(v5, a2);
    BgpGxRectangleDestroy((__int64)v5);
  }
  return (unsigned int)v3;
}
