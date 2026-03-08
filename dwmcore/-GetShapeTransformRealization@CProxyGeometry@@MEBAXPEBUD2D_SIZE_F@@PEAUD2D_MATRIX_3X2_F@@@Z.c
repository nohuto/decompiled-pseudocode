/*
 * XREFs of ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180249C40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DB370 (-GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180251F10 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

void __fastcall CProxyGeometry::GetShapeTransformRealization(
        CProxyGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  bool v5; // zf
  __int128 v7; // xmm1
  CViewBox *v8; // rcx
  __int64 v9; // xmm1_8
  __int64 v10; // xmm0_8
  D2D_SIZE_F v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h]
  struct D2D_MATRIX_3X2_F v14; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_MATRIX_3X2_F v15; // [rsp+58h] [rbp-28h] BYREF

  *(_QWORD *)&v14.m[2][0] = 0LL;
  v5 = *((_QWORD *)this + 10) == 0LL;
  v7 = *(_OWORD *)&_xmm;
  *(_OWORD *)&v14.m11 = *(_OWORD *)&_xmm;
  if ( !v5 )
  {
    CGeometry::GetShapeTransformRealization(this, a2, &v14);
    v7 = *(_OWORD *)&v14.m11;
  }
  v8 = (CViewBox *)*((_QWORD *)this + 19);
  if ( v8 )
  {
    v11 = 0LL;
    if ( a2 )
      v11 = *a2;
    CViewBox::GetRealization(v8, &v11, &v15);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v12,
      (const struct D2D1::Matrix3x2F *)&v15,
      (const struct D2D1::Matrix3x2F *)&v14);
    v9 = v13;
    *(_OWORD *)&a3->m11 = v12;
    *(_QWORD *)&a3->m[2][0] = v9;
  }
  else
  {
    v10 = *(_QWORD *)&v14.m[2][0];
    *(_OWORD *)&a3->m11 = v7;
    *(_QWORD *)&a3->m[2][0] = v10;
  }
}
