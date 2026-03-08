/*
 * XREFs of ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x18028441C
 * Callers:
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180072D80 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801D85D4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180284668 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ?TempReenableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x1802846B4 (-TempReenableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CD2DContext::IsHardwareProtectionDisabled(CD2DContext *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 436) || byte_1803E7060 )
    return 1;
  return result;
}
