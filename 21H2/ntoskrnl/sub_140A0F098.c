/*
 * XREFs of sub_140A0F098 @ 0x140A0F098
 * Callers:
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0D0FC @ 0x140A0D0FC (sub_140A0D0FC.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     sub_140A0FB30 @ 0x140A0FB30 (sub_140A0FB30.c)
 *     $$b8 @ 0x140A103CC ($$b8.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140A0F098(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7,
        unsigned int *a8)
{
  _BYTE *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned int v11; // r14d
  __int64 v12; // r15
  unsigned int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rdi
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // r8
  int v19; // edx
  unsigned __int64 v20; // rcx
  int v21; // ebx
  int v22; // ecx
  __int64 v24; // r8
  int v25; // ecx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  unsigned int *v28; // r9
  const char *v29; // rax
  int v30; // r10d
  unsigned __int64 v31; // r8
  unsigned int v32; // r11d
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  signed __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // r11
  __int64 v39; // rax
  bool v40; // zf
  unsigned __int64 i; // rax
  int v42; // r15d
  _OWORD *v43; // rsi
  __int64 v44; // rcx
  unsigned __int8 CurrentIrql; // r12
  int v46; // ebx
  unsigned int *v47; // rcx
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  unsigned __int64 v52; // rcx
  unsigned int *v53; // r12
  int v54; // ebp
  __int64 v55; // rax
  unsigned int v56; // r15d
  unsigned int v57; // r13d
  unsigned int *v58; // rcx
  char v59; // al
  char *v60; // rax
  __int64 v61; // rbx
  int v62; // esi
  int v63; // ecx
  __int16 v64; // ax
  char *v65; // r8
  int v66; // r10d
  signed __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 *v70; // r9
  unsigned int v71; // r8d
  __int64 *v72; // r10
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  unsigned __int8 *v77; // r8
  int v78; // r10d
  __int64 v79; // rdx
  __int64 v80; // rax
  unsigned __int8 *v81; // r8
  int v82; // r10d
  __int64 v83; // rdx
  __int64 v84; // rax
  int v85; // eax
  unsigned int v86; // r9d
  unsigned int v87; // ecx
  __int64 v88; // r9
  unsigned int v89; // eax
  unsigned int v90; // edx
  int v91; // ebp
  __int64 v92; // rax
  __int64 v93; // r10
  int v94; // edx
  __int64 v95; // r14
  unsigned __int64 v96; // rbx
  char v97; // al
  unsigned int v98; // r8d
  unsigned __int8 v99; // r15
  unsigned __int64 v100; // rsi
  unsigned __int64 v101; // r12
  unsigned __int64 v102; // rbp
  int v103; // eax
  _QWORD *v104; // r9
  int v105; // r11d
  const char *v106; // rax
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // r8
  unsigned int v109; // r10d
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // r8
  unsigned __int128 v113; // rax
  unsigned int v114; // r14d
  unsigned __int64 v115; // rdx
  __int64 v116; // rax
  unsigned __int64 j; // rax
  char *v118; // r11
  __int64 v119; // r8
  int v120; // edx
  unsigned int v121; // [rsp+20h] [rbp-B8h]
  int v122; // [rsp+24h] [rbp-B4h]
  unsigned __int64 v123; // [rsp+28h] [rbp-B0h]
  __int64 v124; // [rsp+30h] [rbp-A8h]
  char v125; // [rsp+38h] [rbp-A0h]
  unsigned int v126; // [rsp+3Ch] [rbp-9Ch]
  int *v127; // [rsp+40h] [rbp-98h]
  unsigned int *v128; // [rsp+48h] [rbp-90h]
  __int64 v129; // [rsp+50h] [rbp-88h]
  char *v130; // [rsp+58h] [rbp-80h]
  unsigned int *v131; // [rsp+60h] [rbp-78h]
  int v133; // [rsp+E0h] [rbp+8h]

  v8 = *(_BYTE **)a1;
  v9 = a3;
  v129 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL))(a4);
  if ( !v129 )
    return 3221225595LL;
  v10 = v9 / 0xC;
  v11 = a5 ? 12 : (a6 & 0x10) != 0 ? 43 : 1;
  v12 = *((unsigned int *)v8 + 505);
  v13 = 4 * v10;
  v14 = 4 * v10 + v12 + 48;
  if ( v14 <= *((_DWORD *)v8 + 647) )
  {
    v15 = (__int64)v8;
    *((_DWORD *)v8 + 505) = v14;
  }
  else
  {
    v15 = sub_140A0FB30(v8, v14, *((unsigned int *)v8 + 585));
    if ( !v15 )
      return 3221225626LL;
    v16 = *((_DWORD *)v8 + 612);
    if ( (v16 & 4) == 0 )
    {
      v17 = *((_DWORD *)v8 + 505);
      v18 = *((_QWORD *)v8 + 249);
      v19 = (v16 & 0x20000000) != 0 ? *((_DWORD *)v8 + 585) : 0;
      if ( v17 >= 8 )
      {
        v20 = (unsigned __int64)v17 >> 3;
        do
        {
          *(_QWORD *)v8 = 0LL;
          v17 -= 8;
          v8 += 8;
          --v20;
        }
        while ( v20 );
      }
      for ( ; v17; --v17 )
        *v8++ = 0;
      v21 = *(_DWORD *)(v15 + 2340);
      *(_DWORD *)(v15 + 2340) = v19;
      if ( v19 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v15 + 872))(v18);
      }
      else
      {
        v22 = 0;
        if ( (*(_DWORD *)(v15 + 2448) & 0x10000000) == 0 )
          v22 = v19;
        if ( v22 )
          (*(void (__fastcall **)(__int64, _QWORD))(v15 + 552))(v18 - 8, *(_QWORD *)(v18 - 8));
        else
          (*(void (__fastcall **)(__int64))(v15 + 256))(v18);
      }
      *(_DWORD *)(v15 + 2340) = v21;
    }
    *(_DWORD *)(v15 + 2448) &= ~4u;
  }
  ++*(_DWORD *)(v15 + 2060);
  v24 = v15 + v12;
  v25 = 48;
  v127 = (int *)(v15 + v12);
  v26 = (_QWORD *)(v15 + v12);
  v27 = 6LL;
  do
  {
    *v26 = 0LL;
    v25 -= 8;
    ++v26;
    --v27;
  }
  while ( v27 );
  for ( ; v25; --v25 )
  {
    *(_BYTE *)v26 = 0;
    v26 = (_QWORD *)((char *)v26 + 1);
  }
  *(_DWORD *)v24 = v11;
  v28 = a2;
  *(_QWORD *)(v24 + 8) = a2;
  v29 = (const char *)a2;
  *(_DWORD *)(v24 + 16) = v9;
  *(_DWORD *)(v15 + 2088) += v9;
  v30 = *(_DWORD *)(v15 + 2068);
  if ( v29 < &v29[v9] )
  {
    do
    {
      _mm_prefetch(v29, 0);
      v29 += 64;
    }
    while ( v29 < (const char *)a2 + v9 );
  }
  v31 = *(_QWORD *)(v15 + 2072);
  v32 = (unsigned int)v9 >> 7;
  if ( (unsigned int)v9 >> 7 )
  {
    do
    {
      v33 = 8LL;
      do
      {
        v34 = v31 ^ *(_QWORD *)v28;
        v35 = *((_QWORD *)v28 + 1);
        v28 += 4;
        v31 = __ROL8__(__ROL8__(v34, v30) ^ v35, v30);
        --v33;
      }
      while ( v33 );
      v36 = __ROL8__(*(_QWORD *)(v15 + 2072) ^ ((char *)v28 - (char *)a2), 17) ^ *(_QWORD *)(v15 + 2072) ^ ((char *)v28 - (char *)a2);
      v30 = ((unsigned __int8)((((unsigned __int64)v36 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v36) ^ (unsigned __int8)v30) & 0x3F;
      if ( !v30 )
        LOBYTE(v30) = 1;
      --v32;
    }
    while ( v32 );
    LODWORD(v10) = v9 / 0xC;
  }
  v37 = v9 & 0x7F;
  if ( (unsigned int)v37 >= 8 )
  {
    v38 = (v9 & 0x7F) >> 3;
    do
    {
      v31 = __ROL8__(*(_QWORD *)v28 ^ v31, v30);
      v28 += 2;
      v37 = (unsigned int)(v37 - 8);
      --v38;
    }
    while ( v38 );
  }
  if ( (_DWORD)v37 )
  {
    do
    {
      v39 = *(unsigned __int8 *)v28;
      v28 = (unsigned int *)((char *)v28 + 1);
      v31 = __ROL8__(v39 ^ v31, v30);
      v40 = (_DWORD)v37 == 1;
      v37 = (unsigned int)(v37 - 1);
    }
    while ( !v40 );
  }
  for ( i = v31; ; v31 = (unsigned int)i ^ (unsigned int)v31 )
  {
    i >>= 31;
    if ( !i )
      break;
  }
  LODWORD(v31) = v31 & 0x7FFFFFFF;
  v42 = -1073741275;
  v127[5] = v31;
  *(_DWORD *)(v15 + 2088) += v9;
  v43 = v127 + 6;
  *(_QWORD *)a1 = v15;
  v44 = *(_QWORD *)(v15 + 1344);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int *))(v15 + 336))(v44, v37, v31, v28);
  v46 = 24;
  v47 = **(unsigned int ***)(v15 + 1552);
  v48 = (unsigned __int64)(v47 + 4);
  while ( *(_QWORD *)(v48 + 8) != a4 )
  {
    v48 += 24LL;
    if ( v48 >= (unsigned __int64)&v47[6 * *v47 + 4] )
      goto LABEL_50;
  }
  v42 = 0;
  *v43 = *(_OWORD *)v48;
  *((_QWORD *)v127 + 5) = *(_QWORD *)(v48 + 16);
LABEL_50:
  (*(void (__fastcall **)(_QWORD))(v15 + 400))(*(_QWORD *)(v15 + 1344));
  __writecr8(CurrentIrql);
  if ( v42 < 0 )
  {
    v49 = v127 + 6;
    v50 = 3LL;
    do
    {
      *v49 = 0LL;
      v46 -= 8;
      ++v49;
      --v50;
    }
    while ( v50 );
    for ( ; v46; --v46 )
    {
      *(_BYTE *)v49 = 0;
      v49 = (_QWORD *)((char *)v49 + 1);
    }
    *(_QWORD *)v43 = 1LL;
  }
  v128 = (unsigned int *)(v127 + 12);
  v51 = v127 + 12;
  if ( v13 >= 8 )
  {
    v52 = (unsigned __int64)v13 >> 3;
    do
    {
      *v51 = -1LL;
      v13 -= 8;
      ++v51;
      --v52;
    }
    while ( v52 );
  }
  for ( ; v13; --v13 )
  {
    *(_BYTE *)v51 = -1;
    v51 = (_QWORD *)((char *)v51 + 1);
  }
  v53 = a2;
  v54 = -1;
  v55 = (unsigned int)v10;
  v56 = 0;
  v133 = -1;
  v57 = 0;
  v121 = 0;
  v123 = 0LL;
  v58 = &a2[3 * v55];
  v59 = -9;
  v131 = v58;
  if ( (*(_DWORD *)(v15 + 2452) & 0x40) != 0 )
    v59 = a6;
  v125 = v59;
  if ( a2 == v58 )
  {
    *a7 = 0;
    *a8 = 0;
    return 0LL;
  }
  v60 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v15 + 528))(v129, a4, *a2);
  v61 = v11;
  v124 = v11;
LABEL_168:
  v130 = v60;
  v118 = v60;
  if ( !v60 )
    return 3221225595LL;
  v62 = 0;
  if ( (*((_DWORD *)v60 + 9) & 0x2000000) != 0
    || (v63 = *(_DWORD *)v60, *(_DWORD *)v60 == 1414090313) && *((_DWORD *)v60 + 1) == 1195525195
    || v63 == 1162297680 && ((v64 = *((_WORD *)v60 + 2), v64 == 30839) || v64 == 29303 || v64 == 30583)
    || v63 == 1095914053 && *((_WORD *)v118 + 2) == 16724 )
  {
LABEL_94:
    v62 = 1;
  }
  else
  {
    v65 = *(char **)(v15 + 2352);
    v66 = 7;
    v67 = v118 - v65;
    while ( 1 )
    {
      v68 = (unsigned __int8)v65[v67];
      v69 = (unsigned __int8)*v65++;
      if ( v68 != v69 )
        break;
      if ( !--v66 )
        goto LABEL_94;
    }
    v70 = *(__int64 **)(v15 + 2360);
    v71 = 8;
    v72 = (__int64 *)v118;
    while ( 1 )
    {
      v73 = *v72++;
      v74 = *v70++;
      if ( v73 != v74 )
        break;
      v71 -= 8;
      if ( v71 < 8 )
      {
        if ( !v71 )
          goto LABEL_94;
        while ( 1 )
        {
          v75 = *(unsigned __int8 *)v72;
          v72 = (__int64 *)((char *)v72 + 1);
          v76 = *(unsigned __int8 *)v70;
          v70 = (__int64 *)((char *)v70 + 1);
          if ( v75 != v76 )
            goto LABEL_87;
          if ( !--v71 )
            goto LABEL_94;
        }
      }
    }
LABEL_87:
    v77 = *(unsigned __int8 **)(v15 + 2368);
    v78 = 4;
    while ( 1 )
    {
      v79 = (unsigned __int8)v118[(_QWORD)v77 - *(_QWORD *)(v15 + 2368)];
      v80 = *v77++;
      if ( v79 != v80 )
        break;
      if ( !--v78 )
        goto LABEL_94;
    }
    v81 = *(unsigned __int8 **)(v15 + 2376);
    v82 = 6;
    while ( 1 )
    {
      v83 = (unsigned __int8)v118[(_QWORD)v81 - *(_QWORD *)(v15 + 2376)];
      v84 = *v81++;
      if ( v83 != v84 )
        break;
      if ( !--v82 )
        goto LABEL_94;
    }
  }
  v85 = *((_DWORD *)v118 + 9);
  if ( v85 < 0 )
    v62 = 1;
  v122 = v62;
  if ( v61 == 43 )
  {
    if ( (v85 & 0x20000000) == 0 )
      v62 = 1;
    v122 = v62;
  }
  if ( v62 && *(_DWORD *)v118 == 1414090313 && *((_DWORD *)v118 + 1) == 1195525195 )
  {
    if ( (*(_DWORD *)(v15 + 2452) & 0x2000) != 0 )
      v62 = 0;
    v122 = v62;
  }
  v86 = *((_DWORD *)v118 + 4);
  v87 = *((_DWORD *)v118 + 3);
  if ( v86 <= *((_DWORD *)v118 + 2) )
    v86 = *((_DWORD *)v118 + 2);
  v88 = v87 + v86;
  v126 = v88;
  while ( 1 )
  {
    v89 = v53[2];
    v90 = v54;
    if ( (v89 & 1) == 0 )
    {
      v91 = v53[2];
      if ( v89 >= v90 )
        v91 = v90;
      v133 = v91;
      if ( v89 > v57 )
      {
        v121 = v53[2];
        v133 = v91;
      }
    }
    v92 = *v53;
    v93 = a4;
    v94 = v62;
    v95 = v53[1] - (unsigned int)v92;
    v96 = a4 + v92;
    if ( v124 != 43 )
      goto LABEL_127;
    if ( v62 || v87 - (unsigned int)v92 < 6 || (unsigned int)v92 - v56 < 6 )
    {
LABEL_128:
      v98 = 0x80000000;
      goto LABEL_164;
    }
    v97 = *(_BYTE *)(v96 - 1);
    if ( *(_BYTE *)(v96 - 6) != 76
      || *(_BYTE *)(v96 - 5) != 0x87
      || *(_BYTE *)(v96 - 4)
      || *(_BYTE *)(v96 - 3) != 0x98
      || *(_BYTE *)(v96 - 2) != 0xC3
      || v97 != -112 && v97 != -15 )
    {
      v94 = 1;
LABEL_127:
      if ( v94 )
        goto LABEL_128;
    }
    if ( (v125 & 8) != 0
      && ((((v96 & 0xFFF) + v95 + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 || (v96 & 0xFFFFFFFFFFFFF000uLL) != v123) )
    {
      if ( (_DWORD)v95 && (*(_DWORD *)(v15 + 2452) & 0x40) != 0 )
      {
        v99 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v100 = v96 & 0xFFFFFFFFFFFFF000uLL;
        v101 = (v96 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 2 )
        {
          v102 = v99;
          while ( 1 )
          {
            v103 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(v15 + 1128))(v100, 1LL);
            if ( v103 != -1073741267 )
              break;
            if ( v99 > 1u )
              goto LABEL_140;
            v102 = v99;
            __writecr8(v99);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v103 < 0 )
          {
            __writecr8(v102);
            goto LABEL_143;
          }
LABEL_140:
          v100 += 4096LL;
          v101 += 4096LL;
          if ( v101 != ((v96 + v95 - 1) | 0xFFF) )
            continue;
          break;
        }
        __writecr8(v102);
      }
      else
      {
LABEL_143:
        if ( !*(_DWORD *)(v15 + 2296) )
        {
          *(_QWORD *)(v15 + 2304) = v15 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v15 + 2312) = (char *)v127 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v15 + 2320) = *v127;
          *(_QWORD *)(v15 + 2328) = v96;
          *(_DWORD *)(v15 + 2296) = 1;
          __b8(v15, 0LL, 1LL, v88);
        }
      }
      v53 = a2;
      v123 = (v96 + (unsigned int)v95) & 0xFFFFFFFFFFFFF000uLL;
    }
    *(_DWORD *)(v15 + 2088) += v95;
    v104 = (_QWORD *)v96;
    v105 = *(_DWORD *)(v15 + 2068);
    v106 = (const char *)v96;
    v107 = v96 + (unsigned int)v95;
    if ( v96 < v107 )
    {
      do
      {
        _mm_prefetch(v106, 0);
        v106 += 64;
      }
      while ( (unsigned __int64)v106 < v107 );
    }
    v108 = *(_QWORD *)(v15 + 2072);
    v109 = (unsigned int)v95 >> 7;
    if ( (unsigned int)v95 >> 7 )
    {
      do
      {
        v110 = 8LL;
        do
        {
          v111 = v108 ^ *v104;
          v112 = v104[1];
          v104 += 2;
          v108 = __ROL8__(__ROL8__(v111, v105) ^ v112, v105);
          --v110;
        }
        while ( v110 );
        v113 = (__ROL8__(*(_QWORD *)(v15 + 2072) ^ ((unsigned __int64)v104 - v96), 17) ^ *(_QWORD *)(v15 + 2072) ^ ((unsigned __int64)v104 - v96))
             * (unsigned __int128)0x7010008004002001uLL;
        v105 = (BYTE8(v113) ^ (unsigned __int8)(v113 ^ v105)) & 0x3F;
        if ( !v105 )
          LOBYTE(v105) = 1;
        --v109;
      }
      while ( v109 );
      v53 = a2;
    }
    v114 = v95 & 0x7F;
    if ( v114 >= 8 )
    {
      v115 = (unsigned __int64)v114 >> 3;
      do
      {
        v108 = __ROL8__(*v104++ ^ v108, v105);
        v114 -= 8;
        --v115;
      }
      while ( v115 );
    }
    for ( ; v114; --v114 )
    {
      v116 = *(unsigned __int8 *)v104;
      v104 = (_QWORD *)((char *)v104 + 1);
      v108 = __ROL8__(v116 ^ v108, v105);
    }
    for ( j = v108 >> 31; j; j >>= 31 )
      LODWORD(v108) = j ^ v108;
    v118 = v130;
    v98 = v108 & 0x7FFFFFFF;
    v62 = v122;
    v88 = v126;
    v93 = a4;
LABEL_164:
    *v128 = v98;
    v56 = v53[1];
    v53 += 3;
    a2 = v53;
    if ( v53 == v131 )
      break;
    v119 = *v53;
    v87 = *((_DWORD *)v118 + 3);
    ++v128;
    if ( (unsigned int)v119 >= v87 )
    {
      v54 = v133;
      v57 = v121;
      if ( v53[1] <= (unsigned int)v88 )
        continue;
    }
    v60 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v15 + 528))(v129, v93, v119, v88);
    v54 = v133;
    v57 = v121;
    v61 = v124;
    goto LABEL_168;
  }
  v120 = v133;
  if ( v133 == -1 )
    v120 = -(v121 != 0);
  *a7 = v120;
  *a8 = v121;
  return 0LL;
}
