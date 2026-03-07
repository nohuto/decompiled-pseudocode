__int64 __fastcall sub_140B15070(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // r13
  int v6; // esi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // di
  int v9; // r12d
  unsigned int *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // xmm1_8
  int v13; // ecx
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // r8d
  unsigned int v19; // r15d
  unsigned int v20; // eax
  int v21; // edx
  _BYTE *v22; // r14
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r8
  int v26; // ecx
  unsigned __int64 v27; // rdx
  int v28; // ebx
  int v29; // ecx
  _BYTE *v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 i; // rax
  _QWORD *v35; // rdx
  __int64 v36; // r8
  char *v37; // rcx
  char v38; // al
  unsigned __int64 v39; // rbx
  _QWORD *v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // r10d
  _DWORD *v43; // rsi
  bool v44; // zf
  int v45; // eax
  __int16 v46; // ax
  char *v47; // r8
  __int64 *v48; // r11
  signed __int64 v49; // r9
  char *v50; // rbx
  char *v51; // r15
  int v52; // r12d
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // r8d
  __int64 *v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // r9d
  signed __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rax
  int v65; // r9d
  signed __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rax
  unsigned int v69; // ecx
  BOOL v70; // r12d
  unsigned int v71; // r15d
  BOOL v72; // r13d
  int v73; // ecx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  _BYTE *v76; // rcx
  unsigned int v77; // r11d
  __int64 v78; // r8
  ULONG_PTR v79; // rax
  _DWORD *v80; // rsi
  int v81; // r10d
  char *v82; // rbx
  int v83; // eax
  __int16 v84; // ax
  char *v85; // r8
  __int64 *v86; // r11
  signed __int64 v87; // r9
  char *v88; // r15
  int v89; // r12d
  char *v90; // r13
  __int64 v91; // rdx
  __int64 v92; // rax
  unsigned int v93; // r8d
  __int64 *v94; // r9
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  int v99; // r9d
  signed __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rax
  int v103; // r8d
  signed __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rax
  unsigned int v107; // ecx
  int v108; // eax
  unsigned __int64 *v109; // rax
  int v110; // edx
  __int64 *v111; // rcx
  unsigned __int64 v112; // r9
  _BYTE *v113; // rax
  _BYTE *v114; // rdx
  __int64 v115; // rsi
  _BYTE *v116; // rax
  unsigned int v117; // eax
  unsigned int v118; // r13d
  __int64 v119; // rsi
  __int64 v120; // rbx
  unsigned int v121; // r15d
  _QWORD *v122; // r12
  ULONG_PTR v123; // rsi
  char *v124; // r11
  char *v125; // r10
  unsigned __int64 v126; // rax
  int v127; // r9d
  const char *j; // rax
  unsigned __int64 v129; // r14
  unsigned __int64 v130; // r8
  __int64 v131; // rax
  __int64 v132; // r8
  unsigned __int128 v133; // rax
  unsigned __int64 v134; // rax
  unsigned __int64 v135; // rdx
  _BYTE *v136; // r12
  _DWORD *v137; // r15
  _DWORD *v138; // r9
  _QWORD *v139; // r10
  char *v140; // r11
  int v141; // r8d
  char *v142; // rcx
  _QWORD *v143; // rdx
  __int64 v144; // r12
  char v145; // al
  int v146; // ecx
  _BYTE *v147; // r12
  unsigned int v148; // r12d
  unsigned int v149; // r15d
  __int64 v150; // r13
  unsigned __int64 v151; // rax
  unsigned __int128 v152; // rax
  unsigned __int64 v153; // rcx
  int v154; // ecx
  int v155; // ecx
  unsigned int v156; // r9d
  int v157; // ecx
  int v158; // ecx
  int v159; // ecx
  unsigned __int64 v160; // rax
  __int64 v161; // rcx
  unsigned int v162; // r8d
  __int64 v163; // rax
  _BYTE *v164; // rbx
  _BYTE *v165; // rax
  __int64 k; // rcx
  _BYTE *v167; // rax
  __int64 v168; // r15
  bool v169; // cf
  __int64 v170; // r13
  int v171; // r12d
  unsigned int v172; // eax
  __int64 v173; // rsi
  int v175; // ecx
  unsigned int v176; // eax
  __int64 v177; // r8
  int v178; // ecx
  unsigned __int64 v179; // rdx
  int v180; // r14d
  __int64 v181; // r14
  int v182; // ecx
  _QWORD *v183; // rax
  __int64 v184; // rdx
  _QWORD *v185; // r9
  int v186; // r10d
  const char *v187; // rax
  unsigned __int64 v188; // r8
  unsigned int v189; // r11d
  __int64 v190; // rax
  __int64 v191; // r8
  unsigned __int128 v192; // rax
  unsigned int v193; // edx
  unsigned __int64 v194; // rax
  __int64 v195; // rax
  unsigned __int64 m; // rax
  unsigned int v197; // [rsp+38h] [rbp-D0h]
  unsigned int v198; // [rsp+38h] [rbp-D0h]
  int v199; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v200; // [rsp+40h] [rbp-C8h]
  int v201; // [rsp+40h] [rbp-C8h]
  _BYTE *v202; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v203; // [rsp+48h] [rbp-C0h]
  __int64 v204; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v205; // [rsp+58h] [rbp-B0h]
  __int64 v206; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v207; // [rsp+68h] [rbp-A0h]
  __int64 v208; // [rsp+70h] [rbp-98h]
  unsigned __int64 v209; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v210; // [rsp+80h] [rbp-88h]
  _BYTE *v211; // [rsp+88h] [rbp-80h]
  __int64 v212; // [rsp+90h] [rbp-78h]
  int v213; // [rsp+98h] [rbp-70h]
  int v214; // [rsp+9Ch] [rbp-6Ch]
  int v215; // [rsp+A0h] [rbp-68h]
  int v216; // [rsp+A4h] [rbp-64h]
  int v217; // [rsp+A8h] [rbp-60h]
  int v218; // [rsp+ACh] [rbp-5Ch]
  int v219; // [rsp+B0h] [rbp-58h]
  int v220; // [rsp+B4h] [rbp-54h]
  int v221; // [rsp+B8h] [rbp-50h]
  int v222; // [rsp+BCh] [rbp-4Ch]
  __int128 v223; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v224; // [rsp+D0h] [rbp-38h]
  __int64 v225; // [rsp+D8h] [rbp-30h]
  _BYTE *v226; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v227[24]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v228; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v229[88]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v230; // [rsp+168h] [rbp+60h]
  __int64 v231; // [rsp+170h] [rbp+68h]
  __int64 v232; // [rsp+178h] [rbp+70h]
  _BYTE v233[104]; // [rsp+180h] [rbp+78h] BYREF
  ULONG_PTR v235; // [rsp+200h] [rbp+F8h]
  int v237; // [rsp+208h] [rbp+100h]
  unsigned __int16 v238; // [rsp+210h] [rbp+108h]
  int v239; // [rsp+210h] [rbp+108h]

  v235 = a2;
  v3 = *(_BYTE **)a1;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 504LL))(a2);
  if ( !v5 )
    return 3221225595LL;
  LODWORD(v206) = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 85))(a2);
  v238 = *(_WORD *)(v5 + 6);
  if ( !v238 || *(_DWORD *)(v5 + 56) < 0x1000u || (a2 & 0xFFF) != 0 )
  {
    if ( (*((_DWORD *)v3 + 612) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, a2, 4uLL, 0LL);
    if ( !*((_DWORD *)v3 + 574) )
    {
      *((_QWORD *)v3 + 289) = 0LL;
      *((_QWORD *)v3 + 290) = 271LL;
      *((_QWORD *)v3 + 288) = v3 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v3 + 291) = a2;
      *((_DWORD *)v3 + 574) = 1;
      __ba((__int64)v3, 0LL);
    }
    return 3221225595LL;
  }
  v6 = -1073741275;
  v7 = *((_QWORD *)v3 + 167);
  LODWORD(v210) = *(_DWORD *)(v5 + 84);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*((void (__fastcall **)(__int64))v3 + 42))(v7);
  v9 = 24;
  v10 = (unsigned int *)**((_QWORD **)v3 + 195);
  v11 = (unsigned __int64)(v10 + 4);
  while ( *(_QWORD *)(v11 + 8) != a2 )
  {
    v11 += 24LL;
    if ( v11 >= (unsigned __int64)&v10[6 * *v10 + 4] )
      goto LABEL_10;
  }
  v6 = 0;
  v12 = *(_QWORD *)(v11 + 16);
  v223 = *(_OWORD *)v11;
  v224 = v12;
