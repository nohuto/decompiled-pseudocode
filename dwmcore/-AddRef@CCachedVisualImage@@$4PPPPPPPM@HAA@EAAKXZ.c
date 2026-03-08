/*
 * XREFs of ?AddRef@CCachedVisualImage@@$4PPPPPPPM@HAA@EAAKXZ @ 0x180117D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::AddRef(__int64 a1)
{
  return CDxHandleBitmapRealization::AddRef((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 1792));
}
