/*
 * XREFs of ?PresentDFlip@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18011C9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::PresentDFlip(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  return CLegacyStereoSwapChain::PresentDFlip((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 440), a2, a3, a5);
}
