/*
 * XREFs of sub_18005D590 @ 0x18005D590
 * Callers:
 *     sub_18004C628 @ 0x18004C628 (sub_18004C628.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 * Callees:
 *     sub_1800104CC @ 0x1800104CC (sub_1800104CC.c)
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18004C0F0 @ 0x18004C0F0 (sub_18004C0F0.c)
 *     sub_18004C1E0 @ 0x18004C1E0 (sub_18004C1E0.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     sub_18005DFE0 @ 0x18005DFE0 (sub_18005DFE0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180123868 @ 0x180123868 (sub_180123868.c)
 *     sub_180123A54 @ 0x180123A54 (sub_180123A54.c)
 *     sub_180123B58 @ 0x180123B58 (sub_180123B58.c)
 *     sub_180123E08 @ 0x180123E08 (sub_180123E08.c)
 *     sub_180124208 @ 0x180124208 (sub_180124208.c)
 *     sub_1801246E0 @ 0x1801246E0 (sub_1801246E0.c)
 *     sub_180125388 @ 0x180125388 (sub_180125388.c)
 *     sub_180125444 @ 0x180125444 (sub_180125444.c)
 *     sub_1801255D4 @ 0x1801255D4 (sub_1801255D4.c)
 *     sub_180125838 @ 0x180125838 (sub_180125838.c)
 *     sub_180126AE8 @ 0x180126AE8 (sub_180126AE8.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall sub_18005D590(
        __int64 a1,
        wchar_t *a2,
        char a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
        wchar_t *a7)
{
  __int64 v9; // r12
  bool v10; // r15
  int v11; // ebx
  int v12; // r14d
  unsigned int v13; // esi
  unsigned __int64 v14; // r8
  unsigned int v15; // r9d
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // r8
  int v19; // esi
  char v20; // r14
  __int64 (__fastcall ***v21)(_QWORD, __int128 *); // rcx
  __int128 *v22; // r12
  __int64 v23; // r15
  __int128 *v24; // r14
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // cl
  int v28; // edx
  unsigned int v29; // r12d
  unsigned int v30; // r10d
  unsigned int v31; // r11d
  __int128 *v32; // rax
  __int128 v33; // xmm1
  __int128 *v34; // rax
  __int128 *v35; // rax
  int v36; // eax
  bool v37; // r14
  __int64 v38; // r12
  unsigned __int64 v39; // r8
  unsigned int v40; // esi
  unsigned __int8 *v41; // r14
  __int64 v42; // r12
  wchar_t *v43; // rsi
  int v44; // esi
  wchar_t *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int16 *v49; // rbx
  unsigned __int16 *v50; // r14
  int v51; // ecx
  __int64 v52; // r10
  int v53; // ecx
  char v54; // dl
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // ecx
  int v60; // r8d
  const wchar_t *v61; // rax
  __int128 *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // edx
  unsigned __int16 v67; // cx
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int16 v70; // cx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int16 v73; // r10
  __int16 v74; // dx
  int v75; // ecx
  __int16 v76; // ax
  __int64 v77; // rax
  int v78; // eax
  unsigned __int64 v79; // r8
  int v80; // ecx
  unsigned __int16 v81; // ax
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int16 v84; // dx
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // r9d
  __int16 v88; // r10
  __int16 v89; // dx
  int v90; // ecx
  __int16 v91; // ax
  __int64 v92; // rax
  wchar_t *v93; // rax
  int v94; // r8d
  int v95; // r9d
  int v96; // r10d
  int v97; // r8d
  __int128 *v98; // r9
  int v99; // r10d
  unsigned int v100; // eax
  int v101; // ecx
  int v102; // r8d
  int v103; // ecx
  int v104; // r9d
  unsigned __int8 v105; // dl
  int v106; // r8d
  int v107; // r9d
  char v108; // r10
  __int64 v109; // rcx
  __int64 v110; // r9
  __int64 v111; // r9
  __int64 v112; // r9
  int v113; // ecx
  int v114; // r8d
  int v115; // r9d
  bool v116; // [rsp+E0h] [rbp-80h]
  unsigned __int8 v117; // [rsp+E1h] [rbp-7Fh]
  char v118; // [rsp+E2h] [rbp-7Eh] BYREF
  char v119; // [rsp+E3h] [rbp-7Dh] BYREF
  char v120; // [rsp+E4h] [rbp-7Ch] BYREF
  char v121; // [rsp+E5h] [rbp-7Bh] BYREF
  char v122; // [rsp+E6h] [rbp-7Ah] BYREF
  unsigned __int8 v123; // [rsp+E7h] [rbp-79h] BYREF
  char v124[4]; // [rsp+E8h] [rbp-78h] BYREF
  int v125; // [rsp+ECh] [rbp-74h] BYREF
  int v126; // [rsp+F0h] [rbp-70h] BYREF
  unsigned int v127; // [rsp+F4h] [rbp-6Ch] BYREF
  unsigned int v128; // [rsp+F8h] [rbp-68h] BYREF
  int v129; // [rsp+FCh] [rbp-64h] BYREF
  wchar_t *v130; // [rsp+100h] [rbp-60h]
  int v131; // [rsp+108h] [rbp-58h] BYREF
  unsigned int v132; // [rsp+10Ch] [rbp-54h] BYREF
  unsigned int v133; // [rsp+110h] [rbp-50h] BYREF
  int v134; // [rsp+114h] [rbp-4Ch] BYREF
  __int64 v135; // [rsp+118h] [rbp-48h] BYREF
  const wchar_t *v136; // [rsp+120h] [rbp-40h] BYREF
  _WORD v137[2]; // [rsp+128h] [rbp-38h] BYREF
  unsigned int v138; // [rsp+12Ch] [rbp-34h] BYREF
  int v139; // [rsp+130h] [rbp-30h] BYREF
  __int128 *v140; // [rsp+138h] [rbp-28h] BYREF
  wchar_t *v141; // [rsp+140h] [rbp-20h] BYREF
  __int64 v142; // [rsp+148h] [rbp-18h] BYREF
  unsigned __int16 *v143; // [rsp+150h] [rbp-10h] BYREF
  __int128 *v144; // [rsp+158h] [rbp-8h] BYREF
  int v145; // [rsp+160h] [rbp+0h] BYREF
  int v146; // [rsp+164h] [rbp+4h] BYREF
  int v147; // [rsp+168h] [rbp+8h] BYREF
  unsigned __int16 *v148; // [rsp+170h] [rbp+10h] BYREF
  wchar_t *v149; // [rsp+178h] [rbp+18h] BYREF
  __int16 v150; // [rsp+180h] [rbp+20h] BYREF
  __int16 v151; // [rsp+182h] [rbp+22h] BYREF
  int v152; // [rsp+184h] [rbp+24h]
  unsigned int v153; // [rsp+188h] [rbp+28h] BYREF
  __int128 *v154; // [rsp+190h] [rbp+30h] BYREF
  __int64 v155; // [rsp+198h] [rbp+38h]
  __int128 *v156; // [rsp+1A0h] [rbp+40h] BYREF
  __int64 v157; // [rsp+1A8h] [rbp+48h] BYREF
  PROPVARIANT v158[2]; // [rsp+1B0h] [rbp+50h] BYREF
  unsigned __int16 *v159; // [rsp+1C0h] [rbp+60h]
  __int64 v160; // [rsp+1C8h] [rbp+68h]
  __int64 v161; // [rsp+1D0h] [rbp+70h]
  PROPVARIANT pvar[2]; // [rsp+1D8h] [rbp+78h] BYREF
  _BYTE v163[24]; // [rsp+1E8h] [rbp+88h]
  __int128 v164; // [rsp+200h] [rbp+A0h] BYREF
  _BYTE v165[24]; // [rsp+210h] [rbp+B0h]
  __int64 v166; // [rsp+238h] [rbp+D8h]
  __int128 v167; // [rsp+240h] [rbp+E0h] BYREF
  __int128 v168; // [rsp+250h] [rbp+F0h] BYREF
  __int128 v169; // [rsp+260h] [rbp+100h]
  __int64 v170; // [rsp+270h] [rbp+110h]
  _OWORD Buf2[5]; // [rsp+280h] [rbp+120h] BYREF
  __int128 v172; // [rsp+2D0h] [rbp+170h] BYREF
  int v173; // [rsp+2E0h] [rbp+180h]
  _OWORD Buf1[5]; // [rsp+2F0h] [rbp+190h] BYREF
  _DWORD v175[1668]; // [rsp+340h] [rbp+1E0h] BYREF
  _DWORD Src[1668]; // [rsp+1D50h] [rbp+1BF0h] BYREF

  v122 = a3;
  v130 = a2;
  v148 = a5;
  v9 = a6;
  v155 = a6;
  v160 = a6;
  v141 = a7;
  v138 = 10;
  v146 = 2;
  v152 = 0;
  v134 = -1;
  v153 = -1;
  v133 = -1;
  v129 = -1;
  v145 = -1;
  v10 = 0;
  v116 = 0;
  v124[0] = 0;
  v123 = 0;
  v168 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  v117 = 0;
  v132 = 0;
  memset(Buf1, 0, 0x48uLL);
  v139 = 0;
  v147 = 0;
  v167 = xmmword_18015B730;
  memset(Buf2, 0, 0x48uLL);
  memset(Src, 0, sizeof(Src));
  v143 = 0LL;
  v157 = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_OWORD *)v158 = 0LL;
  v159 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v161 = a1;
  v172 = xmmword_18015C470;
  v173 = 0;
  v11 = sub_18005DFE0(&v157, &v172, &v138);
  if ( v11 == -2147023728 )
  {
    v138 = 10;
    v11 = 0;
  }
  if ( v11 < 0 )
    goto LABEL_98;
  v172 = xmmword_1801609E0;
  v173 = 2;
  v11 = sub_18005DFE0(&v157, &v172, &v146);
  if ( v11 == -2147023728 )
  {
    v146 = 2;
    v11 = 0;
  }
  if ( v11 < 0 )
    goto LABEL_98;
  if ( v138 != 9
    && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a4 + 40LL))(a4, &unk_18015C4C8, v158) >= 0
    && LOWORD(v158[0]) == 65
    && sub_180047420((__int64)v158) )
  {
    v49 = v159;
    if ( (int)sub_18001FEF0((__int64)v159) >= 0 )
    {
      v50 = v49;
      v143 = v49;
      if ( a5 )
      {
        if ( !(unsigned int)sub_18004B400(v49, a5) )
          v50 = 0LL;
        v143 = v50;
      }
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
  if ( v11 < 0 )
    goto LABEL_98;
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v139);
  if ( v11 < 0 )
    goto LABEL_98;
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(*(_QWORD *)(a1 + 56), &v147);
  if ( v11 < 0 )
    goto LABEL_98;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 56) + 48LL))(*(_QWORD *)(a1 + 56), &v167);
  if ( v11 < 0 )
    goto LABEL_98;
  v172 = v167;
  if ( v139 )
    v122 = 1;
  v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 48) + 96LL))(*(_QWORD *)(a1 + 48), &v132);
  v13 = v132;
  if ( v12 >= 0 && v132 <= 8 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, _DWORD *, _QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(
            *(_QWORD *)(a1 + 48),
            Buf1,
            v175,
            834 * v132);
    v13 = v132;
  }
  sub_18004C1E0((__int64)pvar, (__int64)v148);
  v15 = dword_18019C448;
  if ( (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&dword_18019C448,
         (const struct _TlgProvider_t *)0x10,
         v14) )
  {
    v156 = (_OWORD *)((char *)&Buf1[1] + 12);
    v121 = BYTE4(Buf1[0]);
    LODWORD(v154) = Buf1[4];
    v150 = WORD1(pvar[1]);
    v151 = (__int16)pvar[1];
    v149 = (wchar_t *)&pvar[1] + 2;
    LODWORD(v142) = HIDWORD(pvar[0]);
    LODWORD(v135) = *(_DWORD *)&v163[12];
    v137[0] = pvar[0];
    v131 = v13;
    v126 = v12;
    v144 = &v167;
    LOWORD(v128) = v138;
    LOWORD(v127) = v139;
    LOWORD(v125) = WORD2(Buf1[4]);
    v120 = BYTE8(Buf1[0]);
    v140 = (_OWORD *)((char *)Buf1 + 12);
    v118 = BYTE12(Buf1[3]);
    v119 = Buf1[0];
    v136 = v130;
    sub_180124208(
      v51,
      (unsigned int)&unk_18016BA6F,
      v14,
      v15,
      (__int64)&v136,
      (__int64)&v119,
      (__int64)&v118,
      (__int64)&v140,
      (__int64)&v120,
      (__int64)&v125,
      (__int64)&v127,
      (__int64)&v128,
      (__int64)&v144,
      (__int64)&v126,
      (__int64)&v131,
      (__int64)v137,
      (__int64)&v135,
      (__int64)&v142,
      (__int64)&v149,
      (__int64)&v151,
      (__int64)&v150,
      (__int64)&v154,
      (__int64)&v121,
      (__int64)&v156);
    v13 = v132;
    v15 = dword_18019C448;
  }
  v16 = 0;
  if ( v12 < 0 )
    goto LABEL_341;
  while ( v16 < v13 )
  {
    if ( v15 > 4 )
    {
      if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v14) )
      {
        v52 = 834LL * v16;
        v53 = *((unsigned __int8 *)&v175[199] + v52);
        v54 = *((_BYTE *)&v175[198] + v52);
        v55 = *((unsigned __int8 *)&v175[197] + v52);
        v56 = *((unsigned __int8 *)&v175[196] + v52);
        v136 = (const wchar_t *)((char *)v175 + v52);
        v140 = (__int128 *)((char *)&v175[128] + v52);
        LOWORD(v125) = *(_WORD *)((char *)&v175[208] + v52);
        LOWORD(v127) = *(_WORD *)((char *)&v175[207] + v52 + 2);
        LOWORD(v128) = *(_WORD *)((char *)&v175[207] + v52);
        v144 = (__int128 *)((char *)&v175[203] + v52);
        v126 = *(_DWORD *)((char *)&v175[202] + v52);
        v131 = *(_DWORD *)((char *)&v175[201] + v52);
        LODWORD(v135) = *(_DWORD *)((char *)&v175[200] + v52);
        v119 = v53;
        v118 = v54;
        v121 = v55;
        v120 = v56;
        v149 = (wchar_t *)((char *)&v175[192] + v52);
        LODWORD(v142) = v16;
        sub_1801255D4(
          v53,
          (unsigned int)&unk_18016BBFD,
          v55,
          v56,
          (__int64)&v142,
          (__int64)&v149,
          (__int64)&v120,
          (__int64)&v121,
          (__int64)&v118,
          (__int64)&v119,
          (__int64)&v135,
          (__int64)&v131,
          (__int64)&v126,
          (__int64)&v144,
          (__int64)&v128,
          (__int64)&v127,
          (__int64)&v125,
          (__int64)&v140,
          (__int64)&v136);
        v13 = v132;
        v15 = dword_18019C448;
      }
    }
    ++v16;
  }
  if ( v13 > 8 )
  {
LABEL_341:
    if ( !*(_BYTE *)(a1 + 72) )
    {
      v11 = 0;
LABEL_98:
      v45 = v130;
      goto LABEL_99;
    }
    if ( v15 > 4
      && __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x10,
           v14) )
    {
      v126 = v12;
      v136 = v130;
      sub_1800512F4((__int64)&dword_18019C448, byte_18016A7D3, v57, v58, (void **)&v136, (__int64)&v126);
    }
    v132 = 0;
    memset(Buf1, 0, 0x48uLL);
    memset(v175, 0, sizeof(v175));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 6852) )
    {
      *(_BYTE *)(a1 + 6852) = 1;
      *(_OWORD *)(a1 + 104) = Buf1[0];
      *(_OWORD *)(a1 + 120) = Buf1[1];
      *(_OWORD *)(a1 + 136) = Buf1[2];
      *(_OWORD *)(a1 + 152) = Buf1[3];
      *(_QWORD *)(a1 + 168) = *(_QWORD *)&Buf1[4];
      *(_DWORD *)(a1 + 176) = v13;
      memcpy((void *)(a1 + 180), v175, 834LL * v13);
    }
    if ( !v13 || *(_BYTE *)(a1 + 75) )
    {
      v17 = HIDWORD(Buf1[3]);
    }
    else
    {
      v17 = HIDWORD(Buf1[3]);
      if ( HIDWORD(Buf1[3]) != LODWORD(Buf1[0]) )
      {
        if ( !*(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 104) )
        {
          v17 = Buf1[0];
          HIDWORD(Buf1[3]) = Buf1[0];
        }
        else
        {
          LODWORD(Buf1[0]) = HIDWORD(Buf1[3]);
        }
      }
    }
    v10 = v17 != 0;
    v116 = v17 != 0;
    v117 = 1;
  }
  v11 = sub_18004C0F0(a1);
  if ( v11 < 0 )
    goto LABEL_98;
  sub_1800367E0(dword_18019FAE0, 0, v18);
  if ( dword_18019F770[0] > 8u )
  {
    v11 = -2147418113;
    goto LABEL_98;
  }
  v19 = sub_1800104CC();
  v136 = (const wchar_t *)&v164;
  v20 = v10 || (v19 & 8) != 0;
  v166 = 0LL;
  v21 = *(__int64 (__fastcall ****)(_QWORD, __int128 *))(a6 + 56);
  if ( v21 )
    v166 = (**v21)(v21, &v164);
  v22 = (__int128 *)v130;
  v23 = (unsigned int)sub_18001D9E0(
                        a1,
                        v117,
                        (__int64)Buf1,
                        v132,
                        (__int64)v175,
                        v138,
                        v139,
                        (__int64)v148,
                        v143,
                        v20,
                        (__int64)&v164,
                        (__int64)v130,
                        v146,
                        (__int64)Src,
                        (unsigned int *)&v134,
                        &v153,
                        &v133,
                        (__int64)&v129,
                        (__int64)&v145,
                        (__int64)Buf1);
  v24 = &xmmword_18015B730;
  v25 = v117;
  if ( v117 )
    goto LABEL_41;
  LODWORD(v26) = v129;
  v27 = v129 != -1;
  v116 = v27;
  if ( (unsigned int)dword_18019C448 > 4 )
  {
    if ( !__vcrt_trace_logging_provider::_TlgKeywordOn(
            (__vcrt_trace_logging_provider *)&dword_18019C448,
            (const struct _TlgProvider_t *)0x400000000000LL,
            v117) )
    {
      v25 = 0LL;
      goto LABEL_42;
    }
    if ( (_DWORD)v26 == -1 )
    {
      v61 = L"<none>";
      v62 = &xmmword_18015B730;
    }
    else
    {
      v59 = 834 * v26;
      v61 = (const wchar_t *)Src + 417 * v26;
      v62 = (__int128 *)((char *)&Src[192] + 834 * v26);
    }
    v136 = v61;
    v140 = v62;
    v144 = v22;
    sub_180123A54(v59, (unsigned int)&unk_18016A3BA, v60, v26, (__int64)&v144, (__int64)&v140, (__int64)&v136);
    v25 = 0LL;
LABEL_41:
    LODWORD(v26) = v129;
LABEL_42:
    v27 = v116;
  }
  v121 = 1;
  v28 = 1;
  v29 = v134;
  if ( v134 == -1 )
  {
    v29 = v26;
    v121 = 0;
    if ( (_DWORD)v26 == -1 )
    {
      v30 = v153;
      v128 = v153;
      v31 = v133;
      v127 = v133;
      goto LABEL_46;
    }
  }
  v131 = 65534;
  v128 = v153;
  v127 = v133;
  while ( 1 )
  {
    v119 = 0;
    v126 = 0;
    v142 = 834LL * v29;
    v154 = (__int128 *)((char *)&Src[192] + v142);
    v135 = sub_180126AE8(&Src[192], (char *)&Src[192] + v142);
    v63 = sub_18005B754((__int64)&v164, v155);
    v118 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int16 *, unsigned __int16 *, __int64, int, int *, char *, __int128 *))(*(_QWORD *)v135 + 40LL))(
             v135,
             v138,
             v148,
             v143,
             v63,
             v146,
             &v126,
             &v119,
             &v168);
    if ( !v143 )
    {
LABEL_203:
      v120 = 0;
      goto LABEL_204;
    }
    v66 = *v143;
    v67 = v143[8];
    v65 = 0x10000000000003LL;
    v64 = 0x719B3800AA000080LL;
    if ( (_WORD)v66 == 0xFFFE )
    {
      if ( v67 != 22 )
      {
        v68 = *((_QWORD *)v143 + 3) - 0x10000000000003LL;
        if ( *((_QWORD *)v143 + 3) == 0x10000000000003LL )
          v68 = *((_QWORD *)v143 + 4) - 0x719B3800AA000080LL;
        if ( v68 )
        {
          v69 = *((_QWORD *)v143 + 3) - 0x10000000000001LL;
          if ( *((_QWORD *)v143 + 3) == 0x10000000000001LL )
            v69 = *((_QWORD *)v143 + 4) - 0x719B3800AA000080LL;
          if ( v69 )
            goto LABEL_202;
        }
      }
      v164 = *(_OWORD *)v143;
      *(_OWORD *)v165 = *((_OWORD *)v143 + 1);
      *(_QWORD *)&v165[16] = *((_QWORD *)v143 + 4);
      *(_WORD *)v165 = 22;
      v134 = *(_DWORD *)&v165[4];
      v133 = (unsigned __int16)v164;
    }
    else
    {
      if ( v67 && (((_WORD)v66 - 1) & 0xFFFD) != 0 )
        goto LABEL_202;
      v64 = v143[1];
      if ( (unsigned __int16)(v64 - 1) > 1u )
        goto LABEL_202;
      v70 = v143[7];
      if ( ((v70 - 8) & 0xFFE7) != 0 )
        goto LABEL_202;
      v164 = *(_OWORD *)v143;
      v133 = 65534;
      LOWORD(v164) = -2;
      *(_WORD *)v165 = 22;
      *(_WORD *)&v165[2] = v70;
      *(_OWORD *)&v165[8] = xmmword_18015B740;
      *(_DWORD *)&v165[8] = v66;
      v134 = ((_WORD)v64 == 1) + 3;
      v64 = 0x719B3800AA000080LL;
    }
    if ( (_WORD)v168 == 0xFFFE )
    {
      if ( (_WORD)v169 != 22 )
      {
        v71 = *((_QWORD *)&v169 + 1) - 0x10000000000003LL;
        if ( *((_QWORD *)&v169 + 1) == 0x10000000000003LL )
          v71 = v170 - 0x719B3800AA000080LL;
        if ( v71 )
        {
          v72 = *((_QWORD *)&v169 + 1) - 0x10000000000001LL;
          if ( *((_QWORD *)&v169 + 1) == 0x10000000000001LL )
            v72 = v170 - 0x719B3800AA000080LL;
          if ( v72 )
            goto LABEL_202;
        }
      }
      *(_OWORD *)pvar = v168;
      *(_OWORD *)v163 = v169;
      *(_QWORD *)&v163[16] = v170;
      v65 = DWORD1(v169);
      v73 = v168;
    }
    else
    {
      if ( (_WORD)v169 && (((_WORD)v168 - 1) & 0xFFFD) != 0 )
        goto LABEL_202;
      v64 = WORD1(v168);
      if ( (unsigned __int16)(WORD1(v168) - 1) > 1u || ((HIWORD(v168) - 8) & 0xFFE7) != 0 )
        goto LABEL_202;
      *(_OWORD *)pvar = v168;
      v73 = -2;
      LOWORD(pvar[0]) = -2;
      *(_WORD *)&v163[2] = HIWORD(v168);
      *(_OWORD *)&v163[8] = xmmword_18015B740;
      *(_DWORD *)&v163[8] = (unsigned __int16)v168;
      v65 = (unsigned int)(WORD1(v168) == 1) + 3;
    }
    *(_WORD *)v163 = 22;
    if ( WORD1(v164) )
    {
      v74 = WORD1(pvar[0]);
    }
    else
    {
      v74 = 0;
      WORD1(pvar[0]) = 0;
      LODWORD(pvar[1]) = 0;
      WORD2(pvar[1]) = 0;
    }
    if ( DWORD1(v164) )
    {
      v75 = HIDWORD(pvar[0]);
    }
    else
    {
      v75 = 0;
      HIDWORD(pvar[0]) = 0;
      LODWORD(pvar[1]) = 0;
    }
    if ( HIWORD(v164) )
    {
      v76 = HIWORD(pvar[1]);
    }
    else
    {
      v76 = 0;
      HIDWORD(pvar[1]) = 0;
    }
    v64 = (unsigned int)v134;
    if ( !v134 )
      v65 = 0LL;
    *(_DWORD *)&v163[4] = v65;
    if ( !(_WORD)v133 )
    {
      v73 = 0;
      LOWORD(pvar[0]) = 0;
    }
    if ( !v74 )
    {
      WORD1(v164) = 0;
      DWORD2(v164) = 0;
      WORD6(v164) = 0;
    }
    if ( !v75 )
      *(_QWORD *)((char *)&v164 + 4) = 0LL;
    if ( !v76 )
      HIDWORD(v164) = 0;
    if ( !(_DWORD)v65 )
      v64 = 0LL;
    *(_DWORD *)&v165[4] = v64;
    if ( !v73 )
      LOWORD(v164) = 0;
    v77 = *(_QWORD *)&v165[8] - *(_QWORD *)&v163[8];
    if ( *(_QWORD *)&v165[8] == *(_QWORD *)&v163[8] )
      v77 = *(_QWORD *)&v165[16] - *(_QWORD *)&v163[16];
    if ( !v77 && !memcmp(&v164, pvar, 0x28uLL) )
      goto LABEL_203;
LABEL_202:
    v120 = 1;
LABEL_204:
    v78 = (*(__int64 (__fastcall **)(__int64, wchar_t *, __int64, __int64))(*(_QWORD *)v135 + 32LL))(
            v135,
            v130,
            v64,
            v65);
    v125 = v78;
    if ( !v118 || v120 || v78 < 0 )
    {
      if ( (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v79) )
      {
        LODWORD(v135) = v99;
        v136 = (const wchar_t *)((char *)Src + v142);
        v140 = v154;
        v144 = v98;
        v149 = v130;
        sub_180123868(
          (unsigned int)Src,
          (unsigned int)&unk_18016A45E,
          v97,
          (_DWORD)v98,
          (__int64)&v149,
          (__int64)&v144,
          (__int64)&v140,
          (__int64)&v136,
          (__int64)&v135);
      }
      goto LABEL_279;
    }
    if ( !v148 )
      goto LABEL_271;
    v80 = *v148;
    v81 = v148[8];
    v79 = 0x719B3800AA000080LL;
    if ( (_WORD)v80 == (_WORD)v131 )
    {
      if ( v81 != 22 )
      {
        v82 = *((_QWORD *)v148 + 3) - 0x10000000000003LL;
        if ( *((_QWORD *)v148 + 3) == 0x10000000000003LL )
          v82 = *((_QWORD *)v148 + 4) - 0x719B3800AA000080LL;
        if ( v82 )
        {
          v83 = *((_QWORD *)v148 + 3) - 0x10000000000001LL;
          if ( *((_QWORD *)v148 + 3) == 0x10000000000001LL )
            v83 = *((_QWORD *)v148 + 4) - 0x719B3800AA000080LL;
          if ( v83 )
            goto LABEL_271;
        }
      }
      *(_OWORD *)pvar = *(_OWORD *)v148;
      *(_OWORD *)v163 = *((_OWORD *)v148 + 1);
      *(_QWORD *)&v163[16] = *((_QWORD *)v148 + 4);
      *(_WORD *)v163 = 22;
      v134 = *(_DWORD *)&v163[4];
      v133 = LOWORD(pvar[0]);
    }
    else
    {
      if ( v81 )
      {
        v79 = 65533LL;
        if ( (((_WORD)v80 - 1) & 0xFFFD) != 0 )
          goto LABEL_271;
      }
      v79 = v148[1];
      if ( (unsigned __int16)(v79 - 1) > 1u )
        goto LABEL_271;
      v84 = v148[7];
      if ( ((v84 - 8) & 0xFFE7) != 0 )
        goto LABEL_271;
      *(_OWORD *)pvar = *(_OWORD *)v148;
      v133 = 65534;
      LOWORD(pvar[0]) = -2;
      *(_WORD *)v163 = 22;
      *(_WORD *)&v163[2] = v84;
      *(_OWORD *)&v163[8] = xmmword_18015B740;
      *(_DWORD *)&v163[8] = v80;
      v134 = ((_WORD)v79 == 1) + 3;
      v79 = 0x719B3800AA000080LL;
    }
    if ( (_WORD)v168 == 0xFFFE )
      break;
    if ( !(_WORD)v169 || (((_WORD)v168 - 1) & 0xFFFD) == 0 )
    {
      v79 = WORD1(v168);
      if ( (unsigned __int16)(WORD1(v168) - 1) <= 1u && ((HIWORD(v168) - 8) & 0xFFE7) == 0 )
      {
        v164 = v168;
        v88 = -2;
        LOWORD(v164) = -2;
        *(_WORD *)&v165[2] = HIWORD(v168);
        *(_OWORD *)&v165[8] = xmmword_18015B740;
        *(_DWORD *)&v165[8] = (unsigned __int16)v168;
        v87 = (WORD1(v168) == 1) + 3;
        goto LABEL_236;
      }
    }
LABEL_271:
    v120 = 1;
    if ( v122 || *(_BYTE *)(a1 + 75) )
      goto LABEL_264;
    if ( (unsigned int)dword_18019C448 > 4
      && __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x10,
           v79) )
    {
      LODWORD(v135) = v96;
      v136 = (const wchar_t *)((char *)Src + v142);
      v140 = v154;
      v144 = (__int128 *)v130;
      sub_180123B58(
        (unsigned int)Src,
        (unsigned int)&unk_18016A4C9,
        v94,
        v95,
        (__int64)&v144,
        (__int64)&v140,
        (__int64)&v136,
        (__int64)&v135);
    }
LABEL_279:
    v30 = v128;
    if ( v128 == -1 || (v100 = v128, v30 = -1, v128 = -1, v29 == v100) )
    {
      v31 = v127;
      if ( v127 == -1 )
      {
        LODWORD(v26) = v129;
        if ( !v121 )
        {
          v29 = -1;
          v27 = v116;
          goto LABEL_297;
        }
        v121 = 0;
        v29 = v145;
        if ( v129 != -1 )
          v29 = v129;
        v27 = v116 && v129 != -1;
        v116 = v27;
      }
      else
      {
        v29 = v127;
        v31 = -1;
        v127 = -1;
        LODWORD(v26) = v129;
        v27 = v116;
      }
    }
    else
    {
      v29 = v100;
      LODWORD(v26) = v129;
      v31 = v127;
      v27 = v116;
    }
    if ( v29 == -1 )
      goto LABEL_297;
  }
  if ( (_WORD)v169 != 22 )
  {
    v85 = *((_QWORD *)&v169 + 1) - 0x10000000000003LL;
    if ( *((_QWORD *)&v169 + 1) == 0x10000000000003LL )
      v85 = v170 - 0x719B3800AA000080LL;
    if ( v85 )
    {
      v86 = *((_QWORD *)&v169 + 1) - 0x10000000000001LL;
      if ( *((_QWORD *)&v169 + 1) == 0x10000000000001LL )
        v86 = v170 - 0x719B3800AA000080LL;
      if ( v86 )
        goto LABEL_271;
    }
  }
  v164 = v168;
  *(_OWORD *)v165 = v169;
  *(_QWORD *)&v165[16] = v170;
  v87 = DWORD1(v169);
  v88 = v168;
LABEL_236:
  *(_WORD *)v165 = 22;
  if ( WORD1(pvar[0]) )
  {
    v89 = WORD1(v164);
  }
  else
  {
    v89 = 0;
    WORD1(v164) = 0;
    DWORD2(v164) = 0;
    WORD6(v164) = 0;
  }
  if ( HIDWORD(pvar[0]) )
  {
    v90 = DWORD1(v164);
  }
  else
  {
    v90 = 0;
    *(_QWORD *)((char *)&v164 + 4) = 0LL;
  }
  if ( HIWORD(pvar[1]) )
  {
    v91 = HIWORD(v164);
  }
  else
  {
    v91 = 0;
    HIDWORD(v164) = 0;
  }
  v79 = (unsigned int)v134;
  if ( !v134 )
    v87 = 0;
  *(_DWORD *)&v165[4] = v87;
  if ( !(_WORD)v133 )
  {
    v88 = 0;
    LOWORD(v164) = 0;
  }
  if ( !v89 )
  {
    WORD1(pvar[0]) = 0;
    LODWORD(pvar[1]) = 0;
    WORD2(pvar[1]) = 0;
  }
  if ( !v90 )
    *(PROPVARIANT *)((char *)pvar + 4) = 0LL;
  if ( !v91 )
    HIDWORD(pvar[1]) = 0;
  if ( !v87 )
    v79 = 0LL;
  *(_DWORD *)&v163[4] = v79;
  if ( !v88 )
    LOWORD(pvar[0]) = 0;
  v92 = *(_QWORD *)&v163[8] - *(_QWORD *)&v165[8];
  if ( *(_QWORD *)&v163[8] == *(_QWORD *)&v165[8] )
    v92 = *(_QWORD *)&v163[16] - *(_QWORD *)&v165[16];
  if ( v92 || memcmp(pvar, &v164, 0x28uLL) )
    goto LABEL_271;
  v120 = 0;
LABEL_264:
  v124[0] = 1;
  v123 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v135 + 48LL))(v135);
  v30 = v29;
  v128 = v29;
  v27 = v116;
  if ( !v116 || *(_BYTE *)(a1 + 75) )
  {
    LODWORD(v26) = v129;
    v31 = v127;
LABEL_297:
    v25 = v117;
    goto LABEL_298;
  }
  if ( v120 )
  {
    v93 = v141;
    *(_OWORD *)v141 = v168;
    *((_OWORD *)v93 + 1) = v169;
    *((_QWORD *)v93 + 4) = v170;
  }
  v25 = v117;
  if ( v117 && DWORD2(Buf1[0]) )
  {
    v28 = 1;
    v152 = 1;
    LODWORD(v26) = v129;
    v31 = v127;
    goto LABEL_46;
  }
  v152 = 0;
  LODWORD(v26) = v129;
  v31 = v127;
LABEL_298:
  v28 = 1;
LABEL_46:
  if ( (unsigned int)dword_18019C448 > 4 )
  {
    if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x10,
           v25) )
    {
      v119 = v116;
      v118 = v124[0];
      v126 = v26;
      v131 = v30;
      LODWORD(v135) = v29;
      LODWORD(v142) = v31;
      sub_180125388(
        v101,
        (unsigned int)&unk_18016B9E7,
        v102,
        v26,
        (__int64)&v142,
        (__int64)&v135,
        (__int64)&v131,
        (__int64)&v126,
        (__int64)&v118,
        (__int64)&v119);
      LODWORD(v26) = v129;
      v30 = v128;
      v31 = v127;
    }
    v28 = 1;
    LOBYTE(v25) = v117;
    v27 = v116;
  }
  if ( !v124[0] )
  {
    v27 = 0;
    v116 = 0;
  }
  if ( v29 == -1 )
  {
    v32 = &xmmword_18015B730;
  }
  else
  {
    v32 = (__int128 *)((char *)&Src[192] + 834 * v29);
    v27 = v116;
  }
  v33 = *v32;
  v167 = *v32;
  if ( v30 == -1 )
  {
    v34 = &xmmword_18015B730;
  }
  else
  {
    v34 = (__int128 *)((char *)&Src[192] + 834 * v30);
    v27 = v116;
  }
  *(_OWORD *)((char *)Buf2 + 12) = *v34;
  if ( v31 == -1 )
  {
    v35 = &xmmword_18015B730;
  }
  else
  {
    v35 = (__int128 *)((char *)&Src[192] + 834 * v31);
    v27 = v116;
  }
  *(_OWORD *)((char *)&Buf2[1] + 12) = *v35;
  if ( (_DWORD)v26 != -1 )
  {
    v24 = (__int128 *)((char *)&Src[192] + 834 * (unsigned int)v26);
    v27 = v116;
  }
  *(_OWORD *)((char *)&Buf2[2] + 12) = *v24;
  if ( *(_BYTE *)(a1 + 75) || !v27 )
    v28 = 0;
  LODWORD(Buf2[0]) = v28;
  HIDWORD(Buf2[3]) = v27;
  DWORD1(Buf2[0]) = v123;
  if ( (_BYTE)v25 )
  {
    v36 = DWORD2(Buf1[0]);
    goto LABEL_62;
  }
  if ( v29 != -1 )
  {
    v36 = *(_DWORD *)((char *)&Src[198] + 834 * v29);
LABEL_62:
    DWORD2(Buf2[0]) = v36;
  }
  LODWORD(Buf2[4]) = v19;
  if ( (v19 & 2) != 0 )
  {
    if ( v138 == 1 )
    {
      *(_OWORD *)pvar = 0LL;
      *(_QWORD *)v163 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a4 + 40LL))(a4, &unk_18015C4B0, pvar) < 0
        || !LOWORD(pvar[0])
        || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
      {
        LODWORD(Buf2[4]) &= ~2u;
      }
      PropVariantClear(pvar);
      v33 = v167;
      v19 = Buf2[4];
      v28 = Buf2[0];
    }
    else
    {
      v19 &= ~2u;
      LODWORD(Buf2[4]) = v19;
    }
  }
  if ( (v19 & 3) != 0 )
  {
    v28 = 0;
    LODWORD(Buf2[0]) = 0;
    HIDWORD(Buf2[3]) = 0;
    DWORD2(Buf2[0]) = 0;
  }
  if ( (v19 & 4) != 0 )
    DWORD2(Buf2[0]) = 0;
  DWORD1(Buf2[4]) = v28 && DWORD2(Buf2[0]);
  if ( !v28 && !v139 )
  {
    v33 = xmmword_18015B730;
    v167 = xmmword_18015B730;
  }
  *(_OWORD *)(a1 + 6856) = v33;
  v37 = 0;
  if ( v139 && !v147 )
    v37 = DWORD1(Buf1[4]) != 0;
  v38 = v172;
  if ( v132 != (_DWORD)v23 || memcmp(Buf1, Buf2, 0x48uLL) || memcmp(v175, Src, 834 * v23) )
    goto LABEL_342;
  v48 = v38 - v167;
  if ( v38 == (_QWORD)v167 )
    v48 = *((_QWORD *)&v172 + 1) - *((_QWORD *)&v167 + 1);
  if ( v48 || v37 )
  {
LABEL_342:
    sub_18004C1E0((__int64)pvar, (__int64)&v168);
    if ( (unsigned int)dword_18019C448 > 4
      && __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x10,
           v39) )
    {
      v141 = (wchar_t *)&Buf1[1] + 6;
      v136 = (const wchar_t *)Buf1 + 6;
      v126 = HIDWORD(Buf1[3]);
      v131 = Buf1[0];
      v140 = (_OWORD *)((char *)&Buf2[2] + 12);
      v144 = (_OWORD *)((char *)&Buf2[1] + 12);
      LOWORD(v125) = WORD1(pvar[1]);
      LOWORD(v127) = pvar[1];
      v149 = (wchar_t *)&pvar[1] + 2;
      LODWORD(v135) = HIDWORD(pvar[0]);
      LODWORD(v142) = *(_DWORD *)&v163[12];
      LOWORD(v128) = pvar[0];
      v119 = v37;
      v118 = BYTE4(Buf2[0]);
      LODWORD(v154) = v19;
      v145 = v23;
      v156 = &v167;
      v137[0] = WORD2(Buf2[4]);
      v123 = BYTE8(Buf2[0]);
      v148 = (unsigned __int16 *)Buf2 + 6;
      v122 = BYTE12(Buf2[3]);
      v124[0] = Buf2[0];
      v143 = v130;
      sub_180123E08(
        v103,
        (unsigned int)&unk_18016B802,
        v39,
        v104,
        (__int64)&v143,
        (__int64)v124,
        (__int64)&v122,
        (__int64)&v148,
        (__int64)&v123,
        (__int64)v137,
        (__int64)&v156,
        (__int64)&v145,
        (__int64)&v154,
        (__int64)&v118,
        (__int64)&v119,
        (__int64)&v128,
        (__int64)&v142,
        (__int64)&v135,
        (__int64)&v149,
        (__int64)&v127,
        (__int64)&v125,
        (__int64)&v144,
        (__int64)&v140,
        (__int64)&v131,
        (__int64)&v126,
        (__int64)&v136,
        (__int64)&v141);
    }
    v40 = 0;
    if ( (_DWORD)v23 )
    {
      v41 = (unsigned __int8 *)&Src[198];
      do
      {
        if ( (unsigned int)dword_18019C448 > 4
          && __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019C448,
               (const struct _TlgProvider_t *)0x10,
               v39) )
        {
          v105 = v41[4];
          v106 = *v41;
          v107 = *(v41 - 4);
          v108 = *(v41 - 8);
          v109 = 834LL * v40;
          v141 = (wchar_t *)((char *)Src + v109);
          LOWORD(v125) = *((_WORD *)v41 + 20);
          LOWORD(v127) = *((_WORD *)v41 + 19);
          LOWORD(v128) = *((_WORD *)v41 + 18);
          v136 = (const wchar_t *)((char *)&Src[203] + v109);
          v126 = *((_DWORD *)v41 + 4);
          v131 = *((_DWORD *)v41 + 3);
          LODWORD(v135) = *((_DWORD *)v41 + 2);
          v119 = v105;
          v118 = v106;
          v123 = v107;
          v122 = v108;
          v140 = (__int128 *)((char *)&Src[192] + v109);
          LODWORD(v142) = v40;
          sub_180125444(
            v109,
            (unsigned int)&unk_18016B70F,
            v106,
            v107,
            (__int64)&v142,
            (__int64)&v140,
            (__int64)&v122,
            (__int64)&v123,
            (__int64)&v118,
            (__int64)&v119,
            (__int64)&v135,
            (__int64)&v131,
            (__int64)&v126,
            (__int64)&v136,
            (__int64)&v128,
            (__int64)&v127,
            (__int64)&v125,
            (__int64)&v141);
        }
        ++v40;
        v41 += 834;
      }
      while ( v40 < (unsigned int)v23 );
    }
    v42 = v38 - v167;
    if ( !v42 )
      v42 = *((_QWORD *)&v172 + 1) - *((_QWORD *)&v167 + 1);
    if ( !v42 )
    {
LABEL_90:
      v43 = v130;
      goto LABEL_91;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 64) + 56LL))(*(_QWORD *)(a1 + 64), &v167);
    if ( v11 >= 0 )
    {
      v43 = v130;
      goto LABEL_92;
    }
    if ( (unsigned int)dword_18019C448 <= 2
      || !__vcrt_trace_logging_provider::_TlgKeywordOn(
            (__vcrt_trace_logging_provider *)&dword_18019C448,
            (const struct _TlgProvider_t *)0x10,
            v39) )
    {
      goto LABEL_90;
    }
    v126 = v11;
    v43 = v130;
    v141 = v130;
    sub_1800512F4((__int64)&dword_18019C448, byte_18016B024, v39, v110, (void **)&v141, (__int64)&v126);
LABEL_91:
    if ( v11 >= 0 )
    {
LABEL_92:
      if ( !v139 || v147 )
        goto LABEL_93;
      v147 = 1;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 48LL))(*(_QWORD *)(a1 + 64), 1LL);
      if ( v11 >= 0 )
        goto LABEL_94;
      if ( (unsigned int)dword_18019C448 > 2
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v39) )
      {
        v126 = v11;
        v141 = v43;
        sub_1800512F4((__int64)&dword_18019C448, byte_18016AC50, v39, v111, (void **)&v141, (__int64)&v126);
      }
LABEL_93:
      if ( v11 >= 0 )
      {
LABEL_94:
        v11 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, _DWORD *, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
                *(_QWORD *)(a1 + 40),
                Buf2,
                Src,
                (unsigned int)(834 * v23));
        if ( v11 < 0 )
        {
          if ( (unsigned int)dword_18019C448 > 2
            && __vcrt_trace_logging_provider::_TlgKeywordOn(
                 (__vcrt_trace_logging_provider *)&dword_18019C448,
                 (const struct _TlgProvider_t *)0x10,
                 v39) )
          {
            v126 = v11;
            v141 = v43;
            sub_1800512F4((__int64)&dword_18019C448, byte_18016B6D6, v39, v112, (void **)&v141, (__int64)&v126);
          }
        }
        else
        {
          *(_OWORD *)(a1 + 104) = Buf2[0];
          *(_OWORD *)(a1 + 120) = Buf2[1];
          *(_OWORD *)(a1 + 136) = Buf2[2];
          *(_OWORD *)(a1 + 152) = Buf2[3];
          *(_QWORD *)(a1 + 168) = *(_QWORD *)&Buf2[4];
          *(_DWORD *)(a1 + 176) = v23;
          memcpy((void *)(a1 + 180), Src, 834 * v23);
          *(_BYTE *)(a1 + 6852) = 1;
        }
      }
    }
  }
  v44 = v152;
  if ( v152 == *(_DWORD *)(a1 + 80) )
  {
    v9 = v155;
    goto LABEL_98;
  }
  if ( (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&dword_18019C448,
         (const struct _TlgProvider_t *)0x10,
         v39) )
  {
    LOWORD(v125) = v44;
    LOWORD(v127) = v115;
    v45 = v130;
    v141 = v130;
    sub_1801246E0(v113, (unsigned int)&unk_18016AE6C, v114, v115, (__int64)&v141, (__int64)&v127, (__int64)&v125);
  }
  else
  {
    v45 = v130;
  }
  *(_DWORD *)(a1 + 80) = v44;
  v9 = v155;
LABEL_99:
  PropVariantClear(v158);
  if ( v11 < 0 )
    sub_180125838(a1, v45);
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
  v47 = *(_QWORD *)(v9 + 56);
  if ( v47 )
  {
    if ( v47 == v9 )
      v46 = 0LL;
    else
      LOBYTE(v46) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 32LL))(v47, v46);
    *(_QWORD *)(v9 + 56) = 0LL;
  }
}
