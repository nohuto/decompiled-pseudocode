/*
 * XREFs of SymCryptSha256AppendBlocks_ul1 @ 0x1403EC864
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x1403EC420 (SymCryptSha256AppendBlocks.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha256AppendBlocks_ul1(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // r11d
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  int v9; // r15d
  int v10; // r12d
  int v11; // r8d
  int v12; // r9d
  unsigned int *v13; // r14
  int v14; // r8d
  int v15; // r10d
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  int v19; // ebx
  int v20; // r12d
  int v21; // r8d
  int v22; // edi
  int v23; // r15d
  int v24; // edx
  int v25; // r11d
  int v26; // r13d
  int v27; // r8d
  int v28; // r10d
  int v29; // r14d
  int v30; // r8d
  int v31; // r12d
  int v32; // esi
  int v33; // r8d
  int v34; // r15d
  int v35; // ebx
  int v36; // r8d
  int v37; // r13d
  int v38; // r9d
  unsigned __int32 v39; // r8d
  unsigned __int32 v40; // r14d
  int v41; // r10d
  int v42; // r8d
  int v43; // esi
  unsigned __int32 v44; // r12d
  int v45; // r8d
  int v46; // ebx
  int v47; // eax
  int v48; // r13d
  int v49; // r8d
  int v50; // r9d
  int v51; // r11d
  int v52; // r8d
  int v53; // r10d
  int v54; // eax
  int v55; // esi
  int v56; // r8d
  int v57; // r15d
  int v58; // eax
  int v59; // ebx
  int v60; // r8d
  int v61; // r13d
  int v62; // r14d
  int v63; // eax
  unsigned __int32 v64; // r9d
  unsigned __int32 v65; // edi
  int v66; // r8d
  int v67; // r11d
  int v68; // eax
  unsigned __int32 v69; // r8d
  unsigned __int32 v70; // r8d
  unsigned __int32 v71; // r10d
  int v72; // r15d
  unsigned __int32 v73; // r8d
  unsigned __int32 v74; // r9d
  int v75; // esi
  unsigned __int32 v76; // edx
  unsigned __int32 v77; // r8d
  int v78; // r13d
  unsigned __int32 v79; // r11d
  int v80; // r11d
  unsigned __int32 v81; // r10d
  unsigned __int32 v82; // r15d
  int v83; // ebx
  unsigned __int32 v84; // r9d
  unsigned __int32 v85; // esi
  int v86; // edi
  int v87; // r8d
  int v88; // r13d
  int v89; // r14d
  unsigned __int32 v90; // r10d
  unsigned __int32 v91; // r11d
  int v92; // r12d
  unsigned __int32 v93; // r15d
  unsigned __int32 v94; // ebx
  int v95; // r8d
  unsigned __int32 v96; // esi
  unsigned __int32 v97; // edi
  int v98; // r9d
  unsigned __int32 v99; // r13d
  unsigned __int32 v100; // r14d
  int v101; // r10d
  unsigned __int32 v102; // r11d
  unsigned __int32 v103; // r12d
  int v104; // r11d
  unsigned __int32 v105; // ebx
  unsigned __int32 v106; // edi
  unsigned __int32 v107; // r14d
  unsigned __int32 v108; // r12d
  unsigned __int32 v109; // eax
  int v110; // ecx
  bool v111; // zf
  int v113; // [rsp+0h] [rbp-100h]
  unsigned __int32 v114; // [rsp+0h] [rbp-100h]
  int v115; // [rsp+0h] [rbp-100h]
  _DWORD *v116; // [rsp+10h] [rbp-F0h]
  unsigned __int32 v117; // [rsp+20h] [rbp-E0h]
  unsigned __int32 v118; // [rsp+30h] [rbp-D0h]
  unsigned __int32 v119; // [rsp+38h] [rbp-C8h]
  unsigned __int32 v120; // [rsp+40h] [rbp-C0h]
  unsigned __int32 v121; // [rsp+50h] [rbp-B0h]
  unsigned __int32 v122; // [rsp+58h] [rbp-A8h]
  unsigned __int32 v123; // [rsp+60h] [rbp-A0h]
  int v124; // [rsp+64h] [rbp-9Ch]
  int v125; // [rsp+64h] [rbp-9Ch]
  unsigned __int32 v126; // [rsp+70h] [rbp-90h]
  unsigned __int32 v127; // [rsp+80h] [rbp-80h]
  int v128; // [rsp+80h] [rbp-80h]
  unsigned __int32 v129; // [rsp+90h] [rbp-70h]
  unsigned __int32 v130; // [rsp+94h] [rbp-6Ch]
  unsigned __int32 v131; // [rsp+98h] [rbp-68h]
  unsigned __int32 v132; // [rsp+A0h] [rbp-60h]
  unsigned __int32 v133; // [rsp+B0h] [rbp-50h]
  unsigned __int32 v134; // [rsp+C0h] [rbp-40h]
  int v135; // [rsp+C8h] [rbp-38h]
  unsigned __int32 v136; // [rsp+CCh] [rbp-34h]
  int v137; // [rsp+D0h] [rbp-30h]
  int v138; // [rsp+D4h] [rbp-2Ch]
  int v139; // [rsp+D8h] [rbp-28h]
  int v140; // [rsp+DCh] [rbp-24h]
  int v141; // [rsp+E0h] [rbp-20h]
  int v142; // [rsp+E4h] [rbp-1Ch]
  int v143; // [rsp+E8h] [rbp-18h]
  unsigned int *v144; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v145; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v147; // [rsp+108h] [rbp+8h]
  unsigned __int32 v149; // [rsp+140h] [rbp+40h]

  v4 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[4];
  v9 = a1[5];
  v10 = a1[6];
  v11 = a1[7];
  v12 = a1[3];
  if ( a3 >= 0x40 )
  {
    v137 = *a1;
    v13 = (unsigned int *)(a2 + 8);
    v145 = a3 >> 6;
    v138 = a1[1];
    v139 = a1[2];
    v147 = -64LL * (a3 >> 6) + a3;
    v140 = a1[3];
    v141 = a1[4];
    v142 = a1[5];
    v143 = a1[6];
    v135 = a1[7];
    v144 = (unsigned int *)(a2 + 8);
    do
    {
      v133 = _byteswap_ulong(*(v13 - 2));
      v14 = v133 + 1116352408 + (__ROR4__(v8, 11) ^ __ROR4__(v8, 25) ^ __ROR4__(v8, 6)) + (v10 ^ v8 & (v9 ^ v10)) + v11;
      v15 = v14 + v12;
      v16 = (v14 + v12) & (v8 ^ v9);
      v17 = v14 + (__ROR4__(v4, 2) ^ __ROR4__(v4, 13) ^ __ROR4__(v4, 22)) + (v6 & v7 | v4 & (v6 | v7));
      v118 = _byteswap_ulong(*(v13 - 1));
      v18 = v118 + (__ROR4__(v15, 11) ^ __ROR4__(v15, 25) ^ __ROR4__(v15, 6)) + (v9 ^ v16) + v10 + 1899447441;
      v19 = v18 + v7;
      v20 = v18 + (__ROR4__(v17, 2) ^ __ROR4__(v17, 13) ^ __ROR4__(v17, 22)) + (v4 & v6 | v17 & (v4 | v6));
      v119 = _byteswap_ulong(*v13);
      v21 = v9
          - 1245643825
          + (v8 ^ v19 & (v8 ^ v15))
          + (__ROR4__(v19, 6) ^ __ROR4__(v19, 11) ^ __ROR4__(v19, 25))
          + v119;
      v22 = v21 + v6;
      v23 = v21 + (__ROR4__(v20, 2) ^ __ROR4__(v20, 13) ^ __ROR4__(v20, 22)) + (v4 & v17 | v20 & (v4 | v17));
      v130 = _byteswap_ulong(v13[1]);
      v24 = v8
          + (v15 ^ v22 & (v19 ^ v15))
          - 373957723
          + v130
          + (__ROR4__(v22, 6) ^ __ROR4__(v22, 11) ^ __ROR4__(v22, 25));
      v25 = v24 + v4;
      v120 = _byteswap_ulong(v13[2]);
      v26 = v24 + (__ROR4__(v23, 2) ^ __ROR4__(v23, 13) ^ __ROR4__(v23, 22)) + (v20 & v17 | v23 & (v20 | v17));
      v27 = v120
          + (__ROR4__(v25, 11) ^ __ROR4__(v25, 25) ^ __ROR4__(v25, 6))
          + (v19 ^ v25 & (v19 ^ v22))
          + v15
          + 961987163;
      v28 = v17 + v27;
      v29 = (__ROR4__(v26, 2) ^ __ROR4__(v26, 13) ^ __ROR4__(v26, 22)) + v27 + (v23 & v20 | v26 & (v23 | v20));
      v121 = _byteswap_ulong(v144[3]);
      v30 = v19
          + (__ROR4__(v17 + v27, 11) ^ __ROR4__(v17 + v27, 25) ^ __ROR4__(v17 + v27, 6))
          + (v22 ^ (v17 + v27) & (v25 ^ v22))
          + v121
          + 1508970993;
      v31 = v30 + v20;
      v32 = (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + v30 + (v26 & v23 | v29 & (v26 | v23));
      v122 = _byteswap_ulong(v144[4]);
      v33 = v22
          + (v25 ^ v31 & (v25 ^ v28))
          - 1841331548
          + (__ROR4__(v31, 6) ^ __ROR4__(v31, 11) ^ __ROR4__(v31, 25))
          + v122;
      v34 = v33 + v23;
      v35 = (__ROR4__(v32, 2) ^ __ROR4__(v32, 13) ^ __ROR4__(v32, 22)) + v33 + (v29 & v26 | v32 & (v29 | v26));
      v136 = _byteswap_ulong(v144[5]);
      v36 = v25
          + (__ROR4__(v34, 11) ^ __ROR4__(v34, 25) ^ __ROR4__(v34, 6))
          + (v28 ^ v34 & (v31 ^ v28))
          + v136
          - 1424204075;
      v37 = v36 + v26;
      v38 = (__ROR4__(v35, 2) ^ __ROR4__(v35, 13) ^ __ROR4__(v35, 22)) + v36 + (v32 & v29 | v35 & (v32 | v29));
      v127 = _byteswap_ulong(v144[6]);
      v39 = v28
          + (v31 ^ v37 & (v34 ^ v31))
          - 670586216
          + (__ROR4__(v37, 6) ^ __ROR4__(v37, 11) ^ __ROR4__(v37, 25))
          + v127;
      v40 = v39 + v29;
      v41 = (__ROR4__(v38, 2) ^ __ROR4__(v38, 13) ^ __ROR4__(v38, 22)) + v39 + (v35 & v32 | v38 & (v35 | v32));
      v129 = _byteswap_ulong(v144[7]);
      v42 = v31
          + (__ROR4__(v40, 11) ^ __ROR4__(v40, 25) ^ __ROR4__(v40, 6))
          + (v34 ^ v40 & (v37 ^ v34))
          + v129
          + 310598401;
      v43 = v42 + v32;
      v124 = (__ROR4__(v41, 2) ^ __ROR4__(v41, 13) ^ __ROR4__(v41, 22)) + (v38 & v35 | v41 & (v38 | v35)) + v42;
      v44 = _byteswap_ulong(v144[8]);
      v134 = v44;
      v45 = v34
          + (__ROR4__(v43, 11) ^ __ROR4__(v43, 25) ^ __ROR4__(v43, 6))
          + (v37 ^ v43 & (v40 ^ v37))
          + v44
          + 607225278;
      v46 = v45 + v35;
      v131 = _byteswap_ulong(v144[9]);
      v47 = v37 + (__ROR4__(v46, 11) ^ __ROR4__(v46, 25) ^ __ROR4__(v46, 6));
      v48 = (__ROR4__(v124, 2) ^ __ROR4__(v124, 13) ^ __ROR4__(v124, 22)) + v45 + (v124 & (v38 | v41) | v38 & v41);
      v49 = v47 + (v40 ^ v46 & (v43 ^ v40)) + v131 + 1426881987;
      v50 = v49 + v38;
      v51 = (__ROR4__(v48, 2) ^ __ROR4__(v48, 13) ^ __ROR4__(v48, 22)) + v49 + (v124 & v41 | v48 & (v124 | v41));
      v126 = _byteswap_ulong(v144[10]);
      v52 = v40
          + (__ROR4__(v50, 11) ^ __ROR4__(v50, 25) ^ __ROR4__(v50, 6))
          + (v43 ^ v50 & (v46 ^ v43))
          + v126
          + 1925078388;
      v53 = v52 + v41;
      v123 = _byteswap_ulong(v144[11]);
      v54 = v43 + (__ROR4__(v53, 11) ^ __ROR4__(v53, 25) ^ __ROR4__(v53, 6));
      v55 = (__ROR4__(v51, 2) ^ __ROR4__(v51, 13) ^ __ROR4__(v51, 22)) + v52 + (v51 & (v48 | v124) | v48 & v124);
      v56 = v54 + (v46 ^ v53 & (v50 ^ v46)) + v123 - 2132889090;
      v57 = v56 + v124;
      v125 = v57;
      v58 = v46 + (__ROR4__(v57, 11) ^ __ROR4__(v57, 25) ^ __ROR4__(v57, 6));
      v59 = (__ROR4__(v55, 2) ^ __ROR4__(v55, 13) ^ __ROR4__(v55, 22)) + v56 + (v55 & (v51 | v48) | v51 & v48);
      v132 = _byteswap_ulong(v144[12]);
      v60 = v58 + (v50 ^ v57 & (v50 ^ v53)) + v132 - 1680079193;
      v61 = v60 + v48;
      v117 = _byteswap_ulong(v144[13]);
      v62 = (__ROR4__(v59, 2) ^ __ROR4__(v59, 13) ^ __ROR4__(v59, 22)) + v60 + (v55 & v51 | v59 & (v55 | v51));
      v63 = v50 + (__ROR4__(v61, 11) ^ __ROR4__(v61, 25) ^ __ROR4__(v61, 6));
      v64 = v117;
      v65 = v132;
      v66 = v63 + (v53 ^ v61 & (v57 ^ v53)) + v117 - 1046744716;
      v67 = v66 + v51;
      v68 = v66 + (v62 & (v59 | v55) | v59 & v55);
      v69 = v133;
      v113 = (__ROR4__(v62, 2) ^ __ROR4__(v62, 13) ^ __ROR4__(v62, 22)) + v68;
      v116 = (_DWORD *)&xmmword_14000F640 + 2;
      do
      {
        v149 = v69
             + ((v65 >> 10) ^ __ROR4__(v65, 17) ^ __ROR4__(v65, 19))
             + v129
             + ((v118 >> 3) ^ __ROR4__(v118, 7) ^ __ROR4__(v118, 18));
        v70 = v149
            + v53
            + *(v116 - 2)
            + (v57 ^ v67 & (v61 ^ v57))
            + (__ROR4__(v67, 6) ^ __ROR4__(v67, 11) ^ __ROR4__(v67, 25));
        v71 = v70 + v55;
        v72 = v70 + (__ROR4__(v113, 2) ^ __ROR4__(v113, 13) ^ __ROR4__(v113, 22)) + (v62 & v59 | v113 & (v62 | v59));
        v118 += ((v119 >> 3) ^ __ROR4__(v119, 7) ^ __ROR4__(v119, 18))
              + v44
              + ((v64 >> 10) ^ __ROR4__(v64, 17) ^ __ROR4__(v64, 19));
        v73 = v118
            + *(v116 - 1)
            + (v61 ^ (v70 + v55) & (v67 ^ v61))
            + (__ROR4__(v70 + v55, 6) ^ __ROR4__(v70 + v55, 11) ^ __ROR4__(v70 + v55, 25))
            + v125;
        v74 = v73 + v59;
        v75 = v73 + (__ROR4__(v72, 13) ^ __ROR4__(v72, 22) ^ __ROR4__(v72, 2)) + (v72 & (v113 | v62) | v62 & v113);
        v119 += ((v130 >> 3) ^ __ROR4__(v130, 7) ^ __ROR4__(v130, 18))
              + v131
              + ((v149 >> 10) ^ __ROR4__(v149, 17) ^ __ROR4__(v149, 19));
        v76 = v61
            + *v116
            + (v67 ^ (v73 + v59) & (v67 ^ v71))
            + (__ROR4__(v73 + v59, 6) ^ __ROR4__(v73 + v59, 11) ^ __ROR4__(v73 + v59, 25))
            + v119;
        v77 = v76 + v62;
        v78 = v76 + (__ROR4__(v75, 2) ^ __ROR4__(v75, 13) ^ __ROR4__(v75, 22)) + (v113 & v72 | v75 & (v113 | v72));
        v130 += ((v120 >> 3) ^ __ROR4__(v120, 7) ^ __ROR4__(v120, 18))
              + v126
              + ((v118 >> 10) ^ __ROR4__(v118, 17) ^ __ROR4__(v118, 19));
        v79 = v130
            + v116[1]
            + (v71 ^ v77 & (v74 ^ v71))
            + (__ROR4__(v77, 6) ^ __ROR4__(v77, 11) ^ __ROR4__(v77, 25))
            + v67;
        v114 = v79 + v113;
        v80 = (__ROR4__(v78, 2) ^ __ROR4__(v78, 13) ^ __ROR4__(v78, 22)) + (v75 & v72 | v78 & (v75 | v72)) + v79;
        v120 += ((v119 >> 10) ^ __ROR4__(v119, 17) ^ __ROR4__(v119, 19))
              + v123
              + ((v121 >> 3) ^ __ROR4__(v121, 7) ^ __ROR4__(v121, 18));
        v81 = v120
            + v116[2]
            + (v74 ^ v114 & ((v76 + v62) ^ v74))
            + (__ROR4__(v114, 6) ^ __ROR4__(v114, 11) ^ __ROR4__(v114, 25))
            + v71;
        v82 = v81 + v72;
        v83 = (__ROR4__(v80, 2) ^ __ROR4__(v80, 13) ^ __ROR4__(v80, 22)) + v81 + (v78 & v75 | v80 & (v78 | v75));
        v121 += ((v130 >> 10) ^ __ROR4__(v130, 17) ^ __ROR4__(v130, 19))
              + v65
              + ((v122 >> 3) ^ __ROR4__(v122, 7) ^ __ROR4__(v122, 18));
        v84 = v121
            + v116[3]
            + (v77 ^ v82 & (v114 ^ v77))
            + (__ROR4__(v82, 6) ^ __ROR4__(v82, 11) ^ __ROR4__(v82, 25))
            + v74;
        v85 = v84 + v75;
        v86 = (__ROR4__(v83, 2) ^ __ROR4__(v83, 13) ^ __ROR4__(v83, 22)) + v84 + (v80 & v78 | v83 & (v80 | v78));
        v122 += ((v120 >> 10) ^ __ROR4__(v120, 17) ^ __ROR4__(v120, 19))
              + v117
              + ((v136 >> 3) ^ __ROR4__(v136, 7) ^ __ROR4__(v136, 18));
        v87 = v122
            + v116[4]
            + (v114 ^ v85 & (v114 ^ v82))
            + (__ROR4__(v85, 6) ^ __ROR4__(v85, 11) ^ __ROR4__(v85, 25))
            + v76
            + v62;
        v88 = v87 + v78;
        v89 = (__ROR4__(v86, 2) ^ __ROR4__(v86, 13) ^ __ROR4__(v86, 22)) + v87 + (v83 & v80 | v86 & (v83 | v80));
        v136 += v149
              + ((v121 >> 10) ^ __ROR4__(v121, 17) ^ __ROR4__(v121, 19))
              + ((v127 >> 3) ^ __ROR4__(v127, 7) ^ __ROR4__(v127, 18));
        v90 = v136
            + v116[5]
            + (v82 ^ v88 & (v85 ^ v82))
            + (__ROR4__(v88, 6) ^ __ROR4__(v88, 11) ^ __ROR4__(v88, 25))
            + v114;
        v91 = v90 + v80;
        v92 = (__ROR4__(v89, 2) ^ __ROR4__(v89, 13) ^ __ROR4__(v89, 22)) + v90 + (v86 & v83 | v89 & (v86 | v83));
        v127 += v118
              + ((v122 >> 10) ^ __ROR4__(v122, 17) ^ __ROR4__(v122, 19))
              + ((v129 >> 3) ^ __ROR4__(v129, 7) ^ __ROR4__(v129, 18));
        v93 = v127
            + v116[6]
            + (v85 ^ v91 & (v88 ^ v85))
            + (__ROR4__(v91, 6) ^ __ROR4__(v91, 11) ^ __ROR4__(v91, 25))
            + v82;
        v94 = v93 + v83;
        v95 = (__ROR4__(v92, 2) ^ __ROR4__(v92, 13) ^ __ROR4__(v92, 22)) + v93 + (v89 & v86 | v92 & (v89 | v86));
        v129 += v119
              + ((v136 >> 10) ^ __ROR4__(v136, 17) ^ __ROR4__(v136, 19))
              + ((v134 >> 3) ^ __ROR4__(v134, 7) ^ __ROR4__(v134, 18));
        v96 = v129
            + v116[7]
            + (v88 ^ v94 & (v91 ^ v88))
            + (__ROR4__(v94, 6) ^ __ROR4__(v94, 11) ^ __ROR4__(v94, 25))
            + v85;
        v97 = v96 + v86;
        v98 = (__ROR4__(v95, 2) ^ __ROR4__(v95, 13) ^ __ROR4__(v95, 22)) + v96 + (v92 & v89 | v95 & (v92 | v89));
        v134 += v130
              + ((v127 >> 10) ^ __ROR4__(v127, 17) ^ __ROR4__(v127, 19))
              + ((v131 >> 3) ^ __ROR4__(v131, 7) ^ __ROR4__(v131, 18));
        v99 = v134
            + v116[8]
            + (v91 ^ v97 & (v94 ^ v91))
            + (__ROR4__(v97, 6) ^ __ROR4__(v97, 11) ^ __ROR4__(v97, 25))
            + v88;
        v100 = v99 + v89;
        v101 = (__ROR4__(v98, 2) ^ __ROR4__(v98, 13) ^ __ROR4__(v98, 22)) + v99 + (v92 & v95 | v98 & (v92 | v95));
        v131 += v120
              + ((v129 >> 10) ^ __ROR4__(v129, 17) ^ __ROR4__(v129, 19))
              + ((v126 >> 3) ^ __ROR4__(v126, 7) ^ __ROR4__(v126, 18));
        v102 = v131
             + v116[9]
             + (v94 ^ v100 & (v97 ^ v94))
             + (__ROR4__(v100, 6) ^ __ROR4__(v100, 11) ^ __ROR4__(v100, 25))
             + v91;
        v103 = v102 + v92;
        v104 = (__ROR4__(v101, 2) ^ __ROR4__(v101, 13) ^ __ROR4__(v101, 22)) + (v98 & v95 | v101 & (v98 | v95)) + v102;
        v126 += v121
              + ((v134 >> 10) ^ __ROR4__(v134, 17) ^ __ROR4__(v134, 19))
              + ((v123 >> 3) ^ __ROR4__(v123, 7) ^ __ROR4__(v123, 18));
        v105 = v126
             + v116[10]
             + (v97 ^ v103 & (v100 ^ v97))
             + (__ROR4__(v103, 6) ^ __ROR4__(v103, 11) ^ __ROR4__(v103, 25))
             + v94;
        v115 = v105 + v95;
        v55 = v105 + (__ROR4__(v104, 2) ^ __ROR4__(v104, 13) ^ __ROR4__(v104, 22)) + (v101 & v98 | v104 & (v101 | v98));
        v123 += v122
              + ((v131 >> 10) ^ __ROR4__(v131, 17) ^ __ROR4__(v131, 19))
              + ((v132 >> 3) ^ __ROR4__(v132, 7) ^ __ROR4__(v132, 18));
        v106 = v123
             + v116[11]
             + (v100 ^ (v105 + v95) & (v103 ^ v100))
             + (__ROR4__(v105 + v95, 6) ^ __ROR4__(v105 + v95, 11) ^ __ROR4__(v105 + v95, 25))
             + v97;
        v57 = v98 + v106;
        v125 = v57;
        v59 = v106 + (__ROR4__(v55, 2) ^ __ROR4__(v55, 13) ^ __ROR4__(v55, 22)) + (v104 & v101 | v55 & (v104 | v101));
        v65 = v136
            + ((v126 >> 10) ^ __ROR4__(v126, 17) ^ __ROR4__(v126, 19))
            + ((v117 >> 3) ^ __ROR4__(v117, 7) ^ __ROR4__(v117, 18))
            + v132;
        v132 = v65;
        v69 = v149;
        v107 = v65
             + v116[12]
             + (v103 ^ v57 & (v103 ^ v115))
             + (__ROR4__(v57, 6) ^ __ROR4__(v57, 11) ^ __ROR4__(v57, 25))
             + v100;
        v61 = v101 + v107;
        v53 = v115;
        v62 = (v55 & v104 | v59 & (v55 | v104)) + (__ROR4__(v59, 2) ^ __ROR4__(v59, 13) ^ __ROR4__(v59, 22)) + v107;
        v64 = v127
            + ((v149 >> 3) ^ __ROR4__(v149, 7) ^ __ROR4__(v149, 18))
            + ((v123 >> 10) ^ __ROR4__(v123, 17) ^ __ROR4__(v123, 19))
            + v117;
        v117 = v64;
        v108 = v64
             + v116[13]
             + (v115 ^ v61 & (v57 ^ v115))
             + (__ROR4__(v61, 6) ^ __ROR4__(v61, 11) ^ __ROR4__(v61, 25))
             + v103;
        v67 = v108 + v104;
        v109 = v108 + (__ROR4__(v62, 2) ^ __ROR4__(v62, 13) ^ __ROR4__(v62, 22));
        v44 = v134;
        v110 = v109 + (v59 & v55 | v62 & (v59 | v55));
        v113 = v110;
        v116 += 16;
      }
      while ( (__int64)v116 < (__int64)((_DWORD *)&_xmm + 2) );
      v7 = v139 + v59;
      v6 = v62 + v138;
      v12 = v55 + v140;
      v9 = v61 + v142;
      v10 = v125 + v143;
      v128 = v67;
      v13 = v144 + 16;
      v4 = v110 + v137;
      v8 = v141 + v128;
      v111 = v145-- == 1;
      v137 += v110;
      *a1 = v137;
      v138 = v6;
      a1[1] = v6;
      v140 = v12;
      a1[3] = v12;
      v141 = v8;
      a1[4] = v8;
      v142 = v9;
      a1[5] = v9;
      v143 = v10;
      a1[6] = v10;
      v135 += v53;
      v11 = v135;
      a1[7] = v135;
      v139 = v7;
      a1[2] = v7;
      v144 += 16;
    }
    while ( !v111 );
    a3 = v147;
  }
  *a4 = a3;
  return 0LL;
}
