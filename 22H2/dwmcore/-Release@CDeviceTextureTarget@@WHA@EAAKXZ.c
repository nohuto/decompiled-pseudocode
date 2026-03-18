/*
 * XREFs of ?Release@CDeviceTextureTarget@@WHA@EAAKXZ @ 0x180120300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - 112));
}
