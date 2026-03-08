/*
 * XREFs of SymCryptFdefMontgomeryReduce1024Asm @ 0x1404032E0
 * Callers:
 *     SymCryptFdefModMulMontgomery1024 @ 0x1403FEF80 (SymCryptFdefModMulMontgomery1024.c)
 *     SymCryptFdefModSquareMontgomery1024 @ 0x1403FF500 (SymCryptFdefModSquareMontgomery1024.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce1024Asm(__int64 a1, const __m128i *a2, __m128i *a3)
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
  __int64 v22; // rbp
  unsigned __int128 v23; // kr80_16
  __int64 v24; // rdi
  unsigned __int128 v25; // kr90_16
  __int64 v26; // rbp
  unsigned __int128 v27; // krA0_16
  __int64 v28; // rdi
  unsigned __int128 v29; // krB0_16
  __int64 v30; // rbp
  unsigned __int128 v31; // krC0_16
  __int64 v32; // rdi
  unsigned __int128 v33; // krD0_16
  __int64 v34; // rbp
  unsigned __int128 v35; // krE0_16
  __int64 v36; // rdi
  unsigned __int128 v37; // krF0_16
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // kr00_8
  unsigned __int128 v41; // kr110_16
  _BOOL8 v42; // rbx
  bool v43; // cf
  int v44; // r14d
  __int64 *v45; // r13
  _QWORD *v46; // r12
  __int64 *v47; // rdi
  unsigned __int64 v48; // rtt
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rtt
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rtt
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rtt
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rtt
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rtt
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rtt
  unsigned __int64 v61; // rax
  __int64 result; // rax
  unsigned __int64 v63; // rtt
  __m128i v64; // xmm0
  __m128i v65; // xmm1

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
    v23 = a2[3].m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[7];
    a2[3].m128i_i64[1] = v22 + v23;
    v24 = __CFADD__(v22, (_QWORD)v23) + *((_QWORD *)&v23 + 1);
    v25 = a2[4].m128i_u64[0] + (unsigned __int64)v9 * (unsigned __int128)v6[8];
    a2[4].m128i_i64[0] = v24 + v25;
    v26 = __CFADD__(v24, (_QWORD)v25) + *((_QWORD *)&v25 + 1);
    v27 = a2[4].m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[9];
    a2[4].m128i_i64[1] = v26 + v27;
    v28 = __CFADD__(v26, (_QWORD)v27) + *((_QWORD *)&v27 + 1);
    v29 = a2[5].m128i_u64[0] + (unsigned __int64)v9 * (unsigned __int128)v6[10];
    a2[5].m128i_i64[0] = v28 + v29;
    v30 = __CFADD__(v28, (_QWORD)v29) + *((_QWORD *)&v29 + 1);
    v31 = a2[5].m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[11];
    a2[5].m128i_i64[1] = v30 + v31;
    v32 = __CFADD__(v30, (_QWORD)v31) + *((_QWORD *)&v31 + 1);
    v33 = a2[6].m128i_u64[0] + (unsigned __int64)v9 * (unsigned __int128)v6[12];
    a2[6].m128i_i64[0] = v32 + v33;
    v34 = __CFADD__(v32, (_QWORD)v33) + *((_QWORD *)&v33 + 1);
    v35 = a2[6].m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[13];
    a2[6].m128i_i64[1] = v34 + v35;
    v36 = __CFADD__(v34, (_QWORD)v35) + *((_QWORD *)&v35 + 1);
    v37 = a2[7].m128i_u64[0] + (unsigned __int64)v9 * (unsigned __int128)v6[14];
    a2[7].m128i_i64[0] = v36 + v37;
    v38 = __CFADD__(v36, (_QWORD)v37) + *((_QWORD *)&v37 + 1);
    v39 = (a2[7].m128i_u64[1] + (unsigned __int64)v9 * (unsigned __int128)v6[15]) >> 64;
    v40 = a2[7].m128i_i64[1] + v9 * v6[15];
    a2[7].m128i_i64[1] = v38 + v40;
    v41 = __PAIR128__(v39, v38) + __PAIR128__(v8, v40);
    v42 = __CFADD__(v8, (__PAIR128__(v39, v38) + __PAIR128__(v8, v40)) >> 64);
    v43 = __CFADD__(__CFADD__(a2[8].m128i_i64[0], *((_QWORD *)&v41 + 1)), v42);
    v8 = __CFADD__(a2[8].m128i_i64[0], *((_QWORD *)&v41 + 1)) + v42;
    a2[8].m128i_i64[0] += *((_QWORD *)&v41 + 1);
    a2 = (const __m128i *)((char *)a2 + 8);
    --v7;
  }
  while ( v7 );
  v44 = v4;
  v45 = (__int64 *)a2;
  v46 = v6;
  v47 = (__int64 *)a3;
  do
  {
    v48 = v43 + *v46;
    v43 = *v45 < v48;
    *v47 = *v45 - v48;
    v49 = v45[1];
    v50 = v43 + v46[1];
    v43 = v49 < v50;
    v47[1] = v49 - v50;
    v51 = v45[2];
    v52 = v43 + v46[2];
    v43 = v51 < v52;
    v47[2] = v51 - v52;
    v53 = v45[3];
    v54 = v43 + v46[3];
    v43 = v53 < v54;
    v47[3] = v53 - v54;
    v55 = v45[4];
    v56 = v43 + v46[4];
    v43 = v55 < v56;
    v47[4] = v55 - v56;
    v57 = v45[5];
    v58 = v43 + v46[5];
    v43 = v57 < v58;
    v47[5] = v57 - v58;
    v59 = v45[6];
    v60 = v43 + v46[6];
    v43 = v59 < v60;
    v47[6] = v59 - v60;
    v61 = v45[7];
    v63 = v43 + v46[7];
    v43 = v61 < v63;
    result = v61 - v63;
    v47[7] = result;
    v45 += 8;
    v46 += 8;
    v47 += 8;
    --v44;
  }
  while ( v44 );
  v64 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)v8 - v43), 0);
  v65 = _mm_xor_si128((__m128i)-1LL, v64);
  do
  {
    *a3 = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2), v64), _mm_and_si128(_mm_load_si128(a3), v65));
    a3[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 1), v64), _mm_and_si128(_mm_load_si128(a3 + 1), v65));
    a3[2] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 2), v64), _mm_and_si128(_mm_load_si128(a3 + 2), v65));
    a3[3] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 3), v64), _mm_and_si128(_mm_load_si128(a3 + 3), v65));
    a2 += 4;
    a3 += 4;
    --v4;
  }
  while ( v4 );
  return result;
}
