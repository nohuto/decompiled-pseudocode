/*
 * XREFs of ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180041458
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x18000C820 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18004123C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800F7748 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?AddDxBltRects@CGdiSpriteBitmap@@AEAAXPEBUtagRECT@@I@Z @ 0x18021A2F0 (-AddDxBltRects@CGdiSpriteBitmap@@AEAAXPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800414C4 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 */

bool __fastcall CRegion::GetBoundingRect(CRegion *this, struct MilRectU *a2)
{
  bool BoundingRect; // r10
  LONG *v3; // r11
  LONG bottom; // r9d
  LONG left; // r8d
  LONG top; // ecx
  LONG right; // ecx
  struct tagRECT v9; // [rsp+20h] [rbp-18h] BYREF

  BoundingRect = FastRegion::CRegion::GetBoundingRect(this, &v9);
  if ( BoundingRect )
  {
    bottom = -1;
    left = -1;
    if ( v9.left >= 0 )
      left = v9.left;
    top = -1;
    *v3 = left;
    if ( v9.top >= 0 )
      top = v9.top;
    v3[1] = top;
    right = -1;
    if ( v9.right >= 0 )
      right = v9.right;
    v3[2] = right;
    if ( v9.bottom >= 0 )
      bottom = v9.bottom;
    v3[3] = bottom;
  }
  return BoundingRect;
}
