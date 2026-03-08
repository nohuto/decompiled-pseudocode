/*
 * XREFs of ?PresentMPO@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18011CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::PresentMPO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        enum DXGI_HDR_METADATA_TYPE a4)
{
  return CLegacyStereoSwapChain::PresentMPO((CLegacyStereoSwapChain *)(a1 - *(int *)(a1 - 4) - 440), a2, a3, a4);
}
