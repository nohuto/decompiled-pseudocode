/*
 * XREFs of ?Release@COffScreenRenderTarget@@$4PPPPPPPM@IGA@EAAKXZ @ 0x1800F5430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 2144));
}
