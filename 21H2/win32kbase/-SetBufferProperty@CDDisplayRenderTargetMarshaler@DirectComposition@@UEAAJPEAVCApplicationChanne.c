/*
 * XREFs of ?SetBufferProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01EEE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetBufferProperty(
        __m128i *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // r8d
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rax

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 4;
  if ( !v7 )
  {
    if ( a5 == 8 && !this[3].m128i_i32[2] && !this[3].m128i_i32[3] )
    {
      v11 = a4->m128i_i64[0];
      this[1].m128i_i32[0] |= 0x20u;
      this[3].m128i_i64[1] = v11;
      goto LABEL_17;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    if ( a5 == 16 )
    {
      v10 = _mm_srli_si128(*a4, 8).m128i_u64[0];
      if ( (int)v10 >= (int)a4->m128i_i64[0] && SHIDWORD(v10) >= (int)HIDWORD(a4->m128i_i64[0]) )
      {
        this[6] = *a4;
        goto LABEL_8;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v9 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  if ( (int)v9 < (int)a4->m128i_i64[0] || SHIDWORD(v9) < (int)HIDWORD(a4->m128i_i64[0]) )
    return (unsigned int)-1073741811;
  this[7] = *a4;
LABEL_8:
  this[1].m128i_i32[0] |= 0x80u;
LABEL_17:
  *a6 = 1;
  return v6;
}
