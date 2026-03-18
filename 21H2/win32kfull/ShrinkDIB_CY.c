/*
 * XREFs of ShrinkDIB_CY @ 0x1C02695C0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0005AE0 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C02640B0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0269064 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  int *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  int *v18; // rsi
  _DWORD *v19; // r14
  size_t v20; // r12
  int v21; // ecx
  char *v22; // rbx
  char *v23; // rdi
  char *v24; // r15
  __int64 v25; // rax
  int v26; // r8d
  int *v27; // rcx
  int v28; // eax
  char *FixupScan; // rax
  char *v30; // rdx
  unsigned __int8 *v31; // r8
  __int64 v32; // rax
  unsigned int v33; // r15d
  int v34; // r13d
  int v35; // eax
  _WORD *v36; // rax
  unsigned __int64 v37; // r11
  _WORD *v38; // r10
  unsigned __int64 v39; // rax
  int v40; // r9d
  int v41; // r8d
  int *v42; // rdx
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  unsigned __int8 *v46; // r9
  signed __int64 v47; // r10
  _DWORD *v48; // rdx
  __int64 v49; // rax
  _DWORD *v50; // rdx
  _BYTE *v51; // r9
  char *v52; // rdi
  char *v53; // rbx
  __int16 v54; // ax
  int v55; // r8d
  int v56; // ecx
  int v57; // ecx
  __int16 v58; // ax
  unsigned __int8 *v59; // rax
  __int64 v60; // rcx
  __int64 i; // rcx
  _DWORD *v62; // r8
  unsigned __int8 *v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // r10
  _DWORD *v67; // r8
  char *v68; // rbx
  _BYTE *v69; // r9
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  __int16 v73; // ax
  unsigned __int8 *v74; // rax
  unsigned __int8 v76; // [rsp+58h] [rbp-B0h]
  int v77; // [rsp+60h] [rbp-A8h]
  int v78; // [rsp+64h] [rbp-A4h]
  char *v79; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v80; // [rsp+70h] [rbp-98h]
  __int64 v81; // [rsp+78h] [rbp-90h]
  _DWORD *v82; // [rsp+80h] [rbp-88h]
  char *v83; // [rsp+88h] [rbp-80h]
  char *v84; // [rsp+90h] [rbp-78h]
  unsigned __int64 v85; // [rsp+98h] [rbp-70h]
  int v86[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v87; // [rsp+130h] [rbp+28h]
  int v88; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v89)(int *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v90)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v91; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v92)(__int64, char *, __int64, __int64, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v93; // [rsp+1D8h] [rbp+D0h]
  __int64 v94; // [rsp+1E0h] [rbp+D8h]
  __int64 v95; // [rsp+1E8h] [rbp+E0h]
  __int64 v96; // [rsp+228h] [rbp+120h]
  __int64 v97; // [rsp+230h] [rbp+128h]
  __int64 v98; // [rsp+240h] [rbp+138h]
  __int64 v99; // [rsp+248h] [rbp+140h]
  __int64 v100; // [rsp+250h] [rbp+148h]
  int v101; // [rsp+258h] [rbp+150h]
  int v102; // [rsp+25Ch] [rbp+154h]
  int v103; // [rsp+260h] [rbp+158h]
  unsigned __int8 *v104; // [rsp+268h] [rbp+160h]
  unsigned __int8 *v105; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v106; // [rsp+278h] [rbp+170h]
  int v107; // [rsp+280h] [rbp+178h]
  void *v108; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int8 *v109; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int64 v110; // [rsp+2D0h] [rbp+1C8h]
  __int64 v111; // [rsp+2D8h] [rbp+1D0h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  __int64 v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  int v115; // [rsp+2F8h] [rbp+1F0h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = v86;
  do
  {
    v5 = v3[1];
    *(_OWORD *)v4 = *v3;
    v6 = v3[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v3[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v3[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v3[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v3[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = v3[1];
  *(_OWORD *)v4 = *v3;
  v13 = v3[2];
  *((_OWORD *)v4 + 1) = v12;
  v14 = v3[3];
  *((_OWORD *)v4 + 2) = v13;
  v15 = v3[4];
  v16 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v14;
  *((_OWORD *)v4 + 4) = v15;
  *((_QWORD *)v4 + 10) = v16;
  v17 = v94;
  v18 = *(int **)(v94 + 32);
  v81 = *(_QWORD *)(v94 + 24);
  v19 = v18 + 512;
  v85 = (unsigned __int64)(v18 + 256);
  v82 = v18 + 512;
  v20 = 12 * v86[14];
  v21 = 0;
  v22 = (char *)&v18[v20 / 4 + 512];
  v23 = &v22[v20];
  v83 = v22;
  v24 = &v22[v20 + v20];
  v84 = &v22[v20];
  v79 = v24 + 9;
  v25 = *(_QWORD *)(a1 + 312);
  if ( (*(_DWORD *)(v25 + 16) || *(_WORD *)(v25 + 14)) && (!*(_QWORD *)(v25 + 32) || !*(_QWORD *)(a1 + 536)) )
    return *(unsigned int *)(a1 + 148);
  v26 = *(unsigned __int16 *)(v94 + 14);
  if ( *(_WORD *)(v94 + 14) )
  {
    v27 = v18;
    v28 = -v26;
    do
    {
      v28 += v26;
      *v27++ = v28;
    }
    while ( v27 < v18 + 256 );
    FixupScan = (char *)GetFixupScan((__int64)v86, v108);
    v30 = &v22[v20];
    v31 = (unsigned __int8 *)(FixupScan + 1);
    do
    {
      *(_DWORD *)v30 = v18[v31[1]];
      v32 = *v31;
      v31 += 3;
      *((_DWORD *)v30 + 1) = v18[v32];
      *((_DWORD *)v30 + 2) = v18[*(v31 - 4)];
      v30 += 12;
    }
    while ( v30 < v24 );
    v17 = v94;
    v21 = 0;
    if ( !*(_WORD *)(v94 + 10) )
      v86[0] |= 0x20u;
  }
  v33 = 0;
  v34 = *(unsigned __int16 *)(v17 + 12);
  v80 = *(unsigned __int16 **)(v17 + 40);
  v35 = *(_DWORD *)(v17 + 16);
  if ( v35 )
  {
    LOBYTE(v21) = v34 == 1;
    v77 = v21;
    do
    {
      v78 = v35 - 1;
      v36 = GetFixupScan((__int64)v86, v108);
      v37 = (unsigned __int64)&v23[v20];
      v38 = v36;
      v39 = *v80++;
      if ( (v39 & 0x4000) != 0 )
      {
        v40 = v39 & 0x3FFF;
        v41 = -v40;
        v42 = v18;
        v43 = *(_DWORD *)(v81 + 4) + (((__int16)v39 >> 15) & 1) - v40;
        v44 = v40 - (*(_DWORD *)(v81 + 4) + (((__int16)v39 >> 15) & 1));
        do
        {
          v41 += v40;
          v44 += v43;
          *v42 = v41;
          v42[256] = v44;
          ++v42;
        }
        while ( (unsigned __int64)v42 < v85 );
        v45 = v34--;
        if ( v45 <= 0 )
        {
          v50 = v19 + 1;
          v51 = v79 + 2;
          v52 = (char *)(v23 - (char *)v19);
          v53 = (char *)(v22 - (char *)v19);
          do
          {
            v54 = *v38;
            v38 = (_WORD *)((char *)v38 + 3);
            v76 = *((_BYTE *)v38 - 1);
            *(_DWORD *)((char *)v50 + (_QWORD)v52 - 4) += v18[v76];
            *(_DWORD *)((char *)v50 + (_QWORD)v52) += v18[HIBYTE(v54)];
            *(_DWORD *)((char *)v50 + (_QWORD)v52 + 4) += v18[(unsigned __int8)v54];
            v55 = (6 * *(_DWORD *)((char *)v50 + (_QWORD)v53 + 4) - *(_DWORD *)((char *)v50 + (_QWORD)v52 + 4) - v50[1]) >> 15;
            if ( (v55 & 0xFF00) != 0 )
              LOBYTE(v55) = ~HIBYTE(v55);
            *(v51 - 2) = v55;
            v56 = (6 * *(_DWORD *)((char *)v50 + (_QWORD)v53) - *(_DWORD *)((char *)v50 + (_QWORD)v52) - *v50) >> 15;
            if ( (v56 & 0xFF00) != 0 )
              LOBYTE(v56) = ~HIBYTE(v56);
            *(v51 - 1) = v56;
            v57 = (6 * *(_DWORD *)((char *)v50 + (_QWORD)v53 - 4)
                 - *(v50 - 1)
                 - *(_DWORD *)((char *)v50 + (_QWORD)v52 - 4)) >> 15;
            if ( (v57 & 0xFF00) != 0 )
              LOBYTE(v57) = ~HIBYTE(v57);
            *v51 = v57;
            v51 += 3;
            *(v50 - 1) = v18[v76 + 256];
            *v50 = v18[HIBYTE(v54) + 256];
            v50[1] = v18[(unsigned __int8)v54 + 256];
            v50 += 3;
          }
          while ( (_DWORD *)((char *)v50 + (_QWORD)v52 - 4) < (_DWORD *)v37 );
          v92(v93, v79, v113, v114, v115);
          v58 = v86[0];
          if ( SLOBYTE(v86[0]) < 0 )
          {
            v89(v86);
            v58 = v86[0];
          }
          if ( (v58 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v86);
            LOBYTE(v58) = v86[0];
          }
          if ( (v58 & 0x10) != 0 )
          {
            MappingBGRF(v109, v110, v97, v104);
            v59 = &v104[v107];
            if ( v59 == v105 )
              v59 = v106;
            v104 = v59;
          }
          v90(v86, v111, v112, v87, v96, v98, v98 + v102, v103, v91);
          v60 = v101 + v98;
          if ( v60 == v99 )
            v60 = v100;
          v87 += v88;
          ++v33;
          v98 = v60;
        }
        else
        {
          v46 = (unsigned __int8 *)v38 + 1;
          v47 = (char *)v19 - v23;
          v48 = v23 + 4;
          do
          {
            *(v48 - 1) += v18[v46[1]];
            *v48 += v18[*v46];
            v48[1] += v18[*(v46 - 1)];
            *(_DWORD *)((char *)v48 + v47 - 4) = v18[v46[1] + 256];
            v49 = *v46;
            v46 += 3;
            *(_DWORD *)((char *)v48 + v47) = v18[v49 + 256];
            v48 += 3;
            *(_DWORD *)((char *)v48 + v47 - 8) = v18[*(v46 - 4) + 256];
          }
          while ( (unsigned __int64)(v48 - 1) < v37 );
          if ( v77 )
          {
            memmove(v22, v23, v20);
            v77 = 0;
          }
        }
        v23 = (char *)v19;
        for ( i = 0LL; i < 2; ++i )
          (&v82)[i] = (&v83)[i];
        v22 = v83;
        v84 = (char *)v19;
        v19 = v82;
      }
      else
      {
        v62 = v23 + 8;
        v63 = (unsigned __int8 *)v38 + 1;
        v64 = v81 + ((v39 >> 5) & 0x400);
        do
        {
          *(v62 - 2) += *(_DWORD *)(v64 + 4LL * v63[1]);
          v65 = *v63;
          v63 += 3;
          *(v62 - 1) += *(_DWORD *)(v64 + 4 * v65);
          *v62 += *(_DWORD *)(v64 + 4LL * *(v63 - 4));
          v62 += 3;
        }
        while ( (unsigned __int64)(v62 - 2) < v37 );
      }
      v35 = v78;
    }
    while ( v78 );
  }
  if ( v87 != v95 )
  {
    v66 = (unsigned __int64)&v22[v20];
    v67 = v19 + 1;
    v68 = (char *)(v22 - (char *)v19);
    v69 = v79 + 2;
    do
    {
      v70 = (5 * *(_DWORD *)((char *)v67 + (_QWORD)v68 + 4) - v67[1]) >> 15;
      if ( (v70 & 0xFF00) != 0 )
        LOBYTE(v70) = ~HIBYTE(v70);
      *(v69 - 2) = v70;
      v71 = (5 * *(_DWORD *)&v68[(_QWORD)v67] - *v67) >> 15;
      if ( (v71 & 0xFF00) != 0 )
        LOBYTE(v71) = ~HIBYTE(v71);
      *(v69 - 1) = v71;
      v72 = (5 * *(_DWORD *)&v68[(_QWORD)v67 - 4] - *(v67 - 1)) >> 15;
      if ( (v72 & 0xFF00) != 0 )
        LOBYTE(v72) = ~HIBYTE(v72);
      v67 += 3;
      *v69 = v72;
      v69 += 3;
    }
    while ( &v68[(_QWORD)v67 - 4] < (char *)v66 );
    v92(v93, v79, v113, v114, v115);
    v73 = v86[0];
    if ( SLOBYTE(v86[0]) < 0 )
    {
      v89(v86);
      v73 = v86[0];
    }
    if ( (v73 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v86);
      LOBYTE(v73) = v86[0];
    }
    if ( (v73 & 0x10) != 0 )
    {
      MappingBGRF(v109, v110, v97, v104);
      v74 = &v104[v107];
      if ( v74 == v105 )
        v74 = v106;
      v104 = v74;
    }
    v90(v86, v111, v112, v87, v96, v98, v98 + v102, v103, v91);
    ++v33;
  }
  return v33;
}
