/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C0264850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GetFixupScan @ 0x1C014BF50 (GetFixupScan.c)
 *     AlphaBlendBGRF @ 0x1C0260824 (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C0263D84 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C0265260 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C0265A54 (MappingBGRF.c)
 */

__int64 __fastcall GrayExpandDIB_CY_ExpCX(__int64 a1)
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
  size_t v16; // r12
  __int64 v17; // r14
  unsigned __int16 v18; // di
  unsigned __int64 v19; // rsi
  char *v20; // r13
  char *v21; // rbx
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // r15d
  __int64 v26; // rax
  char *v27; // rdi
  char *v28; // rsi
  char v29; // r14
  _BYTE *v30; // r13
  int v31; // eax
  __int64 *v32; // rcx
  int v33; // eax
  unsigned __int16 v34; // bx
  char *v35; // rdx
  int v36; // edi
  _BYTE *v37; // r8
  unsigned __int64 v38; // r11
  __int64 v39; // rdx
  _WORD *v40; // r9
  int v41; // edi
  int v42; // ecx
  int v43; // r14d
  unsigned __int8 *v44; // r10
  unsigned __int8 *v45; // r8
  int v46; // r13d
  int *v47; // r11
  int v48; // ebx
  __int64 v49; // r10
  unsigned __int64 v50; // r11
  unsigned __int64 v51; // rbx
  int v52; // edx
  __int64 v53; // rax
  int *v54; // r11
  int v55; // ebx
  __int64 v56; // r10
  unsigned __int64 v57; // r11
  __int64 v58; // rcx
  int v59; // edx
  __int64 v60; // rax
  int *v61; // r11
  int v62; // ebx
  __int64 v63; // r10
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rax
  __int16 v68; // ax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v72; // [rsp+28h] [rbp-E0h]
  char v73; // [rsp+58h] [rbp-B0h]
  char *v74; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v75; // [rsp+68h] [rbp-A0h]
  __int64 v76; // [rsp+68h] [rbp-A0h]
  int v77; // [rsp+70h] [rbp-98h]
  char *v78; // [rsp+78h] [rbp-90h]
  char *Src; // [rsp+80h] [rbp-88h]
  __int64 v80; // [rsp+88h] [rbp-80h]
  __int16 v81; // [rsp+90h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-78h]
  __int64 v83; // [rsp+A0h] [rbp-68h]
  int v84; // [rsp+A0h] [rbp-68h]
  __int64 v85; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v86; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v87; // [rsp+B8h] [rbp-50h]
  __int64 *v88; // [rsp+C0h] [rbp-48h]
  int v89[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v90; // [rsp+100h] [rbp-8h]
  __int64 v91; // [rsp+150h] [rbp+48h]
  int v92; // [rsp+158h] [rbp+50h]
  unsigned int v93; // [rsp+15Ch] [rbp+54h]
  int v94; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v95)(int *, __int64, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v96)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v97; // [rsp+1E0h] [rbp+D8h]
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
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  __int64 v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  __int64 v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  _WORD *v117; // [rsp+308h] [rbp+200h]
  _WORD *v118; // [rsp+310h] [rbp+208h]
  int v119; // [rsp+318h] [rbp+210h]
  unsigned __int64 v120; // [rsp+328h] [rbp+220h]
  __int64 v121; // [rsp+330h] [rbp+228h]
  __int64 v122; // [rsp+338h] [rbp+230h]
  __int64 v123; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v89;
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
    v16 = v90;
    v17 = v99;
    v73 = -1;
    v85 = v92;
    v18 = *(_WORD *)(v98 + 8) & 1;
    v19 = *(_QWORD *)(v99 + 32);
    v86 = *(unsigned __int64 **)(v98 + 40);
    v81 = *(_WORD *)(v98 + 12);
    v83 = v99;
    v75 = v19;
    v87 = v19 + 1024;
    v120 = v19 + 4096;
    v121 = v92 + v19 + 4096;
    v77 = v90;
    v122 = v121 + v92;
    v123 = v122 + v92;
    v20 = (char *)(v92 + 3LL + v123 + v90 + 6LL);
    v74 = (char *)(v92 + 3LL + v123);
    v21 = &v20[v90 + 6];
    v78 = v20;
    LODWORD(v80) = v112 + 3;
    Src = v21;
    GetFixupScan((__int64)v89, v20);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v89, v21);
    else
      memmove(v21, v20, v16);
    v22 = *(unsigned __int16 *)(v17 + 12);
    v23 = v22 & 0xF;
    v24 = v22 >> 4;
    v25 = v23 + v24;
    v26 = v18;
    v27 = v74;
    v82 = v26 + (v81 & 0xF);
    if ( v25 )
    {
      v28 = v20;
      v29 = -1;
      do
      {
        ++v29;
        v74 = v28;
        v28 = Src;
        Src = v27;
        --v25;
        v30 = (_BYTE *)*(&v120 + (v29 & 3));
        v31 = v24--;
        if ( v31 <= 0 )
          GetFixupScan((__int64)v89, v27);
        else
          memmove(v27, v28, v16);
        v72 = (__int64)v27;
        v27 = v74;
        v80 = GraySharpenInput(v89[0], v80, (int)v74, (int)v28, v72, v16);
        GrayExpYDIB_ExpCX(v86, (unsigned __int8 *)(v80 + v82 - 1), v30, &v30[v85]);
      }
      while ( v25 );
      v78 = v28;
      v20 = v28;
      v19 = v75;
      v73 = v29;
      v17 = v83;
    }
    v32 = *(__int64 **)(v17 + 40);
    v33 = *(_DWORD *)(v17 + 16);
    while ( v33 )
    {
      v84 = v33 - 1;
      v76 = *v32;
      v88 = v32 + 1;
      v34 = *v32;
      if ( (v34 & 0x8000u) != 0 )
      {
        v35 = v27;
        v74 = v20;
        v36 = (int)Src;
        v78 = Src;
        Src = (char *)GetFixupScan((__int64)v89, v35);
        v80 = GraySharpenInput(v89[0], v80, (int)v20, v36, (__int64)Src, v77);
        v37 = (_BYTE *)*(&v120 + (++v73 & 3));
        GrayExpYDIB_ExpCX(v86, (unsigned __int8 *)(v82 - 1 + v80), v37, &v37[v85]);
        v34 &= 0x3FFFu;
      }
      v38 = v19;
      v39 = HIWORD(v76);
      v40 = v117;
      v41 = -WORD1(v76);
      v42 = -WORD2(v76);
      v43 = -v34;
      v44 = (unsigned __int8 *)*(&v120 + (v73 & 3));
      v45 = (unsigned __int8 *)*(&v120 + ((v73 - 1) & 3));
      if ( v34 )
      {
        v46 = v34;
        v47 = (int *)(v19 + 2048);
        v48 = 256 - HIWORD(v76);
        do
        {
          v43 += v46;
          v41 += WORD1(v76);
          v42 += WORD2(v76);
          *(v47 - 512) = v43;
          v48 += HIWORD(v76);
          *(v47 - 256) = v41;
          *v47 = v42;
          v47[256] = v48;
          ++v47;
        }
        while ( (unsigned __int64)(v47 - 512) < v87 );
        v49 = v44 - v45;
        v50 = *(&v120 + ((v73 - 2) & 3)) - (_QWORD)v45;
        v51 = *(&v120 + ((v73 + 1) & 3)) - (_QWORD)v45;
        do
        {
          v52 = *(_DWORD *)(v19 + 4LL * v45[v51])
              + *(_DWORD *)(v19 + 4LL * v45[v50] + 1024)
              + *(_DWORD *)(v19 + 4LL * v45[v49] + 3072);
          v53 = *v45++;
          v39 = (unsigned int)((*(_DWORD *)(v19 + 4 * v53 + 2048) + v52) >> 5);
          *v40 = v39;
          v40 = (_WORD *)((char *)v40 + v119);
        }
        while ( v40 != v118 );
      }
      else if ( WORD1(v76) )
      {
        v54 = (int *)(v19 + 2048);
        v55 = 256 - HIWORD(v76);
        do
        {
          v41 += WORD1(v76);
          v42 += WORD2(v76);
          v55 += HIWORD(v76);
          *(v54 - 256) = v41;
          *v54 = v42;
          v54[256] = v55;
          ++v54;
        }
        while ( (unsigned __int64)(v54 - 512) < v19 + 1024 );
        v56 = v44 - v45;
        v57 = *(&v120 + ((v73 - 2) & 3)) - (_QWORD)v45;
        do
        {
          v58 = v45[v57];
          v59 = *(_DWORD *)(v19 + 4LL * v45[v56] + 3072);
          v60 = *v45++;
          v39 = (unsigned int)((*(_DWORD *)(v19 + 4 * v60 + 2048) + *(_DWORD *)(v19 + 4 * v58 + 1024) + v59) >> 5);
          *v40 = v39;
          v40 = (_WORD *)((char *)v40 + v119);
        }
        while ( v40 != v118 );
      }
      else if ( WORD2(v76) )
      {
        v61 = (int *)(v19 + 3072);
        v62 = 256 - HIWORD(v76);
        do
        {
          v42 += WORD2(v76);
          v62 += HIWORD(v76);
          *(v61 - 256) = v42;
          *v61++ = v62;
        }
        while ( (unsigned __int64)(v61 - 768) < v19 + 1024 );
        v63 = v44 - v45;
        do
        {
          v64 = v45[v63];
          v65 = *v45++;
          v39 = (unsigned int)((*(_DWORD *)(v19 + 4 * v65 + 2048) + *(_DWORD *)(v19 + 4 * v64 + 3072)) >> 5);
          *v40 = v39;
          v40 = (_WORD *)((char *)v40 + v119);
        }
        while ( v40 != v118 );
      }
      else
      {
        v66 = 256 - HIWORD(v76);
        do
        {
          v66 += HIWORD(v76);
          *(_DWORD *)(v38 + 3072) = v66;
          v38 += 4LL;
        }
        while ( v38 < v19 + 1024 );
        do
        {
          v67 = *v44++;
          *v40 = *(int *)(v19 + 4 * v67 + 3072) >> 5;
          v40 = (_WORD *)((char *)v40 + v119);
        }
        while ( v40 != v118 );
      }
      v68 = v89[0];
      if ( SLOBYTE(v89[0]) < 0 )
      {
        v95(v89, v39, v45);
        v68 = v89[0];
      }
      if ( (v68 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v89);
        LOBYTE(v68) = v89[0];
      }
      if ( (v68 & 0x10) != 0 )
      {
        MappingBGRF(v113, v114, v101, v108);
        v69 = v111 + v108;
        if ( v69 == v109 )
          v69 = v110;
        v108 = v69;
      }
      v96(v89, v115, v116, v91, v100, v102, v102 + v106, v107, v97);
      v20 = v78;
      v70 = v105 + v102;
      if ( v70 == v103 )
        v70 = v104;
      v91 += v94;
      v33 = v84;
      v27 = v74;
      v102 = v70;
      v32 = v88;
    }
  }
  return v93;
}
