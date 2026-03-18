/*
 * XREFs of ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800585B0
 * Callers:
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B2BC (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B6F4 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058A10 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800707C0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x1800B2510 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1800B25C0 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3790 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E8118 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1800EF7C0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z @ 0x1800F2260 (-PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801E9F40 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801EDDB0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180218AAC (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180225820 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x180250DFC (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct CMILMatrix *__fastcall CTransform3D::GetMatrix(CTransform3D *this, const struct D2D_SIZE_F *a2)
{
  char v3; // cl
  char v4; // al

  v3 = *((_BYTE *)this + 32) & 1;
  v4 = v3;
  if ( a2 )
  {
    if ( !v3 && *((_BYTE *)this + 156) && (*((float *)this + 37) != a2->width || *((float *)this + 38) != a2->height) )
      v4 = 1;
    *(struct D2D_SIZE_F *)((char *)this + 148) = *a2;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(CTransform3D *, const struct D2D_SIZE_F *, char *))(*(_QWORD *)this + 200LL))(
      this,
      a2,
      (char *)this + 80);
    *((_DWORD *)this + 8) &= ~1u;
  }
  return (CTransform3D *)((char *)this + 80);
}
