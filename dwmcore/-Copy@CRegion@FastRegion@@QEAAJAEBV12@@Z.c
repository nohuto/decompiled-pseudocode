/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047B80
 * Callers:
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180046470 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D6F70 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1800F5E00 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z @ 0x18012D8B6 (-HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x18012D90C (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801D85D4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801F3F90 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x180285D80 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z @ 0x180287E60 (-PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18029AAA0 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18029B470 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18029D7BC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18029F0F0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AD49C (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(int **this, int **a2)
{
  int *v3; // rbx
  int v4; // r8d
  int *v5; // rdi
  int *v6; // r14
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // esi
  __int64 v11; // r9
  int *v12; // r8
  _DWORD *v13; // r11
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9

  if ( this == a2 )
    return 0LL;
  v3 = *a2;
  v4 = **a2;
  if ( !v4 )
  {
    **this = 0;
    return 0LL;
  }
  v5 = *this;
  v6 = (int *)(this + 1);
  v7 = 60;
  v8 = v3[2 * v4 + 2] + 8 * v4 - v3[4] - 12 + 8 * (v4 - 1) + 24;
  if ( this + 1 != (int **)*this )
    v7 = *v6;
  if ( v7 >= v8 )
    goto LABEL_6;
  v5 = (int *)DefaultHeap::Alloc(v8);
  if ( v5 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v5;
    *v6 = v8;
LABEL_6:
    v9 = *v3;
    v10 = 0;
    *v5 = *v3;
    v5[1] = v3[1];
    v5[2] = v3[2];
    v11 = (__int64)v3 + v3[4] + 12;
    v12 = &v5[2 * v9 + 3];
    if ( v9 > 0 )
    {
      v13 = v5 + 3;
      do
      {
        *v13 = *(_DWORD *)((char *)v13 + (char *)v3 - (char *)v5);
        v13 += 2;
        v14 = v10++;
        v5[2 * v14 + 4] = (_DWORD)v3
                        + 8 * v14
                        + 4 * (((__int64)v12 - v11) >> 2)
                        + v3[2 * v14 + 4]
                        - ((_DWORD)v5
                         + 8 * v14);
      }
      while ( v10 < *v5 );
    }
    v15 = (__int64)&v3[2 * *v3 + 1];
    v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v3[4] - ((int)v3 + 12)) >> 2;
    v17 = (int)v16;
    if ( (int)v16 > 0 )
    {
      v18 = v11 - (_QWORD)v12;
      do
      {
        *v12 = *(int *)((char *)v12 + v18);
        ++v12;
        --v17;
      }
      while ( v17 );
    }
    return 0LL;
  }
  return 2147942414LL;
}
