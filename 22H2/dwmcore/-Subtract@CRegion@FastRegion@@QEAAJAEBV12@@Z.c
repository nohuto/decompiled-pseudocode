/*
 * XREFs of ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800468F0
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013920 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAXXZ @ 0x180044E84 (-OccludeRegions@CMegaRectCollection@@AEAAXXZ.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180046640 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A1EC (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E950 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080750 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800819D8 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D7A20 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D9260 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F8324 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x1800FAF50 (-CalcDesktopClip@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl.c)
 *     ?NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18028B450 (-NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18029EA40 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRec.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x1802A0F3C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802B28B8 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044D1C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800469A8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180046B48 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180046D88 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x1801B17C8 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  unsigned int v8; // ebx
  FastRegion::Internal::CRgnData *v10; // rax
  int v11; // [rsp+20h] [rbp-128h] BYREF
  void *lpMem; // [rsp+28h] [rbp-120h]
  _BYTE v13[256]; // [rsp+30h] [rbp-118h] BYREF

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v5 = *this;
  if ( !*(_DWORD *)v5 )
    return 0LL;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v5, v4);
  v7 = (FastRegion::Internal::CRgnData *)v13;
  lpMem = v13;
  v11 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    v10 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v6);
    v7 = v10;
    if ( !v10 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v11);
      return 2147942414LL;
    }
    lpMem = v10;
  }
  FastRegion::Internal::CRgnData::Subtract(v7, *this, *a2);
  v8 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v11);
  if ( v13 != lpMem )
    operator delete(lpMem);
  return v8;
}
