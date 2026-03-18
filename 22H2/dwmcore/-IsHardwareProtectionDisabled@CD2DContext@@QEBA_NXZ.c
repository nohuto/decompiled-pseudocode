/*
 * XREFs of ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x180287B9C
 * Callers:
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180072F50 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801DB8A4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180287DE8 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ?TempReenableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180287E34 (-TempReenableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CD2DContext::IsHardwareProtectionDisabled(CD2DContext *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 436) || byte_1803EA170 )
    return 1;
  return result;
}
