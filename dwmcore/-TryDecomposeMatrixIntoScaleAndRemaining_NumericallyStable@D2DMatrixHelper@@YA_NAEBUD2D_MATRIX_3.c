/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800308F4
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800308A8 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007F7E4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float *v4; // rdx
  int *v5; // rcx
  _DWORD *v6; // r8
  __int64 v7; // r9
  __int64 v8; // xmm1_8
  int v9; // xmm3_4
  float v10; // xmm3_4
  bool v11; // cc
  int v12; // xmm0_4
  float v13; // xmm0_4
  int v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4

  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving(this, a2) )
    return 0;
  v8 = *((_QWORD *)v5 + 2);
  v9 = *v5;
  *(_OWORD *)v7 = *(_OWORD *)v5;
  *(_QWORD *)(v7 + 16) = v8;
  LODWORD(v10) = v9 & _xmm;
  if ( v10 >= 0.000081380211 || COERCE_FLOAT(v5[3] & _xmm) >= 0.000081380211 )
  {
    v11 = *(float *)v7 >= 0.0;
    v12 = v5[3] & _xmm;
    *v4 = v10;
    *v6 = v12;
    if ( v11 )
      v13 = *(float *)&FLOAT_1_0;
    else
      v13 = FLOAT_N1_0;
    v11 = *(float *)(v7 + 12) >= 0.0;
    *(float *)v7 = v13;
    if ( v11 )
      *(_DWORD *)(v7 + 12) = 1065353216;
    else
      *(_DWORD *)(v7 + 12) = -1082130432;
  }
  else
  {
    v11 = *(float *)(v7 + 4) >= 0.0;
    v15 = v5[2] & _xmm;
    *(_DWORD *)v4 = v5[1] & _xmm;
    v16 = FLOAT_N1_0;
    *v6 = v15;
    if ( v11 )
      v17 = *(float *)&FLOAT_1_0;
    else
      v17 = FLOAT_N1_0;
    *(float *)(v7 + 4) = v17;
    if ( *(float *)(v7 + 8) >= 0.0 )
      v16 = *(float *)&FLOAT_1_0;
    *(float *)(v7 + 8) = v16;
  }
  return 1;
}
