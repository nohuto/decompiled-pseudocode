void __fastcall CD3DDevice::CalcHDRConvertUVTransform(
        int *a1,
        int *a2,
        unsigned int *a3,
        enum DXGI_MODE_ROTATION a4,
        __int64 a5,
        CMILMatrix *a6)
{
  int v6; // eax
  __m128i v8; // xmm9
  __m128i v9; // xmm10
  __m128i v10; // xmm7
  __m128i v11; // xmm6
  __m128i v12; // xmm5
  __m128i v13; // xmm4
  unsigned int v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  __m128i v18; // xmm0
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  CMILMatrix *v23; // rcx
  float v24; // xmm4_4
  float v25; // xmm5_4
  const struct CMILMatrix *v26; // rdx
  __int64 v27; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v28; // r8
  _OWORD v29[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v30; // [rsp+68h] [rbp-A0h]
  _OWORD v31[4]; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+B8h] [rbp-50h]
  _BYTE v33[64]; // [rsp+C8h] [rbp-40h] BYREF
  int v34; // [rsp+108h] [rbp+0h]
  __int128 v35; // [rsp+118h] [rbp+10h] BYREF
  _DWORD v36[12]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v37; // [rsp+158h] [rbp+50h]

  v6 = *a1;
  v8 = _mm_cvtsi32_si128(*a3);
  v9 = _mm_cvtsi32_si128(a3[1]);
  v10 = _mm_cvtsi32_si128(a3[2]);
  v11 = _mm_cvtsi32_si128(a3[3]);
  v12 = _mm_cvtsi32_si128(*(_DWORD *)a5);
  v13 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
  *(_QWORD *)&v35 = 0LL;
  v36[8] = 0;
  v36[9] = 0;
  v36[4] = 0;
  v36[5] = 0;
  v34 = 0;
  v37 = _xmm;
  *(float *)&v14 = (float)v6;
  v15 = *a2;
  *((_QWORD *)&v35 + 1) = __PAIR64__((float)a1[1], v14);
  v16 = (float)v15;
  v17 = a2[1];
  *(float *)&v36[10] = v16;
  v18 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 8));
  *(float *)&v36[11] = (float)v17;
  LODWORD(v19) = _mm_cvtepi32_ps(v8).m128_u32[0];
  LODWORD(v20) = _mm_cvtepi32_ps(v9).m128_u32[0];
  LODWORD(v21) = _mm_cvtepi32_ps(v10).m128_u32[0];
  LODWORD(v22) = _mm_cvtepi32_ps(v11).m128_u32[0];
  *(float *)&v36[7] = (float)*(int *)(a5 + 12) - _mm_cvtepi32_ps(v13).m128_f32[0];
  *(float *)v36 = v19;
  *(float *)&v36[1] = v20;
  *(float *)&v36[2] = v21;
  *(float *)&v36[3] = v22;
  *(float *)&v36[6] = _mm_cvtepi32_ps(v18).m128_f32[0] - _mm_cvtepi32_ps(v12).m128_f32[0];
  CMILMatrix::InferAffineMatrix(a6);
  if ( v25 != 0.0 || v24 != 0.0 )
    CMILMatrix::Translate(v23, COERCE_FLOAT(LODWORD(v25) ^ _xmm), COERCE_FLOAT(LODWORD(v24) ^ _xmm));
  if ( a4 == DXGI_MODE_ROTATION_IDENTITY )
  {
    CMILMatrix::InferAffineMatrix((CMILMatrix *)v33);
    v26 = (const struct CMILMatrix *)v33;
  }
  else
  {
    v30 = 0;
    v35 = 0LL;
    CMILMatrix::SetToRotation((CMILMatrix *)v29, v21 - v19, v22 - v20, a4);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v29, (struct MilRectF *)v36, (float *)&v35);
    CMILMatrix::InferAffineMatrix((CMILMatrix *)v33);
    CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v33);
    v31[0] = v29[0];
    v31[1] = v29[1];
    v31[2] = v29[2];
    v31[3] = v29[3];
    v32 = v30;
    CMILMatrix::Invert((CMILMatrix *)v31, v27, v28);
    v26 = (const struct CMILMatrix *)v31;
  }
  CMILMatrix::Multiply(a6, v26);
  CMILMatrix::InferAffineMatrix((CMILMatrix *)v33);
  CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v33);
}