LABEL_10:
  (*((void (__fastcall **)(_QWORD))v3 + 50))(*((_QWORD *)v3 + 167));
  __writecr8(CurrentIrql);
  if ( v6 >= 0 )
  {
    v16 = (unsigned int)v224;
  }
  else
  {
    v13 = 24;
    v14 = &v223;
    v15 = 3LL;
    do
    {
      *(_QWORD *)v14 = 0LL;
      v13 -= 8;
      v14 = (__int128 *)((char *)v14 + 8);
      --v15;
    }
    while ( v15 );
    for ( ; v13; --v13 )
    {
      *(_BYTE *)v14 = 0;
      v14 = (__int128 *)((char *)v14 + 1);
    }
    v16 = *(unsigned int *)(v5 + 80);
    LODWORD(v224) = *(_DWORD *)(v5 + 80);
    *((_QWORD *)&v223 + 1) = a2;
    *(_QWORD *)&v223 = 1LL;
  }
  v17 = *((unsigned int *)v3 + 505);
  v18 = *((_DWORD *)v3 + 585);
  v205 = ((a2 & 0xFFF) + 4095 + v16) >> 12;
  v19 = 20 * v205;
  v20 = 20 * v205 + v17 + 48;
  v21 = ((_DWORD)v206 != 0) + 33;
  v199 = v21;
  if ( v20 <= *((_DWORD *)v3 + 647) )
  {
    v22 = v3;
    v212 = (__int64)v3;
    *((_DWORD *)v3 + 505) = v20;
  }
  else
  {
    v212 = sub_140B0E020(v3, v20, v18);
    v22 = (_BYTE *)v212;
    if ( !v212 )
      return 3221225626LL;
    v23 = *((_DWORD *)v3 + 612);
    if ( (v23 & 4) == 0 )
    {
      v24 = *((_DWORD *)v3 + 505);
      v25 = *((_QWORD *)v3 + 249);
      v26 = (v23 & 0x20000000) != 0 ? *((_DWORD *)v3 + 585) : 0;
      if ( v24 >= 8 )
      {
        v27 = (unsigned __int64)v24 >> 3;
        do
        {
          *(_QWORD *)v3 = 0LL;
          v24 -= 8;
          v3 += 8;
          --v27;
        }
        while ( v27 );
      }
      for ( ; v24; --v24 )
        *v3++ = 0;
      v28 = *((_DWORD *)v22 + 585);
      *((_DWORD *)v22 + 585) = v26;
      if ( v26 == 3 )
      {
        (*((void (__fastcall **)(__int64))v22 + 109))(v25);
      }
      else if ( (*((_DWORD *)v22 + 612) & 0x10000000) != 0 || !v26 )
      {
        (*((void (__fastcall **)(__int64))v22 + 31))(v25);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v22 + 69))(v25 - 8, *(_QWORD *)(v25 - 8));
      }
      *((_DWORD *)v22 + 585) = v28;
    }
    *((_DWORD *)v22 + 612) &= ~4u;
    v21 = v199;
  }
  ++*((_DWORD *)v22 + 515);
  v29 = 48;
  v30 = &v22[v17];
  v31 = v30;
  v32 = 6LL;
  do
  {
    *v31 = 0LL;
    v29 -= 8;
    ++v31;
    --v32;
  }
  while ( v32 );
  for ( ; v29; --v29 )
  {
    *(_BYTE *)v31 = 0;
    v31 = (_QWORD *)((char *)v31 + 1);
  }
  *(_DWORD *)v30 = v21;
  *((_QWORD *)v30 + 1) = 0LL;
  *((_DWORD *)v30 + 4) = 0;
  v33 = *((_QWORD *)v22 + 259);
  for ( i = v33; ; LODWORD(v33) = i ^ v33 )
  {
    i >>= 31;
    if ( !i )
      break;
  }
  v35 = v30 + 24;
  v36 = 3LL;
  *((_DWORD *)v30 + 5) = v33 & 0x7FFFFFFF;
  v37 = (char *)&v223;
  *(_QWORD *)a1 = v22;
  do
  {
    v9 -= 8;
    *v35 = *(_QWORD *)v37;
    v37 += 8;
    ++v35;
    --v36;
  }
  while ( v36 );
  for ( ; v9; --v9 )
  {
    v38 = *v37++;
    *(_BYTE *)v35 = v38;
    v35 = (_QWORD *)((char *)v35 + 1);
  }
  LOBYTE(v35) = 1;
  v39 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, __int64 *))v22 + 62))(v235, v35, 12LL, &v204);
  v209 = v39;
  LODWORD(v204) = v39 != 0 ? v204 : 0;
  v237 = a3 & 1;
  if ( !v237 )
  {
    v39 = 0LL;
    LODWORD(v204) = 0;
    v209 = 0LL;
  }
  v211 = v30 + 48;
  v202 = v30 + 48;
  v208 = (__int64)&v30[20 * (unsigned int)v205 + 48];
  v40 = v30 + 48;
  if ( v19 >= 8 )
  {
    v41 = (unsigned __int64)v19 >> 3;
    do
    {
      *v40 = -1LL;
      v19 -= 8;
      ++v40;
      --v41;
    }
    while ( v41 );
  }
  for ( ; v19; --v19 )
  {
    *(_BYTE *)v40 = -1;
    v40 = (_QWORD *)((char *)v40 + 1);
  }
  v42 = 0;
  v43 = (_DWORD *)(v5 + *(unsigned __int16 *)(v5 + 20) + 24LL);
  v44 = (v43[9] & 0x2000000) == 0;
  v205 = (unsigned __int64)&v43[10 * v238];
  if ( !v44 )
    goto LABEL_55;
  v45 = *v43;
  if ( *v43 == 1414090313 )
  {
    if ( v43[1] == 1195525195 )
    {
LABEL_55:
      v42 = 1;
      goto LABEL_56;
    }
  }
  else if ( v45 == 1162297680 )
  {
    v46 = *((_WORD *)v43 + 2);
    if ( v46 == 30839 || v46 == 29303 || v46 == 30583 )
      goto LABEL_55;
    goto LABEL_65;
  }
  if ( v45 == 1095914053 && *((_WORD *)v43 + 2) == 16724 )
    goto LABEL_55;
