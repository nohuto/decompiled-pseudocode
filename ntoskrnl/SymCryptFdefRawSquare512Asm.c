/*
 * XREFs of SymCryptFdefRawSquare512Asm @ 0x140401300
 * Callers:
 *     SymCryptFdefModSquareMontgomery512 @ 0x1403FF550 (SymCryptFdefModSquareMontgomery512.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptFdefRawSquare512Asm(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int128 v4; // kr00_16
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // rsi
  __int64 v24; // rbp
  unsigned __int128 v25; // kr20_16
  __int64 v26; // rdi
  unsigned __int128 v27; // kr30_16
  __int64 v28; // rbp
  unsigned __int128 v29; // kr40_16
  __int64 v30; // rdi
  unsigned __int128 v31; // kr50_16
  __int64 v32; // rbp
  unsigned __int128 v33; // kr60_16
  unsigned __int64 v34; // rsi
  __int64 v35; // rdi
  unsigned __int128 v36; // kr80_16
  __int64 v37; // rbp
  unsigned __int128 v38; // kr90_16
  __int64 v39; // rdi
  unsigned __int128 v40; // krA0_16
  __int64 v41; // rbp
  unsigned __int128 v42; // krB0_16
  unsigned __int64 v43; // rsi
  __int64 v44; // rbp
  unsigned __int128 v45; // krD0_16
  __int64 v46; // rdi
  unsigned __int128 v47; // krE0_16
  __int64 v48; // rbp
  unsigned __int128 v49; // krF0_16
  unsigned __int64 v50; // rsi
  __int64 v51; // rdi
  unsigned __int128 v52; // kr110_16
  __int64 v53; // rbp
  unsigned __int128 v54; // kr120_16
  unsigned __int64 v55; // rsi
  __int64 v56; // rbp
  unsigned __int128 v57; // kr140_16
  bool v58; // cf
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rtt
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rtt
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rtt
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rtt
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rtt
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rtt
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rtt
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rtt
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rtt
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rtt
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rtt
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rtt
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rtt
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rtt
  unsigned __int64 *v87; // rcx
  unsigned __int128 v88; // rax
  unsigned __int128 v89; // rax
  unsigned __int128 v90; // rax
  unsigned __int128 v91; // rax
  unsigned __int128 v92; // rax
  unsigned __int128 v93; // rax
  unsigned __int128 v94; // rax
  unsigned __int128 v95; // rax
  unsigned __int128 v96; // rax
  unsigned __int128 v97; // rax
  unsigned __int128 v98; // rax
  unsigned __int128 v99; // rax
  unsigned __int128 v100; // rax
  unsigned __int128 v101; // rax
  unsigned __int128 v102; // rax
  unsigned __int64 result; // rax

  v3 = *a1;
  *a3 = 0LL;
  v4 = a1[1];
  a3[1] = v3 * a1[1];
  v5 = v3 * a1[2];
  v6 = (v3 * (unsigned __int128)a1[2]) >> 64;
  a3[2] = (__PAIR128__(a1[2], v4) * v3) >> 64;
  v7 = __CFADD__(((unsigned __int128)v3 * v4) >> 64, v5) + v6;
  v8 = v3 * a1[3];
  v9 = (v3 * (unsigned __int128)a1[3]) >> 64;
  a3[3] = v7 + v8;
  v10 = __CFADD__(v7, v8) + v9;
  v11 = v3 * a1[4];
  v12 = (v3 * (unsigned __int128)a1[4]) >> 64;
  a3[4] = v10 + v11;
  v13 = __CFADD__(v10, v11) + v12;
  v14 = v3 * a1[5];
  v15 = (v3 * (unsigned __int128)a1[5]) >> 64;
  a3[5] = v13 + v14;
  v16 = __CFADD__(v13, v14) + v15;
  v17 = v3 * a1[6];
  v18 = (v3 * (unsigned __int128)a1[6]) >> 64;
  a3[6] = v16 + v17;
  v19 = __CFADD__(v16, v17) + v18;
  v20 = v3 * a1[7];
  v21 = (v3 * (unsigned __int128)a1[7]) >> 64;
  a3[7] = v19 + v20;
  a3[8] = __CFADD__(v19, v20) + v21;
  v22 = a1 + 1;
  v23 = *v22;
  v24 = (a3[3] + *v22 * (unsigned __int128)v22[1]) >> 64;
  a3[3] += *v22 * v22[1];
  v25 = a3[4] + v23 * (unsigned __int128)v22[2];
  a3[4] = v24 + v25;
  v26 = __CFADD__(v24, (_QWORD)v25) + *((_QWORD *)&v25 + 1);
  v27 = a3[5] + v23 * (unsigned __int128)v22[3];
  a3[5] = v26 + v27;
  v28 = __CFADD__(v26, (_QWORD)v27) + *((_QWORD *)&v27 + 1);
  v29 = a3[6] + v23 * (unsigned __int128)v22[4];
  a3[6] = v28 + v29;
  v30 = __CFADD__(v28, (_QWORD)v29) + *((_QWORD *)&v29 + 1);
  v31 = a3[7] + v23 * (unsigned __int128)v22[5];
  a3[7] = v30 + v31;
  v32 = __CFADD__(v30, (_QWORD)v31) + *((_QWORD *)&v31 + 1);
  v33 = a3[8] + v23 * (unsigned __int128)v22[6];
  a3[8] = v32 + v33;
  a3[9] = __CFADD__(v32, (_QWORD)v33) + *((_QWORD *)&v33 + 1);
  v34 = *++v22;
  v35 = (a3[5] + *v22 * (unsigned __int128)v22[1]) >> 64;
  a3[5] += *v22 * v22[1];
  v36 = a3[6] + v34 * (unsigned __int128)v22[2];
  a3[6] = v35 + v36;
  v37 = __CFADD__(v35, (_QWORD)v36) + *((_QWORD *)&v36 + 1);
  v38 = a3[7] + v34 * (unsigned __int128)v22[3];
  a3[7] = v37 + v38;
  v39 = __CFADD__(v37, (_QWORD)v38) + *((_QWORD *)&v38 + 1);
  v40 = a3[8] + v34 * (unsigned __int128)v22[4];
  a3[8] = v39 + v40;
  v41 = __CFADD__(v39, (_QWORD)v40) + *((_QWORD *)&v40 + 1);
  v42 = a3[9] + v34 * (unsigned __int128)v22[5];
  a3[9] = v41 + v42;
  a3[10] = __CFADD__(v41, (_QWORD)v42) + *((_QWORD *)&v42 + 1);
  v43 = *++v22;
  v44 = (a3[7] + *v22 * (unsigned __int128)v22[1]) >> 64;
  a3[7] += *v22 * v22[1];
  v45 = a3[8] + v43 * (unsigned __int128)v22[2];
  a3[8] = v44 + v45;
  v46 = __CFADD__(v44, (_QWORD)v45) + *((_QWORD *)&v45 + 1);
  v47 = a3[9] + v43 * (unsigned __int128)v22[3];
  a3[9] = v46 + v47;
  v48 = __CFADD__(v46, (_QWORD)v47) + *((_QWORD *)&v47 + 1);
  v49 = a3[10] + v43 * (unsigned __int128)v22[4];
  a3[10] = v48 + v49;
  a3[11] = __CFADD__(v48, (_QWORD)v49) + *((_QWORD *)&v49 + 1);
  v50 = *++v22;
  v51 = (a3[9] + *v22 * (unsigned __int128)v22[1]) >> 64;
  a3[9] += *v22 * v22[1];
  v52 = a3[10] + v50 * (unsigned __int128)v22[2];
  a3[10] = v51 + v52;
  v53 = __CFADD__(v51, (_QWORD)v52) + *((_QWORD *)&v52 + 1);
  v54 = a3[11] + v50 * (unsigned __int128)v22[3];
  a3[11] = v53 + v54;
  a3[12] = __CFADD__(v53, (_QWORD)v54) + *((_QWORD *)&v54 + 1);
  v55 = *++v22;
  v56 = (a3[11] + *v22 * (unsigned __int128)v22[1]) >> 64;
  a3[11] += *v22 * v22[1];
  v57 = a3[12] + v55 * (unsigned __int128)v22[2];
  a3[12] = v56 + v57;
  a3[13] = __CFADD__(v56, (_QWORD)v57) + *((_QWORD *)&v57 + 1);
  *(_OWORD *)(a3 + 13) = a3[13] + v22[1] * (unsigned __int128)v22[2];
  a3[15] = 0LL;
  v58 = __CFADD__(*a3, *a3);
  *a3 *= 2LL;
  v59 = a3[1];
  v60 = v58 + v59;
  v58 = __CFADD__(v58, v59) | __CFADD__(v59, v60);
  a3[1] = v59 + v60;
  v61 = a3[2];
  v62 = v58 + v61;
  v58 = __CFADD__(v58, v61) | __CFADD__(v61, v62);
  a3[2] = v61 + v62;
  v63 = a3[3];
  v64 = v58 + v63;
  v58 = __CFADD__(v58, v63) | __CFADD__(v63, v64);
  a3[3] = v63 + v64;
  v65 = a3[4];
  v66 = v58 + v65;
  v58 = __CFADD__(v58, v65) | __CFADD__(v65, v66);
  a3[4] = v65 + v66;
  v67 = a3[5];
  v68 = v58 + v67;
  v58 = __CFADD__(v58, v67) | __CFADD__(v67, v68);
  a3[5] = v67 + v68;
  v69 = a3[6];
  v70 = v58 + v69;
  v58 = __CFADD__(v58, v69) | __CFADD__(v69, v70);
  a3[6] = v69 + v70;
  v71 = a3[7];
  v72 = v58 + v71;
  v58 = __CFADD__(v58, v71) | __CFADD__(v71, v72);
  a3[7] = v71 + v72;
  v73 = a3[8];
  v74 = v58 + v73;
  v58 = __CFADD__(v58, v73) | __CFADD__(v73, v74);
  a3[8] = v73 + v74;
  v75 = a3[9];
  v76 = v58 + v75;
  v58 = __CFADD__(v58, v75) | __CFADD__(v75, v76);
  a3[9] = v75 + v76;
  v77 = a3[10];
  v78 = v58 + v77;
  v58 = __CFADD__(v58, v77) | __CFADD__(v77, v78);
  a3[10] = v77 + v78;
  v79 = a3[11];
  v80 = v58 + v79;
  v58 = __CFADD__(v58, v79) | __CFADD__(v79, v80);
  a3[11] = v79 + v80;
  v81 = a3[12];
  v82 = v58 + v81;
  v58 = __CFADD__(v58, v81) | __CFADD__(v81, v82);
  a3[12] = v81 + v82;
  v83 = a3[13];
  v84 = v58 + v83;
  v58 = __CFADD__(v58, v83) | __CFADD__(v83, v84);
  a3[13] = v83 + v84;
  v85 = a3[14];
  v86 = v58 + v85;
  a3[14] = v85 + v86;
  a3[15] += (__CFADD__(v58, v85) | (unsigned __int8)__CFADD__(v85, v86)) + a3[15];
  v87 = a1;
  v88 = 0 + *a3 + *a1 * (unsigned __int128)*a1;
  *a3 += *a1 * *a1;
  v89 = a3[1] + (unsigned __int128)*((unsigned __int64 *)&v88 + 1);
  a3[1] = v89;
  v90 = *((unsigned __int64 *)&v89 + 1) + a3[2] + v87[1] * (unsigned __int128)v87[1];
  a3[2] = v90;
  v91 = a3[3] + (unsigned __int128)*((unsigned __int64 *)&v90 + 1);
  a3[3] = v91;
  v92 = *((unsigned __int64 *)&v91 + 1) + a3[4] + v87[2] * (unsigned __int128)v87[2];
  a3[4] = v92;
  v93 = a3[5] + (unsigned __int128)*((unsigned __int64 *)&v92 + 1);
  a3[5] = v93;
  v94 = *((unsigned __int64 *)&v93 + 1) + a3[6] + v87[3] * (unsigned __int128)v87[3];
  a3[6] = v94;
  v95 = a3[7] + (unsigned __int128)*((unsigned __int64 *)&v94 + 1);
  a3[7] = v95;
  v96 = *((unsigned __int64 *)&v95 + 1) + a3[8] + v87[4] * (unsigned __int128)v87[4];
  a3[8] = v96;
  v97 = a3[9] + (unsigned __int128)*((unsigned __int64 *)&v96 + 1);
  a3[9] = v97;
  v98 = *((unsigned __int64 *)&v97 + 1) + a3[10] + v87[5] * (unsigned __int128)v87[5];
  a3[10] = v98;
  v99 = a3[11] + (unsigned __int128)*((unsigned __int64 *)&v98 + 1);
  a3[11] = v99;
  v100 = *((unsigned __int64 *)&v99 + 1) + a3[12] + v87[6] * (unsigned __int128)v87[6];
  a3[12] = v100;
  v101 = a3[13] + (unsigned __int128)*((unsigned __int64 *)&v100 + 1);
  a3[13] = v101;
  v102 = *((unsigned __int64 *)&v101 + 1) + a3[14] + v87[7] * (unsigned __int128)v87[7];
  a3[14] = v102;
  result = a3[15] + *((_QWORD *)&v102 + 1);
  a3[15] = result;
  return result;
}
