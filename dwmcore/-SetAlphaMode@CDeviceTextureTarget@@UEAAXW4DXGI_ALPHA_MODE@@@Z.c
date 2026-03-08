/*
 * XREFs of ?SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18029C6C0
 * Callers:
 *     ?SetAlphaMode@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18011C470 (-SetAlphaMode@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDeviceTextureTarget::SetAlphaMode(CDeviceTextureTarget *this, enum DXGI_ALPHA_MODE a2)
{
  CD2DBitmap::SetAlphaMode(this, a2);
}
