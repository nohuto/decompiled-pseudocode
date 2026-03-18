/*
 * XREFs of ?GetRenderTargetView@CDeviceTextureTarget@@UEBAPEAUID3D11RenderTargetView@@XZ @ 0x1801086DC
 * Callers:
 *     ?GetRenderTargetView@CDeviceTextureTarget@@$4PPPPPPPM@A@EBAPEAUID3D11RenderTargetView@@XZ @ 0x180120480 (-GetRenderTargetView@CDeviceTextureTarget@@$4PPPPPPPM@A@EBAPEAUID3D11RenderTargetView@@XZ.c)
 * Callees:
 *     <none>
 */

struct ID3D11RenderTargetView *__fastcall CDeviceTextureTarget::GetRenderTargetView(CDeviceTextureTarget *this)
{
  return (struct ID3D11RenderTargetView *)*((_QWORD *)this - 18);
}
