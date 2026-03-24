/*
 * XREFs of ?Release@CHolographicInteropTarget@@$4PPPPPPPM@OA@EAAKXZ @ 0x1800F4F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 224));
}