LABEL_65:
  v47 = (char *)*((_QWORD *)v22 + 294);
  v48 = (__int64 *)*((_QWORD *)v22 + 295);
  v49 = (char *)v43 - v47;
  v50 = (char *)*((_QWORD *)v22 + 296);
  v51 = (char *)*((_QWORD *)v22 + 297);
  v52 = 7;
  while ( 1 )
  {
    v53 = (unsigned __int8)v47[v49];
    v54 = (unsigned __int8)*v47++;
    if ( v53 != v54 )
      break;
    if ( !--v52 )
    {
LABEL_83:
      v39 = v209;
      goto LABEL_55;
    }
  }
  v55 = 8;
  v56 = (__int64 *)v43;
  while ( 1 )
  {
    v57 = *v56++;
    v58 = *v48++;
    if ( v57 != v58 )
      break;
    v55 -= 8;
    if ( v55 < 8 )
    {
      if ( !v55 )
        goto LABEL_83;
      while ( 1 )
      {
        v59 = *(unsigned __int8 *)v56;
        v56 = (__int64 *)((char *)v56 + 1);
        v60 = *(unsigned __int8 *)v48;
        v48 = (__int64 *)((char *)v48 + 1);
        if ( v59 != v60 )
          goto LABEL_76;
        if ( !--v55 )
          goto LABEL_83;
      }
    }
  }
