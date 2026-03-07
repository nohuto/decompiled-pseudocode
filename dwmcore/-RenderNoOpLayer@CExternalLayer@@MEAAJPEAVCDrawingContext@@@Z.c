__int64 __fastcall CExternalLayer::RenderNoOpLayer(CExternalLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm1
  __m128i v4; // xmm0
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  _OWORD v22[4]; // [rsp+40h] [rbp-29h] BYREF
  int v23; // [rsp+80h] [rbp+17h]
  _DWORD v24[4]; // [rsp+90h] [rbp+27h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v6 = *((_DWORD *)this + 28);
  v24[0] = 0;
  v24[1] = 0;
  v23 = v6;
  v24[2] = _mm_cvtepi32_ps(v2).m128_u32[0];
  v7 = *((_OWORD *)this + 3);
  v24[3] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v8 = *((_OWORD *)this + 4);
  v22[0] = v7;
  v9 = *((_OWORD *)this + 5);
  v22[1] = v8;
  v10 = *((_OWORD *)this + 6);
  v22[2] = v9;
  v22[3] = v10;
  if ( CMILMatrix::IsIdentity<1>((__int64)v22, (__int64)a2) || CMILMatrix::Invert((CMILMatrix *)v22, v11, v12) )
  {
    v15 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v22, 0, 1);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x11Cu, 0LL);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 24LL))((char *)a2 + 24);
      v18 = *((_QWORD *)this + 1);
      if ( v18 )
        v18 += *(int *)(*(_QWORD *)(v18 + 8) + 16LL) + 8LL;
      v19 = CDrawingContext::DrawBitmapRealization((__int64)a2, v18, (__int64)v24, (__int64)v24, 0, v17, (int)FLOAT_1_0);
      v14 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x123u, 0LL);
      CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  else
  {
    v14 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147418113, 0x11Au, 0LL);
  }
  return v14;
}
