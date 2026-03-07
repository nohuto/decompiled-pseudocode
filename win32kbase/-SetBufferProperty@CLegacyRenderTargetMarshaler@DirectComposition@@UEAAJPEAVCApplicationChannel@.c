__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  unsigned __int64 v7; // xmm0_8
  __m128 v9; // xmm1
  float v10; // xmm2_4
  __int64 v11; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 == 6 )
  {
    if ( a5 == 16 )
    {
      v9 = (__m128)_mm_loadu_si128(a4);
      LODWORD(v10) = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
      if ( _mm_shuffle_ps(v9, v9, 170).m128_f32[0] >= v9.m128_f32[0] && _mm_shuffle_ps(v9, v9, 255).m128_f32[0] >= v10 )
      {
        *(__m128 *)((char *)this + 88) = v9;
        goto LABEL_8;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 2 )
  {
    if ( a5 == 8 && !*((_DWORD *)this + 14) && !*((_DWORD *)this + 15) )
    {
      v11 = a4->m128i_i64[0];
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 7) = v11;
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 8 )
    return (unsigned int)-1073741811;
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v7 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  if ( (unsigned int)v7 <= (unsigned int)a4->m128i_i64[0] || HIDWORD(v7) <= HIDWORD(a4->m128i_i64[0]) )
    return (unsigned int)-1073741811;
  *(__m128i *)((char *)this + 108) = *a4;
LABEL_8:
  *((_DWORD *)this + 4) |= 0x80u;
LABEL_9:
  *a6 = 1;
  return v6;
}
