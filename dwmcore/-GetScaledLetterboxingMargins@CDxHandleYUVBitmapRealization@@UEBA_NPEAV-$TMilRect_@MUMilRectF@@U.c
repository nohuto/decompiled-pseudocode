char __fastcall CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(__int64 a1, float *a2)
{
  char v2; // di
  float v5; // xmm8_4
  float v6; // xmm6_4
  float v7; // xmm9_4
  float v8; // xmm7_4
  float v9; // xmm2_4
  float v10; // xmm2_4
  __int128 v12; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v13[64]; // [rsp+30h] [rbp-98h] BYREF
  int v14; // [rsp+70h] [rbp-58h]
  float v15; // [rsp+D0h] [rbp+8h] BYREF
  float v16; // [rsp+E0h] [rbp+18h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a1 - 272) & 0x8000) != 0 )
  {
    v14 = 0;
    v12 = 0LL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CBitmapRealization *)(a1 - 504),
      (CMILMatrix *)v13,
      &v12,
      0LL);
    v5 = *(float *)(a1 - 312);
    *a2 = v5;
    v6 = *(float *)(a1 - 308);
    a2[1] = v6;
    v7 = *(float *)(a1 - 304);
    a2[2] = v7;
    v8 = *(float *)(a1 - 300);
    a2[3] = v8;
    v15 = 1.0;
    v16 = 1.0;
    CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v13, &v15, &v16);
    v9 = v15;
    if ( !IsCloseRealZero(v15, 0.0000011920929) )
    {
      *a2 = v5 / v9;
      a2[2] = v7 / v9;
    }
    v10 = v16;
    if ( !IsCloseRealZero(v16, 0.0000011920929) )
    {
      a2[1] = v6 / v10;
      a2[3] = v8 / v10;
    }
    return 1;
  }
  return v2;
}
