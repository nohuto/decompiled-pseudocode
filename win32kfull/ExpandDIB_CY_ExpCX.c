/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C0262870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GetFixupScan @ 0x1C014BF50 (GetFixupScan.c)
 *     AlphaBlendBGRF @ 0x1C0260824 (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C0261904 (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C0265A54 (MappingBGRF.c)
 *     SharpenInput @ 0x1C0265E60 (SharpenInput.c)
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
  __int64 v16; // r14
  __int16 v17; // di
  unsigned __int16 v18; // r13
  unsigned __int64 v19; // rbx
  size_t v20; // r12
  __int64 v21; // rax
  char *v22; // rsi
  char *v23; // r15
  unsigned int v24; // esi
  int v25; // eax
  int v26; // esi
  int v27; // r15d
  unsigned __int64 v28; // rdi
  char *v29; // rbx
  char *v30; // r14
  char v31; // r13
  __int64 v32; // rax
  char *v33; // rdi
  int v34; // eax
  __int64 v35; // r15
  __int64 *v36; // rcx
  int v37; // eax
  unsigned __int16 v38; // di
  int v39; // r14d
  char *v40; // rdx
  int v41; // esi
  _BYTE *v42; // r8
  unsigned __int64 v43; // r9
  _BYTE *v44; // r8
  int v45; // r11d
  int v46; // ecx
  int v47; // r14d
  unsigned __int8 *v48; // r10
  unsigned __int8 *v49; // rsi
  int *v50; // r9
  int v51; // edi
  unsigned __int8 *v52; // r9
  unsigned __int8 *v53; // r11
  unsigned __int8 *v54; // r10
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rax
  int *v60; // r9
  int v61; // edi
  unsigned __int8 *v62; // r9
  unsigned __int8 *v63; // r10
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  int *v67; // r9
  int v68; // r11d
  unsigned __int8 *v69; // r10
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rax
  __int16 v74; // ax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v78; // [rsp+28h] [rbp-E0h]
  __int64 v79; // [rsp+58h] [rbp-B0h]
  __int64 v80; // [rsp+58h] [rbp-B0h]
  char *Src; // [rsp+60h] [rbp-A8h]
  _BYTE *Srca; // [rsp+60h] [rbp-A8h]
  int v83; // [rsp+68h] [rbp-A0h]
  char *v84; // [rsp+70h] [rbp-98h]
  char *v85; // [rsp+78h] [rbp-90h]
  __int64 v86; // [rsp+80h] [rbp-88h]
  __int64 v87; // [rsp+88h] [rbp-80h]
  int v88; // [rsp+90h] [rbp-78h]
  int v89; // [rsp+94h] [rbp-74h]
  __int64 v90; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v91; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v92; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v93; // [rsp+B0h] [rbp-58h]
  __int64 *v94; // [rsp+B8h] [rbp-50h]
  int v95[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v96; // [rsp+100h] [rbp-8h]
  __int64 v97; // [rsp+150h] [rbp+48h]
  int v98; // [rsp+158h] [rbp+50h]
  unsigned int v99; // [rsp+15Ch] [rbp+54h]
  int v100; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v101)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v102)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v103; // [rsp+1E0h] [rbp+D8h]
  __int64 v104; // [rsp+1F8h] [rbp+F0h]
  __int64 v105; // [rsp+200h] [rbp+F8h]
  __int64 v106; // [rsp+248h] [rbp+140h]
  __int64 v107; // [rsp+250h] [rbp+148h]
  __int64 v108; // [rsp+260h] [rbp+158h]
  __int64 v109; // [rsp+268h] [rbp+160h]
  __int64 v110; // [rsp+270h] [rbp+168h]
  int v111; // [rsp+278h] [rbp+170h]
  int v112; // [rsp+27Ch] [rbp+174h]
  int v113; // [rsp+280h] [rbp+178h]
  __int64 v114; // [rsp+288h] [rbp+180h]
  __int64 v115; // [rsp+290h] [rbp+188h]
  __int64 v116; // [rsp+298h] [rbp+190h]
  int v117; // [rsp+2A0h] [rbp+198h]
  __int64 v118; // [rsp+2E0h] [rbp+1D8h]
  __int64 v119; // [rsp+2E8h] [rbp+1E0h]
  __int64 v120; // [rsp+2F0h] [rbp+1E8h]
  __int64 v121; // [rsp+2F8h] [rbp+1F0h]
  __int64 v122; // [rsp+300h] [rbp+1F8h]
  _BYTE *v123; // [rsp+308h] [rbp+200h]
  _BYTE *v124; // [rsp+310h] [rbp+208h]
  int v125; // [rsp+318h] [rbp+210h]
  _QWORD v126[3]; // [rsp+328h] [rbp+220h]
  __int64 v127; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v95;
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
    v16 = v105;
    v79 = v105;
    v17 = *(_WORD *)(v104 + 12);
    v18 = *(_WORD *)(v104 + 8) & 1;
    v19 = *(_QWORD *)(v105 + 32);
    v91 = *(unsigned __int64 **)(v104 + 40);
    v92 = v19;
    v93 = v19 + 1024;
    v126[0] = v19 + 4096;
    v20 = 3 * v96;
    v83 = 3 * v96;
    v90 = 3 * v98;
    v21 = v90 + v19 + 4096;
    v126[1] = v21;
    v126[2] = v90 + v21;
    v127 = v90 + v90 + v21;
    v22 = (char *)(v90 + 9 + v127 + v20 + 18);
    v84 = (char *)(v90 + 9 + v127);
    v23 = &v22[v20 + 18];
    v85 = v22;
    LODWORD(v86) = v118 + 9;
    Src = v23;
    GetFixupScan((__int64)v95, v22);
    if ( (*(_BYTE *)(v16 + 8) & 1) != 0 )
      GetFixupScan((__int64)v95, v23);
    else
      memmove(v23, v22, v20);
    v24 = *(unsigned __int16 *)(v16 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v25 + v26;
    v28 = v18 + (unsigned __int64)(v17 & 0xF);
    if ( v25 + v26 )
    {
      v29 = v85;
      v30 = Src;
      v31 = -1;
      v32 = 3 * (v28 - 1);
      v33 = v84;
      v87 = v32;
      do
      {
        ++v31;
        v84 = v29;
        --v27;
        v29 = v30;
        v30 = v33;
        v34 = v26--;
        Srca = (_BYTE *)v126[v31 & 3];
        if ( v34 <= 0 )
          GetFixupScan((__int64)v95, v33);
        else
          memmove(v33, v29, v20);
        v78 = (__int64)v33;
        v33 = v84;
        v86 = SharpenInput(v95[0], v86, (_DWORD)v84, (_DWORD)v29, v78, v83);
        ExpYDIB_ExpCX(v91, (unsigned __int8 *)(v87 + v86), Srca, &Srca[v90]);
      }
      while ( v27 );
      v35 = v87;
      Src = v30;
      v16 = v79;
      v85 = v29;
      v19 = v92;
    }
    else
    {
      v31 = -1;
      v35 = 3 * (v28 - 1);
      v87 = v35;
    }
    v36 = *(__int64 **)(v16 + 40);
    v37 = *(_DWORD *)(v16 + 16);
    while ( v37 )
    {
      v89 = v37 - 1;
      v80 = *v36;
      v94 = v36 + 1;
      v38 = *v36;
      if ( (v38 & 0x8000u) != 0 )
      {
        v39 = (int)v85;
        v40 = v84;
        v41 = (int)Src;
        v84 = v85;
        v85 = Src;
        Src = (char *)GetFixupScan((__int64)v95, v40);
        ++v31;
        v86 = SharpenInput(v95[0], v86, v39, v41, (__int64)Src, v83);
        v42 = (_BYTE *)v126[v31 & 3];
        ExpYDIB_ExpCX(v91, (unsigned __int8 *)(v35 + v86), v42, &v42[v90]);
        v38 &= 0x3FFFu;
      }
      v43 = v19;
      v44 = v123;
      v45 = -WORD1(v80);
      v46 = -WORD2(v80);
      v88 = v38;
      v47 = -v38;
      v48 = (unsigned __int8 *)v126[v31 & 3];
      v49 = (unsigned __int8 *)v126[(v31 - 1) & 3];
      if ( v38 )
      {
        v50 = (int *)(v19 + 2048);
        v51 = 4096 - HIWORD(v80);
        do
        {
          v47 += v88;
          v45 += WORD1(v80);
          v46 += WORD2(v80);
          *(v50 - 512) = v47;
          v51 += HIWORD(v80);
          *(v50 - 256) = v45;
          *v50 = v46;
          v50[256] = v51;
          ++v50;
        }
        while ( (unsigned __int64)(v50 - 512) < v93 );
        v19 = v92;
        v52 = (unsigned __int8 *)(v126[(v31 + 1) & 3] + 1LL);
        v53 = (unsigned __int8 *)(v126[(v31 - 2) & 3] + 1LL);
        v54 = v48 + 1;
        do
        {
          v44[2] = (*(_DWORD *)(v92 + 4LL * v52[1])
                  + *(_DWORD *)(v92 + 4LL * v49[2] + 2048)
                  + *(_DWORD *)(v92 + 4LL * v53[1] + 1024)
                  + *(_DWORD *)(v92 + 4LL * v54[1] + 3072)) >> 13;
          v55 = *v54;
          v54 += 3;
          v56 = *v53;
          v53 += 3;
          v57 = *(_DWORD *)(v92 + 4 * v56 + 1024)
              + *(_DWORD *)(v92 + 4 * v55 + 3072)
              + *(_DWORD *)(v92 + 4LL * v49[1] + 2048);
          v58 = *v52;
          v52 += 3;
          v44[1] = (*(_DWORD *)(v92 + 4 * v58) + v57) >> 13;
          v59 = *v49;
          v49 += 3;
          *v44 = (*(_DWORD *)(v92 + 4 * v59 + 2048)
                + *(_DWORD *)(v92 + 4LL * *(v52 - 4))
                + *(_DWORD *)(v92 + 4LL * *(v53 - 4) + 1024)
                + *(_DWORD *)(v92 + 4LL * *(v54 - 4) + 3072)) >> 13;
          v44 += v125;
        }
        while ( v44 != v124 );
      }
      else if ( WORD1(v80) )
      {
        v60 = (int *)(v19 + 2048);
        v61 = 4096 - HIWORD(v80);
        do
        {
          v45 += WORD1(v80);
          v46 += WORD2(v80);
          v61 += HIWORD(v80);
          *(v60 - 256) = v45;
          *v60 = v46;
          v60[256] = v61;
          ++v60;
        }
        while ( (unsigned __int64)(v60 - 512) < v19 + 1024 );
        v62 = (unsigned __int8 *)(v126[(v31 - 2) & 3] + 1LL);
        v63 = v48 + 1;
        do
        {
          v44[2] = (*(_DWORD *)(v19 + 4LL * v49[2] + 2048)
                  + *(_DWORD *)(v19 + 4LL * v62[1] + 1024)
                  + *(_DWORD *)(v19 + 4LL * v63[1] + 3072)) >> 13;
          v64 = *v62;
          v62 += 3;
          v65 = *v63;
          v63 += 3;
          v44[1] = (*(_DWORD *)(v19 + 4 * v65 + 3072)
                  + *(_DWORD *)(v19 + 4 * v64 + 1024)
                  + *(_DWORD *)(v19 + 4LL * v49[1] + 2048)) >> 13;
          v66 = *v49;
          v49 += 3;
          *v44 = (*(_DWORD *)(v19 + 4 * v66 + 2048)
                + *(_DWORD *)(v19 + 4LL * *(v62 - 4) + 1024)
                + *(_DWORD *)(v19 + 4LL * *(v63 - 4) + 3072)) >> 13;
          v44 += v125;
        }
        while ( v44 != v124 );
      }
      else if ( WORD2(v80) )
      {
        v67 = (int *)(v19 + 3072);
        v68 = 4096 - HIWORD(v80);
        do
        {
          v46 += WORD2(v80);
          v68 += HIWORD(v80);
          *(v67 - 256) = v46;
          *v67++ = v68;
        }
        while ( (unsigned __int64)(v67 - 768) < v19 + 1024 );
        v69 = v48 + 1;
        do
        {
          v44[2] = (*(_DWORD *)(v19 + 4LL * v49[2] + 2048) + *(_DWORD *)(v19 + 4LL * v69[1] + 3072)) >> 13;
          v70 = *v69;
          v69 += 3;
          v44[1] = (*(_DWORD *)(v19 + 4 * v70 + 3072) + *(_DWORD *)(v19 + 4LL * v49[1] + 2048)) >> 13;
          v71 = *v49;
          v49 += 3;
          *v44 = (*(_DWORD *)(v19 + 4 * v71 + 2048) + *(_DWORD *)(v19 + 4LL * *(v69 - 4) + 3072)) >> 13;
          v44 += v125;
        }
        while ( v44 != v124 );
      }
      else
      {
        v72 = 4096 - HIWORD(v80);
        do
        {
          v72 += HIWORD(v80);
          *(_DWORD *)(v43 + 3072) = v72;
          v43 += 4LL;
        }
        while ( v43 < v19 + 1024 );
        do
        {
          v44[2] = *(int *)(v19 + 4LL * v48[2] + 3072) >> 13;
          v44[1] = *(int *)(v19 + 4LL * v48[1] + 3072) >> 13;
          v73 = *v48;
          v48 += 3;
          *v44 = *(int *)(v19 + 4 * v73 + 3072) >> 13;
          v44 += v125;
        }
        while ( v44 != v124 );
      }
      v74 = v95[0];
      if ( SLOBYTE(v95[0]) < 0 )
      {
        v101(v95);
        v74 = v95[0];
      }
      if ( (v74 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v95);
        LOBYTE(v74) = v95[0];
      }
      if ( (v74 & 0x10) != 0 )
      {
        MappingBGRF(v119, v120, v107, v114);
        v75 = v117 + v114;
        if ( v75 == v115 )
          v75 = v116;
        v114 = v75;
      }
      v102(v95, v121, v122, v97, v106, v108, v108 + v112, v113, v103);
      v35 = v87;
      v76 = v111 + v108;
      if ( v76 == v109 )
        v76 = v110;
      v97 += v100;
      v37 = v89;
      v108 = v76;
      v36 = v94;
    }
  }
  return v99;
}
