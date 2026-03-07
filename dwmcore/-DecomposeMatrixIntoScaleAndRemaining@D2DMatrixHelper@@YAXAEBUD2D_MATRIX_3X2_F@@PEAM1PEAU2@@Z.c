void __fastcall D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  const struct D2D_MATRIX_3X2_F *v8; // rdx
  D2DMatrixHelper *v9; // rcx
  float *v10; // r8
  float *v11; // r9
  int v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  int v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  struct D2D_MATRIX_3X2_F *v19; // [rsp+20h] [rbp-8h]

  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(this, a2, a3, a4, v19) )
  {
    D2DMatrixHelper::GetScaleDimensions(v9, v8, v10, v11);
    v12 = *((_DWORD *)this + 4);
    v13 = 1.0 / a2->m11;
    v14 = 1.0 / *a3;
    v15 = *((_DWORD *)this + 5);
    v16 = v13 * *((float *)this + 1);
    v17 = v14 * *((float *)this + 2);
    v18 = v14 * *((float *)this + 3);
    *a4 = v13 * *(float *)this;
    a4[1] = v16;
    a4[2] = v17;
    a4[3] = v18;
    *((_DWORD *)a4 + 4) = v12;
    *((_DWORD *)a4 + 5) = v15;
  }
}
