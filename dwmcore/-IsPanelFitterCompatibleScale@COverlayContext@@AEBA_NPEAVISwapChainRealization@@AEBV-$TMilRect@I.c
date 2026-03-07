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
