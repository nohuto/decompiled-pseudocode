/*
 * XREFs of ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006C578
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003EA80 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18008C5A0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18018608C (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018664C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801F1E10 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180041938 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?UsePixelSnapping@CVisual@@AEBA_NAEBVCMILMatrix@@@Z @ 0x18006C6EC (-UsePixelSnapping@CVisual@@AEBA_NAEBVCMILMatrix@@@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18006C70C (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18006CB28 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18007B128 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x180211284 (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CVisual::GetRootTransform(CVisual *this, struct CMILMatrix *a2)
{
  float v2; // xmm2_4
  char v5; // al
  CTransform3D *v6; // rcx
  CTransform3D *Transform3DEffectNoRef; // rbp
  int v8; // xmm0_4
  int v9; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  const struct CMILMatrix *v11; // rax

  v2 = *((float *)this + 29);
  if ( v2 == 0.0 && *((float *)this + 30) == 0.0 && *((float *)this + 28) == 0.0 )
  {
    v5 = 125;
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_BYTE *)a2 + 64) = 85;
  }
  else
  {
    v8 = *((_DWORD *)this + 30);
    v5 = 61;
    v9 = *((_DWORD *)this + 28);
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((float *)a2 + 12) = v2;
    *((_DWORD *)a2 + 13) = v8;
    *((_DWORD *)a2 + 14) = v9;
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_BYTE *)a2 + 64) = 84;
  }
  *((_BYTE *)a2 + 65) = v5;
  v6 = (CTransform3D *)*((_QWORD *)this + 29);
  if ( v6 )
  {
    Matrix = CTransform3D::GetMatrix(v6, (const struct D2D_SIZE_F *)((char *)this + 132));
    CMILMatrix::Multiply(Matrix, a2, a2);
  }
  Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
  if ( Transform3DEffectNoRef && *((_DWORD *)this + 25) != 2
    || CVisual::IsSimple3DRootOrHasEffects(this, *((const struct CVisual **)this + 10)) )
  {
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    *((_BYTE *)a2 + 64) |= 0xFu;
  }
  if ( Transform3DEffectNoRef )
  {
    v11 = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)((char *)this + 132));
    CMILMatrix::Multiply(v11, a2, a2);
  }
  if ( CVisual::UsePixelSnapping(this, a2) )
    CMILMatrix::RoundOffsets(a2);
}
