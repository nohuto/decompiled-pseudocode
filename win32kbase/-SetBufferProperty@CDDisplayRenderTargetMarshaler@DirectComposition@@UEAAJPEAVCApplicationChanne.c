/*
 * XREFs of ?SetBufferProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0266530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  __m128i v8; // xmm1
  unsigned int v9; // r11d
  __int64 v10; // r8
  unsigned int v11; // r9d
  unsigned __int64 v12; // xmm0_8
  __m128 v13; // xmm1
  float v14; // xmm2_4
  __int64 v15; // rax

  v6 = 0;
  *a6 = 0;
  switch ( a3 )
  {
    case 4:
      if ( a5 == 8 )
      {
        v15 = a4->m128i_i64[0];
        if ( !*((_QWORD *)this + 7) )
        {
          if ( v15 )
          {
            *((_QWORD *)this + 7) = v15;
            goto LABEL_25;
          }
        }
      }
      return (unsigned int)-1073741811;
    case 8:
      if ( a5 != 16 )
        return (unsigned int)-1073741811;
      v13 = (__m128)_mm_loadu_si128(a4);
      LODWORD(v14) = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
      if ( _mm_shuffle_ps(v13, v13, 170).m128_f32[0] < v13.m128_f32[0]
        || _mm_shuffle_ps(v13, v13, 255).m128_f32[0] < v14 )
      {
        return (unsigned int)-1073741811;
      }
      *((_DWORD *)this + 4) |= 0x80u;
      *((__m128 *)this + 6) = v13;
      break;
    case 10:
      if ( a5 != 16 )
        return (unsigned int)-1073741811;
      v8 = *a4;
      v9 = *((_DWORD *)this + 33);
      v10 = a4->m128i_i64[0];
      if ( (unsigned int)a4->m128i_i64[0] >= v9 )
        return (unsigned int)-1073741811;
      v11 = *((_DWORD *)this + 34);
      if ( HIDWORD(v10) >= v11 )
        return (unsigned int)-1073741811;
      v12 = _mm_srli_si128(v8, 8).m128i_u64[0];
      if ( (unsigned int)v12 <= (unsigned int)v10
        || (unsigned int)v12 > v9
        || HIDWORD(v12) <= HIDWORD(v10)
        || HIDWORD(v12) > v11 )
      {
        return (unsigned int)-1073741811;
      }
      *((_DWORD *)this + 4) |= 0x80u;
      *(__m128i *)((char *)this + 116) = v8;
      break;
    default:
      if ( a3 == 12 && a5 == 8 )
      {
        v7 = a4->m128i_i64[0];
        if ( (unsigned int)a4->m128i_i64[0] )
        {
          if ( HIDWORD(v7) )
          {
            *(_QWORD *)((char *)this + 132) = v7;
LABEL_25:
            *((_DWORD *)this + 4) |= 0x20u;
            break;
          }
        }
      }
      return (unsigned int)-1073741811;
  }
  *a6 = 1;
  return v6;
}
