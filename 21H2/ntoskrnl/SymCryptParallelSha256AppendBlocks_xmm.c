/*
 * XREFs of SymCryptParallelSha256AppendBlocks_xmm @ 0x1403EDD8C
 * Callers:
 *     SymCryptParallelSha256Append @ 0x1403EDC90 (SymCryptParallelSha256Append.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall SymCryptParallelSha256AppendBlocks_xmm(__m128i **a1, __int64 a2, unsigned __int64 a3, __m128i *a4)
{
  __m128i v4; // xmm6
  __m128i v5; // xmm0
  __m128i v6; // xmm3
  __m128i v7; // xmm6
  __m128i v8; // xmm4
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm4
  __m128i v12; // xmm6
  __m128i v13; // xmm5
  __m128i v14; // xmm0
  __m128i v15; // xmm3
  __m128i v16; // xmm5
  __m128i v17; // xmm4
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm4
  unsigned __int64 v21; // r10
  __m128i *v22; // r8
  __int64 v23; // r11
  __m128i v24; // xmm4
  __m128i v25; // xmm4
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __m128i v34; // xmm3
  __m128i v35; // xmm4
  __m128i *v36; // rax
  __m128i v37; // xmm5
  __int64 v38; // r8
  __m128i v39; // xmm6
  __m128i v40; // xmm3
  __m128i v41; // xmm5
  __m128i v42; // xmm5
  __m128i v43; // xmm10
  unsigned int *v44; // r8
  __m128i v45; // xmm7
  __m128i *v46; // r11
  __m128i v47; // xmm11
  __m128i v48; // xmm8
  __m128i v49; // xmm12
  __m128i v50; // xmm6
  __m128i v51; // xmm5
  __m128i v52; // xmm3
  __m128i v53; // xmm2
  __m128i v54; // xmm2
  __m128i v55; // xmm4
  __m128i v56; // xmm2
  __m128i v57; // xmm3
  __m128i v58; // xmm0
  __m128i v59; // xmm2
  __m128i v60; // xmm0
  __m128i v61; // xmm7
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  __m128i v64; // xmm8
  __m128i v65; // xmm1
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  __m128i v68; // xmm2
  __m128i v69; // xmm3
  __m128i v70; // xmm4
  __m128i v71; // xmm3
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  __m128i v74; // xmm2
  __m128i v75; // xmm0
  __m128i v76; // xmm5
  __m128i v77; // xmm3
  __m128i v78; // xmm4
  __m128i v79; // xmm5
  __m128i v80; // xmm0
  __m128i v81; // xmm1
  __m128i v82; // xmm3
  __m128i *result; // rax

  v4 = _mm_loadu_si128(*a1);
  v5 = _mm_loadu_si128(a1[1]);
  v6 = _mm_unpacklo_epi32(v4, v5);
  v7 = _mm_unpackhi_epi32(v4, v5);
  v8 = _mm_loadu_si128(a1[2]);
  v9 = _mm_loadu_si128(a1[3]);
  v10 = _mm_unpacklo_epi32(v8, v9);
  a4[11] = _mm_unpacklo_epi64(v6, v10);
  v11 = _mm_unpackhi_epi32(v8, v9);
  a4[9] = _mm_unpacklo_epi64(v7, v11);
  a4[10] = _mm_unpackhi_epi64(v6, v10);
  v12 = _mm_unpackhi_epi64(v7, v11);
  a4[8] = v12;
  v13 = _mm_loadu_si128(*a1 + 1);
  v14 = _mm_loadu_si128(a1[1] + 1);
  v15 = _mm_unpacklo_epi32(v13, v14);
  v16 = _mm_unpackhi_epi32(v13, v14);
  v17 = _mm_loadu_si128(a1[2] + 1);
  v18 = _mm_loadu_si128(a1[3] + 1);
  v19 = _mm_unpacklo_epi32(v17, v18);
  a4[7] = _mm_unpacklo_epi64(v15, v19);
  v20 = _mm_unpackhi_epi32(v17, v18);
  a4[5] = _mm_unpacklo_epi64(v16, v20);
  a4[6] = _mm_unpackhi_epi64(v15, v19);
  a4[4] = _mm_unpackhi_epi64(v16, v20);
  *a4 = v12;
  a4[1] = _mm_loadu_si128(a4 + 9);
  a4[2] = _mm_loadu_si128(a4 + 10);
  a4[3] = _mm_loadu_si128(a4 + 11);
  if ( a3 >= 0x40 )
  {
    v21 = a3 >> 6;
    do
    {
      v22 = a4 + 14;
      v23 = 4LL;
      do
      {
        v24 = _mm_loadu_si128((const __m128i *)*(_QWORD *)a2);
        *(_QWORD *)a2 += 16LL;
        v25 = _mm_shuffle_epi8(v24, (__m128i)_xmm);
        v26 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 8));
        *(_QWORD *)(a2 + 8) += 16LL;
        v27 = _mm_shuffle_epi8(v26, (__m128i)_xmm);
        v28 = _mm_unpacklo_epi32(v25, v27);
        v29 = _mm_shuffle_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 16)), (__m128i)_xmm);
        *(_QWORD *)(a2 + 16) += 16LL;
        v30 = _mm_unpackhi_epi32(v25, v27);
        v31 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
        v32 = _mm_shuffle_epi8(v31, (__m128i)_xmm);
        v33 = _mm_unpacklo_epi32(v29, v32);
        v34 = _mm_unpackhi_epi32(v29, v32);
        v22[-2] = _mm_unpacklo_epi64(v28, v33);
        *v22 = _mm_unpacklo_epi64(v30, v34);
        v22[-1] = _mm_unpackhi_epi64(v28, v33);
        v22[1] = _mm_unpackhi_epi64(v30, v34);
        v22 += 4;
        --v23;
      }
      while ( v23 );
      v35 = _mm_loadu_si128(a4 + 27);
      v36 = a4 + 21;
      v37 = _mm_loadu_si128(a4 + 26);
      v38 = 24LL;
      v39 = _mm_loadu_si128(a4 + 12);
      do
      {
        v40 = _mm_loadu_si128(v36 - 8);
        v41 = _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_srli_epi32(v37, 0x11u), _mm_slli_epi32(v37, 0xFu)),
                      _mm_slli_epi32(v37, 0xDu)),
                    _mm_srli_epi32(v37, 0x13u)),
                  _mm_srli_epi32(v37, 0xAu)),
                v39);
        v39 = _mm_loadu_si128(v36 - 7);
        v42 = _mm_add_epi32(v41, *v36);
        v36 += 2;
        v37 = _mm_add_epi32(
                v42,
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_slli_epi32(v40, 0x19u), _mm_srli_epi32(v40, 7u)),
                      _mm_slli_epi32(v40, 0xEu)),
                    _mm_srli_epi32(v40, 0x12u)),
                  _mm_srli_epi32(v40, 3u)));
        v36[5] = v37;
        v35 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_srli_epi32(v35, 0x11u), _mm_slli_epi32(v35, 0xFu)),
                          _mm_slli_epi32(v35, 0xDu)),
                        _mm_srli_epi32(v35, 0x13u)),
                      _mm_srli_epi32(v35, 0xAu)),
                    v40),
                  v36[-1]),
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_slli_epi32(v39, 0x19u), _mm_srli_epi32(v39, 7u)),
                      _mm_slli_epi32(v39, 0xEu)),
                    _mm_srli_epi32(v39, 0x12u)),
                  _mm_srli_epi32(v39, 3u)));
        v36[6] = v35;
        --v38;
      }
      while ( v38 );
      v43 = _mm_loadu_si128(a4 + 11);
      v44 = (unsigned int *)&SymCryptSha256K + 2;
      v45 = _mm_loadu_si128(a4 + 10);
      v46 = a4 + 4;
      v47 = _mm_loadu_si128(a4 + 9);
      v48 = _mm_loadu_si128(a4 + 8);
      v49 = _mm_loadu_si128(a4 + 4);
      do
      {
        v50 = _mm_loadu_si128(v46 + 3);
        v51 = _mm_loadu_si128(v46 + 2);
        v52 = _mm_loadu_si128(v46 + 1);
        v53 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v50, 0x1Au), _mm_srli_epi32(v50, 6u)),
                              _mm_slli_epi32(v50, 0x15u)),
                            _mm_srli_epi32(v50, 0xBu)),
                          _mm_slli_epi32(v50, 7u)),
                        _mm_srli_epi32(v50, 0x19u)),
                      v46[8]),
                    v49),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v51, v52), v50), v52)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v44 - 2)), 0));
        v49 = _mm_add_epi32(v53, v48);
        v46[4] = v49;
        v48 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v43, 0x1Eu), _mm_srli_epi32(v43, 2u)),
                          _mm_slli_epi32(v43, 0x13u)),
                        _mm_srli_epi32(v43, 0xDu)),
                      _mm_slli_epi32(v43, 0xAu)),
                    _mm_srli_epi32(v43, 0x16u)),
                  v53),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v45, v43), v47), _mm_and_si128(v45, v43)));
        v54 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v49, 0x1Au), _mm_srli_epi32(v49, 6u)),
                              _mm_slli_epi32(v49, 0x15u)),
                            _mm_srli_epi32(v49, 0xBu)),
                          _mm_slli_epi32(v49, 7u)),
                        _mm_srli_epi32(v49, 0x19u)),
                      v46[9]),
                    v52),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v51, v50), v49), v51)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v44 - 1)), 0));
        v55 = _mm_add_epi32(v54, v47);
        v46[5] = v55;
        v47 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v48, 0x1Eu), _mm_srli_epi32(v48, 2u)),
                          _mm_slli_epi32(v48, 0x13u)),
                        _mm_srli_epi32(v48, 0xDu)),
                      _mm_slli_epi32(v48, 0xAu)),
                    _mm_srli_epi32(v48, 0x16u)),
                  v54),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v48, v43), v45), _mm_and_si128(v48, v43)));
        v56 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v55, 0x1Au), _mm_srli_epi32(v55, 6u)),
                              _mm_slli_epi32(v55, 0x15u)),
                            _mm_srli_epi32(v55, 0xBu)),
                          _mm_slli_epi32(v55, 7u)),
                        _mm_srli_epi32(v55, 0x19u)),
                      v46[10]),
                    v51),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v49, v50), v55), v50)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*v44), 0));
        v57 = _mm_add_epi32(v56, v45);
        v46[6] = v57;
        v46 += 4;
        v45 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v47, 0x1Eu), _mm_srli_epi32(v47, 2u)),
                          _mm_slli_epi32(v47, 0x13u)),
                        _mm_srli_epi32(v47, 0xDu)),
                      _mm_slli_epi32(v47, 0xAu)),
                    _mm_srli_epi32(v47, 0x16u)),
                  v56),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v48, v47), v43), _mm_and_si128(v48, v47)));
        v58 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v44[1]), 0);
        v44 += 4;
        v59 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v57, 0x1Au), _mm_srli_epi32(v57, 6u)),
                              _mm_slli_epi32(v57, 0x15u)),
                            _mm_srli_epi32(v57, 0xBu)),
                          _mm_slli_epi32(v57, 7u)),
                        _mm_srli_epi32(v57, 0x19u)),
                      v46[7]),
                    v50),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v49, v55), v57), v49)),
                v58);
        v46[3] = _mm_add_epi32(v59, v43);
        v43 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v45, 0x1Eu), _mm_srli_epi32(v45, 2u)),
                          _mm_slli_epi32(v45, 0x13u)),
                        _mm_srli_epi32(v45, 0xDu)),
                      _mm_slli_epi32(v45, 0xAu)),
                    _mm_srli_epi32(v45, 0x16u)),
                  v59),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v47, v45), v48), _mm_and_si128(v47, v45)));
      }
      while ( (__int64)v44 < (__int64)((unsigned int *)&_xmm + 2) );
      v60 = _mm_add_epi32(_mm_loadu_si128(a4 + 3), v43);
      a4[11] = v60;
      v61 = _mm_add_epi32(v45, a4[2]);
      a4[3] = v60;
      a4[10] = v61;
      v62 = _mm_loadu_si128(a4 + 1);
      a4[2] = v61;
      v63 = _mm_add_epi32(v62, v47);
      a4[9] = v63;
      v64 = _mm_add_epi32(v48, *a4);
      a4[1] = v63;
      a4[8] = v64;
      *a4 = v64;
      v65 = _mm_loadu_si128(a4 + 6);
      a4[7] = _mm_add_epi32(_mm_loadu_si128(a4 + 71), a4[7]);
      a4[6] = _mm_add_epi32(v65, a4[70]);
      v66 = _mm_loadu_si128(a4 + 4);
      a4[5] = _mm_add_epi32(_mm_loadu_si128(a4 + 69), a4[5]);
      a4[4] = _mm_add_epi32(v66, a4[68]);
      --v21;
    }
    while ( v21 );
  }
  v67 = _mm_loadu_si128(a4 + 10);
  v68 = _mm_loadu_si128(a4 + 9);
  v69 = _mm_loadu_si128(a4 + 11);
  v70 = _mm_unpackhi_epi32(v69, v67);
  v71 = _mm_unpacklo_epi32(v69, v67);
  v72 = _mm_loadu_si128(a4 + 8);
  v73 = _mm_unpacklo_epi32(v68, v72);
  v74 = _mm_unpackhi_epi32(v68, v72);
  **a1 = _mm_unpacklo_epi64(v71, v73);
  *a1[1] = _mm_unpackhi_epi64(v71, v73);
  *a1[2] = _mm_unpacklo_epi64(v70, v74);
  *a1[3] = _mm_unpackhi_epi64(v70, v74);
  v75 = _mm_loadu_si128(a4 + 6);
  v76 = _mm_loadu_si128(a4 + 7);
  v77 = _mm_loadu_si128(a4 + 5);
  v78 = _mm_unpacklo_epi32(v76, v75);
  v79 = _mm_unpackhi_epi32(v76, v75);
  v80 = _mm_loadu_si128(a4 + 4);
  v81 = _mm_unpacklo_epi32(v77, v80);
  v82 = _mm_unpackhi_epi32(v77, v80);
  (*a1)[1] = _mm_unpacklo_epi64(v78, v81);
  a1[1][1] = _mm_unpackhi_epi64(v78, v81);
  a1[2][1] = _mm_unpacklo_epi64(v79, v82);
  result = a1[3];
  result[1] = _mm_unpackhi_epi64(v79, v82);
  return result;
}
