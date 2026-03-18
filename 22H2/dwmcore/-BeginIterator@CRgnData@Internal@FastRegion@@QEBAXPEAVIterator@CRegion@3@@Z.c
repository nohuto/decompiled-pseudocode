/*
 * XREFs of ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042744
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180017540 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x180017788 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_C.c)
 *     ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800198F0 (-EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@P.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800209F4 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x18003F7E4 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x180042300 (-CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ.c)
 *     ??$GetRectangles@V?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@CRegion@@QEBAXV?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@Z @ 0x180042480 (--$GetRectangles@V-$back_insert_iterator@V-$vector@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UM.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180042648 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180049720 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x18009719C (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D9260 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x18010A828 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x18010A8E0 (-UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180133C10 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1801B1FE0 (-GetRectangles@CRegionShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1801B20A0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801B22E4 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?AddInvalidRects@CDDisplayRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1801E8240 (-AddInvalidRects@CDDisplayRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801F6D14 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x180247F80 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV-$DynArrayIA@UtagRECT.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x180289500 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ContributeRegionToDirty @ 0x18029AD80 (ContributeRegionToDirty.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@@Z @ 0x18029DCA4 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMi_ea_18029DCA4.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18029E220 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802A00F0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x1802A0F3C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x1802A1964 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x1802A1D00 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 *     ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1802AAFF0 (-GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1802B4BE4 (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::BeginIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  int v3; // eax
  char *v4; // rdx
  FastRegion::Internal::CRgnData *v5; // rcx
  __int64 v6; // rdx

  *(_QWORD *)a2 = this;
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v4 = (char *)this + 12;
    *((_QWORD *)a2 + 2) = (char *)this + 12;
    *((_QWORD *)a2 + 1) = (char *)this + 8 * v3 + 4;
    v5 = (FastRegion::Internal::CRgnData *)((char *)this + *((int *)this + 4) + 12);
    *((_DWORD *)a2 + 8) = 0;
    *((_QWORD *)a2 + 3) = v5;
    v6 = (__int64)&v4[*((int *)v4 + 3) - (_QWORD)v5 + 8] >> 3;
    *((_DWORD *)a2 + 9) = v6;
    if ( (int)v6 <= 0 )
      FastRegion::Internal::CRgnData::StepIterator(v5, a2);
  }
  else
  {
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
  }
}
