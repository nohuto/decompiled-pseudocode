/*
 * XREFs of ?Release@CHolographicInteropTexture@@$4PPPPPPPM@BJI@EAAKXZ @ 0x1800F7DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTexture::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 408));
}
