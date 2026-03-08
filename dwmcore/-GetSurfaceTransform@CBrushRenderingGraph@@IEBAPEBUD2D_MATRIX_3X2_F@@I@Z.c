/*
 * XREFs of ?GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x180030BE0
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E744 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x180030C2C (-CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct D2D_MATRIX_3X2_F *__fastcall CBrushRenderingGraph::GetSurfaceTransform(
        CBrushRenderingGraph *this,
        unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rcx
  D2D1::Matrix3x2F *v8; // rax
  __int64 v9; // rcx

  v2 = a2;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v6 = *(_QWORD *)(v4 + 24 * v2 + 8);
  if ( v6 )
  {
    v8 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(
                               v6,
                               *(unsigned int *)(v4 + 24 * v2 + 16));
    if ( D2D1::Matrix3x2F::IsIdentity(v8) )
      return 0LL;
    return (const struct D2D_MATRIX_3X2_F *)v9;
  }
  return (const struct D2D_MATRIX_3X2_F *)v5;
}
