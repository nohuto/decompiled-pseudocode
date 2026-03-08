/*
 * XREFs of ?SetColorSpace@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18011D170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::SetColorSpace(__int64 a1, enum DXGI_COLOR_SPACE_TYPE a2)
{
  CLegacySwapChain::SetColorSpace((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 424), a2);
}
