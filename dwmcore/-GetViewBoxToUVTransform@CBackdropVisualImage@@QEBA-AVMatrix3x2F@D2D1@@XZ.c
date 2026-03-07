void __fastcall CBackdropVisualImage::GetViewBoxToUVTransform(__int64 a1, D2D1::Matrix3x2F *a2)
{
  int v2; // xmm1_4
  float v3; // xmm2_4
  float v4; // xmm3_4
  double v5; // xmm0_8
  float v6; // xmm1_4
  float v7[6]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 96) ^ _xmm;
  v3 = *(float *)(a1 + 1876);
  v4 = *(float *)(a1 + 1880);
  v7[1] = 0.0;
  v7[2] = 0.0;
  v8 = *(_OWORD *)&_xmm;
  v10 = *(_DWORD *)(a1 + 100) ^ _xmm;
  v5 = *(double *)(a1 + 128);
  v9 = v2;
  *(float *)&v5 = v5;
  v6 = *(double *)(a1 + 120);
  v7[3] = v4 / *(float *)&v5;
  v7[0] = v3 / v6;
  v7[4] = 0.0 - (float)((float)(v3 / v6) * 0.0);
  v7[5] = 0.0 - (float)((float)(v4 / *(float *)&v5) * 0.0);
  D2D1::Matrix3x2F::SetProduct(a2, (const struct D2D1::Matrix3x2F *)&v8, (const struct D2D1::Matrix3x2F *)v7);
}
