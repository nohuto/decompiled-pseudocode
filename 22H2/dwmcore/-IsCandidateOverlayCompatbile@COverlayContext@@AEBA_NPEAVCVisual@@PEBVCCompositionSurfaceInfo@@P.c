/*
 * XREFs of ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017C04C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x180179F70 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBUtagRECT@@1_N@Z @ 0x180179E84 (-AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainRealization@@AEBUtagRECT@@1_N@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18017BDFC (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 */

char __fastcall COverlayContext::IsCandidateOverlayCompatbile(
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
  if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a4 + 56LL))(a4)
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, a2, 0LL, 0LL) == -1
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, 0LL, a3, 0LL) == -1
    && !IsRectEmpty((const RECT *)((char *)a5 + 4))
    && !IsRectEmpty((const RECT *)((char *)a5 + 20))
    && !IsRectEmpty((const RECT *)((char *)a5 + 36))
    && COverlayContext::AreSupportedStretchFactors(
         this,
         a4,
         (const struct tagRECT *)((char *)a5 + 4),
         (const struct tagRECT *)((char *)a5 + 20),
         a6 == DXGI_MODE_ROTATION_ROTATE90)
    && (a8 && *((_BYTE *)this + 11428) || *((_BYTE *)this + 11417) || a7 > 2) )
  {
    return 1;
  }
  return v12;
}
