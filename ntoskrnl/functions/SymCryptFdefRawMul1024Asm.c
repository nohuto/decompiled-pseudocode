__int64 __fastcall SymCryptFdefRawMul1024Asm(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v5; // r11
  unsigned __int128 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r8
  unsigned __int64 v37; // r11
  __int64 v38; // rdi
  unsigned __int128 v39; // kr10_16
  __int64 v40; // rsi
  unsigned __int128 v41; // kr20_16
  __int64 v42; // rdi
  unsigned __int128 v43; // kr30_16
  __int64 v44; // rsi
  unsigned __int128 v45; // kr40_16
  __int64 v46; // rdi
  unsigned __int128 v47; // kr50_16
  __int64 v48; // rsi
  unsigned __int128 v49; // kr60_16
  __int64 v50; // rdi
  unsigned __int128 v51; // kr70_16
  __int64 v52; // rsi
  unsigned __int128 v53; // kr80_16
  __int64 v54; // rdi
  unsigned __int128 v55; // kr90_16
  __int64 v56; // rsi
  unsigned __int128 v57; // krA0_16
  __int64 v58; // rdi
  unsigned __int128 v59; // krB0_16
  __int64 v60; // rsi
  unsigned __int128 v61; // krC0_16
  __int64 v62; // rdi
  unsigned __int128 v63; // krD0_16
  __int64 v64; // rsi
  unsigned __int128 v65; // krE0_16
  __int64 v66; // rdi
  unsigned __int128 v67; // krF0_16
  __int64 result; // rax

  v5 = *a1;
  v6 = *a1 * (unsigned __int128)*a2;
  *a4 = v6;
  *(_QWORD *)&v6 = v5 * a2[1];
  v7 = (v5 * (unsigned __int128)a2[1]) >> 64;
  a4[1] = *((_QWORD *)&v6 + 1) + v6;
  v8 = __CFADD__(*((_QWORD *)&v6 + 1), (_QWORD)v6) + v7;
  *(_QWORD *)&v6 = v5 * a2[2];
  v9 = (v5 * (unsigned __int128)a2[2]) >> 64;
  a4[2] = v8 + v6;
  v10 = __CFADD__(v8, (_QWORD)v6) + v9;
  *(_QWORD *)&v6 = v5 * a2[3];
  v11 = (v5 * (unsigned __int128)a2[3]) >> 64;
  a4[3] = v10 + v6;
  v12 = __CFADD__(v10, (_QWORD)v6) + v11;
  *(_QWORD *)&v6 = v5 * a2[4];
  v13 = (v5 * (unsigned __int128)a2[4]) >> 64;
  a4[4] = v12 + v6;
  v14 = __CFADD__(v12, (_QWORD)v6) + v13;
  *(_QWORD *)&v6 = v5 * a2[5];
  v15 = (v5 * (unsigned __int128)a2[5]) >> 64;
  a4[5] = v14 + v6;
  v16 = __CFADD__(v14, (_QWORD)v6) + v15;
  *(_QWORD *)&v6 = v5 * a2[6];
  v17 = (v5 * (unsigned __int128)a2[6]) >> 64;
  a4[6] = v16 + v6;
  v18 = __CFADD__(v16, (_QWORD)v6) + v17;
  *(_QWORD *)&v6 = v5 * a2[7];
  v19 = (v5 * (unsigned __int128)a2[7]) >> 64;
  a4[7] = v18 + v6;
  v20 = __CFADD__(v18, (_QWORD)v6) + v19;
  *(_QWORD *)&v6 = v5 * a2[8];
  v21 = (v5 * (unsigned __int128)a2[8]) >> 64;
  a4[8] = v20 + v6;
  v22 = __CFADD__(v20, (_QWORD)v6) + v21;
  *(_QWORD *)&v6 = v5 * a2[9];
  v23 = (v5 * (unsigned __int128)a2[9]) >> 64;
  a4[9] = v22 + v6;
  v24 = __CFADD__(v22, (_QWORD)v6) + v23;
  *(_QWORD *)&v6 = v5 * a2[10];
  v25 = (v5 * (unsigned __int128)a2[10]) >> 64;
  a4[10] = v24 + v6;
  v26 = __CFADD__(v24, (_QWORD)v6) + v25;
  *(_QWORD *)&v6 = v5 * a2[11];
  v27 = (v5 * (unsigned __int128)a2[11]) >> 64;
  a4[11] = v26 + v6;
  v28 = __CFADD__(v26, (_QWORD)v6) + v27;
  *(_QWORD *)&v6 = v5 * a2[12];
  v29 = (v5 * (unsigned __int128)a2[12]) >> 64;
  a4[12] = v28 + v6;
  v30 = __CFADD__(v28, (_QWORD)v6) + v29;
  *(_QWORD *)&v6 = v5 * a2[13];
  v31 = (v5 * (unsigned __int128)a2[13]) >> 64;
  a4[13] = v30 + v6;
  v32 = __CFADD__(v30, (_QWORD)v6) + v31;
  *(_QWORD *)&v6 = v5 * a2[14];
  v33 = (v5 * (unsigned __int128)a2[14]) >> 64;
  a4[14] = v32 + v6;
  v34 = __CFADD__(v32, (_QWORD)v6) + v33;
  *(_QWORD *)&v6 = v5 * a2[15];
  v35 = (v5 * (unsigned __int128)a2[15]) >> 64;
  a4[15] = v34 + v6;
  a4[16] = __CFADD__(v34, (_QWORD)v6) + v35;
  v36 = 8 * a3 - 1;
  do
  {
    ++a1;
    ++a4;
    v37 = *a1;
    v38 = (*a4 + *a1 * (unsigned __int128)*a2) >> 64;
    *a4 += *a1 * *a2;
    v39 = a4[1] + v37 * (unsigned __int128)a2[1];
    a4[1] = v38 + v39;
    v40 = __CFADD__(v38, (_QWORD)v39) + *((_QWORD *)&v39 + 1);
    v41 = a4[2] + v37 * (unsigned __int128)a2[2];
    a4[2] = v40 + v41;
    v42 = __CFADD__(v40, (_QWORD)v41) + *((_QWORD *)&v41 + 1);
    v43 = a4[3] + v37 * (unsigned __int128)a2[3];
    a4[3] = v42 + v43;
    v44 = __CFADD__(v42, (_QWORD)v43) + *((_QWORD *)&v43 + 1);
    v45 = a4[4] + v37 * (unsigned __int128)a2[4];
    a4[4] = v44 + v45;
    v46 = __CFADD__(v44, (_QWORD)v45) + *((_QWORD *)&v45 + 1);
    v47 = a4[5] + v37 * (unsigned __int128)a2[5];
    a4[5] = v46 + v47;
    v48 = __CFADD__(v46, (_QWORD)v47) + *((_QWORD *)&v47 + 1);
    v49 = a4[6] + v37 * (unsigned __int128)a2[6];
    a4[6] = v48 + v49;
    v50 = __CFADD__(v48, (_QWORD)v49) + *((_QWORD *)&v49 + 1);
    v51 = a4[7] + v37 * (unsigned __int128)a2[7];
    a4[7] = v50 + v51;
    v52 = __CFADD__(v50, (_QWORD)v51) + *((_QWORD *)&v51 + 1);
    v53 = a4[8] + v37 * (unsigned __int128)a2[8];
    a4[8] = v52 + v53;
    v54 = __CFADD__(v52, (_QWORD)v53) + *((_QWORD *)&v53 + 1);
    v55 = a4[9] + v37 * (unsigned __int128)a2[9];
    a4[9] = v54 + v55;
    v56 = __CFADD__(v54, (_QWORD)v55) + *((_QWORD *)&v55 + 1);
    v57 = a4[10] + v37 * (unsigned __int128)a2[10];
    a4[10] = v56 + v57;
    v58 = __CFADD__(v56, (_QWORD)v57) + *((_QWORD *)&v57 + 1);
    v59 = a4[11] + v37 * (unsigned __int128)a2[11];
    a4[11] = v58 + v59;
    v60 = __CFADD__(v58, (_QWORD)v59) + *((_QWORD *)&v59 + 1);
    v61 = a4[12] + v37 * (unsigned __int128)a2[12];
    a4[12] = v60 + v61;
    v62 = __CFADD__(v60, (_QWORD)v61) + *((_QWORD *)&v61 + 1);
    v63 = a4[13] + v37 * (unsigned __int128)a2[13];
    a4[13] = v62 + v63;
    v64 = __CFADD__(v62, (_QWORD)v63) + *((_QWORD *)&v63 + 1);
    v65 = a4[14] + v37 * (unsigned __int128)a2[14];
    a4[14] = v64 + v65;
    v66 = __CFADD__(v64, (_QWORD)v65) + *((_QWORD *)&v65 + 1);
    v67 = a4[15] + v37 * (unsigned __int128)a2[15];
    result = v66 + v67;
    a4[15] = v66 + v67;
    a4[16] = __CFADD__(v66, (_QWORD)v67) + *((_QWORD *)&v67 + 1);
    --v36;
  }
  while ( v36 );
  return result;
}