LABEL_76:
  v61 = 4;
  v62 = (char *)v43 - v50;
  while ( 1 )
  {
    v63 = (unsigned __int8)v50[v62];
    v64 = (unsigned __int8)*v50++;
    if ( v63 != v64 )
      break;
    if ( !--v61 )
      goto LABEL_83;
  }
  v65 = 6;
  v66 = (char *)v43 - v51;
  while ( 1 )
  {
    v67 = (unsigned __int8)v51[v66];
    v68 = (unsigned __int8)*v51++;
    if ( v67 != v68 )
      break;
    if ( !--v65 )
      goto LABEL_83;
  }
  v39 = v209;
LABEL_56:
  if ( (int)v43[9] < 0 )
  {
    v42 = 1;
LABEL_86:
    if ( *v43 == 1414090313 && v43[1] == 1195525195 && (*((_DWORD *)v22 + 613) & 0x2000) != 0 )
      v42 = 0;
    goto LABEL_90;
  }
  if ( v42 )
    goto LABEL_86;
LABEL_90:
  v69 = v43[4];
  v70 = v42 == 0;
  v197 = v43[3];
  if ( v69 <= v43[2] )
    v69 = v43[2];
  v71 = (v69 + v43[3] + 4095) & 0xFFFFF000;
  v72 = MmImageSectionPagable((__int64)v43) != 0;
  if ( (*((_DWORD *)v22 + 612) & 0x200000) != 0 )
  {
    v73 = 120;
    v239 = 0;
    v74 = &v226;
    v75 = 15LL;
    do
    {
      *v74 = 0LL;
      v73 -= 8;
      ++v74;
      --v75;
    }
    while ( v75 );
    for ( ; v73; --v73 )
    {
      *(_BYTE *)v74 = 0;
      v74 = (_QWORD *)((char *)v74 + 1);
    }
  }
  else
  {
    v239 = 128;
    v226 = v22;
    v228 = 0LL;
    KeInitializeGate((__int64)v227, 0);
  }
  v76 = v202;
  v77 = 0;
  v78 = v208;
  v79 = v235;
  v200 = v235;
  LODWORD(v207) = 0;
  if ( v202 != (_BYTE *)v208 )
  {
    v80 = v43 + 1;
    while ( v77 < v197 )
    {
      if ( v77 < (unsigned int)v210 )
      {
LABEL_147:
        v109 = &v209;
        v110 = 0;
        v111 = &v204;
        do
        {
          v112 = *v109;
          if ( *(_DWORD *)v111 && v200 >= v112 && v200 <= v112 + *(unsigned int *)v111 - 1LL )
          {
            v76 = v202;
            v79 = v200;
            v78 = v208;
            goto LABEL_159;
          }
          ++v110;
          v111 = (__int64 *)((char *)v111 + 4);
          ++v109;
        }
        while ( !v110 );
        if ( v77 >= v197 && v72 )
        {
          v113 = v202;
        }
        else
        {
          v113 = v202;
          *((_DWORD *)v202 + 4) &= ~0x80000000;
        }
        v113[15] &= ~0x80u;
        v79 = v200;
        v76 = v202;
        v78 = v208;
      }
LABEL_159:
      v77 += 4096;
      v79 += 4096LL;
      v76 += 20;
      LODWORD(v207) = v77;
      v200 = v79;
      v202 = v76;
      if ( v76 == (_BYTE *)v78 )
      {
        v114 = v211;
        do
        {
          LODWORD(v115) = 0;
          v116 = v114;
          do
          {
            if ( (char)v116[15] < 0 )
              break;
            v115 = (unsigned int)(v115 + 1);
            v116 = &v114[20 * v115];
          }
          while ( v116 != (_BYTE *)v78 );
          v201 = v115;
          if ( (_DWORD)v115 )
          {
            v117 = v239;
            if ( v239 )
            {
              v148 = 0;
              do
              {
                v149 = v115 - v148;
                if ( (unsigned int)v115 - v148 > v117 )
                  v149 = v117;
                v150 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v22 + 30))(
                         64LL,
                         *((_QWORD *)v22 + 338),
                         *((unsigned int *)v22 + 516),
                         0LL);
                v151 = __rdtsc();
                v152 = (__ROR8__(v151, 3) ^ v151) * (unsigned __int128)0x7010008004002001uLL;
                v231 = *((_QWORD *)&v152 + 1);
                v153 = ((unsigned __int64)v152 ^ *((_QWORD *)&v152 + 1)) % 0xB;
                if ( (unsigned int)v153 > 5 )
                {
                  v157 = v153 - 6;
                  if ( v157 )
                  {
                    v158 = v157 - 1;
                    if ( v158 )
                    {
                      v159 = v158 - 1;
                      if ( v159 )
                      {
                        if ( v159 == 1 )
                        {
                          v219 = -1333354875;
                          v156 = __ROR4__(-1333354868, 33);
                        }
                        else
                        {
                          v160 = __rdtsc();
                          v161 = __ROR8__(v160, 3);
                          v232 = ((v161 ^ v160) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v162 = v232 ^ (67117057 * (v161 ^ v160));
                          v156 = ((((((v162 % 0x1A + 97) << 8) | ((v162 >> 5)
                                                                - 26
                                                                * ((unsigned int)((1321528399
                                                                                 * (unsigned __int64)(v162 >> 5)) >> 32) >> 3)
                                                                + 65)) << 8) | ((v162 >> 10) % 0x1A + 97)) << 8) | ((v162 >> 15) % 0x1A + 65);
                        }
                      }
                      else
                      {
                        v220 = 1684422978;
                        v156 = __ROR4__(1684422978, 8);
                      }
                    }
                    else
                    {
                      v221 = -2100910376;
                      v156 = __ROL4__(-2100910376, 7);
                    }
                  }
                  else
                  {
                    v222 = 1314342514;
                    v156 = __ROR4__(1314342516, 24);
                  }
                }
                else if ( (_DWORD)v153 == 5 )
                {
                  v218 = 680282605;
                  v156 = __ROR4__(680282605, 5);
                }
                else if ( (_DWORD)v153 )
                {
                  v154 = v153 - 1;
                  if ( v154 )
                  {
                    v155 = v154 - 1;
                    if ( v155 )
                    {
                      if ( v155 == 1 )
                      {
                        v214 = -1474152136;
                        v156 = __ROR4__(-1474152133, 15);
                      }
                      else
                      {
                        v213 = 1728537748;
                        v156 = __ROL4__(1728537748, 4);
                      }
                    }
                    else
                    {
                      v215 = -2051698419;
                      v156 = __ROR4__(-2051698419, 2);
                    }
                  }
                  else
                  {
                    v216 = -1297272415;
                    v156 = __ROL4__(-1297272415, 1);
                  }
                }
                else
                {
                  v217 = -795291432;
                  v156 = __ROR4__(-795291432, 6);
                }
                v163 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD))v22 + 30))(64LL, 80LL, v156);
                v164 = v229;
                if ( v163 )
                  v164 = (_BYTE *)v163;
                *(_QWORD *)v164 = &v226;
                *((_QWORD *)v164 + 2) = v235 + (v148 << 12);
                *((_QWORD *)v164 + 1) = v150;
                *((_DWORD *)v164 + 8) = v149;
                *((_DWORD *)v164 + 10) = 1;
                v165 = v211;
                *((_QWORD *)v164 + 9) = v164;
                *((_QWORD *)v164 + 6) = 0LL;
                *((_QWORD *)v164 + 3) = &v165[20 * v148];
                *((_QWORD *)v164 + 8) = sub_140B16300;
                if ( _InterlockedIncrement((volatile signed __int32 *)&v228) == 1 && HIDWORD(v228) )
                  KeWaitForGate((__int64)v227, 0LL, 0);
                HIDWORD(v228) = 1;
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(v164 + 48), CriticalWorkQueue);
                if ( v164 == v229 && HIDWORD(v228) )
                {
                  do
                    KeWaitForGate((__int64)v227, 0LL, 0);
                  while ( (_DWORD)v228 );
                  v228 = 0LL;
                  v22 = (_BYTE *)v212;
                }
                if ( !v150 && HIDWORD(v228) )
                {
                  do
                    KeWaitForGate((__int64)v227, 0LL, 0);
                  while ( (_DWORD)v228 );
                  v228 = 0LL;
                  v22 = (_BYTE *)v212;
                }
                v117 = v239;
                v148 += v239;
              }
              while ( v148 < (unsigned int)v115 );
            }
            else
            {
              v118 = v115;
              v198 = v115;
              v119 = *((_QWORD *)v22 + 337);
              v225 = v119;
              v210 = v114;
              v203 = v235;
              do
              {
                v120 = 8LL;
                v121 = 0;
                if ( v118 < 8 )
                  v120 = v118;
                v122 = (_QWORD *)v119;
                v123 = v203;
                v205 = (unsigned __int64)v233;
                do
                {
                  v122[1] = 4096LL;
                  v124 = (char *)(v123 + (v121 << 12));
                  *v122 = v124;
                  v125 = v124;
                  v126 = *((_QWORD *)v22 + 259);
                  *((_DWORD *)v22 + 522) += 4096;
                  v127 = *((_DWORD *)v22 + 517);
                  v207 = v126;
                  for ( j = v124; j < v124 + 4096; j += 64 )
                    _mm_prefetch(j, 0);
                  v129 = v207;
                  v130 = v207;
                  LODWORD(v207) = 32;
                  do
                  {
                    v131 = 8LL;
                    do
                    {
                      v132 = *((_QWORD *)v125 + 1) ^ __ROL8__(*(_QWORD *)v125 ^ v130, v127);
                      v125 += 16;
                      v130 = __ROL8__(v132, v127);
                      --v131;
                    }
                    while ( v131 );
                    v133 = (__ROL8__(v129 ^ (v125 - v124), 17) ^ v129 ^ (v125 - v124))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v230 = *((_QWORD *)&v133 + 1);
                    v127 = (BYTE8(v133) ^ (unsigned __int8)(v133 ^ v127)) & 0x3F;
                    if ( !v127 )
                      LOBYTE(v127) = 1;
                    LODWORD(v207) = v207 - 1;
                  }
                  while ( (_DWORD)v207 );
                  v22 = (_BYTE *)v212;
                  v134 = v130;
                  v123 = v203;
                  while ( 1 )
                  {
                    v134 >>= 31;
                    if ( !v134 )
                      break;
                    LODWORD(v130) = v134 ^ v130;
                  }
                  v135 = v205;
                  ++v121;
                  v122 += 6;
                  *(_DWORD *)v205 = v130 & 0x7FFFFFFF;
                  v205 = v135 + 4;
                }
                while ( v121 < (unsigned int)v120 );
                v136 = v210;
                v119 = v225;
                sub_1403EC068((__int64)v22, v225, v120);
                v137 = v233;
                v205 = (unsigned int)v120;
                v138 = v136 + 16;
                v139 = v136;
                v140 = (char *)(v119 + 16);
                do
                {
                  v141 = 16;
                  v142 = v140;
                  v143 = v139;
                  v144 = 2LL;
                  do
                  {
                    v141 -= 8;
                    *v143 = *(_QWORD *)v142;
                    v142 += 8;
                    ++v143;
                    --v144;
                  }
                  while ( v144 );
                  for ( ; v141; --v141 )
                  {
                    v145 = *v142++;
                    *(_BYTE *)v143 = v145;
                    v143 = (_QWORD *)((char *)v143 + 1);
                  }
                  v140 += 48;
                  v139 = (_QWORD *)((char *)v139 + 20);
                  v146 = (*v138 ^ *v137++) & 0x7FFFFFFF;
                  *v138 ^= v146;
                  v138 += 5;
                  --v205;
                }
                while ( v205 );
                v147 = v210;
                v118 = v198 - v120;
                v203 += (unsigned int)((_DWORD)v120 << 12);
                *((_DWORD *)v22 + 522) += (_DWORD)v120 << 15;
                v210 = &v147[20 * v120];
                v198 = v118;
              }
              while ( v118 );
              LODWORD(v115) = v201;
            }
            v78 = v208;
            v114 = v211;
          }
          for ( k = 5LL * (unsigned int)v115; ; k = 5 * v115 )
          {
            v167 = &v114[4 * k];
            if ( v167 == (_BYTE *)v78 || (char)v167[15] >= 0 )
              break;
            v115 = (unsigned int)(v115 + 1);
          }
          v235 += (unsigned int)((_DWORD)v115 << 12);
          v114 += 20 * (unsigned int)v115;
          v211 = v114;
        }
        while ( v114 != (_BYTE *)v78 );
        v39 = v209;
        goto LABEL_235;
      }
    }
    if ( v77 < v71 )
    {
LABEL_144:
      if ( v70 )
        goto LABEL_147;
      goto LABEL_159;
    }
    if ( v80 + 9 == (_DWORD *)v205 || v77 < v80[12] )
    {
      v79 = v200;
      goto LABEL_159;
    }
    v80 += 10;
    v81 = 0;
    if ( (v80[8] & 0x2000000) != 0 )
      goto LABEL_107;
    v82 = (char *)(v80 - 1);
    v83 = *(v80 - 1);
    if ( v83 == 1414090313 )
    {
      if ( *v80 == 1195525195 )
      {
LABEL_107:
        v81 = 1;
        goto LABEL_134;
      }
    }
    else if ( v83 == 1162297680 )
    {
      v84 = *(_WORD *)v80;
      if ( *(_WORD *)v80 == 30839 || v84 == 29303 || v84 == 30583 )
        goto LABEL_107;
      goto LABEL_115;
    }
    if ( v83 == 1095914053 && *(_WORD *)v80 == 16724 )
      goto LABEL_107;
