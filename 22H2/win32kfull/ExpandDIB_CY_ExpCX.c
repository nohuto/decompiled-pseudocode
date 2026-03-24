/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C0268310
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00C7690 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0266540 (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C02673B0 (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C026B6C4 (MappingBGRF.c)
 *     SharpenInput @ 0x1C026B780 (SharpenInput.c)
 */

__int64 __fastcall ExpandDIB_CY_ExpCX(__int64 a1)
{
  __int64 v1; // r8
  int *v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  int v19; // r11d
  size_t v20; // r12
  int v21; // esi
  __int64 v22; // rax
  char *v23; // rdi
  char *v24; // r14
  unsigned int v25; // edi
  int v26; // eax
  int v27; // edi
  int v28; // r14d
  unsigned int v29; // eax
  int v30; // r15d
  void *v31; // rsi
  __int64 v32; // rbx
  const void *v33; // rcx
  _BYTE *v34; // r13
  int v35; // eax
  __int64 *v36; // rcx
  int v37; // eax
  unsigned __int16 v38; // si
  int v39; // r14d
  void *v40; // rdx
  int v41; // edi
  _BYTE *v42; // r8
  unsigned __int64 v43; // r9
  _BYTE *v44; // r8
  int v45; // r11d
  int v46; // edx
  int v47; // r14d
  unsigned __int8 *v48; // r10
  int v49; // ecx
  unsigned __int8 *v50; // rdi
  int *v51; // r9
  unsigned __int8 *v52; // r9
  unsigned __int8 *v53; // r11
  unsigned __int8 *v54; // r10
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rax
  int *v60; // r9
  unsigned __int8 *v61; // r9
  unsigned __int8 *v62; // r10
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  int *v66; // r9
  unsigned __int8 *v67; // r10
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int16 v71; // ax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v75; // [rsp+28h] [rbp-E0h]
  int v76; // [rsp+58h] [rbp-B0h]
  __int64 v77; // [rsp+60h] [rbp-A8h]
  int v78; // [rsp+68h] [rbp-A0h]
  void *v79; // [rsp+70h] [rbp-98h]
  void *v80; // [rsp+78h] [rbp-90h]
  void *Src; // [rsp+80h] [rbp-88h]
  __int64 v82; // [rsp+88h] [rbp-80h]
  unsigned __int16 v83; // [rsp+90h] [rbp-78h]
  __int64 v84; // [rsp+98h] [rbp-70h]
  unsigned __int64 v85; // [rsp+A0h] [rbp-68h]
  int v86; // [rsp+A0h] [rbp-68h]
  __int64 v87; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v88; // [rsp+B0h] [rbp-58h]
  __int16 v89; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-48h]
  __int64 *v91; // [rsp+C8h] [rbp-40h]
  int v92[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v93; // [rsp+110h] [rbp+8h]
  __int64 v94; // [rsp+160h] [rbp+58h]
  int v95; // [rsp+168h] [rbp+60h]
  unsigned int v96; // [rsp+16Ch] [rbp+64h]
  int v97; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v98)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v99)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v100; // [rsp+1F0h] [rbp+E8h]
  __int64 v101; // [rsp+208h] [rbp+100h]
  __int64 v102; // [rsp+210h] [rbp+108h]
  __int64 v103; // [rsp+258h] [rbp+150h]
  __int64 v104; // [rsp+260h] [rbp+158h]
  __int64 v105; // [rsp+270h] [rbp+168h]
  __int64 v106; // [rsp+278h] [rbp+170h]
  __int64 v107; // [rsp+280h] [rbp+178h]
  int v108; // [rsp+288h] [rbp+180h]
  int v109; // [rsp+28Ch] [rbp+184h]
  int v110; // [rsp+290h] [rbp+188h]
  __int64 v111; // [rsp+298h] [rbp+190h]
  __int64 v112; // [rsp+2A0h] [rbp+198h]
  __int64 v113; // [rsp+2A8h] [rbp+1A0h]
  int v114; // [rsp+2B0h] [rbp+1A8h]
  __int64 v115; // [rsp+2F0h] [rbp+1E8h]
  __int64 v116; // [rsp+2F8h] [rbp+1F0h]
  __int64 v117; // [rsp+300h] [rbp+1F8h]
  __int64 v118; // [rsp+308h] [rbp+200h]
  __int64 v119; // [rsp+310h] [rbp+208h]
  _BYTE *v120; // [rsp+318h] [rbp+210h]
  _BYTE *v121; // [rsp+320h] [rbp+218h]
  int v122; // [rsp+328h] [rbp+220h]
  _QWORD v123[3]; // [rsp+338h] [rbp+230h]
  __int64 v124; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v92;
  v3 = (_OWORD *)a1;
  do
  {
    v4 = v3[1];
    *(_OWORD *)v2 = *v3;
    v5 = v3[2];
    *((_OWORD *)v2 + 1) = v4;
    v6 = v3[3];
    *((_OWORD *)v2 + 2) = v5;
    v7 = v3[4];
    *((_OWORD *)v2 + 3) = v6;
    v8 = v3[5];
    *((_OWORD *)v2 + 4) = v7;
    v9 = v3[6];
    *((_OWORD *)v2 + 5) = v8;
    v10 = v3[7];
    v3 += 8;
    *((_OWORD *)v2 + 6) = v9;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v10;
    --v1;
  }
  while ( v1 );
  v11 = v3[1];
  *(_OWORD *)v2 = *v3;
  v12 = v3[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = v3[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = v3[4];
  v15 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v15;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v16 = -1;
    v17 = v102;
    v84 = v102;
    v76 = -1;
    v18 = *(_QWORD *)(v102 + 32);
    v19 = *(_WORD *)(v101 + 8) & 1;
    v88 = *(unsigned __int64 **)(v101 + 40);
    v89 = *(_WORD *)(v101 + 12);
    v90 = v18 + 1024;
    v123[0] = v18 + 4096;
    v83 = v19;
    v85 = v18;
    v20 = 3 * v93;
    v21 = 3 * (v19 + (v89 & 0xF));
    v78 = 3 * v93;
    v87 = 3 * v95;
    v22 = v87 + v18 + 4096;
    v123[1] = v22;
    v123[2] = v87 + v22;
    v124 = v87 + v87 + v22;
    v23 = (char *)(v87 + 9 + v124 + v20 + 18);
    v79 = (void *)(v87 + 9 + v124);
    v24 = &v23[v20 + 18];
    v80 = v23;
    LODWORD(v82) = v115 + 9;
    Src = v24;
    GetFixupScan((__int64)v92, v23);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v92, v24);
    else
      memmove(v24, v23, v20);
    v25 = *(unsigned __int16 *)(v17 + 12);
    v26 = v25 & 0xF;
    v27 = v25 >> 4;
    v28 = v26 + v27;
    if ( v26 + v27 )
    {
      v29 = v21;
      v30 = -1;
      v31 = v79;
      v32 = v29;
      do
      {
        ++v30;
        v33 = Src;
        --v28;
        v79 = v80;
        v80 = Src;
        Src = v31;
        v34 = (_BYTE *)v123[v30 & 3];
        v35 = v27--;
        if ( v35 <= 0 )
          GetFixupScan((__int64)v92, v31);
        else
          memmove(v31, v33, v20);
        v75 = (__int64)v31;
        v31 = v79;
        v82 = SharpenInput(v92[0], v82, (_DWORD)v79, (_DWORD)v80, v75, v78);
        ExpYDIB_ExpCX(v88, (unsigned __int8 *)(v82 + v32 - 3), v34, &v34[v87]);
      }
      while ( v28 );
      v18 = v85;
      v76 = v30;
      v16 = v30;
      v17 = v84;
    }
    v36 = *(__int64 **)(v17 + 40);
    v37 = *(_DWORD *)(v17 + 16);
    while ( v37 )
    {
      v86 = v37 - 1;
      v38 = *v36;
      v77 = *v36;
      v91 = v36 + 1;
      if ( (v38 & 0x8000u) != 0 )
      {
        v39 = (int)v80;
        v40 = v79;
        v41 = (int)Src;
        v79 = v80;
        v80 = Src;
        Src = GetFixupScan((__int64)v92, v40);
        v82 = SharpenInput(v92[0], v82, v39, v41, (__int64)Src, v78);
        v76 = v16 + 1;
        v42 = (_BYTE *)v123[((_BYTE)v16 + 1) & 3];
        ExpYDIB_ExpCX(
          v88,
          (unsigned __int8 *)(v83 + (unsigned __int64)(v89 & 0xF) - 3 + v82 + 2 * (v83 + (unsigned __int64)(v89 & 0xF))),
          v42,
          &v42[v87]);
        v38 &= 0x3FFFu;
      }
      v43 = v18;
      v44 = v120;
      v45 = -WORD1(v77);
      v46 = -WORD2(v77);
      v47 = -v38;
      v48 = (unsigned __int8 *)v123[v76 & 3];
      v49 = 4096 - HIWORD(v77);
      v50 = (unsigned __int8 *)v123[((_BYTE)v76 - 1) & 3];
      if ( v38 )
      {
        v51 = (int *)(v18 + 2048);
        do
        {
          v47 += v38;
          v45 += WORD1(v77);
          v46 += WORD2(v77);
          *(v51 - 512) = v47;
          v49 += HIWORD(v77);
          *(v51 - 256) = v45;
          *v51 = v46;
          v51[256] = v49;
          ++v51;
        }
        while ( (unsigned __int64)(v51 - 512) < v90 );
        v16 = v76;
        v52 = (unsigned __int8 *)(v123[((_BYTE)v76 + 1) & 3] + 1LL);
        v53 = (unsigned __int8 *)(v123[((_BYTE)v76 - 2) & 3] + 1LL);
        v54 = v48 + 1;
        do
        {
          v44[2] = (*(_DWORD *)(v18 + 4LL * v52[1])
                  + *(_DWORD *)(v18 + 4LL * v50[2] + 2048)
                  + *(_DWORD *)(v18 + 4LL * v53[1] + 1024)
                  + *(_DWORD *)(v18 + 4LL * v54[1] + 3072)) >> 13;
          v55 = *v53;
          v53 += 3;
          v56 = *v54;
          v54 += 3;
          v57 = *(_DWORD *)(v18 + 4 * v56 + 3072)
              + *(_DWORD *)(v18 + 4 * v55 + 1024)
              + *(_DWORD *)(v18 + 4LL * v50[1] + 2048);
          v58 = *v52;
          v52 += 3;
          v44[1] = (*(_DWORD *)(v18 + 4 * v58) + v57) >> 13;
          v59 = *v50;
          v50 += 3;
          *v44 = (*(_DWORD *)(v18 + 4 * v59 + 2048)
                + *(_DWORD *)(v18 + 4LL * *(v52 - 4))
                + *(_DWORD *)(v18 + 4LL * *(v53 - 4) + 1024)
                + *(_DWORD *)(v18 + 4LL * *(v54 - 4) + 3072)) >> 13;
          v44 += v122;
        }
        while ( v44 != v121 );
      }
      else if ( WORD1(v77) )
      {
        v60 = (int *)(v18 + 2048);
        do
        {
          v45 += WORD1(v77);
          v46 += WORD2(v77);
          v49 += HIWORD(v77);
          *(v60 - 256) = v45;
          *v60 = v46;
          v60[256] = v49;
          ++v60;
        }
        while ( (unsigned __int64)(v60 - 512) < v18 + 1024 );
        v16 = v76;
        v61 = (unsigned __int8 *)(v123[((_BYTE)v76 - 2) & 3] + 1LL);
        v62 = v48 + 1;
        do
        {
          v44[2] = (*(_DWORD *)(v18 + 4LL * v50[2] + 2048)
                  + *(_DWORD *)(v18 + 4LL * v61[1] + 1024)
                  + *(_DWORD *)(v18 + 4LL * v62[1] + 3072)) >> 13;
          v63 = *v62;
          v62 += 3;
          v64 = *v61;
          v61 += 3;
          v44[1] = (*(_DWORD *)(v18 + 4 * v64 + 1024)
                  + *(_DWORD *)(v18 + 4 * v63 + 3072)
                  + *(_DWORD *)(v18 + 4LL * v50[1] + 2048)) >> 13;
          v65 = *v50;
          v50 += 3;
          *v44 = (*(_DWORD *)(v18 + 4 * v65 + 2048)
                + *(_DWORD *)(v18 + 4LL * *(v61 - 4) + 1024)
                + *(_DWORD *)(v18 + 4LL * *(v62 - 4) + 3072)) >> 13;
          v44 += v122;
        }
        while ( v44 != v121 );
      }
      else
      {
        if ( WORD2(v77) )
        {
          v66 = (int *)(v18 + 3072);
          do
          {
            v46 += WORD2(v77);
            v49 += HIWORD(v77);
            *(v66 - 256) = v46;
            *v66++ = v49;
          }
          while ( (unsigned __int64)(v66 - 768) < v18 + 1024 );
          v67 = v48 + 1;
          do
          {
            v44[2] = (*(_DWORD *)(v18 + 4LL * v50[2] + 2048) + *(_DWORD *)(v18 + 4LL * v67[1] + 3072)) >> 13;
            v68 = *v67;
            v67 += 3;
            v44[1] = (*(_DWORD *)(v18 + 4 * v68 + 3072) + *(_DWORD *)(v18 + 4LL * v50[1] + 2048)) >> 13;
            v69 = *v50;
            v50 += 3;
            *v44 = (*(_DWORD *)(v18 + 4 * v69 + 2048) + *(_DWORD *)(v18 + 4LL * *(v67 - 4) + 3072)) >> 13;
            v44 += v122;
          }
          while ( v44 != v121 );
        }
        else
        {
          do
          {
            v49 += HIWORD(v77);
            *(_DWORD *)(v43 + 3072) = v49;
            v43 += 4LL;
          }
          while ( v43 < v18 + 1024 );
          do
          {
            v44[2] = *(int *)(v18 + 4LL * v48[2] + 3072) >> 13;
            v44[1] = *(int *)(v18 + 4LL * v48[1] + 3072) >> 13;
            v70 = *v48;
            v48 += 3;
            *v44 = *(int *)(v18 + 4 * v70 + 3072) >> 13;
            v44 += v122;
          }
          while ( v44 != v121 );
        }
        v16 = v76;
      }
      v71 = v92[0];
      if ( SLOBYTE(v92[0]) < 0 )
      {
        v98(v92);
        v71 = v92[0];
      }
      if ( (v71 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v92);
        LOBYTE(v71) = v92[0];
      }
      if ( (v71 & 0x10) != 0 )
      {
        MappingBGRF(v116, v117, v104, v111);
        v72 = v114 + v111;
        if ( v72 == v112 )
          v72 = v113;
        v111 = v72;
      }
      v99(v92, v118, v119, v94, v103, v105, v105 + v109, v110, v100);
      v73 = v108 + v105;
      if ( v73 == v106 )
        v73 = v107;
      v94 += v97;
      v37 = v86;
      v105 = v73;
      v36 = v91;
    }
  }
  return v96;
}
