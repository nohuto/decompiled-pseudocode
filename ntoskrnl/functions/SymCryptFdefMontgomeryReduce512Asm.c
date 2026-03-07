__int64 __fastcall SymCryptFdefMontgomeryReduce512Asm(__int64 a1, const __m128i *a2, __m128i *a3)
{
  int v4; // r9d
  __int64 v5; // r11
  unsigned __int64 *v6; // rcx
  int v7; // r14d
  _BOOL8 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int128 v11; // kr20_16
  __int64 v12; // rdi
  unsigned __int128 v13; // kr30_16
  __int64 v14; // rbp
  unsigned __int128 v15; // kr40_16
  __int64 v16; // rdi
  unsigned __int128 v17; // kr50_16
  __int64 v18; // rbp
  unsigned __int128 v19; // kr60_16
  __int64 v20; // rdi
  unsigned __int128 v21; // kr70_16
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // kr00_8
  unsigned __int128 v25; // kr90_16
  _BOOL8 v26; // rbx
  bool v27; // cf
  unsigned __int64 v28; // rtt
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rtt
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rtt
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rtt
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rtt
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rtt
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rtt
  unsigned __int64 v41; // rax
  __int64 result; // rax
  unsigned __int64 v43; // rtt
  __m128i v44; // xmm0
  __m128i v45; // xmm1

  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (unsigned __int64 *)(a1 + 128);
  v7 = 8 * v4;
  v8 = 0LL;
  do
  {
    v9 = v5 * a2->m128i_i64[0];
    v10 = (a2->m128i_u64[0] + (unsigned __int64)v9 * (unsigned __int128)*v6) >> 64;
    a2->m128i_i64[0] += v9 * *v6;
    v11 = a2->m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[1];
    a2->m128i_i64[1] = v10 + v11;
    v12 = __CFADD__(v10, (_QWORD)v11) + *((_QWORD *)&v11 + 1);
    v13 = a2[1].m128i_u64[0] + (unsigned __int64)v9 * (unsigned __int128)v6[2];
    a2[1].m128i_i64[0] = v12 + v13;
    v14 = __CFADD__(v12, (_QWORD)v13) + *((_QWORD *)&v13 + 1);
    v15 = a2[1].m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[3];
    a2[1].m128i_i64[1] = v14 + v15;
    v16 = __CFADD__(v14, (_QWORD)v15) + *((_QWORD *)&v15 + 1);
    v17 = a2[2].m128i_u64[0] + (unsigned __int64)v9 * (unsigned __int128)v6[4];
    a2[2].m128i_i64[0] = v16 + v17;
    v18 = __CFADD__(v16, (_QWORD)v17) + *((_QWORD *)&v17 + 1);
    v19 = a2[2].m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[5];
    a2[2].m128i_i64[1] = v18 + v19;
    v20 = __CFADD__(v18, (_QWORD)v19) + *((_QWORD *)&v19 + 1);
    v21 = a2[3].m128i_u64[0] + (unsigned __int64)v9 * (unsigned __int128)v6[6];
    a2[3].m128i_i64[0] = v20 + v21;
    v22 = __CFADD__(v20, (_QWORD)v21) + *((_QWORD *)&v21 + 1);
    v23 = (a2[3].m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[7]) >> 64;
    v24 = a2[3].m128i_i64[1] + v9 * v6[7];
    a2[3].m128i_i64[1] = v22 + v24;
    v25 = __PAIR128__(v23, v22) + __PAIR128__(v8, v24);
    v26 = __CFADD__(v8, (__PAIR128__(v23, v22) + __PAIR128__(v8, v24)) >> 64);
    v27 = __CFADD__(__CFADD__(a2[4].m128i_i64[0], *((_QWORD *)&v25 + 1)), v26);
    v8 = __CFADD__(a2[4].m128i_i64[0], *((_QWORD *)&v25 + 1)) + v26;
    a2[4].m128i_i64[0] += *((_QWORD *)&v25 + 1);
    a2 = (const __m128i *)((char *)a2 + 8);
    --v7;
  }
  while ( v7 );
  v28 = v27 + *v6;
  v27 = a2->m128i_i64[0] < v28;
  a3->m128i_i64[0] = a2->m128i_i64[0] - v28;
  v29 = a2->m128i_u64[1];
  v30 = v27 + v6[1];
  v27 = v29 < v30;
  a3->m128i_i64[1] = v29 - v30;
  v31 = a2[1].m128i_u64[0];
  v32 = v27 + v6[2];
  v27 = v31 < v32;
  a3[1].m128i_i64[0] = v31 - v32;
  v33 = a2[1].m128i_u64[1];
  v34 = v27 + v6[3];
  v27 = v33 < v34;
  a3[1].m128i_i64[1] = v33 - v34;
  v35 = a2[2].m128i_u64[0];
  v36 = v27 + v6[4];
  v27 = v35 < v36;
  a3[2].m128i_i64[0] = v35 - v36;
  v37 = a2[2].m128i_u64[1];
  v38 = v27 + v6[5];
  v27 = v37 < v38;
  a3[2].m128i_i64[1] = v37 - v38;
  v39 = a2[3].m128i_u64[0];
  v40 = v27 + v6[6];
  v27 = v39 < v40;
  a3[3].m128i_i64[0] = v39 - v40;
  v41 = a2[3].m128i_u64[1];
  v43 = v27 + v6[7];
  v27 = v41 < v43;
  result = v41 - v43;
  a3[3].m128i_i64[1] = result;
  v44 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)v8 - v27), 0);
  v45 = _mm_xor_si128((__m128i)-1LL, v44);
  do
  {
    *a3 = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2), v44), _mm_and_si128(_mm_load_si128(a3), v45));
    a3[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 1), v44), _mm_and_si128(_mm_load_si128(a3 + 1), v45));
    a3[2] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 2), v44), _mm_and_si128(_mm_load_si128(a3 + 2), v45));
    a3[3] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 3), v44), _mm_and_si128(_mm_load_si128(a3 + 3), v45));
    a2 += 4;
    a3 += 4;
    --v4;
  }
  while ( v4 );
  return result;
}
