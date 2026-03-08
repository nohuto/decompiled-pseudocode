/*
 * XREFs of ?GetRenderTargetView@CDeviceTextureTarget@@$4PPPPPPPM@A@EBAPEAUID3D11RenderTargetView@@XZ @ 0x18011C2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11RenderTargetView *__fastcall CDeviceTextureTarget::GetRenderTargetView(__int64 a1)
{
  return CDeviceTextureTarget::GetRenderTargetView((CDeviceTextureTarget *)(a1 - *(int *)(a1 - 4)));
}
