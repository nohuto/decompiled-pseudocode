/*
 * XREFs of GreSelectBitmap @ 0x1C009A970
 * Callers:
 *     <none>
 * Callees:
 *     hbmSelectBitmap @ 0x1C009A990 (hbmSelectBitmap.c)
 */

__int64 __fastcall GreSelectBitmap(HDC a1, HBITMAP a2)
{
  return hbmSelectBitmap(a1, a2, 0, 0);
}
