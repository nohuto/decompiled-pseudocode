char __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float v4; // xmm3_4
  float left; // xmm4_4
  char v6; // r9
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm2_4
  float top; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  float v17[6]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+64h] [rbp-1Ch]

  v4 = *(float *)this;
  left = a2->left;
  v6 = 1;
  if ( *(float *)this == a2->left
    && *((float *)this + 1) == a2->top
    && *((float *)this + 2) == a2->right
    && *((float *)this + 3) == a2->bottom )
  {
    *(_QWORD *)&a3->left = 1065353216LL;
    a3->right = 0.0;
    *(_QWORD *)&a3->bottom = 1065353216LL;
    a3[1].top = 0.0;
  }
  else
  {
    v7 = *((float *)this + 1);
    v8 = *((float *)this + 2) - v4;
    v9 = *((float *)this + 3) - v7;
    if ( v8 == 0.0 && v9 == 0.0 )
    {
      return 0;
    }
    else
    {
      top = a2->top;
      v17[1] = 0.0;
      v17[2] = 0.0;
      v18 = *(_OWORD *)&_xmm;
      v11 = a2->right - left;
      v19 = LODWORD(v4) ^ _xmm;
      v20 = LODWORD(v7) ^ _xmm;
      v17[4] = left;
      v17[5] = top;
      v17[0] = v11 / v8;
      v17[3] = (float)(a2->bottom - top) / v9;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v15,
        (const struct D2D1::Matrix3x2F *)&v18,
        (const struct D2D1::Matrix3x2F *)v17);
      v12 = v16;
      *(_OWORD *)v13 = v15;
      *(_QWORD *)(v13 + 16) = v12;
    }
  }
  return v6;
}