LABEL_115:
    v85 = (char *)*((_QWORD *)v22 + 294);
    v86 = (__int64 *)*((_QWORD *)v22 + 295);
    v87 = v82 - v85;
    v88 = (char *)*((_QWORD *)v22 + 296);
    v89 = 7;
    v90 = (char *)*((_QWORD *)v22 + 297);
    while ( 1 )
    {
      v91 = (unsigned __int8)v85[v87];
      v92 = (unsigned __int8)*v85++;
      if ( v91 != v92 )
        break;
      if ( !--v89 )
      {
LABEL_133:
        v81 = 1;
        goto LABEL_134;
      }
    }
    v93 = 8;
    v94 = (__int64 *)(v80 - 1);
    while ( 1 )
    {
      v95 = *v94++;
      v96 = *v86++;
      if ( v95 != v96 )
        break;
      v93 -= 8;
      if ( v93 < 8 )
      {
        if ( !v93 )
          goto LABEL_133;
        while ( 1 )
        {
          v97 = *(unsigned __int8 *)v94;
          v94 = (__int64 *)((char *)v94 + 1);
          v98 = *(unsigned __int8 *)v86;
          v86 = (__int64 *)((char *)v86 + 1);
          if ( v97 != v98 )
            goto LABEL_126;
          if ( !--v93 )
            goto LABEL_133;
        }
      }
    }
