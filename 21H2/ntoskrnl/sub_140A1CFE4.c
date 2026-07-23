/*
 * XREFs of sub_140A1CFE4 @ 0x140A1CFE4
 * Callers:
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0D0FC @ 0x140A0D0FC (sub_140A0D0FC.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     sub_1403EA5FC @ 0x1403EA5FC (sub_1403EA5FC.c)
 *     sub_1403EA65C @ 0x1403EA65C (sub_1403EA65C.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MmImageSectionPagable @ 0x1406A7DCC (MmImageSectionPagable.c)
 *     sub_140A0FB30 @ 0x140A0FB30 (sub_140A0FB30.c)
 *     $$b8 @ 0x140A103CC ($$b8.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140A1CFE4(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // r13
  int v6; // edi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // si
  int v9; // r12d
  unsigned int *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // xmm1_8
  int v13; // ecx
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ecx
  unsigned int v19; // r15d
  unsigned int v20; // eax
  int v21; // r8d
  _BYTE *v22; // r14
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r8
  int v26; // edx
  unsigned __int64 v27; // rcx
  int v28; // ebx
  int v29; // ecx
  int v30; // ecx
  _BYTE *v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 i; // rax
  _QWORD *v36; // rdx
  __int64 v37; // r8
  char *v38; // rcx
  char v39; // al
  unsigned __int64 v40; // rbx
  BOOL v41; // r12d
  _QWORD *v42; // rax
  unsigned __int64 v43; // rcx
  int v44; // r11d
  _DWORD *v45; // rdi
  int v46; // ecx
  __int16 v47; // ax
  char *v48; // r8
  int v49; // r10d
  signed __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 *v53; // r9
  unsigned int v54; // r8d
  __int64 *v55; // r10
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  char *v60; // r8
  int v61; // r10d
  __int64 v62; // rdx
  __int64 v63; // rax
  char *v64; // r8
  int v65; // r10d
  __int64 v66; // rdx
  __int64 v67; // rax
  bool v68; // zf
  unsigned int v69; // ecx
  unsigned int v70; // r15d
  int v71; // eax
  ULONG_PTR v72; // r8
  _BYTE *v73; // rcx
  __int64 v74; // r9
  BOOL v75; // r11d
  ULONG_PTR v76; // rax
  unsigned int v77; // r13d
  _DWORD *v78; // rdi
  int v79; // eax
  int v80; // r11d
  char *v81; // rbx
  int v82; // ecx
  __int16 v83; // ax
  char *v84; // r8
  int v85; // r9d
  signed __int64 v86; // r10
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 *v89; // r9
  unsigned int v90; // r8d
  __int64 *v91; // r10
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  char *v96; // r8
  int v97; // r10d
  __int64 v98; // rdx
  __int64 v99; // rax
  char *v100; // r8
  int v101; // r9d
  signed __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rax
  unsigned int v105; // ecx
  int v106; // eax
  unsigned __int64 *v107; // rax
  int v108; // r9d
  unsigned int *v109; // rcx
  unsigned __int64 v110; // r8
  _BYTE *v111; // rax
  unsigned __int64 v112; // rdx
  __int64 v113; // rdi
  unsigned __int64 v114; // rax
  char **v115; // r15
  unsigned int v116; // eax
  __int64 v117; // rbx
  unsigned int v118; // r11d
  ULONG_PTR v119; // rdi
  _DWORD *v120; // r13
  char *v121; // r9
  char *v122; // r10
  int v123; // r12d
  const char *j; // rax
  __int64 v125; // r14
  unsigned __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // r8
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rdi
  __int64 v132; // r15
  _DWORD *v133; // r12
  __int64 v134; // r13
  _DWORD *v135; // r9
  _QWORD *v136; // r11
  char *v137; // r15
  int v138; // r8d
  char *v139; // rcx
  _QWORD *v140; // rdx
  __int64 v141; // r10
  char v142; // al
  int v143; // ecx
  __int64 k; // rcx
  unsigned __int64 v145; // rax
  __int64 v146; // r15
  bool v147; // cf
  __int64 v148; // r13
  int v149; // r8d
  int v150; // r12d
  unsigned int v151; // eax
  __int64 v152; // rdi
  int v153; // ecx
  unsigned int v154; // eax
  __int64 v155; // r8
  int v156; // edx
  unsigned __int64 v157; // rcx
  int v158; // r14d
  int v159; // ecx
  __int64 v161; // r14
  int v162; // ecx
  _QWORD *v163; // rax
  __int64 v164; // rdx
  _QWORD *v165; // r9
  int v166; // r10d
  const char *v167; // rax
  unsigned __int64 v168; // r8
  unsigned int v169; // r11d
  __int64 v170; // rax
  __int64 v171; // r8
  unsigned __int128 v172; // rax
  unsigned int v173; // edx
  unsigned __int64 v174; // rax
  __int64 v175; // rax
  unsigned __int64 m; // rax
  int v177; // [rsp+38h] [rbp-D0h]
  ULONG_PTR v178; // [rsp+38h] [rbp-D0h]
  int v179; // [rsp+38h] [rbp-D0h]
  _BYTE *v180; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v181; // [rsp+40h] [rbp-C8h]
  unsigned int v182; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v183; // [rsp+4Ch] [rbp-BCh]
  __int64 v184; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v185; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v186; // [rsp+60h] [rbp-A8h]
  __int64 v187; // [rsp+68h] [rbp-A0h]
  __int64 v188; // [rsp+70h] [rbp-98h]
  __int64 v189; // [rsp+78h] [rbp-90h]
  _BYTE *v190; // [rsp+80h] [rbp-88h]
  char **v191; // [rsp+88h] [rbp-80h]
  __int128 v192; // [rsp+90h] [rbp-78h] BYREF
  __int64 v193; // [rsp+A0h] [rbp-68h]
  char *v194; // [rsp+A8h] [rbp-60h]
  __int64 *v195; // [rsp+B0h] [rbp-58h]
  char *v196; // [rsp+B8h] [rbp-50h]
  char *v197; // [rsp+C0h] [rbp-48h]
  char *v198; // [rsp+C8h] [rbp-40h]
  __int64 *v199; // [rsp+D0h] [rbp-38h]
  char *v200; // [rsp+D8h] [rbp-30h]
  char *v201; // [rsp+E0h] [rbp-28h]
  _BYTE *v202; // [rsp+E8h] [rbp-20h]
  _BYTE *v203; // [rsp+F0h] [rbp-18h]
  __int64 v204; // [rsp+F8h] [rbp-10h]
  __int64 v205; // [rsp+100h] [rbp-8h]
  __int64 v206; // [rsp+108h] [rbp+0h]
  _BYTE v207[104]; // [rsp+110h] [rbp+8h] BYREF
  ULONG_PTR v209; // [rsp+190h] [rbp+88h]
  int v211; // [rsp+198h] [rbp+90h]
  unsigned __int16 v212; // [rsp+1A0h] [rbp+98h]
  unsigned int v213; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 v214; // [rsp+1A0h] [rbp+98h]
  int v215; // [rsp+1A0h] [rbp+98h]

  v209 = a2;
  v3 = *(_BYTE **)a1;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 504LL))(a2);
  if ( v5 )
  {
    LODWORD(v184) = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 85))(a2);
    v212 = *(_WORD *)(v5 + 6);
    if ( v212 && *(_DWORD *)(v5 + 56) >= 0x1000u && (a2 & 0xFFF) == 0 )
    {
      v6 = -1073741275;
      v7 = *((_QWORD *)v3 + 168);
      v183 = *(_DWORD *)(v5 + 84);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*((void (__fastcall **)(__int64))v3 + 42))(v7);
      v9 = 24;
      v10 = (unsigned int *)**((_QWORD **)v3 + 194);
      v11 = (unsigned __int64)(v10 + 4);
      while ( *(_QWORD *)(v11 + 8) != a2 )
      {
        v11 += 24LL;
        if ( v11 >= (unsigned __int64)&v10[6 * *v10 + 4] )
          goto LABEL_10;
      }
      v6 = 0;
      v12 = *(_QWORD *)(v11 + 16);
      v192 = *(_OWORD *)v11;
      v193 = v12;
LABEL_10:
      (*((void (__fastcall **)(_QWORD))v3 + 50))(*((_QWORD *)v3 + 168));
      __writecr8(CurrentIrql);
      if ( v6 >= 0 )
      {
        v16 = (unsigned int)v193;
      }
      else
      {
        v13 = 24;
        v14 = &v192;
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
        LODWORD(v193) = *(_DWORD *)(v5 + 80);
        *((_QWORD *)&v192 + 1) = a2;
        *(_QWORD *)&v192 = 1LL;
      }
      v17 = *((unsigned int *)v3 + 505);
      v18 = *((_DWORD *)v3 + 585);
      v186 = ((a2 & 0xFFF) + 4095 + v16) >> 12;
      v19 = 20 * v186;
      v20 = 20 * v186 + v17 + 48;
      v21 = ((_DWORD)v184 != 0) + 33;
      v177 = v21;
      if ( v20 <= *((_DWORD *)v3 + 647) )
      {
        v22 = v3;
        v189 = (__int64)v3;
        *((_DWORD *)v3 + 505) = v20;
      }
      else
      {
        v189 = sub_140A0FB30(v3, v20, v18);
        v22 = (_BYTE *)v189;
        if ( !v189 )
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
          else
          {
            v29 = 0;
            if ( (*((_DWORD *)v22 + 612) & 0x10000000) == 0 )
              v29 = v26;
            if ( v29 )
              (*((void (__fastcall **)(__int64, _QWORD))v22 + 69))(v25 - 8, *(_QWORD *)(v25 - 8));
            else
              (*((void (__fastcall **)(__int64))v22 + 32))(v25);
          }
          *((_DWORD *)v22 + 585) = v28;
        }
        *((_DWORD *)v22 + 612) &= ~4u;
        v21 = v177;
      }
      ++*((_DWORD *)v22 + 515);
      v30 = 48;
      v31 = &v22[v17];
      v202 = v31;
      v32 = v31;
      v33 = 6LL;
      do
      {
        *v32 = 0LL;
        v30 -= 8;
        ++v32;
        --v33;
      }
      while ( v33 );
      for ( ; v30; --v30 )
      {
        *(_BYTE *)v32 = 0;
        v32 = (_QWORD *)((char *)v32 + 1);
      }
      *(_DWORD *)v31 = v21;
      *((_QWORD *)v31 + 1) = 0LL;
      *((_DWORD *)v31 + 4) = 0;
      v34 = *((_QWORD *)v22 + 259);
      for ( i = v34; ; LODWORD(v34) = i ^ v34 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v36 = v31 + 24;
      v203 = v31;
      *((_DWORD *)v31 + 5) = v34 & 0x7FFFFFFF;
      v37 = 3LL;
      v38 = (char *)&v192;
      *(_QWORD *)a1 = v22;
      do
      {
        v9 -= 8;
        *v36 = *(_QWORD *)v38;
        v38 += 8;
        ++v36;
        --v37;
      }
      while ( v37 );
      for ( ; v9; --v9 )
      {
        v39 = *v38++;
        *(_BYTE *)v36 = v39;
        v36 = (_QWORD *)((char *)v36 + 1);
      }
      LOBYTE(v36) = 1;
      v40 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))v22 + 62))(v209, v36, 12LL, &v182);
      v185 = v40;
      v182 &= -(v40 != 0);
      v211 = a3 & 1;
      v41 = 0;
      if ( !v211 )
      {
        v40 = 0LL;
        v182 = 0;
        v185 = 0LL;
      }
      v190 = v31 + 48;
      v180 = v31 + 48;
      v187 = (__int64)&v31[20 * (unsigned int)v186 + 48];
      v42 = v31 + 48;
      if ( v19 >= 8 )
      {
        v43 = (unsigned __int64)v19 >> 3;
        do
        {
          *v42 = -1LL;
          v19 -= 8;
          ++v42;
          --v43;
        }
        while ( v43 );
      }
      for ( ; v19; --v19 )
      {
        *(_BYTE *)v42 = -1;
        v42 = (_QWORD *)((char *)v42 + 1);
      }
      v44 = 0;
      v45 = (_DWORD *)(v5 + *(unsigned __int16 *)(v5 + 20) + 24LL);
      v186 = (unsigned __int64)&v45[10 * v212];
      if ( (v45[9] & 0x2000000) != 0
        || (v46 = *v45, *v45 == 1414090313) && v45[1] == 1195525195
        || v46 == 1162297680 && ((v47 = *((_WORD *)v45 + 2), v47 == 30839) || v47 == 29303 || v47 == 30583)
        || v46 == 1095914053 && *((_WORD *)v45 + 2) == 16724 )
      {
LABEL_81:
        v44 = 1;
      }
      else
      {
        v48 = (char *)*((_QWORD *)v22 + 294);
        v49 = 7;
        v195 = (__int64 *)*((_QWORD *)v22 + 295);
        v50 = (char *)v45 - v48;
        v196 = (char *)*((_QWORD *)v22 + 296);
        v197 = (char *)*((_QWORD *)v22 + 297);
        v194 = v48;
        while ( 1 )
        {
          v51 = (unsigned __int8)v48[v50];
          v52 = (unsigned __int8)*v48++;
          if ( v51 != v52 )
            break;
          if ( !--v49 )
          {
LABEL_80:
            v40 = v185;
            goto LABEL_81;
          }
        }
        v53 = v195;
        v54 = 8;
        v55 = (__int64 *)v45;
        while ( 1 )
        {
          v56 = *v55++;
          v57 = *v53++;
          if ( v56 != v57 )
            break;
          v54 -= 8;
          if ( v54 < 8 )
          {
            if ( !v54 )
              goto LABEL_80;
            while ( 1 )
            {
              v58 = *(unsigned __int8 *)v55;
              v55 = (__int64 *)((char *)v55 + 1);
              v59 = *(unsigned __int8 *)v53;
              v53 = (__int64 *)((char *)v53 + 1);
              if ( v58 != v59 )
                goto LABEL_73;
              if ( !--v54 )
                goto LABEL_80;
            }
          }
        }
LABEL_73:
        v60 = v196;
        v61 = 4;
        while ( 1 )
        {
          v62 = (unsigned __int8)v60[(char *)v45 - v196];
          v63 = (unsigned __int8)*v60++;
          if ( v62 != v63 )
            break;
          if ( !--v61 )
            goto LABEL_80;
        }
        v64 = v197;
        v65 = 6;
        while ( 1 )
        {
          v66 = (unsigned __int8)v64[(char *)v45 - v197];
          v67 = (unsigned __int8)*v64++;
          if ( v66 != v67 )
            break;
          if ( !--v65 )
            goto LABEL_80;
        }
        v40 = v185;
      }
      if ( (int)v45[9] < 0 )
        v44 = 1;
      v68 = v44 == 0;
      if ( v44 )
      {
        if ( *v45 == 1414090313 && v45[1] == 1195525195 && (*((_DWORD *)v22 + 613) & 0x2000) != 0 )
          v44 = 0;
        v68 = v44 == 0;
      }
      v69 = v45[4];
      LOBYTE(v41) = v68;
      v213 = v45[3];
      if ( v69 <= v45[2] )
        v69 = v45[2];
      v70 = (v69 + v45[3] + 4095) & 0xFFFFF000;
      v71 = MmImageSectionPagable((__int64)v45);
      v72 = v209;
      v73 = v180;
      v74 = v187;
      v75 = v71 != 0;
      v76 = v209;
      v178 = v209;
      v77 = 0;
      if ( v180 != (_BYTE *)v187 )
      {
        v78 = v45 + 1;
        while ( 1 )
        {
          if ( v77 < v213 )
          {
            if ( v77 < v183 )
            {
LABEL_141:
              v107 = &v185;
              v108 = 0;
              v109 = &v182;
              while ( 1 )
              {
                v110 = *v107;
                if ( *v109 )
                {
                  if ( v178 >= v110 && v178 <= v110 + *v109 - 1LL )
                    break;
                }
                ++v108;
                ++v109;
                ++v107;
                if ( v108 )
                {
                  if ( v77 >= v213 && v75 )
                  {
                    v111 = v180;
                  }
                  else
                  {
                    v111 = v180;
                    *((_DWORD *)v180 + 4) &= ~0x80000000;
                  }
                  v111[15] &= ~0x80u;
                  break;
                }
              }
              v73 = v180;
              v76 = v178;
              v74 = v187;
            }
          }
          else
          {
            if ( v77 >= v70 )
            {
              if ( v78 + 9 == (_DWORD *)v186 || v77 < v78[12] )
              {
                v76 = v178;
                goto LABEL_153;
              }
              v79 = v78[18];
              v78 += 10;
              v80 = 0;
              if ( (v79 & 0x2000000) != 0
                || (v81 = (char *)(v78 - 1), v82 = *(v78 - 1), v82 == 1414090313) && *v78 == 1195525195
                || v82 == 1162297680 && ((v83 = *(_WORD *)v78, *(_WORD *)v78 == 30839) || v83 == 29303 || v83 == 30583)
                || v82 == 1095914053 && *(_WORD *)v78 == 16724 )
              {
                v80 = 1;
              }
              else
              {
                v84 = (char *)*((_QWORD *)v22 + 294);
                v85 = 7;
                v199 = (__int64 *)*((_QWORD *)v22 + 295);
                v86 = v81 - v84;
                v200 = (char *)*((_QWORD *)v22 + 296);
                v201 = (char *)*((_QWORD *)v22 + 297);
                v198 = v84;
                while ( 1 )
                {
                  v87 = (unsigned __int8)v84[v86];
                  v88 = (unsigned __int8)*v84++;
                  if ( v87 != v88 )
                    break;
                  if ( !--v85 )
                  {
LABEL_126:
                    v80 = 1;
                    goto LABEL_127;
                  }
                }
                v89 = v199;
                v90 = 8;
                v91 = (__int64 *)(v78 - 1);
                while ( 1 )
                {
                  v92 = *v91++;
                  v93 = *v89++;
                  if ( v92 != v93 )
                    break;
                  v90 -= 8;
                  if ( v90 < 8 )
                  {
                    if ( !v90 )
                      goto LABEL_126;
                    while ( 1 )
                    {
                      v94 = *(unsigned __int8 *)v91;
                      v91 = (__int64 *)((char *)v91 + 1);
                      v95 = *(unsigned __int8 *)v89;
                      v89 = (__int64 *)((char *)v89 + 1);
                      if ( v94 != v95 )
                        goto LABEL_119;
                      if ( !--v90 )
                        goto LABEL_126;
                    }
                  }
                }
LABEL_119:
                v96 = v200;
                v97 = 4;
                while ( 1 )
                {
                  v98 = (unsigned __int8)v96[v81 - v200];
                  v99 = (unsigned __int8)*v96++;
                  if ( v98 != v99 )
                    break;
                  if ( !--v97 )
                    goto LABEL_126;
                }
                v100 = v201;
                v101 = 6;
                v102 = v81 - v201;
                while ( 1 )
                {
                  v103 = (unsigned __int8)v100[v102];
                  v104 = (unsigned __int8)*v100++;
                  if ( v103 != v104 )
                    break;
                  if ( !--v101 )
                    goto LABEL_126;
                }
              }
LABEL_127:
              if ( (int)v78[8] < 0 )
                v80 = 1;
              if ( v80 && *(v78 - 1) == 1414090313 && *v78 == 1195525195 && (*((_DWORD *)v22 + 613) & 0x2000) != 0 )
                v80 = 0;
              v105 = v78[3];
              v41 = v80 == 0;
              if ( v105 <= v78[1] )
                v105 = v78[1];
              v70 = (v105 + 4095 + v78[2]) & 0xFFFFF000;
              v106 = MmImageSectionPagable((__int64)(v78 - 1));
              v73 = v180;
              v74 = v187;
              v68 = v106 == 0;
              v76 = v178;
              v75 = !v68;
            }
            if ( v41 )
              goto LABEL_141;
          }
LABEL_153:
          v76 += 4096LL;
          v73 += 20;
          v77 += 4096;
          v178 = v76;
          v180 = v73;
          if ( v73 == (_BYTE *)v74 )
          {
            v40 = v185;
            v72 = v209;
            break;
          }
        }
      }
      v112 = (unsigned __int64)v190;
      if ( v190 != (_BYTE *)v74 )
      {
        do
        {
          LODWORD(v113) = 0;
          if ( v112 != v74 )
          {
            v114 = v112;
            do
            {
              if ( *(char *)(v114 + 15) < 0 )
                break;
              v113 = (unsigned int)(v113 + 1);
              v114 = v112 + 20 * v113;
            }
            while ( v114 != v74 );
            v179 = v113;
            if ( (_DWORD)v113 )
            {
              v115 = (char **)*((_QWORD *)v22 + 337);
              v116 = v113;
              v183 = v113;
              v191 = v115;
              v186 = v112;
              v181 = v72;
              do
              {
                v117 = 8LL;
                v118 = 0;
                if ( v116 < 8 )
                  v117 = v116;
                v119 = v181;
                v120 = v207;
                do
                {
                  v115[1] = (char *)4096;
                  v121 = (char *)(v119 + (v118 << 12));
                  *v115 = v121;
                  v122 = v121;
                  *((_DWORD *)v22 + 522) += 4096;
                  v123 = *((_DWORD *)v22 + 517);
                  v214 = *((_QWORD *)v22 + 259);
                  for ( j = v121; j < v121 + 4096; j += 64 )
                    _mm_prefetch(j, 0);
                  v125 = *((_QWORD *)v22 + 259);
                  v126 = v214;
                  v215 = 32;
                  do
                  {
                    v127 = 8LL;
                    do
                    {
                      v128 = *((_QWORD *)v122 + 1) ^ __ROL8__(*(_QWORD *)v122 ^ v126, v123);
                      v122 += 16;
                      v126 = __ROL8__(v128, v123);
                      --v127;
                    }
                    while ( v127 );
                    v129 = __ROL8__(v125 ^ (v122 - v121), 17) ^ v125 ^ (v122 - v121);
                    v204 = (v129 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v123 = ((unsigned __int8)(v204 ^ v129) ^ (unsigned __int8)v123) & 0x3F;
                    if ( !v123 )
                      LOBYTE(v123) = 1;
                    --v215;
                  }
                  while ( v215 );
                  v22 = (_BYTE *)v189;
                  v130 = v126;
                  v119 = v181;
                  while ( 1 )
                  {
                    v130 >>= 31;
                    if ( !v130 )
                      break;
                    LODWORD(v126) = v130 ^ v126;
                  }
                  ++v118;
                  *v120 = v126 & 0x7FFFFFFF;
                  v115 += 6;
                  ++v120;
                }
                while ( v118 < (unsigned int)v117 );
                v131 = v186;
                v132 = (__int64)v191;
                sub_1403EA65C((__int64)v22, (__int64)v191, v117);
                v133 = v207;
                v134 = (unsigned int)v117;
                v135 = (_DWORD *)(v131 + 16);
                v136 = (_QWORD *)v131;
                v137 = (char *)(v132 + 16);
                do
                {
                  v138 = 16;
                  v139 = v137;
                  v140 = v136;
                  v141 = 2LL;
                  do
                  {
                    v138 -= 8;
                    *v140 = *(_QWORD *)v139;
                    v139 += 8;
                    ++v140;
                    --v141;
                  }
                  while ( v141 );
                  for ( ; v138; --v138 )
                  {
                    v142 = *v139++;
                    *(_BYTE *)v140 = v142;
                    v140 = (_QWORD *)((char *)v140 + 1);
                  }
                  v137 += 48;
                  v136 = (_QWORD *)((char *)v136 + 20);
                  v143 = (*v133++ ^ *v135) & 0x7FFFFFFF;
                  *v135 ^= v143;
                  v135 += 5;
                  --v134;
                }
                while ( v134 );
                v22 = (_BYTE *)v189;
                v115 = v191;
                v181 += (unsigned int)((_DWORD)v117 << 12);
                v116 = v183 - v117;
                v186 = v131 + 20 * v117;
                *(_DWORD *)(v189 + 2088) += (_DWORD)v117 << 15;
                v183 = v116;
              }
              while ( v116 );
              LODWORD(v113) = v179;
              v112 = (unsigned __int64)v190;
              v74 = v187;
            }
          }
          for ( k = 5LL * (unsigned int)v113; ; k = 5 * v113 )
          {
            v145 = v112 + 4 * k;
            if ( v145 == v74 || *(char *)(v145 + 15) >= 0 )
              break;
            v113 = (unsigned int)(v113 + 1);
          }
          v72 = (unsigned int)((_DWORD)v113 << 12) + v209;
          v209 = v72;
          v112 += 20LL * (unsigned int)v113;
          v190 = (_BYTE *)v112;
        }
        while ( v112 != v74 );
        v40 = v185;
      }
      if ( !v211 )
        return 0LL;
      v146 = v182;
      if ( !v182 )
        return 0LL;
      v147 = (_DWORD)v184 != 0;
      LODWORD(v184) = -(int)v184;
      v148 = *((unsigned int *)v22 + 505);
      v149 = *((_DWORD *)v22 + 585);
      v205 = 0LL;
      v150 = v147 + 13;
      v151 = v148 + 48;
      if ( (unsigned int)(v148 + 48) <= *((_DWORD *)v22 + 647) )
      {
        v152 = (__int64)v22;
        *((_DWORD *)v22 + 505) = v151;
LABEL_212:
        ++*(_DWORD *)(v152 + 2060);
        v161 = v152 + v148;
        v162 = 48;
        v206 = v152 + v148;
        v163 = (_QWORD *)(v152 + v148);
        v164 = 6LL;
        do
        {
          *v163 = 0LL;
          v162 -= 8;
          ++v163;
          --v164;
        }
        while ( v164 );
        for ( ; v162; --v162 )
        {
          *(_BYTE *)v163 = 0;
          v163 = (_QWORD *)((char *)v163 + 1);
        }
        *(_DWORD *)v161 = v150;
        *(_QWORD *)(v161 + 8) = v40;
        v165 = (_QWORD *)v40;
        *(_DWORD *)(v161 + 16) = v146;
        *(_DWORD *)(v152 + 2088) += v146;
        v166 = *(_DWORD *)(v152 + 2068);
        if ( v40 < v40 + v146 )
        {
          v167 = (const char *)v40;
          do
          {
            _mm_prefetch(v167, 0);
            v167 += 64;
          }
          while ( (unsigned __int64)v167 < v40 + v146 );
        }
        v168 = *(_QWORD *)(v152 + 2072);
        v169 = (unsigned int)v146 >> 7;
        if ( (unsigned int)v146 >> 7 )
        {
          do
          {
            v170 = 8LL;
            do
            {
              v171 = v165[1] ^ __ROL8__(*v165 ^ v168, v166);
              v165 += 2;
              v168 = __ROL8__(v171, v166);
              --v170;
            }
            while ( v170 );
            v172 = (__ROL8__(*(_QWORD *)(v152 + 2072) ^ ((unsigned __int64)v165 - v40), 17) ^ *(_QWORD *)(v152 + 2072) ^ ((unsigned __int64)v165 - v40))
                 * (unsigned __int128)0x7010008004002001uLL;
            v166 = ((unsigned __int8)v172 ^ (unsigned __int8)(BYTE8(v172) ^ v166)) & 0x3F;
            if ( !v166 )
              LOBYTE(v166) = 1;
            --v169;
          }
          while ( v169 );
          v161 = v152 + v148;
        }
        v173 = v146 & 0x7F;
        if ( v173 >= 8 )
        {
          v174 = (unsigned __int64)(v146 & 0x7F) >> 3;
          do
          {
            v168 = __ROL8__(*v165++ ^ v168, v166);
            v173 -= 8;
            --v174;
          }
          while ( v174 );
        }
        for ( ; v173; --v173 )
        {
          v175 = *(unsigned __int8 *)v165;
          v165 = (_QWORD *)((char *)v165 + 1);
          v168 = __ROL8__(v175 ^ v168, v166);
        }
        for ( m = v168; ; LODWORD(v168) = m ^ v168 )
        {
          m >>= 31;
          if ( !m )
            break;
        }
        *(_DWORD *)(v161 + 20) = v168 & 0x7FFFFFFF;
        *(_DWORD *)(v152 + 2088) += v146;
        if ( (*(_DWORD *)(v152 + 2448) & 0x40000000) != 0 )
        {
          if ( (_DWORD)v146 )
            sub_1403EA5FC(v152, v40, v146, v161 + 28);
        }
        *(_DWORD *)(v161 + 24) = 1;
        *(_QWORD *)a1 = v152;
        return 0LL;
      }
      v152 = sub_140A0FB30(v22, v151, v149);
      if ( v152 )
      {
        v153 = *((_DWORD *)v22 + 612);
        if ( (v153 & 4) == 0 )
        {
          v154 = *((_DWORD *)v22 + 505);
          v155 = *((_QWORD *)v22 + 249);
          v156 = (v153 & 0x20000000) != 0 ? *((_DWORD *)v22 + 585) : 0;
          if ( v154 >= 8 )
          {
            v157 = (unsigned __int64)v154 >> 3;
            do
            {
              *(_QWORD *)v22 = 0LL;
              v154 -= 8;
              v22 += 8;
              --v157;
            }
            while ( v157 );
          }
          for ( ; v154; --v154 )
            *v22++ = 0;
          v158 = *(_DWORD *)(v152 + 2340);
          *(_DWORD *)(v152 + 2340) = v156;
          if ( v156 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v152 + 872))(v155);
          }
          else
          {
            v159 = 0;
            if ( (*(_DWORD *)(v152 + 2448) & 0x10000000) == 0 )
              v159 = v156;
            if ( v159 )
              (*(void (__fastcall **)(__int64, _QWORD))(v152 + 552))(v155 - 8, *(_QWORD *)(v155 - 8));
            else
              (*(void (__fastcall **)(__int64))(v152 + 256))(v155);
          }
          *(_DWORD *)(v152 + 2340) = v158;
        }
        *(_DWORD *)(v152 + 2448) &= ~4u;
        goto LABEL_212;
      }
      return 3221225626LL;
    }
    if ( (*((_DWORD *)v3 + 612) & 0x200000) == 0 )
    {
      LODWORD(v188) = -805294751;
      KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, a2, 4uLL, 0LL);
    }
    if ( !*((_DWORD *)v3 + 574) )
    {
      *((_QWORD *)v3 + 289) = 0LL;
      *((_QWORD *)v3 + 290) = 271LL;
      *((_QWORD *)v3 + 288) = v3 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v3 + 291) = a2;
      *((_DWORD *)v3 + 574) = 1;
      __b8((__int64)v3, 0LL);
    }
  }
  return 3221225595LL;
}
