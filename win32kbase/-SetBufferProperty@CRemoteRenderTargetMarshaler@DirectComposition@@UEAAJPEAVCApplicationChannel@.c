__int64 __fastcall DirectComposition::CRemoteRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  __m128 v8; // xmm1
  float v9; // xmm2_4
  __int64 v11; // rax

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( a5 == 8 && !*((_DWORD *)this + 14) && !*((_DWORD *)this + 15) )
    {
      v11 = a4->m128i_i64[0];
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 7) = v11;
      goto LABEL_7;
    }
    return (unsigned int)-1073741811;
  }
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v8 = (__m128)_mm_loadu_si128(a4);
  LODWORD(v9) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  if ( _mm_shuffle_ps(v8, v8, 170).m128_f32[0] < v8.m128_f32[0] || _mm_shuffle_ps(v8, v8, 255).m128_f32[0] < v9 )
    return (unsigned int)-1073741811;
  *((_DWORD *)this + 4) |= 0x80u;
  *(__m128 *)((char *)this + 72) = v8;
LABEL_7:
  *a6 = 1;
  return v6;
}
