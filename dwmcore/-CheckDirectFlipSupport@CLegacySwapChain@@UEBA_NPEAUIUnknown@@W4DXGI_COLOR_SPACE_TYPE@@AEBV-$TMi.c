/*
 * XREFs of ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180297340
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18011B530 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_T.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18011C5B0 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_T.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18011CC90 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_T.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacySwapChain::CheckDirectFlipSupport(__int64 a1)
{
  return COverlaySwapChainBase::CheckDirectFlipSupport(a1);
}