LABEL_126:
    v99 = 4;
    v100 = v82 - v88;
    while ( 1 )
    {
      v101 = (unsigned __int8)v88[v100];
      v102 = (unsigned __int8)*v88++;
      if ( v101 != v102 )
        break;
      if ( !--v99 )
        goto LABEL_133;
    }
    v103 = 6;
    v104 = v82 - v90;
    while ( 1 )
    {
      v105 = (unsigned __int8)v90[v104];
      v106 = (unsigned __int8)*v90++;
      if ( v105 != v106 )
        break;
      if ( !--v103 )
        goto LABEL_133;
    }
LABEL_134:
    if ( (int)v80[8] >= 0 )
    {
      if ( !v81 )
      {
LABEL_141:
        v107 = v80[3];
        v70 = v81 == 0;
        if ( v107 <= v80[1] )
          v107 = v80[1];
        v71 = (v107 + 4095 + v80[2]) & 0xFFFFF000;
        v108 = MmImageSectionPagable((__int64)(v80 - 1));
        v77 = v207;
        v76 = v202;
        v44 = v108 == 0;
        v79 = v200;
        v78 = v208;
        v72 = !v44;
        goto LABEL_144;
      }
    }
    else
    {
      v81 = 1;
    }
    if ( *(v80 - 1) == 1414090313 && *v80 == 1195525195 && (*((_DWORD *)v22 + 613) & 0x2000) != 0 )
      v81 = 0;
    goto LABEL_141;
  }
