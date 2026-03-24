/*
 * XREFs of ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18017BDFC
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1800905F0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800DE864 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017C04C (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::FindOverlayCandidateIndex(
        COverlayContext *this,
        const struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        __int64 a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  __int64 v8; // r9
  unsigned int i; // r8d
  unsigned int v11; // [rsp+Ch] [rbp+Ch]

  LODWORD(v4) = 0;
  v5 = -1;
  v11 = 0;
  if ( a3 )
  {
    v4 = *((_QWORD *)a3 + 5);
    v11 = HIDWORD(v4);
  }
  v8 = *((_QWORD *)this + 12);
  for ( i = 0; i < (unsigned int)((*((_QWORD *)this + 13) - v8) / 224); ++i )
  {
    if ( (!a2 || *(const struct CVisual **)(224LL * i + v8 + 8) == a2)
      && (!a3 || *(_QWORD *)(*(_QWORD *)(224LL * i + v8 + 16) + 40LL) == __PAIR64__(v11, v4))
      && (!a4 || *(_QWORD *)(224LL * i + v8 + 24) == a4) )
    {
      return i;
    }
  }
  return v5;
}
