__int64 __fastcall LogicalToPhysicalInPlaceRect(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v6; // r11d
  __m128i v7; // xmm0
  int v8; // r10d
  __m128i v9; // xmm0
  int v10; // r9d
  __m128i v11; // xmm0
  __int64 v12; // rax
  int v13; // ecx
  int v14; // edx

  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 2) != 0
    && *(_QWORD *)(a1 + 216)
    && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v2 = 1;
    v6 = (int)(float)((float)*(int *)a2 * **(float **)(a1 + 216));
    v7 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
    *(_DWORD *)a2 = v6;
    v8 = (int)(float)(_mm_cvtepi32_ps(v7).m128_f32[0] * *(float *)(*(_QWORD *)(a1 + 216) + 20LL));
    v9 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 8));
    *(_DWORD *)(a2 + 4) = v8;
    v10 = (int)(float)(_mm_cvtepi32_ps(v9).m128_f32[0] * **(float **)(a1 + 216));
    v11 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
    *(_DWORD *)(a2 + 8) = v10;
    *(float *)v11.m128i_i32 = _mm_cvtepi32_ps(v11).m128_f32[0] * *(float *)(*(_QWORD *)(a1 + 216) + 20LL);
    *(_DWORD *)(a2 + 12) = (int)*(float *)v11.m128i_i32;
    v12 = *(_QWORD *)(a1 + 216);
    v13 = (int)*(float *)(v12 + 48);
    v14 = (int)*(float *)(v12 + 52);
    *(_DWORD *)a2 = v6 + v13;
    *(_DWORD *)(a2 + 8) = v10 + v13;
    *(_DWORD *)(a2 + 12) = (int)*(float *)v11.m128i_i32 + v14;
    *(_DWORD *)(a2 + 4) = v8 + v14;
  }
  return v2;
}
