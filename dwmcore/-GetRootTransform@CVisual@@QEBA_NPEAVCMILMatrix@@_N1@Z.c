/*
 * XREFs of ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E7548
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180020F00 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801D05E8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetContentOffset@CRemoteAppRenderTarget@@IEBA?AUD2D_POINT_2F@@XZ @ 0x1801E7984 (-GetContentOffset@CRemoteAppRenderTarget@@IEBA-AUD2D_POINT_2F@@XZ.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801E7B98 (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801E7FA8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x1802529C0 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180053828 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800583E0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800E76A8 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 */

char __fastcall CVisual::GetRootTransform(CVisual *this, struct CMILMatrix *a2, char a3)
{
  char v4; // si
  __int64 v7; // rdx
  char v8; // r9
  float v9; // xmm2_4
  CTransform3D *v10; // rcx
  CTransform3D *Transform3DEffectNoRef; // rbp
  const struct CMILMatrix *Matrix; // rax
  int v14; // xmm0_4
  int v15; // xmm1_4
  char v16; // al
  const struct CMILMatrix *v17; // rax

  v4 = 0;
  CMILMatrix::SetToIdentity(a2);
  if ( !v8 )
  {
    v9 = *((float *)this + 31);
    if ( v9 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      v14 = *((_DWORD *)this + 32);
      v15 = *((_DWORD *)this + 30);
      v4 = 1;
      *(_QWORD *)v7 = 1065353216LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_DWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 20) = 1065353216LL;
      *(_QWORD *)(v7 + 28) = 0LL;
      *(_DWORD *)(v7 + 36) = 0;
      *(_QWORD *)(v7 + 40) = 1065353216LL;
      *(float *)(v7 + 48) = v9;
      *(_DWORD *)(v7 + 52) = v14;
      *(_DWORD *)(v7 + 56) = v15;
      *(_DWORD *)(v7 + 60) = 1065353216;
      *(_BYTE *)(v7 + 64) = 84;
      *(_BYTE *)(v7 + 65) = *(_BYTE *)(v7 + 65) & 0xC0 | 0x17;
    }
    v10 = (CTransform3D *)*((_QWORD *)this + 30);
    if ( v10 )
    {
      Matrix = CTransform3D::GetMatrix(v10, (const struct D2D_SIZE_F *)((char *)this + 140));
      CMILMatrix::Multiply(Matrix, a2, a2);
      v4 = 1;
    }
  }
  if ( !a3 )
  {
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
    if ( Transform3DEffectNoRef && *((_DWORD *)this + 27) != 2
      || CVisual::IsSimple3DRootOrHasEffects(this, *((const struct CVisual **)this + 11)) )
    {
      v4 = 1;
      v16 = *((_BYTE *)a2 + 64) | 3;
      *((_QWORD *)a2 + 4) = 0LL;
      *((_QWORD *)a2 + 5) = 0LL;
      *((_BYTE *)a2 + 64) = v16 & 0xF3;
    }
    if ( Transform3DEffectNoRef )
    {
      v17 = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)((char *)this + 140));
      CMILMatrix::Multiply(v17, a2, a2);
      return 1;
    }
  }
  return v4;
}
