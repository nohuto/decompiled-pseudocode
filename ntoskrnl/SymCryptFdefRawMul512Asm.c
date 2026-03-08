/*
 * XREFs of SymCryptFdefRawMul512Asm @ 0x140401130
 * Callers:
 *     SymCryptFdefModMulMontgomery512 @ 0x1403FEFD0 (SymCryptFdefModMulMontgomery512.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawMul512Asm(
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
  __int64 v20; // r8
  unsigned __int64 v21; // r11
  __int64 v22; // rdi
  unsigned __int128 v23; // kr10_16
  __int64 v24; // rsi
  unsigned __int128 v25; // kr20_16
  __int64 v26; // rdi
  unsigned __int128 v27; // kr30_16
  __int64 v28; // rsi
  unsigned __int128 v29; // kr40_16
  __int64 v30; // rdi
  unsigned __int128 v31; // kr50_16
  __int64 v32; // rsi
  unsigned __int128 v33; // kr60_16
  __int64 v34; // rdi
  unsigned __int128 v35; // kr70_16
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
  a4[8] = __CFADD__(v18, (_QWORD)v6) + v19;
  v20 = 8 * a3 - 1;
  do
  {
    ++a1;
    ++a4;
    v21 = *a1;
    v22 = (*a4 + *a1 * (unsigned __int128)*a2) >> 64;
    *a4 += *a1 * *a2;
    v23 = a4[1] + v21 * (unsigned __int128)a2[1];
    a4[1] = v22 + v23;
    v24 = __CFADD__(v22, (_QWORD)v23) + *((_QWORD *)&v23 + 1);
    v25 = a4[2] + v21 * (unsigned __int128)a2[2];
    a4[2] = v24 + v25;
    v26 = __CFADD__(v24, (_QWORD)v25) + *((_QWORD *)&v25 + 1);
    v27 = a4[3] + v21 * (unsigned __int128)a2[3];
    a4[3] = v26 + v27;
    v28 = __CFADD__(v26, (_QWORD)v27) + *((_QWORD *)&v27 + 1);
    v29 = a4[4] + v21 * (unsigned __int128)a2[4];
    a4[4] = v28 + v29;
    v30 = __CFADD__(v28, (_QWORD)v29) + *((_QWORD *)&v29 + 1);
    v31 = a4[5] + v21 * (unsigned __int128)a2[5];
    a4[5] = v30 + v31;
    v32 = __CFADD__(v30, (_QWORD)v31) + *((_QWORD *)&v31 + 1);
    v33 = a4[6] + v21 * (unsigned __int128)a2[6];
    a4[6] = v32 + v33;
    v34 = __CFADD__(v32, (_QWORD)v33) + *((_QWORD *)&v33 + 1);
    v35 = a4[7] + v21 * (unsigned __int128)a2[7];
    result = v34 + v35;
    a4[7] = v34 + v35;
    a4[8] = __CFADD__(v34, (_QWORD)v35) + *((_QWORD *)&v35 + 1);
    --v20;
  }
  while ( v20 );
  return result;
}
