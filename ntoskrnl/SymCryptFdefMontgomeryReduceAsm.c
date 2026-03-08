/*
 * XREFs of SymCryptFdefMontgomeryReduceAsm @ 0x1404008B0
 * Callers:
 *     SymCryptFdefMontgomeryReduce @ 0x1403FF8C4 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefMontgomeryReduceAsm(__int64 a1, const __m128i *a2, __m128i *a3)
{
  int v4; // r9d
  __int64 v5; // r11
  unsigned __int64 *v6; // rcx
  int v7; // r15d
  unsigned __int64 v8; // rbx
  __m128i *v9; // r13
  unsigned __int64 *v10; // r12
  __int64 v11; // rsi
  int v12; // r14d
  unsigned __int64 v13; // rdi
  unsigned __int128 v14; // kr10_16
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int128 v19; // kr30_16
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int128 v24; // kr50_16
  __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  unsigned __int128 v29; // kr70_16
  __int64 v30; // rbp
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // kr90_8
  unsigned __int128 v35; // krA0_16
  bool v36; // cf
  int v37; // r14d
  __int64 *v38; // r13
  unsigned __int64 *v39; // r12
  __int64 *v40; // rdi
  unsigned __int64 v41; // rtt
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rtt
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rtt
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rtt
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rtt
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rtt
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rtt
  unsigned __int64 v54; // rax
  __int64 result; // rax
  unsigned __int64 v56; // rtt
  __m128i v57; // xmm0
  __m128i v58; // xmm1

  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (unsigned __int64 *)(a1 + 128);
  v7 = 8 * v4;
  v8 = 0LL;
  do
  {
    v9 = (__m128i *)a2;
    v10 = v6;
    v11 = v5 * a2->m128i_i64[0];
    v12 = v4;
    v13 = 0LL;
    do
    {
      v14 = v9->m128i_u64[0] + (unsigned __int64)v11 * (unsigned __int128)*v10;
      v9->m128i_i64[0] = v13 + v14;
      v15 = __CFADD__(v13, (_QWORD)v14) + *((_QWORD *)&v14 + 1);
      v17 = (v9->m128i_u64[1] + (unsigned __int64)v11 * (unsigned __int128)v10[1]) >> 64;
      v16 = v9->m128i_i64[1] + v11 * v10[1];
      v9->m128i_i64[1] = v15 + v16;
      v18 = __CFADD__(v15, v16) + v17;
      v19 = v9[1].m128i_u64[0] + (unsigned __int64)v11 * (unsigned __int128)v10[2];
      v9[1].m128i_i64[0] = v18 + v19;
      v20 = __CFADD__(v18, (_QWORD)v19) + *((_QWORD *)&v19 + 1);
      v22 = (v9[1].m128i_u64[1] + (unsigned __int64)v11 * (unsigned __int128)v10[3]) >> 64;
      v21 = v9[1].m128i_i64[1] + v11 * v10[3];
      v9[1].m128i_i64[1] = v20 + v21;
      v23 = __CFADD__(v20, v21) + v22;
      v24 = v9[2].m128i_u64[0] + (unsigned __int64)v11 * (unsigned __int128)v10[4];
      v9[2].m128i_i64[0] = v23 + v24;
      v25 = __CFADD__(v23, (_QWORD)v24) + *((_QWORD *)&v24 + 1);
      v27 = (v9[2].m128i_u64[1] + (unsigned __int64)v11 * (unsigned __int128)v10[5]) >> 64;
      v26 = v9[2].m128i_i64[1] + v11 * v10[5];
      v9[2].m128i_i64[1] = v25 + v26;
      v28 = __CFADD__(v25, v26) + v27;
      v29 = v9[3].m128i_u64[0] + (unsigned __int64)v11 * (unsigned __int128)v10[6];
      v9[3].m128i_i64[0] = v28 + v29;
      v30 = __CFADD__(v28, (_QWORD)v29) + *((_QWORD *)&v29 + 1);
      v32 = (v9[3].m128i_u64[1] + (unsigned __int64)v11 * (unsigned __int128)v10[7]) >> 64;
      v31 = v9[3].m128i_i64[1] + v11 * v10[7];
      v9[3].m128i_i64[1] = v30 + v31;
      v13 = __CFADD__(v30, v31) + v32;
      v10 += 8;
      v9 += 4;
      --v12;
    }
    while ( v12 );
    v34 = v8 + v13;
    v33 = (v8 + (unsigned __int128)v13) >> 64;
    v36 = __CFADD__(__CFADD__(v9->m128i_i64[0], v34), v33);
    v35 = v9->m128i_u64[0] + __PAIR128__(v33, v34);
    v8 = *((_QWORD *)&v35 + 1);
    v9->m128i_i64[0] = v35;
    a2 = (const __m128i *)((char *)a2 + 8);
    --v7;
  }
  while ( v7 );
  v37 = v4;
  v38 = (__int64 *)a2;
  v39 = v6;
  v40 = (__int64 *)a3;
  do
  {
    v41 = v36 + *v39;
    v36 = *v38 < v41;
    *v40 = *v38 - v41;
    v42 = v38[1];
    v43 = v36 + v39[1];
    v36 = v42 < v43;
    v40[1] = v42 - v43;
    v44 = v38[2];
    v45 = v36 + v39[2];
    v36 = v44 < v45;
    v40[2] = v44 - v45;
    v46 = v38[3];
    v47 = v36 + v39[3];
    v36 = v46 < v47;
    v40[3] = v46 - v47;
    v48 = v38[4];
    v49 = v36 + v39[4];
    v36 = v48 < v49;
    v40[4] = v48 - v49;
    v50 = v38[5];
    v51 = v36 + v39[5];
    v36 = v50 < v51;
    v40[5] = v50 - v51;
    v52 = v38[6];
    v53 = v36 + v39[6];
    v36 = v52 < v53;
    v40[6] = v52 - v53;
    v54 = v38[7];
    v56 = v36 + v39[7];
    v36 = v54 < v56;
    result = v54 - v56;
    v40[7] = result;
    v38 += 8;
    v39 += 8;
    v40 += 8;
    --v37;
  }
  while ( v37 );
  v57 = _mm_shuffle_epi32(_mm_cvtsi32_si128(DWORD2(v35) - (unsigned int)v36), 0);
  v58 = _mm_xor_si128((__m128i)-1LL, v57);
  do
  {
    *a3 = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2), v57), _mm_and_si128(_mm_load_si128(a3), v58));
    a3[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 1), v57), _mm_and_si128(_mm_load_si128(a3 + 1), v58));
    a3[2] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 2), v57), _mm_and_si128(_mm_load_si128(a3 + 2), v58));
    a3[3] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 3), v57), _mm_and_si128(_mm_load_si128(a3 + 3), v58));
    a2 += 4;
    a3 += 4;
    --v4;
  }
  while ( v4 );
  return result;
}
