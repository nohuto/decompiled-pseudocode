__int64 __fastcall CDrawingContext::PushOffScreenRenderingLayer(
        CDrawingContext *a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  float v6; // xmm0_4
  float v9; // xmm3_4
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ecx
  __m128 v19; // xmm2
  __m128 v20; // xmm2
  _DWORD v21[6]; // [rsp+38h] [rbp-18h] BYREF
  float v22; // [rsp+70h] [rbp+20h]
  float v23; // [rsp+70h] [rbp+20h]

  v6 = *a3;
  if ( *a3 <= 0.0 || (v9 = a3[1], v9 <= 0.0) )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, 0x5D8u, 0LL);
  }
  else
  {
    v21[0] = 0;
    v21[1] = 0;
    if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v19 = 0LL;
      v19.m128_f32[0] = (float)(int)v6 - v6;
      v10 = (int)v6 - _mm_cmple_ss(v19, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v22 = v6 + 6291456.25;
      v10 = (int)(LODWORD(v22) << 10) >> 11;
    }
    v21[2] = v10;
    if ( (LODWORD(v9) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v20 = 0LL;
      v20.m128_f32[0] = (float)(int)v9 - v9;
      v11 = (int)v9 - _mm_cmple_ss(v20, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v23 = v9 + 6291456.25;
      v11 = (int)(LODWORD(v23) << 10) >> 11;
    }
    v12 = *((_QWORD *)a1 + 4);
    v21[3] = v11;
    v13 = COffScreenRenderingLayer::Create(a2, v12, v21);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x5D4u, 0LL);
    }
    else
    {
      v16 = CDrawingContext::PushLayer(a1, 0LL, 0LL, 1, 1);
      v15 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x5DCu, 0LL);
      else
        SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(a6, MEMORY[8]);
    }
  }
  return v15;
}
