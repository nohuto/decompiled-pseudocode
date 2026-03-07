__int64 __fastcall SymCryptSha256AppendBlocks_ul1(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // ebx
  int v6; // r11d
  int v7; // r10d
  int v8; // r9d
  int v9; // r14d
  int v10; // ebp
  int v11; // esi
  int v12; // edi
  unsigned int *v13; // r13
  int v14; // r8d
  int v15; // edi
  int v16; // r9d
  int v17; // r8d
  int v18; // esi
  int v19; // r10d
  int v20; // r8d
  int v21; // ebp
  int v22; // ecx
  int v23; // r11d
  int v24; // r8d
  int v25; // r14d
  int v26; // ecx
  int v27; // ebx
  int v28; // r8d
  int v29; // edi
  int v30; // ecx
  int v31; // r9d
  int v32; // r8d
  int v33; // esi
  int v34; // ecx
  int v35; // r10d
  int v36; // r8d
  int v37; // ebp
  int v38; // r11d
  int v39; // r8d
  int v40; // r14d
  int v41; // ecx
  int v42; // ebx
  int v43; // r8d
  int v44; // edi
  int v45; // r9d
  int v46; // r8d
  int v47; // esi
  int v48; // ecx
  int v49; // r10d
  unsigned __int32 v50; // r8d
  unsigned __int32 v51; // r15d
  int v52; // r11d
  unsigned __int32 v53; // edx
  unsigned __int32 v54; // r14d
  int v55; // ebx
  unsigned __int32 v56; // edx
  int v57; // r9d
  unsigned __int32 v58; // r12d
  unsigned __int32 v59; // edx
  int v60; // edi
  unsigned __int32 v61; // eax
  unsigned __int32 v62; // r15d
  unsigned __int32 v63; // r8d
  unsigned __int32 v64; // ebp
  int v65; // r10d
  unsigned __int32 v66; // r11d
  unsigned __int32 v67; // r8d
  unsigned __int32 v68; // esi
  unsigned __int32 v69; // r13d
  int v70; // r8d
  unsigned __int32 v71; // eax
  unsigned __int32 v72; // r9d
  int v73; // edi
  unsigned __int32 v74; // edx
  unsigned __int32 v75; // r10d
  int v76; // ebp
  unsigned __int32 v77; // edx
  unsigned __int32 v78; // r11d
  unsigned __int32 v79; // edx
  unsigned __int32 v80; // ebx
  int v81; // r8d
  unsigned __int32 v82; // edx
  unsigned __int32 v83; // edi
  int v84; // r9d
  unsigned __int32 v85; // edx
  unsigned __int32 v86; // esi
  int v87; // r10d
  unsigned __int32 v88; // edx
  unsigned __int32 v89; // ebp
  int v90; // r11d
  unsigned __int32 v91; // edx
  unsigned __int32 v92; // ebx
  int v93; // r8d
  unsigned __int32 v94; // edx
  unsigned __int32 v95; // edi
  int v96; // r9d
  unsigned __int32 v97; // edx
  unsigned __int32 v98; // esi
  int v99; // r10d
  unsigned __int32 v100; // edx
  unsigned __int32 v101; // ebp
  int v102; // r11d
  unsigned __int32 v103; // edx
  unsigned __int32 v104; // r14d
  int v105; // ebx
  unsigned __int32 v106; // r8d
  unsigned __int32 v107; // r8d
  unsigned __int32 v108; // r8d
  unsigned __int32 v109; // r8d
  bool v110; // zf
  int v112; // [rsp+0h] [rbp-1C8h]
  int v113; // [rsp+0h] [rbp-1C8h]
  _DWORD *v114; // [rsp+8h] [rbp-1C0h]
  unsigned __int32 v115; // [rsp+10h] [rbp-1B8h]
  int v116; // [rsp+18h] [rbp-1B0h]
  unsigned __int32 v117; // [rsp+20h] [rbp-1A8h]
  unsigned __int32 v118; // [rsp+28h] [rbp-1A0h]
  unsigned __int32 v119; // [rsp+2Ch] [rbp-19Ch]
  unsigned __int32 v120; // [rsp+30h] [rbp-198h]
  unsigned __int32 v121; // [rsp+34h] [rbp-194h]
  unsigned __int32 v122; // [rsp+40h] [rbp-188h]
  unsigned __int32 v123; // [rsp+50h] [rbp-178h]
  unsigned __int32 v124; // [rsp+60h] [rbp-168h]
  unsigned __int32 v125; // [rsp+70h] [rbp-158h]
  unsigned __int32 v126; // [rsp+80h] [rbp-148h]
  int v127; // [rsp+80h] [rbp-148h]
  unsigned __int32 v128; // [rsp+84h] [rbp-144h]
  unsigned __int32 v129; // [rsp+88h] [rbp-140h]
  unsigned __int32 v130; // [rsp+90h] [rbp-138h]
  unsigned __int32 v131; // [rsp+94h] [rbp-134h]
  unsigned __int32 v132; // [rsp+98h] [rbp-130h]
  unsigned __int32 v133; // [rsp+9Ch] [rbp-12Ch]
  unsigned __int32 v134; // [rsp+A0h] [rbp-128h]
  int v135; // [rsp+A4h] [rbp-124h]
  int v136; // [rsp+A8h] [rbp-120h]
  int v137; // [rsp+ACh] [rbp-11Ch]
  int v138; // [rsp+B0h] [rbp-118h]
  unsigned __int32 v139; // [rsp+B4h] [rbp-114h]
  unsigned __int32 v140; // [rsp+B8h] [rbp-110h]
  unsigned __int32 v141; // [rsp+BCh] [rbp-10Ch]
  int v142; // [rsp+C0h] [rbp-108h]
  int v143; // [rsp+C4h] [rbp-104h]
  int v144; // [rsp+C8h] [rbp-100h]
  int v145; // [rsp+CCh] [rbp-FCh]
  unsigned __int32 v146; // [rsp+D0h] [rbp-F8h]
  unsigned __int32 v147; // [rsp+D4h] [rbp-F4h]
  unsigned __int32 v148; // [rsp+D8h] [rbp-F0h]
  int v149; // [rsp+DCh] [rbp-ECh]
  int v150; // [rsp+E0h] [rbp-E8h]
  unsigned __int32 v151; // [rsp+E4h] [rbp-E4h]
  unsigned __int32 v152; // [rsp+E8h] [rbp-E0h]
  int v153; // [rsp+ECh] [rbp-DCh]
  int v154; // [rsp+F0h] [rbp-D8h]
  int v155; // [rsp+F4h] [rbp-D4h]
  unsigned __int32 v156; // [rsp+F8h] [rbp-D0h]
  int v157; // [rsp+FCh] [rbp-CCh]
  int v158; // [rsp+100h] [rbp-C8h]
  int v159; // [rsp+104h] [rbp-C4h]
  int v160; // [rsp+108h] [rbp-C0h]
  unsigned __int32 v161; // [rsp+110h] [rbp-B8h]
  int v162; // [rsp+120h] [rbp-A8h]
  __int64 v163; // [rsp+128h] [rbp-A0h]
  unsigned __int64 v164; // [rsp+130h] [rbp-98h]
  unsigned __int64 v166; // [rsp+140h] [rbp-88h]
  unsigned __int64 *v167; // [rsp+148h] [rbp-80h]
  unsigned __int32 v168; // [rsp+150h] [rbp-78h]

  v4 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[3];
  v9 = a1[4];
  v10 = a1[5];
  v11 = a1[6];
  v12 = a1[7];
  v167 = a4;
  if ( a3 >= 0x40 )
  {
    v153 = *a1;
    v13 = (unsigned int *)(a2 + 8);
    v164 = a3 >> 6;
    v154 = a1[1];
    v155 = a1[2];
    v166 = -64LL * (a3 >> 6) + a3;
    v162 = a1[3];
    v157 = a1[4];
    v158 = a1[5];
    v159 = a1[6];
    v160 = a1[7];
    v163 = a2 + 8;
    do
    {
      v124 = _byteswap_ulong(*(v13 - 2));
      v14 = v124 + (__ROR4__(v9, 11) ^ __ROR4__(v9, 25) ^ __ROR4__(v9, 6)) + (v11 ^ v9 & (v10 ^ v11)) + v12 + 1116352408;
      v15 = v14 + v8;
      v16 = v14 + (__ROR4__(v4, 2) ^ __ROR4__(v4, 13) ^ __ROR4__(v4, 22)) + (v6 & v7 | v4 & (v6 | v7));
      v128 = _byteswap_ulong(*(v13 - 1));
      v17 = v128
          + (__ROR4__(v15, 11) ^ __ROR4__(v15, 25) ^ __ROR4__(v15, 6))
          + (v10 ^ v15 & (v9 ^ v10))
          + v11
          + 1899447441;
      v18 = v17 + v7;
      v19 = v17 + (__ROR4__(v16, 2) ^ __ROR4__(v16, 13) ^ __ROR4__(v16, 22)) + (v4 & v6 | v16 & (v4 | v6));
      v129 = _byteswap_ulong(*v13);
      v20 = v10
          - 1245643825
          + (v9 ^ v18 & (v9 ^ v15))
          + (__ROR4__(v18, 6) ^ __ROR4__(v18, 11) ^ __ROR4__(v18, 25))
          + v129;
      v21 = v20 + v6;
      v22 = v15 ^ (v20 + v6) & (v15 ^ v18);
      v23 = v20 + (__ROR4__(v19, 2) ^ __ROR4__(v19, 13) ^ __ROR4__(v19, 22)) + (v4 & v16 | v19 & (v4 | v16));
      v130 = _byteswap_ulong(v13[1]);
      v24 = v9 - 373957723 + v22 + (__ROR4__(v21, 6) ^ __ROR4__(v21, 11) ^ __ROR4__(v21, 25)) + v130;
      v25 = v24 + v4;
      v26 = (v24 + v4) & (v18 ^ v21);
      v27 = v24 + (__ROR4__(v23, 2) ^ __ROR4__(v23, 13) ^ __ROR4__(v23, 22)) + (v16 & v19 | v23 & (v16 | v19));
      v122 = _byteswap_ulong(v13[2]);
      v28 = v15 + 961987163 + (v18 ^ v26) + (__ROR4__(v25, 6) ^ __ROR4__(v25, 11) ^ __ROR4__(v25, 25)) + v122;
      v29 = v28 + v16;
      v30 = v21 ^ (v28 + v16) & (v21 ^ v25);
      v31 = v28 + (__ROR4__(v27, 2) ^ __ROR4__(v27, 13) ^ __ROR4__(v27, 22)) + (v19 & v23 | v27 & (v19 | v23));
      v119 = _byteswap_ulong(v13[3]);
      v32 = v18 + 1508970993 + v30 + (__ROR4__(v29, 6) ^ __ROR4__(v29, 11) ^ __ROR4__(v29, 25)) + v119;
      v33 = v32 + v19;
      v34 = (v32 + v19) & (v25 ^ v29);
      v35 = v32 + (__ROR4__(v31, 2) ^ __ROR4__(v31, 13) ^ __ROR4__(v31, 22)) + (v23 & v27 | v31 & (v23 | v27));
      v115 = _byteswap_ulong(v13[4]);
      v36 = v21 - 1841331548 + (v25 ^ v34) + (__ROR4__(v33, 11) ^ __ROR4__(v33, 25) ^ __ROR4__(v33, 6)) + v115;
      v37 = v36 + v23;
      v38 = v36 + (__ROR4__(v35, 2) ^ __ROR4__(v35, 13) ^ __ROR4__(v35, 22)) + (v27 & v31 | v35 & (v27 | v31));
      v121 = _byteswap_ulong(v13[5]);
      v39 = v25
          - 1424204075
          + (v29 ^ v37 & (v29 ^ v33))
          + (__ROR4__(v37, 11) ^ __ROR4__(v37, 25) ^ __ROR4__(v37, 6))
          + v121;
      v40 = v39 + v27;
      v41 = (v39 + v27) & (v33 ^ v37);
      v42 = v39 + (__ROR4__(v38, 2) ^ __ROR4__(v38, 13) ^ __ROR4__(v38, 22)) + (v31 & v35 | v38 & (v31 | v35));
      v125 = _byteswap_ulong(v13[6]);
      v43 = v29 - 670586216 + (v33 ^ v41) + (__ROR4__(v40, 11) ^ __ROR4__(v40, 25) ^ __ROR4__(v40, 6)) + v125;
      v44 = v43 + v31;
      v45 = v43 + (__ROR4__(v42, 2) ^ __ROR4__(v42, 13) ^ __ROR4__(v42, 22)) + (v35 & v38 | v42 & (v35 | v38));
      v118 = _byteswap_ulong(v13[7]);
      v46 = v33
          + 310598401
          + (v37 ^ v44 & (v37 ^ v40))
          + (__ROR4__(v44, 11) ^ __ROR4__(v44, 25) ^ __ROR4__(v44, 6))
          + v118;
      v47 = v46 + v35;
      v48 = (v46 + v35) & (v40 ^ v44);
      v49 = v46 + (__ROR4__(v45, 2) ^ __ROR4__(v45, 13) ^ __ROR4__(v45, 22)) + (v38 & v42 | v45 & (v38 | v42));
      v117 = _byteswap_ulong(v13[8]);
      v50 = v37 + (v40 ^ v48) + 607225278 + (__ROR4__(v47, 6) ^ __ROR4__(v47, 11) ^ __ROR4__(v47, 25)) + v117;
      v51 = v38 + v50;
      v52 = v50 + (__ROR4__(v49, 2) ^ __ROR4__(v49, 13) ^ __ROR4__(v49, 22)) + (v42 & v45 | v49 & (v42 | v45));
      v120 = _byteswap_ulong(v13[9]);
      v53 = v120
          + (v44 ^ v51 & (v44 ^ v47))
          + 1426881987
          + v40
          + (__ROR4__(v51, 6) ^ __ROR4__(v51, 11) ^ __ROR4__(v51, 25));
      v161 = _byteswap_ulong(v13[10]);
      v54 = v42 + v53;
      v55 = v53 + (__ROR4__(v52, 2) ^ __ROR4__(v52, 13) ^ __ROR4__(v52, 22)) + (v45 & v49 | v52 & (v45 | v49));
      v56 = v161
          + (v47 ^ v54 & (v51 ^ v47))
          + 1925078388
          + v44
          + (__ROR4__(v54, 6) ^ __ROR4__(v54, 11) ^ __ROR4__(v54, 25));
      v168 = v45 + v56;
      v57 = v56 + (__ROR4__(v55, 2) ^ __ROR4__(v55, 13) ^ __ROR4__(v55, 22)) + (v52 & v49 | v55 & (v52 | v49));
      v131 = _byteswap_ulong(v13[11]);
      v58 = v168;
      v59 = v131
          + (v51 ^ v168 & (v54 ^ v51))
          - 2132889090
          + v47
          + (__ROR4__(v168, 6) ^ __ROR4__(v168, 11) ^ __ROR4__(v168, 25));
      v126 = v49 + v59;
      v123 = _byteswap_ulong(v13[12]);
      v60 = v59 + (__ROR4__(v57, 2) ^ __ROR4__(v57, 13) ^ __ROR4__(v57, 22)) + (v55 & v52 | v57 & (v55 | v52));
      v61 = v51 + (__ROR4__(v49 + v59, 11) ^ __ROR4__(v49 + v59, 25) ^ __ROR4__(v49 + v59, 6)) - 1680079193;
      v62 = v49 + v59;
      v63 = v123 + v61 + (v54 ^ (v54 ^ v168) & (v49 + v59));
      v64 = v52 + v63;
      v65 = v63 + (__ROR4__(v60, 2) ^ __ROR4__(v60, 13) ^ __ROR4__(v60, 22)) + (v57 & v55 | v60 & (v57 | v55));
      v66 = _byteswap_ulong(v13[13]);
      v132 = v66;
      v67 = v66
          + v54
          + (__ROR4__(v64, 11) ^ __ROR4__(v64, 25) ^ __ROR4__(v64, 6))
          - 1046744716
          + (v58 ^ v64 & (v126 ^ v58));
      v68 = v55 + v67;
      v69 = v161;
      v152 = v68;
      v156 = v55 + v67;
      v133 = v55 + v67;
      v134 = v62;
      v138 = v60;
      v139 = v55 + v67;
      v140 = v64;
      v70 = (v57 & v60 | v65 & (v57 | v60)) + (__ROR4__(v65, 2) ^ __ROR4__(v65, 13) ^ __ROR4__(v65, 22)) + v67;
      v141 = v126;
      v135 = v70;
      v136 = v70;
      v137 = v70;
      v116 = v70;
      v145 = v70;
      v112 = v70;
      v150 = v70;
      v127 = v70;
      v114 = (_DWORD *)&xmmword_140013E40 + 2;
      v142 = v60;
      v143 = v65;
      v144 = v65;
      v146 = v68;
      v147 = v68;
      v148 = v64;
      v149 = v65;
      v151 = v68;
      do
      {
        v124 += ((v123 >> 10) ^ __ROR4__(v123, 17) ^ __ROR4__(v123, 19))
              + v118
              + ((v128 >> 3) ^ __ROR4__(v128, 7) ^ __ROR4__(v128, 18));
        v71 = v124
            + v58
            + *(v114 - 2)
            + (v134 ^ v133 & (v64 ^ v62))
            + (__ROR4__(v152, 11) ^ __ROR4__(v68, 25) ^ __ROR4__(v156, 6));
        v72 = v71 + v57;
        v73 = (__ROR4__(v135, 13) ^ __ROR4__(v70, 22) ^ __ROR4__(v136, 2)) + v71 + (v65 & v138 | v137 & (v65 | v60));
        v128 += ((v66 >> 10) ^ __ROR4__(v66, 17) ^ __ROR4__(v66, 19))
              + v117
              + ((v129 >> 3) ^ __ROR4__(v129, 7) ^ __ROR4__(v129, 18));
        v74 = v128
            + v141
            + *(v114 - 1)
            + (v140 ^ v72 & (v139 ^ v64))
            + (__ROR4__(v72, 6) ^ __ROR4__(v72, 11) ^ __ROR4__(v72, 25));
        v75 = v74 + v142;
        v76 = v74 + (__ROR4__(v73, 2) ^ __ROR4__(v73, 13) ^ __ROR4__(v73, 22)) + (v145 & v144 | v73 & (v143 | v116));
        v129 += ((v124 >> 10) ^ __ROR4__(v124, 17) ^ __ROR4__(v124, 19))
              + v120
              + ((v130 >> 3) ^ __ROR4__(v130, 7) ^ __ROR4__(v130, 18));
        v77 = v129
            + v148
            + *v114
            + (v147 ^ v75 & (v72 ^ v146))
            + (__ROR4__(v75, 6) ^ __ROR4__(v74 + v142, 11) ^ __ROR4__(v74 + v142, 25));
        v78 = v77 + v149;
        v113 = v77 + (__ROR4__(v76, 2) ^ __ROR4__(v76, 13) ^ __ROR4__(v76, 22)) + (v73 & v150 | v76 & (v73 | v112));
        v130 += ((v122 >> 3) ^ __ROR4__(v122, 7) ^ __ROR4__(v122, 18))
              + v69
              + ((v128 >> 10) ^ __ROR4__(v128, 17) ^ __ROR4__(v128, 19));
        v79 = v130
            + v151
            + v114[1]
            + (v72 ^ v78 & (v75 ^ v72))
            + (__ROR4__(v78, 6) ^ __ROR4__(v77 + v149, 11) ^ __ROR4__(v77 + v149, 25));
        v80 = v79 + v127;
        v81 = v79 + (__ROR4__(v113, 2) ^ __ROR4__(v113, 13) ^ __ROR4__(v113, 22)) + (v76 & v73 | v113 & (v76 | v73));
        v122 += v131
              + ((v129 >> 10) ^ __ROR4__(v129, 17) ^ __ROR4__(v129, 19))
              + ((v119 >> 3) ^ __ROR4__(v119, 7) ^ __ROR4__(v119, 18));
        v82 = v72
            + v114[2]
            + (v75 ^ (v79 + v127) & (v78 ^ v75))
            + (__ROR4__(v79 + v127, 6) ^ __ROR4__(v79 + v127, 11) ^ __ROR4__(v79 + v127, 25))
            + v122;
        v83 = v82 + v73;
        v84 = v82 + (__ROR4__(v81, 2) ^ __ROR4__(v81, 13) ^ __ROR4__(v81, 22)) + (v113 & v76 | v81 & (v113 | v76));
        v119 += ((v130 >> 10) ^ __ROR4__(v130, 17) ^ __ROR4__(v130, 19))
              + v123
              + ((v115 >> 3) ^ __ROR4__(v115, 7) ^ __ROR4__(v115, 18));
        v85 = v75
            + v114[3]
            + (v78 ^ v83 & (v80 ^ v78))
            + (__ROR4__(v83, 6) ^ __ROR4__(v83, 11) ^ __ROR4__(v83, 25))
            + v119;
        v86 = v85 + v76;
        v87 = v85 + (__ROR4__(v84, 2) ^ __ROR4__(v84, 13) ^ __ROR4__(v84, 22)) + (v81 & v113 | v84 & (v81 | v113));
        v115 += ((v121 >> 3) ^ __ROR4__(v121, 7) ^ __ROR4__(v121, 18))
              + v132
              + ((v122 >> 10) ^ __ROR4__(v122, 17) ^ __ROR4__(v122, 19));
        v88 = v78
            + v114[4]
            + (v80 ^ v86 & (v83 ^ v80))
            + (__ROR4__(v85 + v76, 6) ^ __ROR4__(v86, 11) ^ __ROR4__(v86, 25))
            + v115;
        v89 = v88 + v113;
        v90 = v88 + (__ROR4__(v87, 2) ^ __ROR4__(v87, 13) ^ __ROR4__(v87, 22)) + (v84 & v81 | v87 & (v84 | v81));
        v121 += ((v119 >> 10) ^ __ROR4__(v119, 17) ^ __ROR4__(v119, 19))
              + v124
              + ((v125 >> 3) ^ __ROR4__(v125, 7) ^ __ROR4__(v125, 18));
        v91 = v80
            + v114[5]
            + (v83 ^ v89 & (v86 ^ v83))
            + (__ROR4__(v88 + v113, 6) ^ __ROR4__(v89, 11) ^ __ROR4__(v89, 25))
            + v121;
        v92 = v91 + v81;
        v93 = v91 + (__ROR4__(v90, 2) ^ __ROR4__(v90, 13) ^ __ROR4__(v90, 22)) + (v87 & v84 | v90 & (v87 | v84));
        v125 += v128
              + ((v118 >> 3) ^ __ROR4__(v118, 7) ^ __ROR4__(v118, 18))
              + ((v115 >> 10) ^ __ROR4__(v115, 17) ^ __ROR4__(v115, 19));
        v94 = v125
            + v83
            + v114[6]
            + (v86 ^ v92 & (v89 ^ v86))
            + (__ROR4__(v92, 6) ^ __ROR4__(v92, 11) ^ __ROR4__(v92, 25));
        v95 = v94 + v84;
        v96 = v94 + (__ROR4__(v93, 2) ^ __ROR4__(v93, 13) ^ __ROR4__(v93, 22)) + (v90 & v87 | v93 & (v90 | v87));
        v118 += ((v117 >> 3) ^ __ROR4__(v117, 7) ^ __ROR4__(v117, 18))
              + v129
              + ((v121 >> 10) ^ __ROR4__(v121, 17) ^ __ROR4__(v121, 19));
        v97 = v86
            + v114[7]
            + (v89 ^ v95 & (v92 ^ v89))
            + (__ROR4__(v95, 6) ^ __ROR4__(v95, 11) ^ __ROR4__(v95, 25))
            + v118;
        v98 = v97 + v87;
        v99 = v97 + (__ROR4__(v96, 2) ^ __ROR4__(v96, 13) ^ __ROR4__(v96, 22)) + (v93 & v90 | v96 & (v93 | v90));
        v117 += ((v120 >> 3) ^ __ROR4__(v120, 7) ^ __ROR4__(v120, 18))
              + v130
              + ((v125 >> 10) ^ __ROR4__(v125, 17) ^ __ROR4__(v125, 19));
        v100 = v117
             + v89
             + v114[8]
             + (v92 ^ v98 & (v95 ^ v92))
             + (__ROR4__(v98, 6) ^ __ROR4__(v98, 11) ^ __ROR4__(v98, 25));
        v101 = v100 + v90;
        v102 = v100 + (__ROR4__(v99, 2) ^ __ROR4__(v99, 13) ^ __ROR4__(v99, 22)) + (v96 & v93 | v99 & (v96 | v93));
        v120 += ((v69 >> 3) ^ __ROR4__(v69, 7) ^ __ROR4__(v69, 18))
              + v122
              + ((v118 >> 10) ^ __ROR4__(v118, 17) ^ __ROR4__(v118, 19));
        v103 = v92
             + v114[9]
             + (v95 ^ v101 & (v98 ^ v95))
             + (__ROR4__(v101, 6) ^ __ROR4__(v101, 11) ^ __ROR4__(v101, 25))
             + v120;
        v104 = v103 + v93;
        v105 = v103 + (__ROR4__(v102, 2) ^ __ROR4__(v102, 13) ^ __ROR4__(v102, 22)) + (v99 & v96 | v102 & (v99 | v96));
        v69 += v119
             + ((v117 >> 10) ^ __ROR4__(v117, 17) ^ __ROR4__(v117, 19))
             + ((v131 >> 3) ^ __ROR4__(v131, 7) ^ __ROR4__(v131, 18));
        v106 = v69
             + v95
             + v114[10]
             + (v98 ^ v104 & (v101 ^ v98))
             + (__ROR4__(v104, 6) ^ __ROR4__(v104, 11) ^ __ROR4__(v103 + v93, 25));
        v58 = v106 + v96;
        v57 = v106 + (__ROR4__(v105, 2) ^ __ROR4__(v105, 13) ^ __ROR4__(v105, 22)) + (v99 & v102 | v105 & (v99 | v102));
        v131 += v115
              + ((v123 >> 3) ^ __ROR4__(v123, 7) ^ __ROR4__(v123, 18))
              + ((v120 >> 10) ^ __ROR4__(v120, 17) ^ __ROR4__(v120, 19));
        v107 = v131
             + v98
             + v114[11]
             + (v101 ^ v58 & (v101 ^ v104))
             + (__ROR4__(v58, 6) ^ __ROR4__(v58, 11) ^ __ROR4__(v58, 25));
        v62 = v107 + v99;
        v60 = v107 + (__ROR4__(v57, 2) ^ __ROR4__(v57, 13) ^ __ROR4__(v57, 22)) + (v102 & v105 | v57 & (v102 | v105));
        v123 += v121
              + ((v69 >> 10) ^ __ROR4__(v69, 17) ^ __ROR4__(v69, 19))
              + ((v132 >> 3) ^ __ROR4__(v132, 7) ^ __ROR4__(v132, 18));
        v108 = v123
             + v101
             + v114[12]
             + (v104 ^ v62 & (v104 ^ v58))
             + (__ROR4__(v62, 6) ^ __ROR4__(v62, 11) ^ __ROR4__(v107 + v99, 25));
        v64 = v108 + v102;
        v65 = v108 + (__ROR4__(v60, 2) ^ __ROR4__(v60, 13) ^ __ROR4__(v60, 22)) + (v57 & v105 | v60 & (v57 | v105));
        v66 = v125
            + ((v131 >> 10) ^ __ROR4__(v131, 17) ^ __ROR4__(v131, 19))
            + v132
            + ((v124 >> 3) ^ __ROR4__(v124, 7) ^ __ROR4__(v124, 18));
        v132 = v66;
        v109 = v66
             + v104
             + v114[13]
             + (v58 ^ v64 & (v62 ^ v58))
             + (__ROR4__(v64, 6) ^ __ROR4__(v64, 11) ^ __ROR4__(v64, 25));
        v68 = v105 + v109;
        v152 = v68;
        v70 = (v60 & v57 | v65 & (v60 | v57)) + (__ROR4__(v65, 2) ^ __ROR4__(v65, 13) ^ __ROR4__(v65, 22)) + v109;
        v156 = v68;
        v133 = v68;
        v114 += 16;
        v134 = v62;
        v135 = v70;
        v136 = v70;
        v137 = v70;
        v138 = v60;
        v139 = v68;
        v140 = v64;
        v141 = v62;
        v142 = v60;
        v143 = v65;
        v116 = v70;
        v144 = v65;
        v145 = v70;
        v146 = v68;
        v147 = v68;
        v148 = v64;
        v149 = v65;
        v112 = v70;
        v150 = v70;
        v151 = v68;
        v127 = v70;
      }
      while ( (__int64)v114 < (__int64)((_DWORD *)&_xmm + 2) );
      v8 = v162 + v57;
      v10 = v158 + v64;
      v6 = v65 + v154;
      v9 = v68 + v157;
      v7 = v60 + v155;
      v11 = v62 + v159;
      v154 = v6;
      v13 = (unsigned int *)(v163 + 64);
      v110 = v164-- == 1;
      v153 += v70;
      v4 = v153;
      a1[1] = v6;
      v155 = v7;
      a1[2] = v7;
      v162 = v8;
      a1[3] = v8;
      v157 = v9;
      a1[4] = v9;
      v158 = v10;
      a1[5] = v10;
      v159 = v11;
      a1[6] = v11;
      v160 += v58;
      v12 = v160;
      a1[7] = v160;
      *a1 = v153;
      v163 += 64LL;
    }
    while ( !v110 );
    a3 = v166;
    a4 = v167;
  }
  *a4 = a3;
  return 0LL;
}
