/*
 * XREFs of ?Release@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x18011C430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 296));
}
