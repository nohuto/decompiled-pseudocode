__m128i *__fastcall SymCryptParallelSha256AppendBlocks_xmm(__m128i **a1, __int64 a2, unsigned __int64 a3, __m128i *a4)
{
  __m128i v4; // xmm8
  __m128i v5; // xmm0
  __m128i v6; // xmm10
  __m128i v7; // xmm8
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm7
  __m128i v12; // xmm10
  __m128i v13; // xmm2
  __m128i v14; // xmm9
  __m128i v15; // xmm8
  __m128i v16; // xmm5
  __m128i v17; // xmm0
  __m128i v18; // xmm3
  __m128i v19; // xmm5
  __m128i v20; // xmm4
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm4
  unsigned __int64 v24; // r10
  __m128i *v25; // r8
  __int64 v26; // r11
  __m128i v27; // xmm4
  __m128i v28; // xmm4
  __m128i v29; // xmm1
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  __m128i v33; // xmm4
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i v37; // xmm3
  __m128i v38; // xmm5
  __m128i *v39; // rax
  __m128i v40; // xmm4
  __int64 v41; // r8
  __m128i v42; // xmm6
  __m128i v43; // xmm1
  __m128i v44; // xmm2
  __m128i v45; // xmm7
  __m128i v46; // xmm8
  __m128i v47; // xmm9
  __m128i v48; // xmm10
  __m128i v49; // xmm12
  __m128i v50; // xmm13
  __m128i v51; // xmm3
  __m128i v52; // xmm4
  __m128i v53; // xmm4
  __m128i v54; // xmm7
  unsigned int *v55; // r8
  __m128i v56; // xmm10
  __m128i *v57; // r11
  __m128i v58; // xmm9
  __m128i v59; // xmm8
  __m128i v60; // xmm12
  __m128i v61; // xmm6
  __m128i v62; // xmm5
  __m128i v63; // xmm3
  __m128i v64; // xmm2
  __m128i v65; // xmm2
  __m128i v66; // xmm4
  __m128i v67; // xmm2
  __m128i v68; // xmm3
  __m128i v69; // xmm0
  __m128i v70; // xmm2
  __m128i v71; // xmm1
  __m128i v72; // xmm1
  __m128i v73; // xmm2
  __m128i v74; // xmm1
  __m128i v75; // xmm7
  __m128i v76; // xmm9
  __m128i v77; // xmm0
  __m128i v78; // xmm5
  __m128i v79; // xmm3
  __m128i v80; // xmm4
  __m128i v81; // xmm5
  __m128i v82; // xmm0
  __m128i v83; // xmm1
  __m128i v84; // xmm3
  __m128i *result; // rax

  v4 = _mm_loadu_si128(*a1);
  v5 = _mm_loadu_si128(a1[1]);
  v6 = _mm_unpacklo_epi32(v4, v5);
  v7 = _mm_unpackhi_epi32(v4, v5);
  v8 = _mm_loadu_si128(a1[2]);
  v9 = _mm_loadu_si128(a1[3]);
  v10 = _mm_unpacklo_epi32(v8, v9);
  v11 = _mm_unpacklo_epi64(v6, v10);
  a4[11] = v11;
  v12 = _mm_unpackhi_epi64(v6, v10);
  a4[10] = v12;
  v13 = _mm_unpackhi_epi32(v8, v9);
  v14 = _mm_unpacklo_epi64(v7, v13);
  a4[9] = v14;
  v15 = _mm_unpackhi_epi64(v7, v13);
  a4[8] = v15;
  v16 = _mm_loadu_si128(*a1 + 1);
  v17 = _mm_loadu_si128(a1[1] + 1);
  v18 = _mm_unpacklo_epi32(v16, v17);
  v19 = _mm_unpackhi_epi32(v16, v17);
  v20 = _mm_loadu_si128(a1[2] + 1);
  v21 = _mm_loadu_si128(a1[3] + 1);
  v22 = _mm_unpacklo_epi32(v20, v21);
  a4[7] = _mm_unpacklo_epi64(v18, v22);
  v23 = _mm_unpackhi_epi32(v20, v21);
  a4[5] = _mm_unpacklo_epi64(v19, v23);
  a4[6] = _mm_unpackhi_epi64(v18, v22);
  a4[4] = _mm_unpackhi_epi64(v19, v23);
  *a4 = v15;
  a4[1] = v14;
  a4[2] = v12;
  a4[3] = v11;
  if ( a3 >= 0x40 )
  {
    v24 = a3 >> 6;
    do
    {
      v25 = a4 + 14;
      v26 = 4LL;
      do
      {
        v27 = _mm_loadu_si128((const __m128i *)*(_QWORD *)a2);
        *(_QWORD *)a2 += 16LL;
        v28 = _mm_shuffle_epi8(v27, (__m128i)_xmm);
        v29 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 8));
        *(_QWORD *)(a2 + 8) += 16LL;
        v30 = _mm_shuffle_epi8(v29, (__m128i)_xmm);
        v31 = _mm_unpacklo_epi32(v28, v30);
        v32 = _mm_shuffle_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 16)), (__m128i)_xmm);
        *(_QWORD *)(a2 + 16) += 16LL;
        v33 = _mm_unpackhi_epi32(v28, v30);
        v34 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
        v35 = _mm_shuffle_epi8(v34, (__m128i)_xmm);
        v36 = _mm_unpacklo_epi32(v32, v35);
        v37 = _mm_unpackhi_epi32(v32, v35);
        v25[-2] = _mm_unpacklo_epi64(v31, v36);
        *v25 = _mm_unpacklo_epi64(v33, v37);
        v25[-1] = _mm_unpackhi_epi64(v31, v36);
        v25[1] = _mm_unpackhi_epi64(v33, v37);
        v25 += 4;
        --v26;
      }
      while ( v26 );
      v38 = _mm_loadu_si128(a4 + 27);
      v39 = a4 + 21;
      v40 = _mm_loadu_si128(a4 + 26);
      v41 = 24LL;
      v42 = _mm_loadu_si128(a4 + 12);
      v43 = v40;
      v44 = v40;
      v45 = v40;
      v46 = v40;
      v47 = v38;
      v48 = v38;
      v49 = v38;
      v50 = v38;
      do
      {
        v51 = _mm_loadu_si128(v39 - 8);
        v52 = _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_slli_epi32(v43, 0xFu), _mm_srli_epi32(v40, 0x11u)),
                      _mm_slli_epi32(v44, 0xDu)),
                    _mm_srli_epi32(v45, 0x13u)),
                  _mm_srli_epi32(v46, 0xAu)),
                v42);
        v42 = _mm_loadu_si128(v39 - 7);
        v53 = _mm_add_epi32(v52, *v39);
        v39 += 2;
        v40 = _mm_add_epi32(
                v53,
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_slli_epi32(v51, 0x19u), _mm_srli_epi32(v51, 7u)),
                      _mm_slli_epi32(v51, 0xEu)),
                    _mm_srli_epi32(v51, 0x12u)),
                  _mm_srli_epi32(v51, 3u)));
        v39[5] = v40;
        v45 = v40;
        v46 = v40;
        v43 = v40;
        v38 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v47, 0xFu), _mm_srli_epi32(v38, 0x11u)),
                          _mm_slli_epi32(v48, 0xDu)),
                        _mm_srli_epi32(v49, 0x13u)),
                      _mm_srli_epi32(v50, 0xAu)),
                    v51),
                  v39[-1]),
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_slli_epi32(v42, 0x19u), _mm_srli_epi32(v42, 7u)),
                      _mm_slli_epi32(v42, 0xEu)),
                    _mm_srli_epi32(v42, 0x12u)),
                  _mm_srli_epi32(v42, 3u)));
        v44 = v40;
        v39[6] = v38;
        v47 = v38;
        v48 = v38;
        v49 = v38;
        v50 = v38;
        --v41;
      }
      while ( v41 );
      v54 = _mm_loadu_si128(a4 + 11);
      v55 = (unsigned int *)&SymCryptSha256K + 2;
      v56 = _mm_loadu_si128(a4 + 10);
      v57 = a4 + 4;
      v58 = _mm_loadu_si128(a4 + 9);
      v59 = _mm_loadu_si128(a4 + 8);
      v60 = _mm_loadu_si128(a4 + 4);
      do
      {
        v61 = _mm_loadu_si128(v57 + 3);
        v62 = _mm_loadu_si128(v57 + 2);
        v63 = _mm_loadu_si128(v57 + 1);
        v64 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v61, 0x1Au), _mm_srli_epi32(v61, 6u)),
                              _mm_slli_epi32(v61, 0x15u)),
                            _mm_srli_epi32(v61, 0xBu)),
                          _mm_slli_epi32(v61, 7u)),
                        _mm_srli_epi32(v61, 0x19u)),
                      v57[8]),
                    v60),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v62, v63), v61), v63)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v55 - 2)), 0));
        v60 = _mm_add_epi32(v64, v59);
        v57[4] = v60;
        v59 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v54, 0x1Eu), _mm_srli_epi32(v54, 2u)),
                          _mm_slli_epi32(v54, 0x13u)),
                        _mm_srli_epi32(v54, 0xDu)),
                      _mm_slli_epi32(v54, 0xAu)),
                    _mm_srli_epi32(v54, 0x16u)),
                  v64),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v56, v54), v58), _mm_and_si128(v56, v54)));
        v65 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v60, 0x1Au), _mm_srli_epi32(v60, 6u)),
                              _mm_slli_epi32(v60, 0x15u)),
                            _mm_srli_epi32(v60, 0xBu)),
                          _mm_slli_epi32(v60, 7u)),
                        _mm_srli_epi32(v60, 0x19u)),
                      v57[9]),
                    v63),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v62, v61), v60), v62)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v55 - 1)), 0));
        v66 = _mm_add_epi32(v65, v58);
        v57[5] = v66;
        v58 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v59, 0x1Eu), _mm_srli_epi32(v59, 2u)),
                          _mm_slli_epi32(v59, 0x13u)),
                        _mm_srli_epi32(v59, 0xDu)),
                      _mm_slli_epi32(v59, 0xAu)),
                    _mm_srli_epi32(v59, 0x16u)),
                  v65),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v59, v54), v56), _mm_and_si128(v59, v54)));
        v67 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v66, 0x1Au), _mm_srli_epi32(v66, 6u)),
                              _mm_slli_epi32(v66, 0x15u)),
                            _mm_srli_epi32(v66, 0xBu)),
                          _mm_slli_epi32(v66, 7u)),
                        _mm_srli_epi32(v66, 0x19u)),
                      v57[10]),
                    v62),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v61, v60), v66), v61)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*v55), 0));
        v68 = _mm_add_epi32(v67, v56);
        v57[6] = v68;
        v57 += 4;
        v56 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_srli_epi32(v58, 2u), _mm_slli_epi32(v58, 0x1Eu)),
                          _mm_slli_epi32(v58, 0x13u)),
                        _mm_srli_epi32(v58, 0xDu)),
                      _mm_slli_epi32(v58, 0xAu)),
                    _mm_srli_epi32(v58, 0x16u)),
                  v67),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v58, v59), v54), _mm_and_si128(v58, v59)));
        v69 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v55[1]), 0);
        v55 += 4;
        v70 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v68, 0x1Au), _mm_srli_epi32(v68, 6u)),
                              _mm_slli_epi32(v68, 0x15u)),
                            _mm_srli_epi32(v68, 0xBu)),
                          _mm_slli_epi32(v68, 7u)),
                        _mm_srli_epi32(v68, 0x19u)),
                      v57[7]),
                    v61),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v60, v66), v68), v60)),
                v69);
        v57[3] = _mm_add_epi32(v70, v54);
        v54 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v56, 0x1Eu), _mm_srli_epi32(v56, 2u)),
                          _mm_slli_epi32(v56, 0x13u)),
                        _mm_srli_epi32(v56, 0xDu)),
                      _mm_slli_epi32(v56, 0xAu)),
                    _mm_srli_epi32(v56, 0x16u)),
                  v70),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v58, v56), v59), _mm_and_si128(v58, v56)));
      }
      while ( (__int64)v55 < (__int64)((unsigned int *)&_xmm + 2) );
      v11 = _mm_add_epi32(v54, a4[3]);
      a4[11] = v11;
      v12 = _mm_add_epi32(v56, a4[2]);
      a4[3] = v11;
      a4[10] = v12;
      v14 = _mm_add_epi32(v58, a4[1]);
      a4[2] = v12;
      a4[9] = v14;
      v15 = _mm_add_epi32(v59, *a4);
      a4[1] = v14;
      a4[8] = v15;
      *a4 = v15;
      v71 = _mm_loadu_si128(a4 + 6);
      a4[7] = _mm_add_epi32(_mm_loadu_si128(a4 + 71), a4[7]);
      a4[6] = _mm_add_epi32(v71, a4[70]);
      v72 = _mm_loadu_si128(a4 + 4);
      a4[5] = _mm_add_epi32(_mm_loadu_si128(a4 + 69), a4[5]);
      a4[4] = _mm_add_epi32(v72, a4[68]);
      --v24;
    }
    while ( v24 );
  }
  v73 = _mm_unpacklo_epi32(v11, v12);
  v74 = _mm_unpacklo_epi32(v14, v15);
  **a1 = _mm_unpacklo_epi64(v73, v74);
  v75 = _mm_unpackhi_epi32(v11, v12);
  *a1[1] = _mm_unpackhi_epi64(v73, v74);
  v76 = _mm_unpackhi_epi32(v14, v15);
  *a1[2] = _mm_unpacklo_epi64(v75, v76);
  *a1[3] = _mm_unpackhi_epi64(v75, v76);
  v77 = _mm_loadu_si128(a4 + 6);
  v78 = _mm_loadu_si128(a4 + 7);
  v79 = _mm_loadu_si128(a4 + 5);
  v80 = _mm_unpacklo_epi32(v78, v77);
  v81 = _mm_unpackhi_epi32(v78, v77);
  v82 = _mm_loadu_si128(a4 + 4);
  v83 = _mm_unpacklo_epi32(v79, v82);
  v84 = _mm_unpackhi_epi32(v79, v82);
  (*a1)[1] = _mm_unpacklo_epi64(v80, v83);
  a1[1][1] = _mm_unpackhi_epi64(v80, v83);
  a1[2][1] = _mm_unpacklo_epi64(v81, v84);
  result = a1[3];
  result[1] = _mm_unpackhi_epi64(v81, v84);
  return result;
}
