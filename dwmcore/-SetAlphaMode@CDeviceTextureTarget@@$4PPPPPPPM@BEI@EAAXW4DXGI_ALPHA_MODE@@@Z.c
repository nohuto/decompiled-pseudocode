/*
 * XREFs of ?SetAlphaMode@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18011C470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetAlphaMode(__int64 a1, enum DXGI_ALPHA_MODE a2)
{
  CDeviceTextureTarget::SetAlphaMode((CDeviceTextureTarget *)(a1 - *(int *)(a1 - 4) - 328), a2);
}
