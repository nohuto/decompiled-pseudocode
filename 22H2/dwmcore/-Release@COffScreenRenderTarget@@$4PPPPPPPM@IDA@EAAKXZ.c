/*
 * XREFs of ?Release@COffScreenRenderTarget@@$4PPPPPPPM@IDA@EAAKXZ @ 0x1800F4EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 2096));
}
