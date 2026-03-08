/*
 * XREFs of ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801D9EA8
 * Callers:
 *     ?CalcSourceRect@CBitmapRealization@@QEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180014D84 (-CalcSourceRect@CBitmapRealization@@QEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801D85D4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A71F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(__int64 a1, _DWORD *a2)
{
  bool IsEmpty; // al
  _DWORD *v3; // rdx
  _DWORD *v4; // r9
  char v5; // r8

  IsEmpty = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(a2);
  v5 = 0;
  if ( IsEmpty )
    return 1;
  if ( *v3 >= *v4 && v3[1] >= v4[1] && v3[2] <= v4[2] )
    return v3[3] <= v4[3];
  return v5;
}
