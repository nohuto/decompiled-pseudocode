char __fastcall CDxHandleYUVBitmapRealization::GetMPORects(
        __int64 a1,
        CMILMatrix *a2,
        float *a3,
        __int64 a4,
        struct MilRectF *a5)
{
  float v9; // xmm1_4
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  float v17; // xmm1_4
  int v18; // eax
  float v19; // xmm0_4
  int v20; // eax
  float v21; // xmm0_4
  __int128 v23; // [rsp+20h] [rbp-61h] BYREF
  _BYTE v24[64]; // [rsp+30h] [rbp-51h] BYREF
  int v25; // [rsp+70h] [rbp-11h]
  __int128 v26; // [rsp+80h] [rbp-1h] BYREF

  if ( (*(_DWORD *)(a1 - 272) & 0x4000) != 0 )
  {
    v25 = 0;
    v26 = 0uLL;
    v23 = 0uLL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CBitmapRealization *)(a1 - 504),
      (CMILMatrix *)v24,
      &v26,
      &v23);
    v9 = (float)SDWORD1(v23);
    v10 = DWORD2(v23);
    *a3 = (float)(int)v23;
    v11 = (float)v10;
    v12 = HIDWORD(v23);
    a3[1] = v9;
    v13 = (float)v12;
    v14 = v26;
    a3[2] = v11;
    v15 = (float)v14;
    v16 = DWORD1(v26);
    a3[3] = v13;
    v17 = (float)v16;
    v18 = DWORD2(v26);
    *(float *)a5 = v15;
    v19 = (float)v18;
    v20 = HIDWORD(v26);
    *((float *)a5 + 1) = v17;
    *((float *)a5 + 2) = v19;
    v26 = 0LL;
    *((float *)a5 + 3) = (float)v20;
    CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(a1);
    *(_OWORD *)a4 = *(_OWORD *)a5;
    v21 = *(float *)(a4 + 4);
    *(float *)a4 = *(float *)a4 - *(float *)(a1 - 312);
    *(float *)(a4 + 4) = v21 - *(float *)(a1 - 308);
    *(float *)(a4 + 8) = *(float *)(a1 - 304) + *(float *)(a4 + 8);
    *(float *)(a4 + 12) = *(float *)(a1 - 300) + *(float *)(a4 + 12);
  }
  else
  {
    *a3 = (float)*(int *)(a1 - 356);
    a3[1] = (float)*(int *)(a1 - 352);
    a3[2] = (float)*(int *)(a1 - 348);
    a3[3] = (float)*(int *)(a1 - 344);
    *(_QWORD *)a4 = 0LL;
    *(float *)(a4 + 8) = (float)*(int *)(a1 - 296);
    *(float *)(a4 + 12) = (float)*(int *)(a1 - 292);
    *(float *)a5 = (float)*(int *)(a1 - 288);
    *((float *)a5 + 1) = (float)*(int *)(a1 - 284);
    *((float *)a5 + 2) = (float)*(int *)(a1 - 280);
    *((float *)a5 + 3) = (float)*(int *)(a1 - 276);
  }
  CMILMatrix::Transform2DBoundsHelper<0>(a2, (struct MilRectF *)a4, (float *)a4);
  return CMILMatrix::Transform2DBoundsHelper<0>(a2, a5, (float *)a5);
}
