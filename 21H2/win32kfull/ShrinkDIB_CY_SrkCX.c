/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C0269D60
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0005AE0 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     SrkYDIB_SrkCX @ 0x1C016E840 (SrkYDIB_SrkCX.c)
 *     AlphaBlendBGRF @ 0x1C02640B0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0269064 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY_SrkCX(__int64 a1)
{
  __int64 v2; // rax
  int *v3; // rdx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // r8
  _DWORD *v17; // rsi
  int v18; // r12d
  char *v19; // rdi
  int v20; // r9d
  __int64 v21; // rcx
  char *v22; // rax
  char *v23; // r15
  char *v24; // rbx
  char *v25; // r14
  unsigned __int8 *FixupScan; // rax
  int *v27; // rcx
  int v28; // eax
  unsigned __int8 *v29; // r8
  char *v30; // rdx
  __int64 v31; // rax
  int v32; // r12d
  _WORD *v33; // r13
  __int64 v34; // rax
  unsigned int v35; // r14d
  char *v36; // r13
  unsigned __int8 *v37; // rax
  unsigned int v38; // ecx
  int v39; // r14d
  int *v40; // rdx
  int v41; // r8d
  int v42; // r9d
  int v43; // eax
  unsigned __int8 *v44; // r8
  char *v45; // r9
  _DWORD *v46; // rdx
  signed __int64 v47; // rdi
  __int64 v48; // rax
  _DWORD *v49; // r8
  unsigned __int8 *v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // r14d
  __int64 v54; // rax
  char *v55; // r12
  char *v56; // r13
  unsigned __int8 *v57; // rax
  unsigned int v58; // ecx
  int v59; // r14d
  int *v60; // rdx
  int v61; // r8d
  int v62; // r9d
  int v63; // eax
  char *v64; // r11
  char *v65; // r8
  int v66; // eax
  _BYTE *v67; // r9
  __int64 v68; // rdx
  int v69; // eax
  _DWORD *v70; // r8
  __int16 v71; // ax
  __int64 v72; // r10
  __int64 v73; // rdx
  int v74; // ecx
  int v75; // ecx
  __int64 v76; // rax
  __int16 v77; // ax
  unsigned __int8 *v78; // rax
  __int64 v79; // rcx
  _DWORD *v80; // r8
  unsigned __int8 *v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rax
  int v84; // eax
  int v85; // eax
  _BYTE *v86; // rdx
  char *v87; // r8
  char *v88; // rcx
  signed __int64 v89; // rbx
  int v90; // eax
  int v91; // eax
  int v92; // eax
  __int16 v93; // ax
  unsigned __int8 *v94; // rax
  __int16 v95; // [rsp+58h] [rbp-B0h]
  __int16 v96; // [rsp+58h] [rbp-B0h]
  int v97; // [rsp+5Ch] [rbp-ACh]
  unsigned int v98; // [rsp+60h] [rbp-A8h]
  unsigned int v99; // [rsp+64h] [rbp-A4h]
  unsigned __int64 v100; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v101; // [rsp+68h] [rbp-A0h]
  __int64 v102; // [rsp+70h] [rbp-98h]
  _WORD *v103; // [rsp+78h] [rbp-90h]
  _WORD *v104; // [rsp+78h] [rbp-90h]
  __int64 v105; // [rsp+80h] [rbp-88h]
  int v106[34]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v107; // [rsp+110h] [rbp+8h]
  int v108; // [rsp+124h] [rbp+1Ch]
  void (__fastcall *v109)(int *, __int64, _DWORD *); // [rsp+148h] [rbp+40h]
  void (__fastcall *v110)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+198h] [rbp+90h]
  __int64 v111; // [rsp+1A0h] [rbp+98h]
  __int64 v112; // [rsp+1B8h] [rbp+B0h]
  __int64 v113; // [rsp+1C0h] [rbp+B8h]
  __int64 v114; // [rsp+1C8h] [rbp+C0h]
  __int64 v115; // [rsp+208h] [rbp+100h]
  __int64 v116; // [rsp+210h] [rbp+108h]
  __int64 v117; // [rsp+220h] [rbp+118h]
  __int64 v118; // [rsp+228h] [rbp+120h]
  __int64 v119; // [rsp+230h] [rbp+128h]
  int v120; // [rsp+238h] [rbp+130h]
  int v121; // [rsp+23Ch] [rbp+134h]
  int v122; // [rsp+240h] [rbp+138h]
  unsigned __int8 *v123; // [rsp+248h] [rbp+140h]
  unsigned __int8 *v124; // [rsp+250h] [rbp+148h]
  unsigned __int8 *v125; // [rsp+258h] [rbp+150h]
  int v126; // [rsp+260h] [rbp+158h]
  char *v127; // [rsp+2A0h] [rbp+198h]
  unsigned __int8 *v128; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int64 v129; // [rsp+2B0h] [rbp+1A8h]
  __int64 v130; // [rsp+2B8h] [rbp+1B0h]
  __int64 v131; // [rsp+2C0h] [rbp+1B8h]
  _BYTE *v132; // [rsp+2C8h] [rbp+1C0h]
  _BYTE *v133; // [rsp+2D0h] [rbp+1C8h]
  int v134; // [rsp+2D8h] [rbp+1D0h]

  if ( *(_WORD *)(*(_QWORD *)(a1 + 312) + 14LL) && !*(_QWORD *)(a1 + 536) )
    return 0LL;
  v2 = 4LL;
  v3 = v106;
  do
  {
    v4 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)v3 = *(_OWORD *)a1;
    v5 = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v3 + 1) = v4;
    v6 = *(_OWORD *)(a1 + 48);
    *((_OWORD *)v3 + 2) = v5;
    v7 = *(_OWORD *)(a1 + 64);
    *((_OWORD *)v3 + 3) = v6;
    v8 = *(_OWORD *)(a1 + 80);
    *((_OWORD *)v3 + 4) = v7;
    v9 = *(_OWORD *)(a1 + 96);
    *((_OWORD *)v3 + 5) = v8;
    v10 = *(_OWORD *)(a1 + 112);
    a1 += 128LL;
    *((_OWORD *)v3 + 6) = v9;
    v3 += 32;
    *((_OWORD *)v3 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v3 = *(_OWORD *)a1;
  v13 = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v3 + 1) = v12;
  v14 = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v3 + 2) = v13;
  v15 = *(_OWORD *)(a1 + 64);
  *((_OWORD *)v3 + 3) = v14;
  *((_OWORD *)v3 + 4) = v15;
  *((_QWORD *)v3 + 10) = v11;
  v16 = v113;
  v17 = *(_DWORD **)(v113 + 32);
  v18 = *(unsigned __int16 *)(v113 + 14);
  v102 = *(_QWORD *)(v113 + 24);
  v19 = (char *)(v17 + 515);
  v97 = 12 * *(_DWORD *)(v112 + 20);
  v20 = v97;
  v21 = v97 + 24;
  v22 = (char *)v17 + v21 + 2048;
  v23 = &v22[v21 + 12];
  v24 = v22 + 12;
  v99 = *(unsigned __int16 *)(v112 + 12) - 1;
  if ( *(_WORD *)(v113 + 14) )
  {
    v25 = v127;
    FixupScan = (unsigned __int8 *)GetFixupScan((__int64)v106, v127);
    SrkYDIB_SrkCX(v112, FixupScan, (__int64)v25);
    v27 = v17;
    v28 = -v18;
    do
    {
      v28 += v18;
      *v27++ = v28;
    }
    while ( v27 < v17 + 256 );
    v29 = (unsigned __int8 *)(v25 + 1);
    v30 = v23;
    do
    {
      *(_DWORD *)v30 = v17[v29[1]];
      v31 = *v29;
      v29 += 3;
      *((_DWORD *)v30 + 1) = v17[v31];
      *((_DWORD *)v30 + 2) = v17[*(v29 - 4)];
      v30 += 12;
    }
    while ( v30 < &v23[v97] );
    v16 = v113;
    v20 = v97;
    if ( !*(_WORD *)(v113 + 10) )
      v106[0] |= 0x20u;
  }
  v32 = *(unsigned __int16 *)(v16 + 12);
  v33 = *(_WORD **)(v16 + 40);
  v98 = 0;
  if ( *(_WORD *)(v16 + 12) )
  {
    v34 = v20;
    v105 = v20;
    do
    {
      v35 = (unsigned __int16)*v33;
      v103 = v33 + 1;
      v36 = v127;
      v100 = (unsigned __int64)&v23[v34];
      v37 = (unsigned __int8 *)GetFixupScan((__int64)v106, v127);
      SrkYDIB_SrkCX(v112, v37, (__int64)v36);
      if ( (v35 & 0x4000) != 0 )
      {
        v38 = v35;
        v39 = v35 & 0x3FFF;
        v40 = v17;
        v41 = -v39;
        v42 = (v38 >> 15) + *(_DWORD *)(v102 + 4) - v39;
        v43 = -v42;
        do
        {
          v41 += v39;
          v43 += v42;
          *v40 = v41;
          v40[256] = v43;
          ++v40;
        }
        while ( v40 < v17 + 256 );
        v44 = (unsigned __int8 *)(v36 + 1);
        v45 = v19;
        v46 = v23 + 4;
        v47 = v19 - v23;
        do
        {
          *(v46 - 1) += v17[v44[1]];
          *v46 += v17[*v44];
          v46[1] += v17[*(v44 - 1)];
          *(_DWORD *)((char *)v46 + v47 - 4) = v17[v44[1] + 256];
          v48 = *v44;
          v44 += 3;
          *(_DWORD *)((char *)v46 + v47) = v17[v48 + 256];
          v46 += 3;
          *(_DWORD *)((char *)v46 + v47 - 8) = v17[*(v44 - 4) + 256];
        }
        while ( (unsigned __int64)(v46 - 1) < v100 );
        v19 = v24;
        --v32;
        v24 = v23;
        v23 = v45;
      }
      else
      {
        v49 = v23 + 8;
        v50 = (unsigned __int8 *)(v36 + 1);
        v51 = v102 + ((v35 >> 5) & 0x400);
        do
        {
          *(v49 - 2) += *(_DWORD *)(v51 + 4LL * v50[1]);
          v52 = *v50;
          v50 += 3;
          *(v49 - 1) += *(_DWORD *)(v51 + 4 * v52);
          *v49 += *(_DWORD *)(v51 + 4LL * *(v50 - 4));
          v49 += 3;
        }
        while ( (unsigned __int64)(v49 - 2) < v100 );
      }
      v33 = v103;
      v34 = v105;
    }
    while ( v32 );
    v16 = v113;
  }
  if ( *(_WORD *)(v16 + 12) == 1 )
    memmove(v19, v24, v97);
  v53 = (unsigned __int16)*v33;
  if ( *v33 )
  {
    v54 = v97;
    do
    {
      v55 = v127;
      v104 = v33 + 1;
      v56 = v23;
      v101 = (unsigned __int64)&v23[v54];
      v57 = (unsigned __int8 *)GetFixupScan((__int64)v106, v127);
      SrkYDIB_SrkCX(v112, v57, (__int64)v55);
      if ( (v53 & 0x4000) != 0 )
      {
        v58 = v53;
        v59 = v53 & 0x3FFF;
        v60 = v17;
        v61 = -v59;
        v62 = (v58 >> 15) + *(_DWORD *)(v102 + 4) - v59;
        v63 = -v62;
        do
        {
          v61 += v59;
          v63 += v62;
          *v60 = v61;
          v60[256] = v63;
          ++v60;
        }
        while ( v60 < v17 + 256 );
        v64 = v19;
        v65 = v24;
        v66 = *(_DWORD *)&v24[v97 - 4];
        *(_QWORD *)&v24[v97] = *(_QWORD *)&v24[v97 - 12];
        *(_DWORD *)&v24[v97 + 8] = v66;
        v67 = v132;
        if ( v99 )
        {
          v56 = v23 + 12;
          v68 = (unsigned __int8)v55[2];
          v65 = v24 + 12;
          v95 = *(_WORD *)v55;
          v55 += 3;
          *(_DWORD *)v23 += v17[v68];
          *((_DWORD *)v23 + 1) += v17[HIBYTE(v95)];
          *((_DWORD *)v23 + 2) += v17[(unsigned __int8)v95];
          *(_DWORD *)v19 = v17[v68 + 256];
          *((_DWORD *)v19 + 1) = v17[HIBYTE(v95) + 256];
          *((_DWORD *)v19 + 2) = v17[(unsigned __int8)v95 + 256];
          v19 += 12;
        }
        else
        {
          v69 = *((_DWORD *)v24 + 2);
          *(_QWORD *)(v24 - 12) = *(_QWORD *)v24;
          *((_DWORD *)v24 - 1) = v69;
        }
        v70 = v65 + 20;
        do
        {
          v71 = *(_WORD *)v55;
          v72 = (unsigned __int8)v55[2];
          v55 += 3;
          *(_DWORD *)v56 += v17[v72];
          *((_DWORD *)v56 + 1) += v17[HIBYTE(v71)];
          *((_DWORD *)v56 + 2) += v17[(unsigned __int8)v71];
          v73 = (unsigned int)((12 * *(v70 - 3) - *(v70 - 6) - *v70 - *((_DWORD *)v56 + 2) - *((_DWORD *)v19 + 2)) >> 16);
          if ( ((12 * *(v70 - 3) - *(v70 - 6) - *v70 - *((_DWORD *)v56 + 2) - *((_DWORD *)v19 + 2)) & 0xFF000000) != 0 )
            v73 = ~BYTE3(v73);
          *v67 = v73;
          v74 = (12 * *(v70 - 4) - *(v70 - 7) - *(v70 - 1) - *((_DWORD *)v19 + 1) - *((_DWORD *)v56 + 1)) >> 16;
          if ( (v74 & 0xFF00) != 0 )
            LOBYTE(v74) = ~HIBYTE(v74);
          v67[1] = v74;
          v75 = (12 * *(v70 - 5) - *(v70 - 8) - *(v70 - 2) - *(_DWORD *)v56 - *(_DWORD *)v19) >> 16;
          if ( (v75 & 0xFF00) != 0 )
            LOBYTE(v75) = ~HIBYTE(v75);
          v56 += 12;
          v67[2] = v75;
          v70 += 3;
          *(_DWORD *)v19 = v17[v72 + 256];
          *((_DWORD *)v19 + 1) = v17[HIBYTE(v71) + 256];
          *((_DWORD *)v19 + 2) = v17[(unsigned __int8)v71 + 256];
          v19 += 12;
          v67 += v134;
        }
        while ( v67 != v133 );
        if ( (unsigned __int64)v56 < v101 )
        {
          v73 = (unsigned __int8)v55[2];
          v96 = *(_WORD *)v55;
          v76 = (unsigned __int8)HIBYTE(*(_WORD *)v55);
          *(_DWORD *)v56 += v17[v73];
          *((_DWORD *)v56 + 1) += v17[v76];
          *((_DWORD *)v56 + 2) += v17[(unsigned __int8)v96];
          *(_DWORD *)v19 = v17[v73 + 256];
          *((_DWORD *)v19 + 1) = v17[HIBYTE(v96) + 256];
          *((_DWORD *)v19 + 2) = v17[(unsigned __int8)v96 + 256];
        }
        v77 = v106[0];
        v19 = v24;
        v24 = v23;
        v23 = v64;
        if ( SLOBYTE(v106[0]) < 0 )
        {
          v109(v106, v73, v70);
          v77 = v106[0];
        }
        if ( (v77 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v106);
          LOBYTE(v77) = v106[0];
        }
        if ( (v77 & 0x10) != 0 )
        {
          MappingBGRF(v128, v129, v116, v123);
          v78 = &v123[v126];
          if ( v78 == v124 )
            v78 = v125;
          v123 = v78;
        }
        v110(v106, v130, v131, v107, v115, v117, v117 + v121, v122, v111);
        v79 = v120 + v117;
        if ( v79 == v118 )
          v79 = v119;
        v107 += v108;
        ++v98;
        v117 = v79;
      }
      else
      {
        v80 = v23 + 8;
        v81 = (unsigned __int8 *)(v55 + 1);
        v82 = v102 + ((v53 >> 5) & 0x400);
        do
        {
          *(v80 - 2) += *(_DWORD *)(v82 + 4LL * v81[1]);
          v83 = *v81;
          v81 += 3;
          *(v80 - 1) += *(_DWORD *)(v82 + 4 * v83);
          *v80 += *(_DWORD *)(v82 + 4LL * *(v81 - 4));
          v80 += 3;
        }
        while ( (unsigned __int64)(v80 - 2) < v101 );
      }
      v33 = v104;
      v54 = v97;
      v53 = (unsigned __int16)*v104;
    }
    while ( *v104 );
  }
  if ( v107 == v114 )
    return v98;
  v84 = *(_DWORD *)&v24[v97 - 4];
  *(_QWORD *)&v24[v97] = *(_QWORD *)&v24[v97 - 12];
  *(_DWORD *)&v24[v97 + 8] = v84;
  v85 = *((_DWORD *)v24 + 2);
  v86 = v132;
  *(_QWORD *)(v24 - 12) = *(_QWORD *)v24;
  *((_DWORD *)v24 - 1) = v85;
  v87 = &v24[12 * v99];
  v88 = &v19[12 * v99 + 4];
  v89 = v24 - v19;
  do
  {
    v90 = (11 * *(_DWORD *)&v88[v89 + 4] - *(_DWORD *)&v88[v89 - 8] - *(_DWORD *)&v88[v89 + 16] - *((_DWORD *)v88 + 1)) >> 16;
    if ( (v90 & 0xFF00) != 0 )
      LOBYTE(v90) = ~HIBYTE(v90);
    *v86 = v90;
    v91 = (11 * *(_DWORD *)&v88[v89] - *(_DWORD *)&v88[v89 - 12] - *(_DWORD *)&v88[v89 + 12] - *(_DWORD *)v88) >> 16;
    if ( (v91 & 0xFF00) != 0 )
      LOBYTE(v91) = ~HIBYTE(v91);
    v86[1] = v91;
    v92 = (11 * *(_DWORD *)v87 - *(_DWORD *)&v88[v89 + 8] - *(_DWORD *)&v88[v89 - 16] - *((_DWORD *)v88 - 1)) >> 16;
    if ( (v92 & 0xFF00) != 0 )
      LOBYTE(v92) = ~HIBYTE(v92);
    v86[2] = v92;
    v87 += 12;
    v88 += 12;
    v86 += v134;
  }
  while ( v86 != v133 );
  v93 = v106[0];
  if ( SLOBYTE(v106[0]) < 0 )
  {
    ((void (__fastcall *)(int *, _BYTE *, char *, __int64))v109)(v106, v86, v87, 65280LL);
    v93 = v106[0];
  }
  if ( (v93 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v106);
    LOBYTE(v93) = v106[0];
  }
  if ( (v93 & 0x10) != 0 )
  {
    MappingBGRF(v128, v129, v116, v123);
    v94 = &v123[v126];
    if ( v94 == v124 )
      v94 = v125;
    v123 = v94;
  }
  v110(v106, v130, v131, v107, v115, v117, v117 + v121, v122, v111);
  return v98 + 1;
}
