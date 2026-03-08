/*
 * XREFs of ?SetColorSpace@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18011C490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetColorSpace(__int64 a1, enum DXGI_COLOR_SPACE_TYPE a2)
{
  CD2DBitmap::SetColorSpace((CD2DBitmap *)(a1 - *(int *)(a1 - 4) - 328), a2);
}
