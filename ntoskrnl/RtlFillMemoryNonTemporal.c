/*
 * XREFs of RtlFillMemoryNonTemporal @ 0x140420FC0
 * Callers:
 *     RtlFillNonVolatileMemory @ 0x1405AD3C0 (RtlFillNonVolatileMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlFillMemoryNonTemporal(__m128i *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r8
  __int8 *v4; // rdx
  __m128i v5; // xmm0
  unsigned __int64 v6; // r9
  unsigned __int64 i; // r9
  bool v8; // cc

  if ( a2 >= 8 )
  {
    v3 = 0x101010101010101LL * a3;
    if ( a2 < 0x4F )
      goto LABEL_23;
    if ( ((unsigned __int8)a1 & 0xF) != 0 )
    {
      _mm_stream_si32(a1->m128i_i32, v3);
      if ( ((unsigned __int8)a1 & 8) == 0 )
        _mm_stream_si32(&a1->m128i_i32[2], v3);
      v4 = &a1->m128i_i8[a2];
      a1 = (__m128i *)(((unsigned __int64)&a1->m128i_u64[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL);
      a2 = v4 - (__int8 *)a1;
    }
    v5 = (__m128i)_mm_movelh_ps((__m128)(unsigned __int64)v3, (__m128)(unsigned __int64)v3);
    v6 = a2 >> 7;
    if ( !(a2 >> 7) )
      goto LABEL_24;
    do
    {
      _mm_stream_si128(a1, v5);
      _mm_stream_si128(a1 + 1, v5);
      a1 += 8;
      _mm_stream_si128(a1 - 6, v5);
      _mm_stream_si128(a1 - 5, v5);
      --v6;
      _mm_stream_si128(a1 - 4, v5);
      _mm_stream_si128(a1 - 3, v5);
      _mm_stream_si128(a1 - 2, v5);
      _mm_stream_si128(a1 - 1, v5);
    }
    while ( v6 );
    a2 &= 0x7Fu;
    if ( a2 )
    {
LABEL_24:
      for ( i = a2 >> 4; i; --i )
        _mm_stream_si128(a1++, v5);
      a2 &= 0xFu;
      if ( a2 )
      {
LABEL_23:
        while ( 1 )
        {
          v8 = a2 <= 8;
          a2 -= 8LL;
          if ( v8 )
            break;
          _mm_stream_si32(a1->m128i_i32, v3);
          a1 = (__m128i *)((char *)a1 + 8);
        }
        _mm_stream_si32((int *)((char *)a1->m128i_i32 + a2), v3);
      }
    }
    _mm_sfence();
  }
  else
  {
    for ( ; a2; --a2 )
      a1->m128i_i8[a2 - 1] = a3;
  }
}
