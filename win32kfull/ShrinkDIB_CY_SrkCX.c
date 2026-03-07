__int64 __fastcall ShrinkDIB_CY_SrkCX(__int64 a1)
{
  __int64 v3; // rax
  int *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // r8
  _DWORD *v18; // rsi
  int v19; // r12d
  char *v20; // rdi
  int v21; // r13d
  __int64 v22; // rcx
  char *v23; // rax
  char *v24; // r15
  _DWORD *v25; // rbx
  char *v26; // r14
  unsigned __int8 *FixupScan; // rax
  int v28; // eax
  int *v29; // rcx
  unsigned __int8 *v30; // r8
  char *v31; // rdx
  __int64 v32; // rax
  int v33; // r12d
  unsigned __int16 *v34; // rcx
  size_t v35; // rax
  unsigned int v36; // r14d
  char *v37; // r13
  unsigned __int8 *v38; // rax
  unsigned int v39; // ecx
  int v40; // r14d
  int *v41; // rdx
  int v42; // r8d
  int v43; // r9d
  int v44; // eax
  unsigned __int8 *v45; // r8
  char *v46; // r9
  _DWORD *v47; // rdx
  signed __int64 v48; // rdi
  __int64 v49; // rax
  _DWORD *v50; // r8
  unsigned __int8 *v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rax
  size_t v54; // r12
  unsigned __int16 *v55; // rax
  unsigned int v56; // r14d
  char *v57; // r13
  unsigned __int8 *v58; // rax
  unsigned int v59; // ecx
  int v60; // r14d
  int *v61; // rdx
  int v62; // r8d
  int v63; // r9d
  int v64; // eax
  char *v65; // r14
  _DWORD *v66; // r8
  int v67; // eax
  char *v68; // r9
  _BYTE *v69; // r10
  __int64 v70; // rdx
  int v71; // eax
  _DWORD *v72; // r8
  __int16 v73; // ax
  __int64 v74; // r11
  int v75; // edx
  __int64 v76; // rdx
  int v77; // ecx
  int v78; // ecx
  __int64 v79; // rax
  __int16 v80; // ax
  unsigned __int8 *v81; // rax
  __int64 v82; // rcx
  _DWORD *v83; // r8
  __int64 v84; // rdx
  unsigned __int8 *v85; // r9
  __int64 v86; // rax
  int v87; // eax
  int v88; // eax
  _BYTE *v89; // rdx
  _DWORD *v90; // r8
  char *v91; // rcx
  signed __int64 v92; // rbx
  int v93; // eax
  int v94; // eax
  int v95; // eax
  __int16 v96; // ax
  unsigned __int8 *v97; // rax
  __int16 v98; // [rsp+58h] [rbp-B0h]
  __int16 v99; // [rsp+58h] [rbp-B0h]
  unsigned int v100; // [rsp+5Ch] [rbp-ACh]
  size_t Size; // [rsp+60h] [rbp-A8h]
  char *Sizea; // [rsp+60h] [rbp-A8h]
  unsigned int v103; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v104; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v105; // [rsp+70h] [rbp-98h]
  __int64 v106; // [rsp+78h] [rbp-90h]
  unsigned __int64 v107; // [rsp+80h] [rbp-88h]
  int v108[34]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v109; // [rsp+110h] [rbp+8h]
  int v110; // [rsp+124h] [rbp+1Ch]
  void (__fastcall *v111)(int *, __int64, _DWORD *, char *); // [rsp+148h] [rbp+40h]
  void (__fastcall *v112)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+198h] [rbp+90h]
  __int64 v113; // [rsp+1A0h] [rbp+98h]
  __int64 v114; // [rsp+1B8h] [rbp+B0h]
  __int64 v115; // [rsp+1C0h] [rbp+B8h]
  __int64 v116; // [rsp+1C8h] [rbp+C0h]
  __int64 v117; // [rsp+208h] [rbp+100h]
  __int64 v118; // [rsp+210h] [rbp+108h]
  __int64 v119; // [rsp+220h] [rbp+118h]
  __int64 v120; // [rsp+228h] [rbp+120h]
  __int64 v121; // [rsp+230h] [rbp+128h]
  int v122; // [rsp+238h] [rbp+130h]
  int v123; // [rsp+23Ch] [rbp+134h]
  int v124; // [rsp+240h] [rbp+138h]
  unsigned __int8 *v125; // [rsp+248h] [rbp+140h]
  unsigned __int8 *v126; // [rsp+250h] [rbp+148h]
  unsigned __int8 *v127; // [rsp+258h] [rbp+150h]
  int v128; // [rsp+260h] [rbp+158h]
  char *v129; // [rsp+2A0h] [rbp+198h]
  unsigned __int8 *v130; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int64 v131; // [rsp+2B0h] [rbp+1A8h]
  __int64 v132; // [rsp+2B8h] [rbp+1B0h]
  __int64 v133; // [rsp+2C0h] [rbp+1B8h]
  _BYTE *v134; // [rsp+2C8h] [rbp+1C0h]
  _BYTE *v135; // [rsp+2D0h] [rbp+1C8h]
  int v136; // [rsp+2D8h] [rbp+1D0h]

  memset_0(v108, 0, 0x258uLL);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 312) + 14LL) && !*(_QWORD *)(a1 + 536) )
    return 0LL;
  v3 = 4LL;
  v4 = v108;
  do
  {
    v5 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)v4 = *(_OWORD *)a1;
    v6 = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v4 + 1) = v5;
    v7 = *(_OWORD *)(a1 + 48);
    *((_OWORD *)v4 + 2) = v6;
    v8 = *(_OWORD *)(a1 + 64);
    *((_OWORD *)v4 + 3) = v7;
    v9 = *(_OWORD *)(a1 + 80);
    *((_OWORD *)v4 + 4) = v8;
    v10 = *(_OWORD *)(a1 + 96);
    *((_OWORD *)v4 + 5) = v9;
    v11 = *(_OWORD *)(a1 + 112);
    a1 += 128LL;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *(_QWORD *)(a1 + 80);
  v13 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v4 = *(_OWORD *)a1;
  v14 = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v4 + 1) = v13;
  v15 = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v4 + 2) = v14;
  v16 = *(_OWORD *)(a1 + 64);
  *((_OWORD *)v4 + 3) = v15;
  *((_OWORD *)v4 + 4) = v16;
  *((_QWORD *)v4 + 10) = v12;
  v17 = v115;
  v18 = *(_DWORD **)(v115 + 32);
  v19 = *(unsigned __int16 *)(v115 + 14);
  v106 = *(_QWORD *)(v115 + 24);
  v20 = (char *)(v18 + 515);
  v21 = 12 * *(_DWORD *)(v114 + 20);
  v22 = v21 + 24;
  v23 = (char *)v18 + v22 + 2048;
  v24 = &v23[v22 + 12];
  v25 = v23 + 12;
  v103 = *(unsigned __int16 *)(v114 + 12) - 1;
  if ( *(_WORD *)(v115 + 14) )
  {
    v26 = v129;
    FixupScan = (unsigned __int8 *)GetFixupScan((__int64)v108, v129);
    SrkYDIB_SrkCX(v114, FixupScan, (__int64)v26);
    v28 = -v19;
    v29 = v18;
    do
    {
      v28 += v19;
      *v29++ = v28;
    }
    while ( v29 < v18 + 256 );
    v30 = (unsigned __int8 *)(v26 + 1);
    v31 = v24;
    do
    {
      *(_DWORD *)v31 = v18[v30[1]];
      v32 = *v30;
      v30 += 3;
      *((_DWORD *)v31 + 1) = v18[v32];
      *((_DWORD *)v31 + 2) = v18[*(v30 - 4)];
      v31 += 12;
    }
    while ( v31 < &v24[v21] );
    v17 = v115;
    if ( !*(_WORD *)(v115 + 10) )
      v108[0] |= 0x20u;
  }
  v33 = *(unsigned __int16 *)(v17 + 12);
  v34 = *(unsigned __int16 **)(v17 + 40);
  v35 = v21;
  v104 = v34;
  v100 = 0;
  Size = v21;
  if ( *(_WORD *)(v17 + 12) )
  {
    do
    {
      v36 = *v34;
      v37 = v129;
      v104 = v34 + 1;
      v107 = (unsigned __int64)&v24[v35];
      v38 = (unsigned __int8 *)GetFixupScan((__int64)v108, v129);
      SrkYDIB_SrkCX(v114, v38, (__int64)v37);
      if ( (v36 & 0x4000) != 0 )
      {
        v39 = v36;
        v40 = v36 & 0x3FFF;
        v41 = v18;
        v42 = -v40;
        v43 = (v39 >> 15) + *(_DWORD *)(v106 + 4) - v40;
        v44 = -v43;
        do
        {
          v42 += v40;
          v44 += v43;
          *v41 = v42;
          v41[256] = v44;
          ++v41;
        }
        while ( v41 < v18 + 256 );
        v45 = (unsigned __int8 *)(v37 + 1);
        v46 = v20;
        v47 = v24 + 4;
        v48 = v20 - v24;
        do
        {
          *(v47 - 1) += v18[v45[1]];
          *v47 += v18[*v45];
          v47[1] += v18[*(v45 - 1)];
          *(_DWORD *)((char *)v47 + v48 - 4) = v18[v45[1] + 256];
          v49 = *v45;
          v45 += 3;
          *(_DWORD *)((char *)v47 + v48) = v18[v49 + 256];
          v47 += 3;
          *(_DWORD *)((char *)v47 + v48 - 8) = v18[*(v45 - 4) + 256];
        }
        while ( (unsigned __int64)(v47 - 1) < v107 );
        v20 = (char *)v25;
        --v33;
        v25 = v24;
        v24 = v46;
      }
      else
      {
        v50 = v24 + 8;
        v51 = (unsigned __int8 *)(v37 + 1);
        v52 = v106 + ((v36 >> 5) & 0x400);
        do
        {
          *(v50 - 2) += *(_DWORD *)(v52 + 4LL * v51[1]);
          v53 = *v51;
          v51 += 3;
          *(v50 - 1) += *(_DWORD *)(v52 + 4 * v53);
          *v50 += *(_DWORD *)(v52 + 4LL * *(v51 - 4));
          v50 += 3;
        }
        while ( (unsigned __int64)(v50 - 2) < v107 );
      }
      v35 = Size;
      v34 = v104;
    }
    while ( v33 );
    v17 = v115;
  }
  v54 = Size;
  if ( *(_WORD *)(v17 + 12) == 1 )
    memmove(v20, v25, Size);
  v55 = v104;
  v56 = *v104;
  if ( *v104 )
  {
    do
    {
      v105 = v55 + 1;
      v57 = v24;
      Sizea = v129;
      v58 = (unsigned __int8 *)GetFixupScan((__int64)v108, v129);
      SrkYDIB_SrkCX(v114, v58, (__int64)Sizea);
      if ( (v56 & 0x4000) != 0 )
      {
        v59 = v56;
        v60 = v56 & 0x3FFF;
        v61 = v18;
        v62 = -v60;
        v63 = (v59 >> 15) + *(_DWORD *)(v106 + 4) - v60;
        v64 = -v63;
        do
        {
          v62 += v60;
          v64 += v63;
          *v61 = v62;
          v61[256] = v64;
          ++v61;
        }
        while ( v61 < v18 + 256 );
        v65 = v20;
        v66 = v25;
        v67 = *(_DWORD *)((char *)v25 + v54 - 4);
        v68 = Sizea;
        *(_QWORD *)((char *)v25 + v54) = *(_QWORD *)((char *)v25 + v54 - 12);
        *(_DWORD *)((char *)v25 + v54 + 8) = v67;
        v69 = v134;
        if ( v103 )
        {
          v57 = v24 + 12;
          v70 = (unsigned __int8)Sizea[2];
          v66 = v25 + 3;
          v98 = *(_WORD *)Sizea;
          v68 = Sizea + 3;
          *(_DWORD *)v24 += v18[v70];
          *((_DWORD *)v24 + 1) += v18[HIBYTE(v98)];
          *((_DWORD *)v24 + 2) += v18[(unsigned __int8)v98];
          *(_DWORD *)v20 = v18[v70 + 256];
          *((_DWORD *)v20 + 1) = v18[HIBYTE(v98) + 256];
          *((_DWORD *)v20 + 2) = v18[(unsigned __int8)v98 + 256];
          v20 += 12;
        }
        else
        {
          v71 = v25[2];
          *(_QWORD *)(v25 - 3) = *(_QWORD *)v25;
          *(v25 - 1) = v71;
        }
        v72 = v66 + 5;
        do
        {
          v73 = *(_WORD *)v68;
          v74 = (unsigned __int8)v68[2];
          v68 += 3;
          *(_DWORD *)v57 += v18[v74];
          *((_DWORD *)v57 + 1) += v18[HIBYTE(v73)];
          *((_DWORD *)v57 + 2) += v18[(unsigned __int8)v73];
          v75 = (12 * *(v72 - 3) - *(v72 - 6) - *v72 - *((_DWORD *)v57 + 2) - *((_DWORD *)v20 + 2)) >> 16;
          if ( (v75 & 0xFF00) != 0 )
            LOBYTE(v75) = ~HIBYTE(v75);
          *v69 = v75;
          v76 = 65280LL;
          v77 = (12 * *(v72 - 4) - *(v72 - 7) - *(v72 - 1) - *((_DWORD *)v57 + 1) - *((_DWORD *)v20 + 1)) >> 16;
          if ( (v77 & 0xFF00) != 0 )
            LOBYTE(v77) = ~HIBYTE(v77);
          v69[1] = v77;
          v78 = (12 * *(v72 - 5) - *(v72 - 8) - *(v72 - 2) - *(_DWORD *)v57 - *(_DWORD *)v20) >> 16;
          if ( (v78 & 0xFF00) != 0 )
            LOBYTE(v78) = ~HIBYTE(v78);
          v57 += 12;
          v69[2] = v78;
          v72 += 3;
          *(_DWORD *)v20 = v18[v74 + 256];
          *((_DWORD *)v20 + 1) = v18[HIBYTE(v73) + 256];
          *((_DWORD *)v20 + 2) = v18[(unsigned __int8)v73 + 256];
          v20 += 12;
          v69 += v136;
        }
        while ( v69 != v135 );
        if ( v57 < &v24[v54] )
        {
          v76 = (unsigned __int8)v68[2];
          v99 = *(_WORD *)v68;
          v79 = (unsigned __int8)HIBYTE(*(_WORD *)v68);
          *(_DWORD *)v57 += v18[v76];
          *((_DWORD *)v57 + 1) += v18[v79];
          *((_DWORD *)v57 + 2) += v18[(unsigned __int8)v99];
          *(_DWORD *)v20 = v18[v76 + 256];
          *((_DWORD *)v20 + 1) = v18[HIBYTE(v99) + 256];
          *((_DWORD *)v20 + 2) = v18[(unsigned __int8)v99 + 256];
        }
        v80 = v108[0];
        v20 = (char *)v25;
        v25 = v24;
        v24 = v65;
        if ( SLOBYTE(v108[0]) < 0 )
        {
          v111(v108, v76, v72, v68);
          v80 = v108[0];
        }
        if ( (v80 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v108);
          LOBYTE(v80) = v108[0];
        }
        if ( (v80 & 0x10) != 0 )
        {
          MappingBGRF(v130, v131, v118, v125);
          v81 = &v125[v128];
          if ( v81 == v126 )
            v81 = v127;
          v125 = v81;
        }
        v112(v108, v132, v133, v109, v117, v119, v119 + v123, v124, v113);
        v82 = v122 + v119;
        if ( v82 == v120 )
          v82 = v121;
        v109 += v110;
        ++v100;
        v119 = v82;
      }
      else
      {
        v83 = v24 + 8;
        v84 = v106 + ((v56 >> 5) & 0x400);
        v85 = (unsigned __int8 *)(Sizea + 1);
        do
        {
          *(v83 - 2) += *(_DWORD *)(v84 + 4LL * v85[1]);
          v86 = *v85;
          v85 += 3;
          *(v83 - 1) += *(_DWORD *)(v84 + 4 * v86);
          *v83 += *(_DWORD *)(v84 + 4LL * *(v85 - 4));
          v83 += 3;
        }
        while ( v83 - 2 < (_DWORD *)&v24[v54] );
      }
      v55 = v105;
      v56 = *v105;
    }
    while ( *v105 );
  }
  if ( v109 == v116 )
    return v100;
  v87 = *(_DWORD *)((char *)v25 + v54 - 4);
  *(_QWORD *)((char *)v25 + v54) = *(_QWORD *)((char *)v25 + v54 - 12);
  *(_DWORD *)((char *)v25 + v54 + 8) = v87;
  v88 = v25[2];
  v89 = v134;
  *(_QWORD *)(v25 - 3) = *(_QWORD *)v25;
  *(v25 - 1) = v88;
  v90 = &v25[3 * v103];
  v91 = &v20[12 * v103 + 4];
  v92 = (char *)v25 - v20;
  do
  {
    v93 = (11 * *(_DWORD *)&v91[v92 + 4] - *(_DWORD *)&v91[v92 - 8] - *(_DWORD *)&v91[v92 + 16] - *((_DWORD *)v91 + 1)) >> 16;
    if ( (v93 & 0xFF00) != 0 )
      LOBYTE(v93) = ~HIBYTE(v93);
    *v89 = v93;
    v94 = (11 * *(_DWORD *)&v91[v92] - *(_DWORD *)&v91[v92 - 12] - *(_DWORD *)&v91[v92 + 12] - *(_DWORD *)v91) >> 16;
    if ( (v94 & 0xFF00) != 0 )
      LOBYTE(v94) = ~HIBYTE(v94);
    v89[1] = v94;
    v95 = (11 * *v90 - *(_DWORD *)&v91[v92 + 8] - *(_DWORD *)&v91[v92 - 16] - *((_DWORD *)v91 - 1)) >> 16;
    if ( (v95 & 0xFF00) != 0 )
      LOBYTE(v95) = ~HIBYTE(v95);
    v89[2] = v95;
    v90 += 3;
    v91 += 12;
    v89 += v136;
  }
  while ( v89 != v135 );
  v96 = v108[0];
  if ( SLOBYTE(v108[0]) < 0 )
  {
    v111(v108, (__int64)v89, v90, (char *)65280);
    v96 = v108[0];
  }
  if ( (v96 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v108);
    LOBYTE(v96) = v108[0];
  }
  if ( (v96 & 0x10) != 0 )
  {
    MappingBGRF(v130, v131, v118, v125);
    v97 = &v125[v128];
    if ( v97 == v126 )
      v97 = v127;
    v125 = v97;
  }
  v112(v108, v132, v133, v109, v117, v119, v119 + v123, v124, v113);
  return v100 + 1;
}
