/*
 * XREFs of ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180251F10
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 *     ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180249C40 (-GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x18013083E (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 */

void __fastcall CViewBox::GetRealization(
        const struct D2D_SIZE_F *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  int v5; // xmm1_4
  float *v6; // r8
  float v7; // xmm1_4
  __int64 v8; // xmm1_8
  struct D2D_RECT_F v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  _DWORD v11[6]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]

  if ( COERCE_FLOAT(LODWORD(this[29].width) & _xmm) < 0.0000011920929
    || COERCE_FLOAT(LODWORD(this[29].height) & _xmm) < 0.0000011920929 )
  {
    *(_QWORD *)&a3->m11 = 1065353216LL;
    a3->m21 = 0.0;
    *(_QWORD *)&a3->m[1][1] = 1065353216LL;
    a3->dy = 0.0;
  }
  else
  {
    StretchAlign::Arrange((StretchAlign *)&this[30], &v9, this + 29, a2, 0LL);
    v5 = LODWORD(this[28].width) ^ _xmm;
    v11[1] = 0;
    v11[2] = 0;
    v13 = v5;
    v11[4] = LODWORD(v9.left);
    v12 = *(_OWORD *)&_xmm;
    v7 = (float)(v9.right - v9.left) / *v6;
    v14 = LODWORD(this[28].height) ^ _xmm;
    *(float *)v11 = v7;
    v11[5] = LODWORD(v9.top);
    *(float *)&v11[3] = (float)(v9.bottom - v9.top) / this[29].height;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v9,
      (const struct D2D1::Matrix3x2F *)&v12,
      (const struct D2D1::Matrix3x2F *)v11);
    v8 = v10;
    *(struct D2D_RECT_F *)&a3->m11 = v9;
    *(_QWORD *)&a3->m[2][0] = v8;
  }
}
