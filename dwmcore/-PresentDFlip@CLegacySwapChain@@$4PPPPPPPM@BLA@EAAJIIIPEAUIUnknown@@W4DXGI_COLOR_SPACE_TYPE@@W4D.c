/*
 * XREFs of ?PresentDFlip@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18011B950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::PresentDFlip(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        DXGI_COLOR_SPACE_TYPE a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  return CLegacySwapChain::PresentDFlip((int)a1 - *(_DWORD *)(a1 - 4) - 432, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
