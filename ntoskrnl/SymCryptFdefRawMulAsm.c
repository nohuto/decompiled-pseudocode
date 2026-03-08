/*
 * XREFs of SymCryptFdefRawMulAsm @ 0x1404002C0
 * Callers:
 *     SymCryptFdefRawMul @ 0x1403FE01C (SymCryptFdefRawMul.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptFdefRawMulAsm(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r11
  unsigned __int64 *v6; // rsi
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r13
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r13
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r10
  unsigned __int64 v35; // rbp
  unsigned __int64 *v36; // rsi
  unsigned __int64 *v37; // rdi
  unsigned __int64 v38; // rbx
  __int64 v39; // r12
  unsigned __int128 v40; // kr10_16
  __int64 v41; // r13
  unsigned __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rbx
  unsigned __int128 v45; // kr30_16
  __int64 v46; // r13
  unsigned __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rbx
  unsigned __int128 v50; // kr50_16
  __int64 v51; // r13
  unsigned __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rbx
  unsigned __int128 v55; // kr70_16
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // kr00_8
  unsigned __int64 result; // rax

  v5 = (__int64)a5;
  v6 = a3;
  v7 = a5;
  v8 = *a1;
  v9 = 0LL;
  v10 = a4;
  do
  {
    v11 = v8 * *v6;
    v12 = (v8 * (unsigned __int128)*v6) >> 64;
    *v7 = v9 + v11;
    v13 = __CFADD__(v9, v11) + v12;
    v14 = v8 * v6[1];
    v15 = (v8 * (unsigned __int128)v6[1]) >> 64;
    v7[1] = v13 + v14;
    v16 = __CFADD__(v13, v14) + v15;
    v17 = v8 * v6[2];
    v18 = (v8 * (unsigned __int128)v6[2]) >> 64;
    v7[2] = v16 + v17;
    v19 = __CFADD__(v16, v17) + v18;
    v20 = v8 * v6[3];
    v21 = (v8 * (unsigned __int128)v6[3]) >> 64;
    v7[3] = v19 + v20;
    v22 = __CFADD__(v19, v20) + v21;
    v23 = v8 * v6[4];
    v24 = (v8 * (unsigned __int128)v6[4]) >> 64;
    v7[4] = v22 + v23;
    v25 = __CFADD__(v22, v23) + v24;
    v26 = v8 * v6[5];
    v27 = (v8 * (unsigned __int128)v6[5]) >> 64;
    v7[5] = v25 + v26;
    v28 = __CFADD__(v25, v26) + v27;
    v29 = v8 * v6[6];
    v30 = (v8 * (unsigned __int128)v6[6]) >> 64;
    v7[6] = v28 + v29;
    v31 = __CFADD__(v28, v29) + v30;
    v32 = v8 * v6[7];
    v33 = (v8 * (unsigned __int128)v6[7]) >> 64;
    v7[7] = v31 + v32;
    v9 = __CFADD__(v31, v32) + v33;
    v6 += 8;
    v7 += 8;
    --v10;
  }
  while ( v10 );
  *v7 = v9;
  v34 = 8 * a2 - 1;
  do
  {
    ++a1;
    v5 += 8LL;
    v35 = *a1;
    v36 = a3;
    v37 = (unsigned __int64 *)v5;
    v38 = 0LL;
    v39 = a4;
    do
    {
      v40 = *v37 + v35 * (unsigned __int128)*v36;
      *v37 = v38 + v40;
      v41 = __CFADD__(v38, (_QWORD)v40) + *((_QWORD *)&v40 + 1);
      v43 = (v37[1] + v35 * (unsigned __int128)v36[1]) >> 64;
      v42 = v37[1] + v35 * v36[1];
      v37[1] = v41 + v42;
      v44 = __CFADD__(v41, v42) + v43;
      v45 = v37[2] + v35 * (unsigned __int128)v36[2];
      v37[2] = v44 + v45;
      v46 = __CFADD__(v44, (_QWORD)v45) + *((_QWORD *)&v45 + 1);
      v48 = (v37[3] + v35 * (unsigned __int128)v36[3]) >> 64;
      v47 = v37[3] + v35 * v36[3];
      v37[3] = v46 + v47;
      v49 = __CFADD__(v46, v47) + v48;
      v50 = v37[4] + v35 * (unsigned __int128)v36[4];
      v37[4] = v49 + v50;
      v51 = __CFADD__(v49, (_QWORD)v50) + *((_QWORD *)&v50 + 1);
      v53 = (v37[5] + v35 * (unsigned __int128)v36[5]) >> 64;
      v52 = v37[5] + v35 * v36[5];
      v37[5] = v51 + v52;
      v54 = __CFADD__(v51, v52) + v53;
      v55 = v37[6] + v35 * (unsigned __int128)v36[6];
      v37[6] = v54 + v55;
      v56 = __CFADD__(v54, (_QWORD)v55) + *((_QWORD *)&v55 + 1);
      v57 = (v37[7] + v35 * (unsigned __int128)v36[7]) >> 64;
      v58 = v37[7] + v35 * v36[7];
      v37[7] = v56 + v58;
      v38 = (__PAIR128__(v57, v56) + v58) >> 64;
      result = v56 + v58;
      v36 += 8;
      v37 += 8;
      --v39;
    }
    while ( v39 );
    *v37 = v38;
    --v34;
  }
  while ( v34 );
  return result;
}
