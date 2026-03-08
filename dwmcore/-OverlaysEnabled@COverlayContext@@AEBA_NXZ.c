/*
 * XREFs of ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x1801DB09C
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800FA0D8 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801D85D4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB45C (-TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRect.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::OverlaysEnabled(COverlayContext *this)
{
  return CCommonRegistryData::m_dwOverlayTestMode != 5 && *((_DWORD *)this + 11) > 1u;
}
