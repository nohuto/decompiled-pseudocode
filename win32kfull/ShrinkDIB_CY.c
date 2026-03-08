/*
 * XREFs of ShrinkDIB_CY @ 0x1C0266300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GetFixupScan @ 0x1C014BF50 (GetFixupScan.c)
 *     AlphaBlendBGRF @ 0x1C0260824 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0265A54 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY(__int64 a1)
{
  unsigned int v1; // r12d
  _OWORD *v3; // rax
  int *v4; // rcx
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  int *v19; // rsi
  _DWORD *v20; // r14
  size_t v21; // r15
  char *v22; // rbx
  char *v23; // rdi
  __int64 v24; // rax
  int v25; // r8d
  int *v26; // rcx
  int v27; // eax
  char *FixupScan; // rax
  char *v29; // rdx
  unsigned __int8 *v30; // r8
  __int64 v31; // rax
  int v32; // r13d
  int v33; // eax
  _WORD *v34; // rax
  unsigned __int64 v35; // r11
  _WORD *v36; // r10
  unsigned __int64 v37; // rax
  int v38; // r9d
  int v39; // r8d
  int *v40; // rdx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  unsigned __int8 *v44; // r9
  signed __int64 v45; // r10
  _DWORD *v46; // rdx
  __int64 v47; // rax
  _DWORD *v48; // rdx
  _BYTE *v49; // r9
  char *v50; // rdi
  char *v51; // rbx
  __int16 v52; // ax
  int v53; // r8d
  int v54; // ecx
  int v55; // ecx
  __int16 v56; // ax
  unsigned __int8 *v57; // rax
  __int64 v58; // rcx
  __int64 i; // rcx
  _DWORD *v60; // r8
  unsigned __int8 *v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // r10
  _DWORD *v65; // r8
  char *v66; // rbx
  _BYTE *v67; // r9
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  __int16 v71; // ax
  unsigned __int8 *v72; // rax
  unsigned __int8 v74; // [rsp+58h] [rbp-B0h]
  BOOL v75; // [rsp+60h] [rbp-A8h]
  int v76; // [rsp+64h] [rbp-A4h]
  __int64 v77; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v78; // [rsp+70h] [rbp-98h]
  __int64 v79; // [rsp+78h] [rbp-90h]
  _DWORD *v80; // [rsp+80h] [rbp-88h]
  char *v81; // [rsp+88h] [rbp-80h]
  char *v82; // [rsp+90h] [rbp-78h]
  unsigned __int64 v83; // [rsp+98h] [rbp-70h]
  int v84[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v85; // [rsp+130h] [rbp+28h]
  int v86; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v87)(int *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v88)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v89; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v90)(__int64, __int64, __int64, __int64, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D8h] [rbp+D0h]
  __int64 v92; // [rsp+1E0h] [rbp+D8h]
  __int64 v93; // [rsp+1E8h] [rbp+E0h]
  __int64 v94; // [rsp+228h] [rbp+120h]
  __int64 v95; // [rsp+230h] [rbp+128h]
  __int64 v96; // [rsp+240h] [rbp+138h]
  __int64 v97; // [rsp+248h] [rbp+140h]
  __int64 v98; // [rsp+250h] [rbp+148h]
  int v99; // [rsp+258h] [rbp+150h]
  int v100; // [rsp+25Ch] [rbp+154h]
  int v101; // [rsp+260h] [rbp+158h]
  unsigned __int8 *v102; // [rsp+268h] [rbp+160h]
  unsigned __int8 *v103; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v104; // [rsp+278h] [rbp+170h]
  int v105; // [rsp+280h] [rbp+178h]
  void *v106; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int8 *v107; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int64 v108; // [rsp+2D0h] [rbp+1C8h]
  __int64 v109; // [rsp+2D8h] [rbp+1D0h]
  __int64 v110; // [rsp+2E0h] [rbp+1D8h]
  __int64 v111; // [rsp+2E8h] [rbp+1E0h]
  __int64 v112; // [rsp+2F0h] [rbp+1E8h]
  int v113; // [rsp+2F8h] [rbp+1F0h]

  v1 = 0;
  v3 = (_OWORD *)a1;
  v82 = 0LL;
  v4 = v84;
  v5 = 4LL;
  do
  {
    v6 = v3[1];
    *(_OWORD *)v4 = *v3;
    v7 = v3[2];
    *((_OWORD *)v4 + 1) = v6;
    v8 = v3[3];
    *((_OWORD *)v4 + 2) = v7;
    v9 = v3[4];
    *((_OWORD *)v4 + 3) = v8;
    v10 = v3[5];
    *((_OWORD *)v4 + 4) = v9;
    v11 = v3[6];
    *((_OWORD *)v4 + 5) = v10;
    v12 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v11;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = v3[1];
  *(_OWORD *)v4 = *v3;
  v14 = v3[2];
  *((_OWORD *)v4 + 1) = v13;
  v15 = v3[3];
  *((_OWORD *)v4 + 2) = v14;
  v16 = v3[4];
  v17 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v15;
  *((_OWORD *)v4 + 4) = v16;
  *((_QWORD *)v4 + 10) = v17;
  v18 = v92;
  v19 = *(int **)(v92 + 32);
  v79 = *(_QWORD *)(v92 + 24);
  v20 = v19 + 512;
  v83 = (unsigned __int64)(v19 + 256);
  v80 = v19 + 512;
  v21 = 12 * v84[14];
  v22 = (char *)&v19[v21 / 4 + 512];
  v23 = &v22[v21];
  v81 = v22;
  v82 = &v22[v21];
  v77 = (__int64)&v22[v21 + 9 + v21];
  v24 = *(_QWORD *)(a1 + 312);
  if ( (*(_DWORD *)(v24 + 16) || *(_WORD *)(v24 + 14)) && (!*(_QWORD *)(v24 + 32) || !*(_QWORD *)(a1 + 536)) )
    return *(unsigned int *)(a1 + 148);
  v25 = *(unsigned __int16 *)(v92 + 14);
  if ( *(_WORD *)(v92 + 14) )
  {
    v26 = v19;
    v27 = -v25;
    do
    {
      v27 += v25;
      *v26++ = v27;
    }
    while ( v26 < v19 + 256 );
    FixupScan = (char *)GetFixupScan((__int64)v84, v106);
    v29 = &v22[v21];
    v30 = (unsigned __int8 *)(FixupScan + 1);
    do
    {
      *(_DWORD *)v29 = v19[v30[1]];
      v31 = *v30;
      v30 += 3;
      *((_DWORD *)v29 + 1) = v19[v31];
      *((_DWORD *)v29 + 2) = v19[*(v30 - 4)];
      v29 += 12;
    }
    while ( v29 < &v23[v21] );
    v18 = v92;
    if ( !*(_WORD *)(v92 + 10) )
      v84[0] |= 0x20u;
  }
  v32 = *(unsigned __int16 *)(v18 + 12);
  v78 = *(unsigned __int16 **)(v18 + 40);
  v33 = *(_DWORD *)(v18 + 16);
  if ( v33 )
  {
    v75 = v32 == 1;
    do
    {
      v76 = v33 - 1;
      v34 = GetFixupScan((__int64)v84, v106);
      v35 = (unsigned __int64)&v23[v21];
      v36 = v34;
      v37 = *v78++;
      if ( (v37 & 0x4000) != 0 )
      {
        v38 = v37 & 0x3FFF;
        v39 = -v38;
        v40 = v19;
        v41 = *(_DWORD *)(v79 + 4) + (((__int16)v37 >> 15) & 1) - v38;
        v42 = v38 - (*(_DWORD *)(v79 + 4) + (((__int16)v37 >> 15) & 1));
        do
        {
          v39 += v38;
          v42 += v41;
          *v40 = v39;
          v40[256] = v42;
          ++v40;
        }
        while ( (unsigned __int64)v40 < v83 );
        v43 = v32--;
        if ( v43 <= 0 )
        {
          v48 = v20 + 1;
          v49 = (_BYTE *)(v77 + 2);
          v50 = (char *)(v23 - (char *)v20);
          v51 = (char *)(v22 - (char *)v20);
          do
          {
            v52 = *v36;
            v36 = (_WORD *)((char *)v36 + 3);
            v74 = *((_BYTE *)v36 - 1);
            *(_DWORD *)((char *)v48 + (_QWORD)v50 - 4) += v19[v74];
            *(_DWORD *)((char *)v48 + (_QWORD)v50) += v19[HIBYTE(v52)];
            *(_DWORD *)((char *)v48 + (_QWORD)v50 + 4) += v19[(unsigned __int8)v52];
            v53 = (6 * *(_DWORD *)((char *)v48 + (_QWORD)v51 + 4) - v48[1] - *(_DWORD *)((char *)v48 + (_QWORD)v50 + 4)) >> 15;
            if ( (v53 & 0xFF00) != 0 )
              LOBYTE(v53) = ~HIBYTE(v53);
            *(v49 - 2) = v53;
            v54 = (6 * *(_DWORD *)((char *)v48 + (_QWORD)v51) - *(_DWORD *)((char *)v48 + (_QWORD)v50) - *v48) >> 15;
            if ( (v54 & 0xFF00) != 0 )
              LOBYTE(v54) = ~HIBYTE(v54);
            *(v49 - 1) = v54;
            v55 = (6 * *(_DWORD *)((char *)v48 + (_QWORD)v51 - 4)
                 - *(v48 - 1)
                 - *(_DWORD *)((char *)v48 + (_QWORD)v50 - 4)) >> 15;
            if ( (v55 & 0xFF00) != 0 )
              LOBYTE(v55) = ~HIBYTE(v55);
            *v49 = v55;
            v49 += 3;
            *(v48 - 1) = v19[v74 + 256];
            *v48 = v19[HIBYTE(v52) + 256];
            v48[1] = v19[(unsigned __int8)v52 + 256];
            v48 += 3;
          }
          while ( (_DWORD *)((char *)v48 + (_QWORD)v50 - 4) < (_DWORD *)v35 );
          v90(v91, v77, v111, v112, v113);
          v56 = v84[0];
          if ( SLOBYTE(v84[0]) < 0 )
          {
            v87(v84);
            v56 = v84[0];
          }
          if ( (v56 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v84);
            LOBYTE(v56) = v84[0];
          }
          if ( (v56 & 0x10) != 0 )
          {
            MappingBGRF(v107, v108, v95, v102);
            v57 = &v102[v105];
            if ( v57 == v103 )
              v57 = v104;
            v102 = v57;
          }
          v88(v84, v109, v110, v85, v94, v96, v96 + v100, v101, v89);
          v58 = v99 + v96;
          if ( v58 == v97 )
            v58 = v98;
          v85 += v86;
          ++v1;
          v96 = v58;
        }
        else
        {
          v44 = (unsigned __int8 *)v36 + 1;
          v45 = (char *)v20 - v23;
          v46 = v23 + 4;
          do
          {
            *(v46 - 1) += v19[v44[1]];
            *v46 += v19[*v44];
            v46[1] += v19[*(v44 - 1)];
            *(_DWORD *)((char *)v46 + v45 - 4) = v19[v44[1] + 256];
            v47 = *v44;
            v44 += 3;
            *(_DWORD *)((char *)v46 + v45) = v19[v47 + 256];
            v46 += 3;
            *(_DWORD *)((char *)v46 + v45 - 8) = v19[*(v44 - 4) + 256];
          }
          while ( (unsigned __int64)(v46 - 1) < v35 );
          if ( v75 )
          {
            memmove(v22, v23, v21);
            v75 = 0;
          }
        }
        v23 = (char *)v20;
        for ( i = 0LL; i < 2; ++i )
          (&v80)[i] = (&v81)[i];
        v22 = v81;
        v82 = (char *)v20;
        v20 = v80;
      }
      else
      {
        v60 = v23 + 8;
        v61 = (unsigned __int8 *)v36 + 1;
        v62 = v79 + ((v37 >> 5) & 0x400);
        do
        {
          *(v60 - 2) += *(_DWORD *)(v62 + 4LL * v61[1]);
          v63 = *v61;
          v61 += 3;
          *(v60 - 1) += *(_DWORD *)(v62 + 4 * v63);
          *v60 += *(_DWORD *)(v62 + 4LL * *(v61 - 4));
          v60 += 3;
        }
        while ( (unsigned __int64)(v60 - 2) < v35 );
      }
      v33 = v76;
    }
    while ( v76 );
  }
  if ( v85 != v93 )
  {
    v64 = (unsigned __int64)&v22[v21];
    v65 = v20 + 1;
    v66 = (char *)(v22 - (char *)v20);
    v67 = (_BYTE *)(v77 + 2);
    do
    {
      v68 = (5 * *(_DWORD *)((char *)v65 + (_QWORD)v66 + 4) - v65[1]) >> 15;
      if ( (v68 & 0xFF00) != 0 )
        LOBYTE(v68) = ~HIBYTE(v68);
      *(v67 - 2) = v68;
      v69 = (5 * *(_DWORD *)((char *)v65 + (_QWORD)v66) - *v65) >> 15;
      if ( (v69 & 0xFF00) != 0 )
        LOBYTE(v69) = ~HIBYTE(v69);
      *(v67 - 1) = v69;
      v70 = (5 * *(_DWORD *)&v66[(_QWORD)v65 - 4] - *(v65 - 1)) >> 15;
      if ( (v70 & 0xFF00) != 0 )
        LOBYTE(v70) = ~HIBYTE(v70);
      v65 += 3;
      *v67 = v70;
      v67 += 3;
    }
    while ( &v66[(_QWORD)v65 - 4] < (char *)v64 );
    v90(v91, v77, v111, v112, v113);
    v71 = v84[0];
    if ( SLOBYTE(v84[0]) < 0 )
    {
      v87(v84);
      v71 = v84[0];
    }
    if ( (v71 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v84);
      LOBYTE(v71) = v84[0];
    }
    if ( (v71 & 0x10) != 0 )
    {
      MappingBGRF(v107, v108, v95, v102);
      v72 = &v102[v105];
      if ( v72 == v103 )
        v72 = v104;
      v102 = v72;
    }
    v88(v84, v109, v110, v85, v94, v96, v96 + v100, v101, v89);
    ++v1;
  }
  return v1;
}
