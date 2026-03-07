__int64 __fastcall CExternalLayer::CalcDeviceTransformDelta(
        CExternalLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  int v10; // xmm0_4
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm0
  _OWORD v16[4]; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+70h] [rbp+7h]
  unsigned int v18; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v19; // [rsp+84h] [rbp+1Bh]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  float v22; // [rsp+90h] [rbp+27h]
  __int32 v23; // [rsp+94h] [rbp+2Bh]
  float v24; // [rsp+98h] [rbp+2Fh]
  float v25; // [rsp+9Ch] [rbp+33h]

  v17 = 0;
  v5 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(a2, (struct MilPointAndSizeL *)&v18);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x41u, 0LL);
  }
  else
  {
    v8 = _mm_cvtsi32_si128(v18);
    v9 = _mm_cvtsi32_si128(v19);
    v18 = 0;
    v19 = 0;
    v22 = _mm_cvtepi32_ps(v8).m128_f32[0];
    *(float *)v9.m128i_i32 = _mm_cvtepi32_ps(v9).m128_f32[0];
    v24 = (float)v20 + v22;
    *(float *)&v10 = (float)*((int *)this + 7);
    v25 = (float)v21 + *(float *)v9.m128i_i32;
    *(float *)v8.m128i_i32 = (float)*((int *)this + 6);
    v23 = v9.m128i_i32[0];
    v20 = v8.m128i_i32[0];
    v21 = v10;
    CMILMatrix::InferAffineMatrix((CMILMatrix *)v16);
    v11 = v16[1];
    v12 = v16[2];
    v13 = v17;
    *(_OWORD *)a3 = v16[0];
    *((_OWORD *)a3 + 1) = v11;
    v14 = v16[3];
    *((_OWORD *)a3 + 2) = v12;
    *((_OWORD *)a3 + 3) = v14;
    *((_DWORD *)a3 + 16) = v13;
  }
  return v7;
}
