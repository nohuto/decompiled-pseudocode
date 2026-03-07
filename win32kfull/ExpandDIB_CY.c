__int64 __fastcall ExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // r14
  unsigned __int8 *v16; // rdi
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // rsi
  char *v20; // r12
  unsigned __int8 *v21; // r15
  void *FixupScan; // rax
  void *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // r12d
  int v29; // eax
  __int128 v30; // xmm1
  unsigned __int8 *v31; // r13
  unsigned __int8 *v32; // rbx
  void *v33; // rax
  unsigned __int8 *v34; // rdx
  char *v35; // rbx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // bx
  __int128 v42; // xmm1
  unsigned __int8 *v43; // r15
  void *v44; // rax
  __int64 v45; // r9
  unsigned __int8 *v46; // r8
  int v47; // ecx
  int v48; // ecx
  int v49; // edx
  unsigned __int64 v50; // r10
  _BYTE *v51; // r8
  int v52; // ecx
  int v53; // r15d
  int v54; // r9d
  int *v55; // r10
  int v56; // r11d
  unsigned __int8 *v57; // rbx
  __int64 v58; // r9
  unsigned __int8 *v59; // r10
  __int64 v60; // r11
  int v61; // edx
  __int64 v62; // rax
  int *v63; // r10
  int v64; // r11d
  unsigned __int8 *v65; // r9
  __int64 v66; // r10
  __int64 v67; // r11
  int v68; // edx
  __int64 v69; // rax
  int *v70; // r9
  int v71; // r10d
  unsigned __int8 *v72; // r9
  __int64 v73; // r10
  __int64 v74; // rax
  __int64 v75; // rcx
  int v76; // eax
  unsigned __int8 *v77; // rdx
  __int64 v78; // rax
  __int16 v79; // ax
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v83; // [rsp+58h] [rbp-B0h]
  _BYTE v84[40]; // [rsp+68h] [rbp-A0h]
  unsigned __int8 *v85; // [rsp+90h] [rbp-78h]
  size_t Size; // [rsp+98h] [rbp-70h]
  int v87; // [rsp+A8h] [rbp-60h]
  __int64 *v88; // [rsp+B8h] [rbp-50h]
  int v89[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v90; // [rsp+150h] [rbp+48h]
  int v91; // [rsp+158h] [rbp+50h]
  unsigned int v92; // [rsp+15Ch] [rbp+54h]
  int v93; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v94)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v95)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v96; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v97)(__int64, void *, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v98; // [rsp+1F8h] [rbp+F0h]
  __int64 v99; // [rsp+200h] [rbp+F8h]
  __int64 v100; // [rsp+248h] [rbp+140h]
  __int64 v101; // [rsp+250h] [rbp+148h]
  __int64 v102; // [rsp+260h] [rbp+158h]
  __int64 v103; // [rsp+268h] [rbp+160h]
  __int64 v104; // [rsp+270h] [rbp+168h]
  int v105; // [rsp+278h] [rbp+170h]
  int v106; // [rsp+27Ch] [rbp+174h]
  int v107; // [rsp+280h] [rbp+178h]
  __int64 v108; // [rsp+288h] [rbp+180h]
  __int64 v109; // [rsp+290h] [rbp+188h]
  __int64 v110; // [rsp+298h] [rbp+190h]
  int v111; // [rsp+2A0h] [rbp+198h]
  void *v112; // [rsp+2E0h] [rbp+1D8h]
  __int64 v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  __int64 v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  _BYTE *v117; // [rsp+308h] [rbp+200h]
  _BYTE *v118; // [rsp+310h] [rbp+208h]
  int v119; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v89;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(_QWORD *)(v99 + 32);
  v16 = (unsigned __int8 *)(v15 + 4105);
  v17 = 3 * (v91 + 6);
  v18 = v17 + v15 + 4105;
  *(_QWORD *)&v84[8] = v18;
  v19 = v17 + v17 + v18;
  *(_QWORD *)&v84[16] = v17 + v18;
  v20 = (char *)(v17 + v19);
  v21 = (unsigned __int8 *)&v20[v17];
  *(_QWORD *)&v84[24] = v19;
  *(_QWORD *)&v84[32] = v20;
  v85 = v21;
  Size = v17 - 18;
  FixupScan = GetFixupScan((__int64)v89, v112);
  v97(v98, FixupScan, v20, &v20[Size], 3);
  if ( (*(_BYTE *)(v99 + 8) & 1) != 0 )
  {
    v23 = GetFixupScan((__int64)v89, v112);
    v97(v98, v23, (char *)v21, (char *)&v21[Size], 3);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v24 = v99;
  v25 = *(unsigned __int16 *)(v99 + 12);
  v26 = v25 & 0xF;
  v27 = v25 >> 4;
  v28 = v26 + v27;
  if ( v26 + v27 )
  {
    do
    {
      v29 = v27;
      --v28;
      v30 = *(_OWORD *)&v84[24];
      --v27;
      v31 = &v16[Size];
      *(_OWORD *)v84 = *(_OWORD *)&v84[8];
      *(_QWORD *)&v84[32] = v85;
      v32 = v85;
      v85 = v16;
      *(_OWORD *)&v84[16] = v30;
      if ( v29 <= 0 )
      {
        v33 = GetFixupScan((__int64)v89, v112);
        v97(v98, v33, (char *)v16, (char *)&v16[Size], 3);
      }
      else
      {
        memmove(v16, v32, Size);
      }
      v19 = *((_QWORD *)&v30 + 1);
      if ( (v89[0] & 0x200) != 0 )
      {
        memmove(*((void **)&v30 + 1), v32, Size);
      }
      else
      {
        v34 = (unsigned __int8 *)(*((_QWORD *)&v30 + 1) + 1LL);
        v35 = (char *)&v32[-*((_QWORD *)&v30 + 1)];
        do
        {
          v36 = (6 * v34[(_QWORD)v35 - 1] - *v16 - *(v34 - 1)) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          *(v34 - 1) = v36;
          v37 = (6 * v34[(_QWORD)v35] - v16[1] - *v34) >> 2;
          if ( (v37 & 0xFF00) != 0 )
            LOBYTE(v37) = ~HIBYTE(v37);
          *v34 = v37;
          v38 = (6 * v34[(_QWORD)v35 + 1] - v16[2] - v34[1]) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          v34[1] = v38;
          v16 += 3;
          v34 += 3;
        }
        while ( v16 < v31 );
      }
      v16 = *(unsigned __int8 **)v84;
    }
    while ( v28 );
    v24 = v99;
    v18 = *(_QWORD *)&v84[8];
  }
  v39 = *(__int64 **)(v24 + 40);
  v40 = *(_DWORD *)(v24 + 16);
  while ( v40 )
  {
    v87 = v40 - 1;
    v83 = *v39;
    v88 = v39 + 1;
    v41 = *v39;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = *(_OWORD *)&v84[24];
      *(_OWORD *)v84 = *(_OWORD *)&v84[8];
      v43 = &v16[Size];
      *(_QWORD *)&v84[32] = v85;
      *(_OWORD *)&v84[16] = v42;
      v85 = v16;
      v44 = GetFixupScan((__int64)v89, v112);
      v97(v98, v44, (char *)v16, (char *)&v16[Size], 3);
      if ( (v89[0] & 0x200) != 0 )
      {
        v19 = *((_QWORD *)&v42 + 1);
        memmove(*((void **)&v42 + 1), *(const void **)&v84[32], Size);
      }
      else
      {
        v19 = *((_QWORD *)&v42 + 1);
        v45 = *(_QWORD *)&v84[32] - *((_QWORD *)&v42 + 1);
        v46 = (unsigned __int8 *)(*((_QWORD *)&v42 + 1) + 1LL);
        do
        {
          v47 = (6 * v46[v45 - 1] - *v16 - *(v46 - 1)) >> 2;
          if ( (v47 & 0xFF00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *(v46 - 1) = v47;
          v48 = (6 * v46[v45] - v16[1] - *v46) >> 2;
          if ( (v48 & 0xFF00) != 0 )
            LOBYTE(v48) = ~HIBYTE(v48);
          *v46 = v48;
          v49 = (6 * v46[v45 + 1] - v16[2] - v46[1]) >> 2;
          if ( (v49 & 0xFF00) != 0 )
            LOBYTE(v49) = ~HIBYTE(v49);
          v46[1] = v49;
          v16 += 3;
          v46 += 3;
        }
        while ( v16 < v43 );
      }
      v18 = *(_QWORD *)&v84[8];
      v16 = *(unsigned __int8 **)v84;
      v41 &= 0x3FFFu;
    }
    v50 = v15;
    v51 = v117;
    v52 = -WORD2(v83);
    v53 = -v41;
    v54 = -WORD1(v83);
    if ( v41 )
    {
      v55 = (int *)(v15 + 2048);
      v56 = 4096 - HIWORD(v83);
      do
      {
        v53 += v41;
        v54 += WORD1(v83);
        v52 += WORD2(v83);
        *(v55 - 512) = v53;
        v56 += HIWORD(v83);
        *(v55 - 256) = v54;
        *v55 = v52;
        v55[256] = v56;
        ++v55;
      }
      while ( (unsigned __int64)(v55 - 512) < v15 + 1024 );
      v19 = *(_QWORD *)&v84[24];
      v57 = (unsigned __int8 *)(v18 + 2);
      v58 = *(_QWORD *)&v84[24] - v18;
      v59 = &v16[-v18];
      v60 = *(_QWORD *)&v84[16] - v18;
      do
      {
        v61 = *(_DWORD *)(v15 + 4LL * v57[(_QWORD)v59])
            + *(_DWORD *)(v15 + 4LL * v57[v60] + 2048)
            + *(_DWORD *)(v15 + 4LL * v57[v58] + 3072);
        v62 = *v57;
        v57 += 3;
        v51[2] = (*(_DWORD *)(v15 + 4 * v62 + 1024) + v61) >> 13;
        v51[1] = (*(_DWORD *)(v15 + 4LL * *(v57 - 4) + 1024)
                + *(_DWORD *)(v15 + 4LL * v57[(_QWORD)v59 - 4])
                + *(_DWORD *)(v15 + 4LL * v57[v58 - 4] + 3072)
                + *(_DWORD *)(v15 + 4LL * v57[v60 - 4] + 2048)) >> 13;
        *v51 = (*(_DWORD *)(v15 + 4LL * *(v57 - 5) + 1024)
              + *(_DWORD *)(v15 + 4LL * v57[(_QWORD)v59 - 5])
              + *(_DWORD *)(v15 + 4LL * v57[v58 - 5] + 3072)
              + *(_DWORD *)(v15 + 4LL * v57[v60 - 5] + 2048)) >> 13;
        v51 += v119;
      }
      while ( v51 != v118 );
    }
    else if ( WORD1(v83) )
    {
      v63 = (int *)(v15 + 2048);
      v64 = 4096 - HIWORD(v83);
      do
      {
        v54 += WORD1(v83);
        v52 += WORD2(v83);
        v64 += HIWORD(v83);
        *(v63 - 256) = v54;
        *v63 = v52;
        v63[256] = v64;
        ++v63;
      }
      while ( (unsigned __int64)(v63 - 512) < v15 + 1024 );
      v19 = *(_QWORD *)&v84[24];
      v65 = (unsigned __int8 *)(v18 + 2);
      v66 = *(_QWORD *)&v84[24] - v18;
      v67 = *(_QWORD *)&v84[16] - v18;
      do
      {
        v68 = *(_DWORD *)(v15 + 4LL * v65[v67] + 2048) + *(_DWORD *)(v15 + 4LL * v65[v66] + 3072);
        v69 = *v65;
        v65 += 3;
        v51[2] = (*(_DWORD *)(v15 + 4 * v69 + 1024) + v68) >> 13;
        v51[1] = (*(_DWORD *)(v15 + 4LL * *(v65 - 4) + 1024)
                + *(_DWORD *)(v15 + 4LL * v65[v66 - 4] + 3072)
                + *(_DWORD *)(v15 + 4LL * v65[v67 - 4] + 2048)) >> 13;
        *v51 = (*(_DWORD *)(v15 + 4LL * *(v65 - 5) + 1024)
              + *(_DWORD *)(v15 + 4LL * v65[v66 - 5] + 3072)
              + *(_DWORD *)(v15 + 4LL * v65[v67 - 5] + 2048)) >> 13;
        v51 += v119;
      }
      while ( v51 != v118 );
    }
    else if ( WORD2(v83) )
    {
      v70 = (int *)(v15 + 3072);
      v71 = 4096 - HIWORD(v83);
      do
      {
        v52 += WORD2(v83);
        v71 += HIWORD(v83);
        *(v70 - 256) = v52;
        *v70++ = v71;
      }
      while ( (unsigned __int64)(v70 - 768) < v15 + 1024 );
      v72 = (unsigned __int8 *)(v19 + 1);
      v73 = *(_QWORD *)&v84[16] - v19;
      do
      {
        v51[2] = (*(_DWORD *)(v15 + 4LL * v72[1] + 3072) + *(_DWORD *)(v15 + 4LL * v72[v73 + 1] + 2048)) >> 13;
        v74 = v72[v73];
        v75 = *v72;
        v72 += 3;
        v51[1] = (*(_DWORD *)(v15 + 4 * v75 + 3072) + *(_DWORD *)(v15 + 4 * v74 + 2048)) >> 13;
        *v51 = (*(_DWORD *)(v15 + 4LL * *(v72 - 4) + 3072) + *(_DWORD *)(v15 + 4LL * v72[v73 - 4] + 2048)) >> 13;
        v51 += v119;
      }
      while ( v51 != v118 );
    }
    else
    {
      v76 = 4096 - HIWORD(v83);
      do
      {
        v76 += HIWORD(v83);
        *(_DWORD *)(v50 + 3072) = v76;
        v50 += 4LL;
      }
      while ( v50 < v15 + 1024 );
      v77 = (unsigned __int8 *)(v19 + 1);
      do
      {
        v51[2] = *(int *)(v15 + 4LL * v77[1] + 3072) >> 13;
        v78 = *v77;
        v77 += 3;
        v51[1] = *(int *)(v15 + 4 * v78 + 3072) >> 13;
        *v51 = *(int *)(v15 + 4LL * *(v77 - 4) + 3072) >> 13;
        v51 += v119;
      }
      while ( v51 != v118 );
    }
    v79 = v89[0];
    if ( SLOBYTE(v89[0]) < 0 )
    {
      v94(v89);
      v79 = v89[0];
    }
    if ( (v79 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v89);
      LOBYTE(v79) = v89[0];
    }
    if ( (v79 & 0x10) != 0 )
    {
      MappingBGRF(v113, v114, v101, v108);
      v80 = v111 + v108;
      if ( v80 == v109 )
        v80 = v110;
      v108 = v80;
    }
    v95(v89, v115, v116, v90, v100, v102, v102 + v106, v107, v96);
    v39 = v88;
    v81 = v105 + v102;
    if ( v81 == v103 )
      v81 = v104;
    v90 += v93;
    v40 = v87;
    v102 = v81;
  }
  return v92;
}
