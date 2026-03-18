/*
 * XREFs of ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A8890
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003D934 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800A55E0 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800A8320 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800F81B4 (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801DB8A4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18029F2A0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802B7830 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B7B60 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rect.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A88E0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
        __int64 a1,
        __int64 a2)
{
  char IsEmpty; // al
  _DWORD *v3; // rdx
  _DWORD *v4; // r9
  char v5; // r8

  IsEmpty = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
  v5 = 0;
  if ( IsEmpty )
    return 1;
  if ( *v3 >= *v4 && v3[1] >= v4[1] && v3[2] <= v4[2] )
    return v3[3] <= v4[3];
  return v5;
}
