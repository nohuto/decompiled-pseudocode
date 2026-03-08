/*
 * XREFs of MiCreateInitialLargeLeafPfns @ 0x140213A50
 * Callers:
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiInitializeNewPfns @ 0x140370B10 (MiInitializeNewPfns.c)
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall MiCreateInitialLargeLeafPfns(__int64 a1, __int64 a2, int a3, char a4, unsigned __int16 a5, int a6)
{
  __m128i v6; // xmm2
  __int64 v8; // r10
  __m128i v9; // xmm1
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rdi
  __m128i *result; // rax
  __int64 v13; // r9
  __m128i v14; // xmm0
  __int64 v15; // r8
  __m128i *v16; // rdx
  __int128 v17; // [rsp+10h] [rbp-28h] BYREF
  __m128i v18; // [rsp+20h] [rbp-18h] BYREF

  v6 = (__m128i)xmmword_140C66F00;
  v8 = a1;
  v9 = (__m128i)xmmword_140C66F10;
  v18 = (__m128i)xmmword_140C66F20;
  v10 = _mm_srli_si128((__m128i)xmmword_140C66F20, 8).m128i_u64[0];
  v11 = MiLargePageSizes[a3];
  v18.m128i_i64[1] = (v10 ^ ((unsigned __int64)a5 << 43)) & 0x1FF80000000000LL ^ v10;
  v17 = xmmword_140C66F10;
  result = (__m128i *)(48 * a1 - 0x220000000000LL);
  if ( a6 )
  {
    *((_QWORD *)&v17 + 1) |= 0x8000000000000000uLL;
    v9 = _mm_loadu_si128((const __m128i *)&v17);
  }
  v18.m128i_i8[2] = v18.m128i_i8[2] & 0x3F | (a4 << 6);
  v13 = v11 - 1;
  v14 = _mm_loadu_si128(&v18);
  do
  {
    if ( (v13 & v8) == 0 )
    {
      if ( !--a2 )
        return result;
      result += 3;
      ++v8;
    }
    v15 = v11 - (v8 & v13);
    if ( ((v8 ^ (v8 + a2 - 1)) & ~(v11 - 1)) == 0 )
      v15 = a2;
    v16 = &result[3 * v15];
    if ( (unsigned __int64)(48 * v15) > 0x1000 )
    {
      for ( ; result != v16; result += 3 )
      {
        _mm_stream_si128(result, v6);
        _mm_stream_si128(result + 1, v9);
        _mm_stream_si128(result + 2, v14);
      }
      _mm_sfence();
    }
    else
    {
      for ( ; result != v16; result += 3 )
      {
        *result = v6;
        result[1] = v9;
        result[2] = v14;
      }
    }
    v8 += v15;
    result = v16;
    a2 -= v15;
  }
  while ( a2 );
  return result;
}
