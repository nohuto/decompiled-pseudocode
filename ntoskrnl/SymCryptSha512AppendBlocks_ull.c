/*
 * XREFs of SymCryptSha512AppendBlocks_ull @ 0x1403F4B50
 * Callers:
 *     SymCryptSha512Append @ 0x1403F4A74 (SymCryptSha512Append.c)
 *     SymCryptSha512Result @ 0x1403F61C8 (SymCryptSha512Result.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptSha512AppendBlocks_ull(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // r13
  unsigned __int64 *v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r14
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // r11
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // rax
  __int64 *v63; // r9
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // r9
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // r11
  unsigned __int64 v72; // r10
  unsigned __int64 v73; // r15
  unsigned __int64 v74; // r13
  unsigned __int64 v75; // rbx
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // r8
  __int64 v78; // rdi
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // r9
  __int64 v81; // rsi
  unsigned __int64 v82; // r11
  unsigned __int64 v83; // r10
  __int64 v84; // r14
  unsigned __int64 v85; // r13
  unsigned __int64 v86; // rbx
  __int64 v87; // r11
  unsigned __int64 v88; // r8
  unsigned __int64 v89; // rdi
  __int64 v90; // r8
  unsigned __int64 v91; // r9
  unsigned __int64 v92; // rsi
  __int64 v93; // r9
  unsigned __int64 v94; // r10
  unsigned __int64 v95; // r14
  unsigned __int64 v96; // rbx
  unsigned __int64 v97; // r11
  __int64 v98; // r15
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // r8
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // r9
  __int64 v104; // rsi
  __int64 v105; // r14
  __int64 v106; // r11
  __int64 v107; // r8
  bool v108; // zf
  __int64 *v110; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v111; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v113; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v114; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v115; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v116; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v117; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v118; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v119; // [rsp+70h] [rbp-90h]
  unsigned __int64 v120; // [rsp+80h] [rbp-80h]
  unsigned __int64 v121; // [rsp+90h] [rbp-70h]
  __int64 v122; // [rsp+98h] [rbp-68h]
  unsigned __int64 v123; // [rsp+98h] [rbp-68h]
  unsigned __int64 v124; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v125; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v126; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v127; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v128; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v129; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v130; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v131; // [rsp+F0h] [rbp-10h]
  unsigned __int64 *v132; // [rsp+F8h] [rbp-8h]
  __int64 v133; // [rsp+100h] [rbp+0h]
  unsigned __int64 v134; // [rsp+100h] [rbp+0h]
  __int64 v135; // [rsp+108h] [rbp+8h]
  __int64 v136; // [rsp+110h] [rbp+10h]
  __int64 v137; // [rsp+118h] [rbp+18h]
  __int64 v138; // [rsp+120h] [rbp+20h]
  __int64 v139; // [rsp+128h] [rbp+28h]
  __int64 v140; // [rsp+130h] [rbp+30h]
  __int64 v141; // [rsp+138h] [rbp+38h]
  __int64 v142; // [rsp+140h] [rbp+40h]
  unsigned __int64 v143; // [rsp+148h] [rbp+48h]
  unsigned __int64 v144; // [rsp+158h] [rbp+58h]
  _QWORD v145[16]; // [rsp+160h] [rbp+60h] BYREF

  v4 = *a1;
  v5 = a4;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[3];
  v9 = a1[4];
  v10 = a1[5];
  v11 = a1[6];
  v12 = a1[7];
  if ( a3 >= 0x80 )
  {
    v135 = *a1;
    v13 = (unsigned __int64 *)(a2 + 16);
    v143 = a3 >> 7;
    v136 = a1[1];
    v137 = a1[2];
    v144 = -128LL * (a3 >> 7) + a3;
    v138 = a1[3];
    v139 = a1[4];
    v140 = a1[5];
    v141 = a1[6];
    v142 = a1[7];
    v132 = (unsigned __int64 *)(a2 + 16);
    do
    {
      v120 = _byteswap_uint64(*(v13 - 2));
      v14 = v120
          + (__ROR8__(v9, 18) ^ __ROR8__(v9, 41) ^ __ROR8__(v9, 14))
          + (v11 ^ v9 & (v10 ^ v11))
          + v12
          + 0x428A2F98D728AE22LL;
      v15 = v14 + v8;
      v16 = (__ROR8__(v4, 28) ^ __ROR8__(v4, 34) ^ __ROR8__(v4, 39)) + v14 + (v6 & v7 | v4 & (v6 | v7));
      v124 = _byteswap_uint64(*(v13 - 1));
      v17 = v124
          + (__ROR8__(v15, 18) ^ __ROR8__(v15, 41) ^ __ROR8__(v15, 14))
          + (v10 ^ v15 & (v9 ^ v10))
          + v11
          + 0x7137449123EF65CDLL;
      v18 = v17 + v7;
      v19 = (__ROR8__(v16, 28) ^ __ROR8__(v16, 34) ^ __ROR8__(v16, 39)) + v17 + (v4 & v6 | v16 & (v4 | v6));
      v125 = _byteswap_uint64(*v13);
      v20 = v125
          + (__ROR8__(v18, 18) ^ __ROR8__(v18, 41) ^ __ROR8__(v18, 14))
          + (v9 ^ v18 & (v15 ^ v9))
          + v10
          - 0x4A3F043013B2C4D1LL;
      v21 = v20 + v6;
      v22 = (__ROR8__(v19, 28) ^ __ROR8__(v19, 34) ^ __ROR8__(v19, 39)) + v20 + (v4 & v16 | v19 & (v4 | v16));
      v131 = _byteswap_uint64(v13[1]);
      v23 = v131
          + (__ROR8__(v21, 18) ^ __ROR8__(v21, 41) ^ __ROR8__(v21, 14))
          + (v15 ^ v21 & (v18 ^ v15))
          + v9
          - 0x164A245A7E762444LL;
      v24 = v23 + v4;
      v25 = (__ROR8__(v22, 28) ^ __ROR8__(v22, 34) ^ __ROR8__(v22, 39)) + v23 + (v19 & v16 | v22 & (v19 | v16));
      v116 = _byteswap_uint64(v13[2]);
      v26 = v15
          + (__ROR8__(v24, 18) ^ __ROR8__(v24, 41) ^ __ROR8__(v24, 14))
          + (v18 ^ v24 & (v21 ^ v18))
          + 0x3956C25BF348B538LL
          + v116;
      v27 = v26 + v16;
      v28 = (__ROR8__(v25, 28) ^ __ROR8__(v25, 34) ^ __ROR8__(v25, 39)) + v26 + (v22 & v19 | v25 & (v22 | v19));
      v127 = _byteswap_uint64(v13[3]);
      v29 = v18
          + (__ROR8__(v27, 18) ^ __ROR8__(v27, 41) ^ __ROR8__(v27, 14))
          + (v21 ^ v27 & (v24 ^ v21))
          + 0x59F111F1B605D019LL
          + v127;
      v30 = v29 + v19;
      v31 = (__ROR8__(v28, 28) ^ __ROR8__(v28, 34) ^ __ROR8__(v28, 39)) + v29 + (v25 & v22 | v28 & (v25 | v22));
      v118 = _byteswap_uint64(v13[4]);
      v32 = v21
          + (__ROR8__(v30, 18) ^ __ROR8__(v30, 41) ^ __ROR8__(v30, 14))
          + (v24 ^ v30 & (v24 ^ v27))
          - 0x6DC07D5B50E6B065LL
          + v118;
      v33 = v32 + v22;
      v34 = (__ROR8__(v31, 28) ^ __ROR8__(v31, 34) ^ __ROR8__(v31, 39)) + v32 + (v28 & v25 | v31 & (v28 | v25));
      v129 = _byteswap_uint64(v13[5]);
      v35 = v24
          + (__ROR8__(v33, 18) ^ __ROR8__(v33, 41) ^ __ROR8__(v33, 14))
          + (v27 ^ v33 & (v30 ^ v27))
          - 0x54E3A12A25927EE8LL
          + v129;
      v36 = v35 + v25;
      v37 = (__ROR8__(v34, 28) ^ __ROR8__(v34, 34) ^ __ROR8__(v34, 39)) + v35 + (v31 & v28 | v34 & (v31 | v28));
      v38 = _byteswap_uint64(v132[6]);
      v39 = v38
          + v27
          + (__ROR8__(v36, 18) ^ __ROR8__(v36, 41) ^ __ROR8__(v36, 14))
          + (v30 ^ v36 & (v33 ^ v30))
          - 0x27F855675CFCFDBELL;
      v40 = v39 + v28;
      v41 = (__ROR8__(v37, 28) ^ __ROR8__(v37, 34) ^ __ROR8__(v37, 39)) + v39 + (v34 & v31 | v37 & (v34 | v31));
      v130 = _byteswap_uint64(v132[7]);
      v42 = v30
          + (__ROR8__(v40, 18) ^ __ROR8__(v40, 41) ^ __ROR8__(v40, 14))
          + (v33 ^ v40 & (v36 ^ v33))
          + 0x12835B0145706FBELL
          + v130;
      v43 = v42 + v31;
      v44 = (__ROR8__(v41, 28) ^ __ROR8__(v41, 34) ^ __ROR8__(v41, 39)) + v42 + (v37 & v34 | v41 & (v37 | v34));
      v117 = _byteswap_uint64(v132[8]);
      v45 = v33
          + (__ROR8__(v43, 18) ^ __ROR8__(v43, 41) ^ __ROR8__(v43, 14))
          + (v36 ^ v43 & (v40 ^ v36))
          + 0x243185BE4EE4B28CLL
          + v117;
      v46 = v45 + v34;
      v113 = (__ROR8__(v44, 28) ^ __ROR8__(v44, 34) ^ __ROR8__(v44, 39)) + v45 + (v37 & v41 | v44 & (v37 | v41));
      v126 = _byteswap_uint64(v132[9]);
      v47 = v36
          + (__ROR8__(v46, 18) ^ __ROR8__(v46, 41) ^ __ROR8__(v46, 14))
          + (v40 ^ v46 & (v43 ^ v40))
          + 0x550C7DC3D5FFB4E2LL
          + v126;
      v48 = v47 + v37;
      v49 = (__ROR8__(v113, 28) ^ __ROR8__(v113, 34) ^ __ROR8__(v113, 39)) + v47 + (v44 & v41 | (v44 | v41) & v113);
      v128 = _byteswap_uint64(v132[10]);
      v50 = v40
          + (__ROR8__(v48, 18) ^ __ROR8__(v48, 41) ^ __ROR8__(v48, 14))
          + (v43 ^ v48 & (v46 ^ v43))
          + 0x72BE5D74F27B896FLL
          + v128;
      v51 = v50 + v41;
      v121 = _byteswap_uint64(v132[11]);
      v52 = (__ROR8__(v49, 28) ^ __ROR8__(v49, 34) ^ __ROR8__(v49, 39)) + v50 + (v113 & v44 | v49 & (v113 | v44));
      v53 = v43
          + (__ROR8__(v51, 18) ^ __ROR8__(v51, 41) ^ __ROR8__(v51, 14))
          + (v46 ^ v51 & (v48 ^ v46))
          - 0x7F214E01C4E9694FLL
          + v121;
      v54 = v53 + v44;
      v119 = _byteswap_uint64(v132[12]);
      v55 = (__ROR8__(v52, 28) ^ __ROR8__(v52, 34) ^ __ROR8__(v52, 39)) + v53 + (v49 & v113 | v52 & (v49 | v113));
      v56 = v46 + (__ROR8__(v54, 18) ^ __ROR8__(v54, 41) ^ __ROR8__(v54, 14));
      v57 = v119;
      v58 = v119 + v56 + (v48 ^ v54 & (v48 ^ v51)) - 0x6423F958DA38EDCBLL;
      v59 = v58 + v113;
      v60 = __ROR8__(v58 + v113, 18);
      v114 = _byteswap_uint64(v132[13]);
      v61 = (__ROR8__(v55, 28) ^ __ROR8__(v55, 34) ^ __ROR8__(v55, 39)) + (v52 & v49 | v55 & (v52 | v49)) + v58;
      v62 = v48 + (v60 ^ __ROR8__(v59, 41) ^ __ROR8__(v59, 14));
      v63 = qword_140014490;
      v110 = qword_140014490;
      v64 = v62 + (v51 ^ v59 & (v54 ^ v51)) - 0x3E640E8B3096D96CLL + v114;
      v65 = v64 + v49;
      v66 = (__ROR8__(v61, 28) ^ __ROR8__(v61, 34) ^ __ROR8__(v61, 39)) + (v55 & v52 | v61 & (v55 | v52)) + v64;
      do
      {
        v120 += ((v124 >> 7) ^ __ROR8__(v124, 1) ^ __ROR8__(v124, 8))
              + v130
              + ((v57 >> 6) ^ __ROR8__(v57, 19) ^ __ROR8__(v57, 61));
        v145[0] = v120;
        v67 = v120
            + *(v63 - 2)
            + (v54 ^ v65 & (v59 ^ v54))
            + (__ROR8__(v65, 14) ^ __ROR8__(v65, 18) ^ __ROR8__(v65, 41))
            + v51;
        v68 = v67 + v52;
        v69 = (__ROR8__(v66, 28) ^ __ROR8__(v66, 34) ^ __ROR8__(v66, 39)) + v67 + (v61 & v55 | v66 & (v61 | v55));
        v124 += ((v125 >> 7) ^ __ROR8__(v125, 1) ^ __ROR8__(v125, 8))
              + v117
              + ((v114 >> 6) ^ __ROR8__(v114, 19) ^ __ROR8__(v114, 61));
        v145[1] = v124;
        v70 = v124
            + *(v110 - 1)
            + (v59 ^ v68 & (v65 ^ v59))
            + (__ROR8__(v68, 14) ^ __ROR8__(v68, 18) ^ __ROR8__(v68, 41))
            + v54;
        v71 = v70 + v55;
        v72 = (__ROR8__(v69, 28) ^ __ROR8__(v69, 34) ^ __ROR8__(v69, 39)) + v70 + (v66 & v61 | v69 & (v66 | v61));
        v125 += ((v120 >> 6) ^ __ROR8__(v120, 19) ^ __ROR8__(v120, 61))
              + v126
              + ((v131 >> 7) ^ __ROR8__(v131, 1) ^ __ROR8__(v131, 8));
        v145[2] = v125;
        v73 = *v110
            + v125
            + (__ROR8__(v71, 18) ^ __ROR8__(v71, 41) ^ __ROR8__(v71, 14))
            + (v65 ^ v71 & (v68 ^ v65))
            + v59;
        v74 = v73 + v61;
        v75 = (__ROR8__(v72, 28) ^ __ROR8__(v72, 34) ^ __ROR8__(v72, 39)) + v73 + (v66 & v69 | v72 & (v66 | v69));
        v131 += ((v124 >> 6) ^ __ROR8__(v124, 19) ^ __ROR8__(v124, 61))
              + v128
              + (__ROR8__(v116, 1) ^ __ROR8__(v116, 8) ^ (v116 >> 7));
        v145[3] = v131;
        v76 = v131
            + v110[1]
            + (v68 ^ v74 & (v71 ^ v68))
            + (__ROR8__(v74, 14) ^ __ROR8__(v74, 18) ^ __ROR8__(v74, 41))
            + v65;
        v77 = v76 + v66;
        v78 = (__ROR8__(v75, 28) ^ __ROR8__(v75, 34) ^ __ROR8__(v75, 39)) + v76 + (v72 & v69 | v75 & (v72 | v69));
        v116 += ((v125 >> 6) ^ __ROR8__(v125, 19) ^ __ROR8__(v125, 61))
              + v121
              + ((v127 >> 7) ^ __ROR8__(v127, 1) ^ __ROR8__(v127, 8));
        v145[4] = v116;
        v79 = v116
            + v110[2]
            + (v71 ^ v77 & (v74 ^ v71))
            + (__ROR8__(v77, 14) ^ __ROR8__(v77, 18) ^ __ROR8__(v77, 41))
            + v68;
        v80 = v79 + v69;
        v81 = (__ROR8__(v78, 28) ^ __ROR8__(v78, 34) ^ __ROR8__(v78, 39)) + v79 + (v75 & v72 | v78 & (v75 | v72));
        v127 += ((v131 >> 6) ^ __ROR8__(v131, 19) ^ __ROR8__(v131, 61))
              + v119
              + ((v118 >> 7) ^ __ROR8__(v118, 1) ^ __ROR8__(v118, 8));
        v145[5] = v127;
        v82 = v127
            + v110[3]
            + (v74 ^ v80 & (v77 ^ v74))
            + (__ROR8__(v80, 14) ^ __ROR8__(v80, 18) ^ __ROR8__(v80, 41))
            + v71;
        v83 = v82 + v72;
        v84 = (__ROR8__(v81, 28) ^ __ROR8__(v81, 34) ^ __ROR8__(v81, 39)) + v82 + (v78 & v75 | v81 & (v78 | v75));
        v118 += ((v116 >> 6) ^ __ROR8__(v116, 19) ^ __ROR8__(v116, 61))
              + v114
              + ((v129 >> 7) ^ __ROR8__(v129, 1) ^ __ROR8__(v129, 8));
        v145[6] = v118;
        v85 = v118
            + v110[4]
            + (v77 ^ v83 & (v77 ^ v80))
            + (__ROR8__(v83, 14) ^ __ROR8__(v83, 18) ^ __ROR8__(v83, 41))
            + v74;
        v86 = v85 + v75;
        v87 = (__ROR8__(v84, 28) ^ __ROR8__(v84, 34) ^ __ROR8__(v84, 39)) + v85 + (v81 & v78 | v84 & (v81 | v78));
        v129 += ((v38 >> 7) ^ __ROR8__(v38, 1) ^ __ROR8__(v38, 8))
              + v120
              + ((v127 >> 6) ^ __ROR8__(v127, 19) ^ __ROR8__(v127, 61));
        v145[7] = v129;
        v88 = v129
            + v110[5]
            + (v80 ^ v86 & (v83 ^ v80))
            + (__ROR8__(v86, 14) ^ __ROR8__(v86, 18) ^ __ROR8__(v86, 41))
            + v77;
        v89 = v88 + v78;
        v90 = (__ROR8__(v87, 28) ^ __ROR8__(v87, 34) ^ __ROR8__(v87, 39)) + (v84 & v81 | v87 & (v84 | v81)) + v88;
        v38 += v124
             + ((v130 >> 7) ^ __ROR8__(v130, 1) ^ __ROR8__(v130, 8))
             + ((v118 >> 6) ^ __ROR8__(v118, 19) ^ __ROR8__(v118, 61));
        v91 = v38
            + v110[6]
            + (v83 ^ v89 & (v86 ^ v83))
            + (__ROR8__(v89, 14) ^ __ROR8__(v89, 18) ^ __ROR8__(v89, 41))
            + v80;
        v92 = v91 + v81;
        v93 = (__ROR8__(v90, 28) ^ __ROR8__(v90, 34) ^ __ROR8__(v90, 39)) + (v87 & v84 | v90 & (v87 | v84)) + v91;
        v130 += v125
              + ((v117 >> 7) ^ __ROR8__(v117, 1) ^ __ROR8__(v117, 8))
              + ((v129 >> 6) ^ __ROR8__(v129, 19) ^ __ROR8__(v129, 61));
        v145[9] = v130;
        v94 = v130
            + v110[7]
            + (v86 ^ v92 & (v89 ^ v86))
            + (__ROR8__(v92, 14) ^ __ROR8__(v92, 18) ^ __ROR8__(v92, 41))
            + v83;
        v95 = v94 + v84;
        v133 = (__ROR8__(v93, 28) ^ __ROR8__(v93, 34) ^ __ROR8__(v93, 39)) + (v90 & v87 | v93 & (v90 | v87)) + v94;
        v117 += v131
              + ((v38 >> 6) ^ __ROR8__(v38, 19) ^ __ROR8__(v38, 61))
              + ((v126 >> 7) ^ __ROR8__(v126, 1) ^ __ROR8__(v126, 8));
        v145[10] = v117;
        v96 = v117
            + v110[8]
            + (v89 ^ v95 & (v92 ^ v89))
            + (__ROR8__(v95, 14) ^ __ROR8__(v95, 18) ^ __ROR8__(v95, 41))
            + v86;
        v97 = v96 + v87;
        v98 = (__ROR8__(v133, 28) ^ __ROR8__(v133, 34) ^ __ROR8__(v133, 39)) + v96 + (v90 & v93 | v133 & (v90 | v93));
        v126 += v116
              + ((v128 >> 7) ^ __ROR8__(v128, 1) ^ __ROR8__(v128, 8))
              + ((v130 >> 6) ^ __ROR8__(v130, 19) ^ __ROR8__(v130, 61));
        v145[11] = v126;
        v99 = v126
            + v110[9]
            + (v92 ^ v97 & (v95 ^ v92))
            + (__ROR8__(v97, 14) ^ __ROR8__(v97, 18) ^ __ROR8__(v97, 41))
            + v89;
        v100 = v99 + v90;
        v122 = (__ROR8__(v98, 28) ^ __ROR8__(v98, 34) ^ __ROR8__(v98, 39)) + v99 + (v133 & v93 | v98 & (v133 | v93));
        v128 += v127
              + ((v121 >> 7) ^ __ROR8__(v121, 1) ^ __ROR8__(v121, 8))
              + ((v117 >> 6) ^ __ROR8__(v117, 19) ^ __ROR8__(v117, 61));
        v145[12] = v128;
        v101 = v128
             + v110[10]
             + (v95 ^ v100 & (v97 ^ v95))
             + (__ROR8__(v100, 14) ^ __ROR8__(v100, 18) ^ __ROR8__(v100, 41))
             + v92;
        v51 = v101 + v93;
        v102 = v133;
        v103 = v101 + (v98 & v133 | (v98 | v133) & v122);
        v104 = v122;
        v134 = (__ROR8__(v122, 28) ^ __ROR8__(v122, 34) ^ __ROR8__(v122, 39)) + v103;
        v121 += ((v126 >> 6) ^ __ROR8__(v126, 19) ^ __ROR8__(v126, 61))
              + v118
              + ((v119 >> 7) ^ __ROR8__(v119, 1) ^ __ROR8__(v119, 8));
        v145[13] = v121;
        v105 = v121
             + v110[11]
             + (v97 ^ v51 & (v100 ^ v97))
             + (__ROR8__(v51, 14) ^ __ROR8__(v51, 18) ^ __ROR8__(v51, 41))
             + v95;
        v54 = v105 + v102;
        v123 = (__ROR8__(v134, 28) ^ __ROR8__(v134, 34) ^ __ROR8__(v134, 39))
             + v105
             + (v122 & v98 | (v122 | v98) & v134);
        v52 = v134;
        v57 = v119
            + ((v128 >> 6) ^ __ROR8__(v128, 19) ^ __ROR8__(v128, 61))
            + v129
            + (__ROR8__(v114, 1) ^ __ROR8__(v114, 8) ^ (v114 >> 7));
        v119 = v57;
        v145[14] = v57;
        v106 = v57
             + v110[12]
             + (v100 ^ v54 & (v100 ^ v51))
             + (__ROR8__(v54, 14) ^ __ROR8__(v54, 18) ^ __ROR8__(v54, 41))
             + v97;
        v59 = v106 + v98;
        v61 = (__ROR8__(v123, 28) ^ __ROR8__(v123, 34) ^ __ROR8__(v123, 39))
            + v106
            + (v134 & v104 | v123 & (v134 | v104));
        v114 += ((v121 >> 6) ^ __ROR8__(v121, 19) ^ __ROR8__(v121, 61))
              + v38
              + ((v120 >> 7) ^ __ROR8__(v120, 1) ^ __ROR8__(v120, 8));
        v145[15] = v114;
        v55 = v123;
        v107 = v114
             + v110[13]
             + (v51 ^ v59 & (v54 ^ v51))
             + (__ROR8__(v59, 14) ^ __ROR8__(v59, 18) ^ __ROR8__(v59, 41))
             + v100;
        v65 = v107 + v104;
        v63 = v110 + 16;
        v66 = (__ROR8__(v61, 28) ^ __ROR8__(v61, 34) ^ __ROR8__(v61, 39)) + (v123 & v134 | v61 & (v123 | v134)) + v107;
        v110 = v63;
      }
      while ( (__int64)v63 < (__int64)&SymCryptSha384InitialState );
      v135 += v66;
      v13 = v132 + 16;
      v111 = v61;
      v4 = v135;
      v115 = v59;
      v145[8] = v38;
      v132 += 16;
      *a1 = v135;
      v136 += v111;
      v6 = v136;
      a1[1] = v136;
      v137 += v123;
      v7 = v137;
      a1[2] = v137;
      v138 += v134;
      v8 = v138;
      a1[3] = v138;
      v139 += v65;
      v9 = v139;
      a1[4] = v139;
      v140 += v115;
      v10 = v140;
      a1[5] = v140;
      v141 += v54;
      v11 = v141;
      a1[6] = v141;
      v108 = v143-- == 1;
      v12 = v51 + v142;
      v142 = v12;
      a1[7] = v12;
    }
    while ( !v108 );
    a3 = v144;
    v5 = a4;
  }
  *v5 = a3;
  SymCryptWipe((__int64)v145, 0x80uLL);
  return 0LL;
}
