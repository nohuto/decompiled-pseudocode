/*
 * XREFs of ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801DA8EC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801D85D4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBUtagRECT@@1AEBUDXGI_MULTIPLANE_OVERLAY_GROUP_CAPS@@_N@Z @ 0x1801D84E0 (-AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBUtagRECT@@1AEBU.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x1801DA4E8 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 */

char __fastcall COverlayContext::IsCandidateOverlayCompatible(
        COverlayContext *this,
        struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        struct ISwapChainRealization *a4,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a5,
        enum DXGI_MODE_ROTATION a6,
        unsigned int a7,
        bool a8)
{
  char v12; // bl

  v12 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a4 + 64LL))(a4)
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, a2, 0LL, 0LL) == -1
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, 0LL, a3, 0LL) == -1
    && (*(unsigned __int8 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)a3 + 192LL))(a3)
    && !IsRectEmpty((const RECT *)((char *)a5 + 4))
    && !IsRectEmpty((const RECT *)((char *)a5 + 20))
    && !IsRectEmpty((const RECT *)((char *)a5 + 36))
    && COverlayContext::AreSupportedStretchFactors(
         (COverlayContext *)((char *)this + 48),
         a4,
         (const struct tagRECT *)((char *)a5 + 4),
         (const struct tagRECT *)((char *)a5 + 20),
         (COverlayContext *)((char *)this + 48),
         a6 == DXGI_MODE_ROTATION_ROTATE90)
    && (a8 && *((_BYTE *)this + 11308) || *((_BYTE *)this + 11297) || a7 > 2) )
  {
    return 1;
  }
  return v12;
}
