/*
 * XREFs of MiNodeLargeFreeZeroPages2 @ 0x14064D5BC
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140A2919C (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPages2(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rcx
  __m128i v10; // xmm1
  __int64 v11; // r11
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __m128i v19; // xmm0

  v2 = 0LL;
  v3 = MiLargePageSizes;
  v4 = 0LL;
  v5 = 8LL * a2;
  v6 = ((__int64)a2 << 8) + a1 + 48;
  v7 = 2LL;
  do
  {
    v8 = *v3;
    v9 = 0LL;
    v10 = 0LL;
    v11 = v5;
    v12 = (__int64 *)v6;
    v13 = 2LL;
    do
    {
      v14 = 0LL;
      v15 = 4LL;
      do
      {
        v16 = v9;
        v17 = 2LL;
        do
        {
          v18.m128i_i64[0] = *v12;
          v18.m128i_i64[1] = v12[1];
          v12 += 2;
          v19 = _mm_add_epi64(v18, v10);
          v10 = v19;
          --v17;
        }
        while ( v17 );
        ++v14;
        v9 = v16;
        --v15;
      }
      while ( v15 );
      v11 += 4LL;
      --v13;
    }
    while ( v13 );
    v6 += 1072LL;
    ++v3;
    v4 += 134LL;
    v2 += (v16 + _mm_add_epi64(v19, _mm_srli_si128(v19, 8)).m128i_u64[0]) * v8;
    --v7;
  }
  while ( v7 );
  return v2;
}
