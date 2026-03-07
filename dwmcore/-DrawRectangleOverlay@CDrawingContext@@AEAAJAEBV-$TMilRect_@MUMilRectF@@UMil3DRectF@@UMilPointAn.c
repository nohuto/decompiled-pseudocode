__int64 __fastcall CDrawingContext::DrawRectangleOverlay(gsl::details *a1, __int64 a2)
{
  __m128 v2; // xmm1
  __int128 v3; // xmm0
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  g_DirtyRegionColor = (g_DirtyRegionColor + 1) % 3;
  v2 = (__m128)_mm_loadu_si128(&xmmword_180383958[g_DirtyRegionColor]);
  LODWORD(v8) = v2.m128_i32[0];
  HIDWORD(v8) = _mm_shuffle_ps(v2, v2, 255).m128_u32[0];
  DWORD1(v8) = _mm_shuffle_ps(v2, v2, 85).m128_u32[0];
  DWORD2(v8) = _mm_shuffle_ps(v2, v2, 170).m128_u32[0];
  v3 = v8;
  *(_QWORD *)&v8 = 1LL;
  *((_QWORD *)&v8 + 1) = a2;
  v9 = v3;
  if ( !a2 )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  v4 = CDrawingContext::FillRectanglesWithSolidColor(a1, &v8, (__int64)&v9);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x187Du, 0LL);
  return v6;
}
