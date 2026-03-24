/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C00012D0
 * Callers:
 *     <none>
 * Callees:
 *     SrkYDIB_SrkCX @ 0x1C0001CB0 (SrkYDIB_SrkCX.c)
 *     GetFixupScan @ 0x1C00C7690 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0266540 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C026B6C4 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY_SrkCX(__int128 *a1)
{
  char *v1; // rdx
  __int64 v2; // rax
  __int128 v3; // xmm0
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
  int v18; // edi
  unsigned __int64 v19; // r13
  char *v20; // rbx
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // r9d
  char *v24; // rax
  char *v25; // r10
  char *v26; // r15
  __int16 *v27; // r14
  __int64 FixupScan; // rax
  int *v29; // rax
  int v30; // ecx
  __int64 v31; // r8
  _DWORD *v32; // rdx
  __int64 v33; // rax
  int v34; // r12d
  _WORD *v35; // rcx
  __int64 v36; // r13
  unsigned int v37; // edi
  unsigned __int64 v38; // r14
  __int16 *v39; // r15
  __int64 v40; // rax
  unsigned int v41; // ecx
  int v42; // edi
  int *v43; // rdx
  int v44; // r8d
  int v45; // r9d
  int v46; // eax
  __int64 v47; // r8
  signed __int64 v48; // rbx
  _DWORD *v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // r14d
  char *v52; // r15
  __int64 v53; // rax
  unsigned __int64 v54; // r12
  char *v55; // rdi
  __int16 *v56; // r15
  __int64 v57; // rax
  unsigned int v58; // ecx
  int v59; // r14d
  int *v60; // rdx
  int v61; // r8d
  int v62; // r9d
  int v63; // eax
  char *v64; // rdx
  int v65; // eax
  _BYTE *v66; // r10
  int v67; // eax
  unsigned __int64 v68; // rdx
  unsigned __int16 v69; // ax
  __int64 v70; // r9
  __int64 v71; // r11
  __int64 v72; // r14
  unsigned int v73; // r8d
  int v74; // ecx
  int v75; // eax
  __int16 v76; // ax
  unsigned __int16 v78; // ax
  __int64 v79; // r9
  __int64 v80; // r9
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r9
  _DWORD *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // r9
  _DWORD *v88; // rdx
  __int64 v89; // rax
  char *v90; // rcx
  int v91; // eax
  int v92; // eax
  _BYTE *v93; // rdx
  char *v94; // r8
  char *v95; // rcx
  signed __int64 v96; // r9
  int v97; // eax
  int v98; // eax
  int v99; // eax
  __int16 v100; // ax
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // [rsp+54h] [rbp-ACh]
  _DWORD *v104; // [rsp+58h] [rbp-A8h]
  unsigned int v105; // [rsp+60h] [rbp-A0h]
  char *v106; // [rsp+68h] [rbp-98h]
  _WORD *v107; // [rsp+70h] [rbp-90h]
  _WORD *v108; // [rsp+70h] [rbp-90h]
  unsigned int v109; // [rsp+78h] [rbp-88h]
  __int64 v110; // [rsp+80h] [rbp-80h]
  char *v111; // [rsp+90h] [rbp-70h]
  char v112[136]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v113; // [rsp+128h] [rbp+28h]
  int v114; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v115)(char *, unsigned __int64); // [rsp+160h] [rbp+60h]
  void (__fastcall *v116)(char *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v117; // [rsp+1B8h] [rbp+B8h]
  __int64 v118; // [rsp+1D0h] [rbp+D0h]
  __int64 v119; // [rsp+1D8h] [rbp+D8h]
  __int64 v120; // [rsp+1E0h] [rbp+E0h]
  __int64 v121; // [rsp+220h] [rbp+120h]
  __int64 v122; // [rsp+228h] [rbp+128h]
  __int64 v123; // [rsp+238h] [rbp+138h]
  __int64 v124; // [rsp+240h] [rbp+140h]
  __int64 v125; // [rsp+248h] [rbp+148h]
  int v126; // [rsp+250h] [rbp+150h]
  int v127; // [rsp+254h] [rbp+154h]
  int v128; // [rsp+258h] [rbp+158h]
  __int64 v129; // [rsp+260h] [rbp+160h]
  __int64 v130; // [rsp+268h] [rbp+168h]
  __int64 v131; // [rsp+270h] [rbp+170h]
  int v132; // [rsp+278h] [rbp+178h]
  __int16 *v133; // [rsp+2B8h] [rbp+1B8h]
  __int64 v134; // [rsp+2C0h] [rbp+1C0h]
  __int64 v135; // [rsp+2C8h] [rbp+1C8h]
  __int64 v136; // [rsp+2D0h] [rbp+1D0h]
  __int64 v137; // [rsp+2D8h] [rbp+1D8h]
  _BYTE *v138; // [rsp+2E0h] [rbp+1E0h]
  _BYTE *v139; // [rsp+2E8h] [rbp+1E8h]
  int v140; // [rsp+2F0h] [rbp+1F0h]

  if ( *(_WORD *)(*((_QWORD *)a1 + 39) + 14LL) && !*((_QWORD *)a1 + 67) )
    return 0LL;
  v1 = v112;
  v2 = 4LL;
  do
  {
    v1 += 128;
    v3 = *a1;
    v4 = a1[1];
    a1 += 8;
    *((_OWORD *)v1 - 8) = v3;
    v5 = *(a1 - 6);
    *((_OWORD *)v1 - 7) = v4;
    v6 = *(a1 - 5);
    *((_OWORD *)v1 - 6) = v5;
    v7 = *(a1 - 4);
    *((_OWORD *)v1 - 5) = v6;
    v8 = *(a1 - 3);
    *((_OWORD *)v1 - 4) = v7;
    v9 = *(a1 - 2);
    *((_OWORD *)v1 - 3) = v8;
    v10 = *(a1 - 1);
    *((_OWORD *)v1 - 2) = v9;
    *((_OWORD *)v1 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *((_QWORD *)a1 + 10);
  v12 = a1[1];
  *(_OWORD *)v1 = *a1;
  v13 = a1[2];
  *((_OWORD *)v1 + 1) = v12;
  v14 = a1[3];
  *((_OWORD *)v1 + 2) = v13;
  v15 = a1[4];
  *((_OWORD *)v1 + 3) = v14;
  *((_OWORD *)v1 + 4) = v15;
  *((_QWORD *)v1 + 10) = v11;
  v16 = v119;
  v17 = *(_DWORD **)(v119 + 32);
  v18 = *(unsigned __int16 *)(v119 + 14);
  v110 = *(_QWORD *)(v119 + 24);
  v19 = (unsigned __int64)(v17 + 256);
  v20 = (char *)(v17 + 515);
  v21 = 12 * (*(_DWORD *)(v118 + 20) + 2);
  v22 = v21;
  v23 = v21 - 24;
  v24 = (char *)v17 + v22 + 2048;
  v103 = v23;
  v25 = &v24[v22 + 12];
  v26 = v24 + 12;
  v106 = v24 + 12;
  v104 = v25;
  v109 = *(unsigned __int16 *)(v118 + 12) - 1;
  if ( *(_WORD *)(v119 + 14) )
  {
    v27 = v133;
    FixupScan = GetFixupScan(v112, v133);
    SrkYDIB_SrkCX(v118, FixupScan, v27);
    v29 = v17;
    v30 = -v18;
    do
    {
      v30 += v18;
      *v29++ = v30;
    }
    while ( (unsigned __int64)v29 < v19 );
    v25 = (char *)v104;
    v31 = (__int64)v27 + 1;
    v32 = v104;
    do
    {
      v33 = *(unsigned __int8 *)(v31 + 1);
      v31 += 3LL;
      *v32 = v17[v33];
      v32[1] = v17[*(unsigned __int8 *)(v31 - 3)];
      v32[2] = v17[*(unsigned __int8 *)(v31 - 4)];
      v32 += 3;
    }
    while ( v32 < (_DWORD *)((char *)v104 + v103) );
    v16 = v119;
    v23 = v103;
    if ( !*(_WORD *)(v119 + 10) )
      *(_DWORD *)v112 |= 0x20u;
  }
  v34 = *(unsigned __int16 *)(v16 + 12);
  v35 = *(_WORD **)(v16 + 40);
  v107 = v35;
  v105 = 0;
  if ( *(_WORD *)(v16 + 12) )
  {
    v36 = v23;
    do
    {
      v37 = (unsigned __int16)*v35;
      v38 = (unsigned __int64)&v25[v36];
      v39 = v133;
      v107 = v35 + 1;
      v40 = GetFixupScan(v112, v133);
      SrkYDIB_SrkCX(v118, v40, v39);
      if ( (v37 & 0x4000) != 0 )
      {
        v41 = v37;
        v42 = v37 & 0x3FFF;
        v43 = v17;
        v44 = -v42;
        v45 = (v41 >> 15) + *(_DWORD *)(v110 + 4) - v42;
        v46 = -v45;
        do
        {
          v44 += v42;
          v46 += v45;
          *v43 = v44;
          v43[256] = v46;
          ++v43;
        }
        while ( v43 < v17 + 256 );
        v47 = (__int64)v39 + 1;
        v25 = v20;
        v48 = v20 - (char *)v104;
        v49 = v104 + 1;
        do
        {
          v50 = *(unsigned __int8 *)(v47 + 1);
          v49 += 3;
          v47 += 3LL;
          *(v49 - 4) += v17[v50];
          *(v49 - 3) += v17[*(unsigned __int8 *)(v47 - 3)];
          *(v49 - 2) += v17[*(unsigned __int8 *)(v47 - 4)];
          *(_DWORD *)((char *)v49 + v48 - 16) = v17[*(unsigned __int8 *)(v47 - 2) + 256];
          *(_DWORD *)((char *)v49 + v48 - 12) = v17[*(unsigned __int8 *)(v47 - 3) + 256];
          *(_DWORD *)((char *)v49 + v48 - 8) = v17[*(unsigned __int8 *)(v47 - 4) + 256];
        }
        while ( (unsigned __int64)(v49 - 1) < v38 );
        v20 = v106;
        v26 = (char *)v104;
        v106 = (char *)v104;
        --v34;
        v104 = v25;
      }
      else
      {
        v25 = (char *)v104;
        v86 = (__int64)v39 + 1;
        v87 = v110 + ((v37 >> 5) & 0x400);
        v88 = v104 + 2;
        do
        {
          v89 = *(unsigned __int8 *)(v86 + 1);
          v88 += 3;
          v86 += 3LL;
          *(v88 - 5) += *(_DWORD *)(v87 + 4 * v89);
          *(v88 - 4) += *(_DWORD *)(v87 + 4LL * *(unsigned __int8 *)(v86 - 3));
          *(v88 - 3) += *(_DWORD *)(v87 + 4LL * *(unsigned __int8 *)(v86 - 4));
        }
        while ( (unsigned __int64)(v88 - 2) < v38 );
        v26 = v106;
      }
      v35 = v107;
    }
    while ( v34 );
    v16 = v119;
    v19 = (unsigned __int64)(v17 + 256);
  }
  if ( *(_WORD *)(v16 + 12) == 1 )
  {
    memmove(v20, v26, v103);
    v35 = v107;
  }
  v51 = (unsigned __int16)*v35;
  if ( *v35 )
  {
    v52 = (char *)v104;
    v53 = v103;
    do
    {
      v54 = (unsigned __int64)&v52[v53];
      v108 = v35 + 1;
      v55 = v52;
      v56 = v133;
      v57 = GetFixupScan(v112, v133);
      SrkYDIB_SrkCX(v118, v57, v56);
      if ( (v51 & 0x4000) != 0 )
      {
        v58 = v51;
        v59 = v51 & 0x3FFF;
        v60 = v17;
        v61 = -v59;
        v62 = (v58 >> 15) + *(_DWORD *)(v110 + 4) - v59;
        v63 = -v62;
        do
        {
          v61 += v59;
          v63 += v62;
          *v60 = v61;
          v60[256] = v63;
          ++v60;
        }
        while ( (unsigned __int64)v60 < v19 );
        v64 = v106;
        v111 = v20;
        v65 = *(_DWORD *)&v106[v103 - 4];
        *(_QWORD *)&v106[v103] = *(_QWORD *)&v106[v103 - 12];
        *(_DWORD *)&v106[v103 + 8] = v65;
        v66 = v138;
        if ( v109 )
        {
          v78 = *v56;
          v79 = *((unsigned __int8 *)v56 + 2);
          v56 = (__int16 *)((char *)v56 + 3);
          *v104 += v17[v79];
          v104[1] += v17[HIBYTE(v78)];
          v104[2] += v17[(unsigned __int8)v78];
          v55 = (char *)(v104 + 3);
          *(_DWORD *)v20 = v17[v79 + 256];
          *((_DWORD *)v20 + 1) = v17[HIBYTE(v78) + 256];
          v64 = v106 + 12;
          *((_DWORD *)v20 + 2) = v17[(unsigned __int8)v78 + 256];
          v20 += 12;
        }
        else
        {
          v67 = *((_DWORD *)v106 + 2);
          *(_QWORD *)(v106 - 12) = *(_QWORD *)v106;
          *((_DWORD *)v106 - 1) = v67;
        }
        v68 = (unsigned __int64)(v64 + 20);
        do
        {
          v69 = *v56;
          v70 = *((unsigned __int8 *)v56 + 2);
          v56 = (__int16 *)((char *)v56 + 3);
          v71 = HIBYTE(v69);
          v72 = (unsigned __int8)v69;
          *(_DWORD *)v55 += v17[v70];
          *((_DWORD *)v55 + 1) += v17[HIBYTE(v69)];
          *((_DWORD *)v55 + 2) += v17[(unsigned __int8)v69];
          v73 = (12 * *(_DWORD *)(v68 - 12)
               - *(_DWORD *)(v68 - 24)
               - *(_DWORD *)v68
               - *((_DWORD *)v55 + 2)
               - *((_DWORD *)v20 + 2)) >> 16;
          if ( (v73 & 0xFF00) != 0 )
            v73 = ~HIBYTE(v73);
          *v66 = v73;
          v74 = (12 * *(_DWORD *)(v68 - 16)
               - *(_DWORD *)(v68 - 28)
               - *(_DWORD *)(v68 - 4)
               - *((_DWORD *)v20 + 1)
               - *((_DWORD *)v55 + 1)) >> 16;
          if ( (v74 & 0xFF00) != 0 )
            LOBYTE(v74) = ~HIBYTE(v74);
          v66[1] = v74;
          v75 = (12 * *(_DWORD *)(v68 - 20)
               - *(_DWORD *)(v68 - 32)
               - *(_DWORD *)(v68 - 8)
               - *(_DWORD *)v55
               - *(_DWORD *)v20) >> 16;
          if ( (v75 & 0xFF00) != 0 )
            LOBYTE(v75) = ~HIBYTE(v75);
          v66[2] = v75;
          v55 += 12;
          v68 += 12LL;
          *(_DWORD *)v20 = v17[v70 + 256];
          *((_DWORD *)v20 + 1) = v17[v71 + 256];
          *((_DWORD *)v20 + 2) = v17[v72 + 256];
          v20 += 12;
          v66 += v140;
        }
        while ( v66 != v139 );
        if ( (unsigned __int64)v55 < v54 )
        {
          v80 = *((unsigned __int8 *)v56 + 2);
          v68 = (unsigned __int8)*v56;
          v81 = (unsigned __int8)HIBYTE(*v56);
          *(_DWORD *)v55 += v17[v80];
          *((_DWORD *)v55 + 1) += v17[v81];
          *((_DWORD *)v55 + 2) += v17[v68];
          *(_DWORD *)v20 = v17[v80 + 256];
          *((_DWORD *)v20 + 1) = v17[v81 + 256];
          *((_DWORD *)v20 + 2) = v17[v68 + 256];
        }
        v52 = v111;
        v76 = *(_WORD *)v112;
        v20 = v106;
        v106 = (char *)v104;
        v104 = v111;
        if ( v112[0] < 0 )
        {
          v115(v112, v68);
          v76 = *(_WORD *)v112;
        }
        if ( (v76 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v112, v68);
          LOBYTE(v76) = v112[0];
        }
        if ( (v76 & 0x10) != 0 )
        {
          MappingBGRF(v134, v135, v122, v129);
          v101 = v132 + v129;
          if ( v101 == v130 )
            v101 = v131;
          v129 = v101;
        }
        v116(v112, v136, v137, v113, v121, v123, v123 + v127, v128, v117);
        v123 += v126;
        if ( v123 == v124 )
          v123 = v125;
        v113 += v114;
        ++v105;
      }
      else
      {
        v82 = (__int64)v56 + 1;
        v83 = v110 + ((v51 >> 5) & 0x400);
        v84 = v104 + 2;
        do
        {
          v85 = *(unsigned __int8 *)(v82 + 1);
          v84 += 3;
          v82 += 3LL;
          *(v84 - 5) += *(_DWORD *)(v83 + 4 * v85);
          *(v84 - 4) += *(_DWORD *)(v83 + 4LL * *(unsigned __int8 *)(v82 - 3));
          *(v84 - 3) += *(_DWORD *)(v83 + 4LL * *(unsigned __int8 *)(v82 - 4));
        }
        while ( (unsigned __int64)(v84 - 2) < v54 );
        v52 = (char *)v104;
      }
      v35 = v108;
      v53 = v103;
      v51 = (unsigned __int16)*v108;
    }
    while ( *v108 );
  }
  if ( v113 == v120 )
    return v105;
  v90 = &v106[v103];
  v91 = *((_DWORD *)v90 - 1);
  *(_QWORD *)v90 = *(_QWORD *)(v90 - 12);
  *((_DWORD *)v90 + 2) = v91;
  v92 = *((_DWORD *)v106 + 2);
  v93 = v138;
  *(_QWORD *)(v106 - 12) = *(_QWORD *)v106;
  *((_DWORD *)v106 - 1) = v92;
  v94 = &v106[12 * v109];
  v95 = &v20[12 * v109 + 4];
  v96 = v106 - v20;
  do
  {
    v97 = (11 * *(_DWORD *)&v95[v96 + 4] - *(_DWORD *)&v95[v96 - 8] - *(_DWORD *)&v95[v96 + 16] - *((_DWORD *)v95 + 1)) >> 16;
    if ( (v97 & 0xFF00) != 0 )
      LOBYTE(v97) = ~HIBYTE(v97);
    *v93 = v97;
    v98 = (11 * *(_DWORD *)&v95[v96] - *(_DWORD *)&v95[v96 - 12] - *(_DWORD *)&v95[v96 + 12] - *(_DWORD *)v95) >> 16;
    if ( (v98 & 0xFF00) != 0 )
      LOBYTE(v98) = ~HIBYTE(v98);
    v93[1] = v98;
    v99 = (11 * *(_DWORD *)v94 - *(_DWORD *)&v95[v96 + 8] - *(_DWORD *)&v95[v96 - 16] - *((_DWORD *)v95 - 1)) >> 16;
    if ( (v99 & 0xFF00) != 0 )
      LOBYTE(v99) = ~HIBYTE(v99);
    v93[2] = v99;
    v94 += 12;
    v95 += 12;
    v93 += v140;
  }
  while ( v93 != v139 );
  v100 = *(_WORD *)v112;
  if ( v112[0] < 0 )
  {
    ((void (__fastcall *)(char *, _BYTE *, char *))v115)(v112, v93, v94);
    v100 = *(_WORD *)v112;
  }
  if ( (v100 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v112, v93);
    LOBYTE(v100) = v112[0];
  }
  if ( (v100 & 0x10) != 0 )
  {
    MappingBGRF(v134, v135, v122, v129);
    v102 = v132 + v129;
    if ( v102 == v130 )
      v102 = v131;
    v129 = v102;
  }
  v116(v112, v136, v137, v113, v121, v123, v123 + v127, v128, v117);
  return v105 + 1;
}
