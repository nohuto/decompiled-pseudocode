/*
 * XREFs of MxInsertEnclaveBootPages @ 0x140B96C30
 * Callers:
 *     MiCreateDescriptorPfns @ 0x140B373F4 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MiSetPageTablePfnBuddy @ 0x1402A6F18 (MiSetPageTablePfnBuddy.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 */

__m128i *__fastcall MxInsertEnclaveBootPages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r9
  __m128i *v7; // rbx
  __m128i *result; // rax
  __m128i *v9; // rcx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  ULONG_PTR v20; // rdi
  _QWORD *m128i_i64; // r15
  __m128i *v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  __m128i v27; // [rsp+20h] [rbp-30h] BYREF
  __m128i v28; // [rsp+30h] [rbp-20h] BYREF
  __m128i v29; // [rsp+40h] [rbp-10h] BYREF

  v29.m128i_i64[0] = 0x400000LL;
  v27 = 0LL;
  v28 = 0LL;
  v28.m128i_i64[0] = MiSwizzleInvalidPte(128LL);
  v29.m128i_i64[1] = v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
  MiSetPageTablePfnBuddy((__int64)&v27, (__int64)KeGetCurrentThread()->ApcState.Process, 1);
  MiSetPfnIdentity((__int64)&v27, 1);
  if ( a3 == 33 )
  {
    v27.m128i_i64[1] = -8LL;
    v28.m128i_i64[1] &= 0xC000000000000000uLL;
    v29.m128i_i16[0] = 0;
    v29.m128i_i8[3] |= 0x10u;
    v29.m128i_i8[2] = v29.m128i_i8[2] & 0xF8 | 5;
  }
  else
  {
    v29.m128i_i64[1] = v29.m128i_i64[1] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    v28.m128i_i64[1] = v28.m128i_i64[1] & 0xC000000000000000uLL | 1;
    v29.m128i_i16[0] = 2;
    v29.m128i_i8[2] = v29.m128i_i8[2] & 0xF8 | 6;
    v27.m128i_i64[1] = 0xFFFFF68000000000uLL;
    _InterlockedExchangeAdd64(&qword_140C69630, a2);
  }
  v7 = (__m128i *)(48 * a1 - 0x220000000000LL);
  result = v7;
  v9 = &v7[3 * a2];
  if ( 48 * a2 <= 0x1000 )
  {
    if ( v7 != v9 )
    {
      v13 = _mm_loadu_si128(&v29);
      v14 = _mm_loadu_si128(&v28);
      v15 = _mm_loadu_si128(&v27);
      do
      {
        *result = v15;
        result[1] = v14;
        result[2] = v13;
        result += 3;
      }
      while ( result != v9 );
    }
  }
  else
  {
    if ( v7 != v9 )
    {
      v10 = _mm_loadu_si128(&v29);
      v11 = _mm_loadu_si128(&v28);
      v12 = _mm_loadu_si128(&v27);
      do
      {
        _mm_stream_si128(result, v12);
        _mm_stream_si128(result + 1, v11);
        _mm_stream_si128(result + 2, v10);
        result += 3;
      }
      while ( result != v9 );
    }
    _mm_sfence();
  }
  if ( a3 == 33 )
  {
    v16 = a1 + a2 - 1;
    if ( a1 <= v16 )
    {
      v17 = a1 - 1;
      a1 += a2;
      v18 = a2;
      do
      {
        v7->m128i_i64[0] ^= (v7->m128i_i64[0] ^ (v17 + 2)) & 0xFFFFFFFFFFLL;
        v19 = v7[1].m128i_i64[1] ^ v17++;
        v7[1].m128i_i64[1] ^= v19 & 0xFFFFFFFFFFLL;
        v7 += 3;
        --v18;
      }
      while ( v18 );
    }
    v20 = a1 - a2;
    m128i_i64 = v7[-3].m128i_i64;
    v22 = &v7[-3 * a2];
    v23 = MiSearchNumaNodeTable(v20);
    v24 = qword_140C6B0D0;
    v25 = 25408LL * *((unsigned int *)v23 + 2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + qword_140C6B0D0 + 25280), a2);
    v26 = *(_QWORD *)(v25 + v24 + 25304);
    if ( v26 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(v25 + v24 + 25296) = v20;
    else
      *(_QWORD *)(48 * v26 - 0x220000000000LL) ^= (*(_QWORD *)(48 * v26 - 0x220000000000LL) ^ v20) & 0xFFFFFFFFFFLL;
    v22[1].m128i_i64[1] ^= (v22[1].m128i_i64[1] ^ v26) & 0xFFFFFFFFFFLL;
    result = (__m128i *)(*m128i_i64 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL);
    *m128i_i64 = result;
    *(_QWORD *)(v25 + v24 + 25304) = v16;
  }
  return result;
}
