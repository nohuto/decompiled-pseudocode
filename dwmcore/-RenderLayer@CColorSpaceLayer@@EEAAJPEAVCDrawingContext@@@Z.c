__int64 __fastcall CColorSpaceLayer::RenderLayer(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm1
  __m128i v4; // xmm0
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v14[0] = 0;
  v14[1] = 0;
  v6 = *((_QWORD *)a2 + 3);
  v14[2] = _mm_cvtepi32_ps(v2).m128_u32[0];
  v14[3] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v7 = (*(__int64 (__fastcall **)(char *))(v6 + 24))((char *)a2 + 24);
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
    v9 = v8 + *(int *)(*(_QWORD *)(v8 + 8) + 16LL) + 8LL;
  else
    v9 = 0LL;
  v10 = CDrawingContext::DrawBitmapRealization((__int64)a2, v9, (__int64)v14, (__int64)v14, 0, v7, (int)FLOAT_1_0);
  v12 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x52u, 0LL);
  return v12;
}
