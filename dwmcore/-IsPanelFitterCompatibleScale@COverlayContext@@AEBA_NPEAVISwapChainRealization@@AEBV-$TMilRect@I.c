/*
 * XREFs of ?IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801DAF38
 * Callers:
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@II_N@Z @ 0x1801DA6AC (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18012B8B0 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBUtagRECT@@1AEBUDXGI_MULTIPLANE_OVERLAY_GROUP_CAPS@@_N@Z @ 0x1801D84E0 (-AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBUtagRECT@@1AEBU.c)
 */

char __fastcall COverlayContext::IsPanelFitterCompatibleScale(
        __int64 a1,
        struct ISwapChainRealization *a2,
        struct tagRECT *a3,
        _DWORD *a4)
{
  COverlayContext *v6; // rcx
  __int64 v7; // r10
  const struct tagRECT *v8; // r11

  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(a3, a4) )
    return 1;
  if ( *(_DWORD *)(v7 + 68) )
    return COverlayContext::AreSupportedStretchFactors(
             v6,
             a2,
             a3,
             v8,
             (const struct DXGI_MULTIPLANE_OVERLAY_GROUP_CAPS *)(v7 + 68),
             0);
  return 0;
}
