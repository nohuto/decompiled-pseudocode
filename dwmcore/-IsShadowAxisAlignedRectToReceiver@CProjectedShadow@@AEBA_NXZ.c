/*
 * XREFs of ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x180247C08
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x180245CF8 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007F7E4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x180216614 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 */

bool __fastcall CProjectedShadow::IsShadowAxisAlignedRectToReceiver(CProjectedShadowCaster **this)
{
  char IsRectangular; // al
  const struct D2D_MATRIX_3X2_F *v3; // rdx
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  _DWORD v10[6]; // [rsp+20h] [rbp-28h] BYREF

  IsRectangular = CProjectedShadowCaster::IsRectangular(this[10]);
  LOBYTE(v3) = 0;
  if ( IsRectangular
    && COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) < 0.000081380211
    && COERCE_FLOAT((_DWORD)this[25] & _xmm) < 0.000081380211 )
  {
    v4 = *((_DWORD *)this + 46);
    v10[0] = *((_DWORD *)this + 45);
    v5 = *((_DWORD *)this + 48);
    v10[1] = v4;
    v6 = *((_DWORD *)this + 49);
    v10[2] = v5;
    v7 = *((_DWORD *)this + 51);
    v10[3] = v6;
    v8 = *((_DWORD *)this + 52);
    v10[4] = v7;
    v10[5] = v8;
    LOBYTE(v3) = D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v10, v3);
  }
  return (char)v3;
}
