/*
 * XREFs of ?SetAlphaMode@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18011B9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::SetAlphaMode(__int64 a1, enum DXGI_ALPHA_MODE a2)
{
  CLegacySwapChain::SetAlphaMode((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 432), a2);
}