LABEL_235:
  if ( v239 && HIDWORD(v228) )
  {
    do
      KeWaitForGate((__int64)v227, 0LL, 0);
    while ( (_DWORD)v228 );
    v228 = 0LL;
    v39 = v209;
  }
  if ( v237 )
  {
    v168 = (unsigned int)v204;
    if ( (_DWORD)v204 )
    {
      v169 = (_DWORD)v206 != 0;
      LODWORD(v206) = -(int)v206;
      v170 = *((unsigned int *)v22 + 505);
      v171 = v169 + 13;
      v172 = v170 + 48;
      if ( (unsigned int)(v170 + 48) <= *((_DWORD *)v22 + 647) )
      {
        v173 = (__int64)v22;
        *((_DWORD *)v22 + 505) = v172;
      }
      else
      {
        v173 = sub_140B0E020(v22, v172, *((_DWORD *)v22 + 585));
        if ( !v173 )
          return 3221225626LL;
        v175 = *((_DWORD *)v22 + 612);
        if ( (v175 & 4) == 0 )
        {
          v176 = *((_DWORD *)v22 + 505);
          v177 = *((_QWORD *)v22 + 249);
          v178 = (v175 & 0x20000000) != 0 ? *((_DWORD *)v22 + 585) : 0;
          if ( v176 >= 8 )
          {
            v179 = (unsigned __int64)v176 >> 3;
            do
            {
              *(_QWORD *)v22 = 0LL;
              v176 -= 8;
              v22 += 8;
              --v179;
            }
            while ( v179 );
          }
          for ( ; v176; --v176 )
            *v22++ = 0;
          v180 = *(_DWORD *)(v173 + 2340);
          *(_DWORD *)(v173 + 2340) = v178;
          if ( v178 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v173 + 872))(v177);
          }
          else if ( (*(_DWORD *)(v173 + 2448) & 0x10000000) != 0 || !v178 )
          {
            (*(void (__fastcall **)(__int64))(v173 + 248))(v177);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v173 + 552))(v177 - 8, *(_QWORD *)(v177 - 8));
          }
          *(_DWORD *)(v173 + 2340) = v180;
        }
        *(_DWORD *)(v173 + 2448) &= ~4u;
      }
      ++*(_DWORD *)(v173 + 2060);
      v181 = v173 + v170;
      v182 = 48;
      v183 = (_QWORD *)(v173 + v170);
      v184 = 6LL;
      do
      {
        *v183 = 0LL;
        v182 -= 8;
        ++v183;
        --v184;
      }
      while ( v184 );
      for ( ; v182; --v182 )
      {
        *(_BYTE *)v183 = 0;
        v183 = (_QWORD *)((char *)v183 + 1);
      }
      *(_DWORD *)v181 = v171;
      *(_QWORD *)(v181 + 8) = v39;
      v185 = (_QWORD *)v39;
      *(_DWORD *)(v181 + 16) = v168;
      *(_DWORD *)(v173 + 2088) += v168;
      v186 = *(_DWORD *)(v173 + 2068);
      if ( v39 < v39 + v168 )
      {
        v187 = (const char *)v39;
        do
        {
          _mm_prefetch(v187, 0);
          v187 += 64;
        }
        while ( (unsigned __int64)v187 < v39 + v168 );
      }
      v188 = *(_QWORD *)(v173 + 2072);
      v189 = (unsigned int)v168 >> 7;
      if ( (unsigned int)v168 >> 7 )
      {
        do
        {
          v190 = 8LL;
          do
          {
            v191 = v185[1] ^ __ROL8__(*v185 ^ v188, v186);
            v185 += 2;
            v188 = __ROL8__(v191, v186);
            --v190;
          }
          while ( v190 );
          v192 = (__ROL8__(*(_QWORD *)(v173 + 2072) ^ ((unsigned __int64)v185 - v39), 17) ^ *(_QWORD *)(v173 + 2072) ^ ((unsigned __int64)v185 - v39))
               * (unsigned __int128)0x7010008004002001uLL;
          v186 = (BYTE8(v192) ^ (unsigned __int8)(v192 ^ v186)) & 0x3F;
          if ( !v186 )
            LOBYTE(v186) = 1;
          --v189;
        }
        while ( v189 );
        v181 = v173 + v170;
      }
      v193 = v168 & 0x7F;
      if ( v193 >= 8 )
      {
        v194 = (unsigned __int64)(v168 & 0x7F) >> 3;
        do
        {
          v188 = __ROL8__(*v185++ ^ v188, v186);
          v193 -= 8;
          --v194;
        }
        while ( v194 );
      }
      for ( ; v193; --v193 )
      {
        v195 = *(unsigned __int8 *)v185;
        v185 = (_QWORD *)((char *)v185 + 1);
        v188 = __ROL8__(v195 ^ v188, v186);
      }
      for ( m = v188; ; LODWORD(v188) = m ^ v188 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      *(_DWORD *)(v181 + 20) = v188 & 0x7FFFFFFF;
      *(_DWORD *)(v173 + 2088) += v168;
      if ( (*(_DWORD *)(v173 + 2448) & 0x40000000) != 0 )
      {
        if ( (_DWORD)v168 )
          sub_1403EC00C(v173, v39, v168, v181 + 28);
      }
      *(_DWORD *)(v181 + 24) = 1;
      *(_QWORD *)a1 = v173;
    }
  }
  return 0LL;
}
