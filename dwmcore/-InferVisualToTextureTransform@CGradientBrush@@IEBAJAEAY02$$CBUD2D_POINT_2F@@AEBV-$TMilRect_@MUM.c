__int64 __fastcall CGradientBrush::InferVisualToTextureTransform(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm0_4
  char v4; // al
  float v5; // xmm2_4
  __int64 v6; // rdx
  int v7; // xmm1_4
  int v8; // xmm2_4
  int v9; // xmm3_4
  int v10; // xmm4_4
  int v11; // xmm5_4
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  _DWORD v16[20]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v17[4]; // [rsp+80h] [rbp+37h] BYREF

  v3 = *(float *)&FLOAT_1_0;
  v4 = *(_BYTE *)(a1 + 152);
  if ( v4 == 1 && *(_BYTE *)(a1 + 226) )
  {
    v5 = 1.0 / *(float *)(a3 + 8);
LABEL_4:
    v3 = 1.0 - (float)(1.0 / *(float *)(a3 + 8));
    goto LABEL_5;
  }
  v5 = 0.0;
  if ( v4 == 1 )
    goto LABEL_4;
LABEL_5:
  *(float *)v17 = v5;
  *(float *)&v17[1] = v5;
  *(float *)&v17[2] = v3;
  *(float *)&v17[3] = v3;
  CMILMatrix::SetToIdentity((CMILMatrix *)v16);
  CMILMatrix::InferAffineMatrix(v16, v17, v6);
  v7 = v16[1];
  v8 = v16[4];
  v9 = v16[5];
  v10 = v16[12];
  v11 = v16[13];
  *(_DWORD *)v12 = v16[0];
  *(_DWORD *)(v12 + 4) = v7;
  *(_DWORD *)(v12 + 8) = v8;
  *(_DWORD *)(v12 + 12) = v9;
  *(_DWORD *)(v12 + 16) = v10;
  *(_DWORD *)(v12 + 20) = v11;
  if ( D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)v12) )
  {
    return 0;
  }
  else
  {
    v14 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(
      v13,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304441,
      0x1ADu,
      0LL);
  }
  return v14;
}
