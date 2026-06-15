/*
 * XREFs of sub_180049F80 @ 0x180049F80
 * Callers:
 *     sub_180048500 @ 0x180048500 (sub_180048500.c)
 * Callees:
 *     sub_1800104CC @ 0x1800104CC (sub_1800104CC.c)
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004B9F0 @ 0x18004B9F0 (sub_18004B9F0.c)
 *     sub_18004C0F0 @ 0x18004C0F0 (sub_18004C0F0.c)
 *     sub_18004C134 @ 0x18004C134 (sub_18004C134.c)
 *     sub_18004C1E0 @ 0x18004C1E0 (sub_18004C1E0.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_180123868 @ 0x180123868 (sub_180123868.c)
 *     sub_180123A54 @ 0x180123A54 (sub_180123A54.c)
 *     sub_180123B58 @ 0x180123B58 (sub_180123B58.c)
 *     sub_180124424 @ 0x180124424 (sub_180124424.c)
 *     sub_1801255D4 @ 0x1801255D4 (sub_1801255D4.c)
 *     sub_180126AE8 @ 0x180126AE8 (sub_180126AE8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180049F80(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        char *a7)
{
  __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r8
  int v16; // edi
  int v17; // ecx
  unsigned __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rsi
  unsigned int v21; // r11d
  unsigned int v22; // ebx
  char v23; // al
  unsigned __int64 v24; // r8
  int v25; // eax
  bool v26; // bl
  char v27; // di
  unsigned __int64 v28; // r8
  int v29; // r9d
  char v30; // bl
  __int64 (__fastcall ***v31)(_QWORD, __int128 *); // rcx
  __int64 v32; // r15
  unsigned __int16 *v33; // rbx
  unsigned __int64 v34; // r8
  __int64 v35; // r9
  int v36; // r11d
  unsigned int v37; // r15d
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rcx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // r10
  char v46; // dl
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  int v56; // ecx
  int v57; // r8d
  const wchar_t *v58; // rdx
  __int128 *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  char v62; // bl
  int v63; // eax
  unsigned __int64 v64; // r8
  int v65; // edi
  unsigned __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // ebx
  __int16 v70; // di
  unsigned __int16 v71; // cx
  unsigned __int16 v72; // dx
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // r11d
  __int16 v76; // r10
  __int16 v77; // r9
  int v78; // edx
  __int64 v79; // rax
  BOOL v80; // ecx
  int v81; // r8d
  int v82; // r9d
  int v83; // r8d
  __int128 *v84; // r9
  unsigned int v85; // ecx
  __int64 v86; // rax
  __int64 v87; // rcx
  char v88; // [rsp+48h] [rbp-F8h]
  bool v89; // [rsp+C0h] [rbp-80h]
  char v90; // [rsp+C1h] [rbp-7Fh] BYREF
  char v91; // [rsp+C2h] [rbp-7Eh] BYREF
  char v92; // [rsp+C3h] [rbp-7Dh] BYREF
  char v93; // [rsp+C4h] [rbp-7Ch] BYREF
  char v94[3]; // [rsp+C5h] [rbp-7Bh] BYREF
  int v95; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v96; // [rsp+CCh] [rbp-74h] BYREF
  int v97; // [rsp+D0h] [rbp-70h] BYREF
  char *p_Buf1; // [rsp+D8h] [rbp-68h] BYREF
  __int16 v99; // [rsp+E0h] [rbp-60h] BYREF
  __int16 v100; // [rsp+E2h] [rbp-5Eh] BYREF
  int v101; // [rsp+E4h] [rbp-5Ch] BYREF
  unsigned int v102; // [rsp+E8h] [rbp-58h] BYREF
  unsigned int v103; // [rsp+ECh] [rbp-54h] BYREF
  __int64 v104; // [rsp+F0h] [rbp-50h]
  __int128 *v105; // [rsp+F8h] [rbp-48h]
  int v106; // [rsp+100h] [rbp-40h] BYREF
  unsigned int v107; // [rsp+104h] [rbp-3Ch] BYREF
  int v108; // [rsp+108h] [rbp-38h] BYREF
  __int128 *v109; // [rsp+110h] [rbp-30h] BYREF
  __int128 *v110; // [rsp+118h] [rbp-28h] BYREF
  __int16 v111[2]; // [rsp+120h] [rbp-20h] BYREF
  int v112; // [rsp+124h] [rbp-1Ch] BYREF
  __int128 *v113; // [rsp+128h] [rbp-18h] BYREF
  __int64 v114; // [rsp+130h] [rbp-10h] BYREF
  unsigned int v115; // [rsp+138h] [rbp-8h] BYREF
  __int128 *v116; // [rsp+140h] [rbp+0h] BYREF
  int v117; // [rsp+148h] [rbp+8h] BYREF
  __int64 v118; // [rsp+150h] [rbp+10h] BYREF
  int v119; // [rsp+158h] [rbp+18h] BYREF
  int v120; // [rsp+15Ch] [rbp+1Ch] BYREF
  unsigned __int16 *v121; // [rsp+160h] [rbp+20h]
  __int64 v122; // [rsp+168h] [rbp+28h]
  int v123; // [rsp+170h] [rbp+30h] BYREF
  _QWORD v124[3]; // [rsp+178h] [rbp+38h] BYREF
  PROPVARIANT pvar[2]; // [rsp+190h] [rbp+50h] BYREF
  _BYTE v126[24]; // [rsp+1A0h] [rbp+60h]
  __int128 Buf1; // [rsp+1C0h] [rbp+80h] BYREF
  _BYTE v128[24]; // [rsp+1D0h] [rbp+90h]
  __int64 v129; // [rsp+1F8h] [rbp+B8h]
  __int128 v130; // [rsp+200h] [rbp+C0h] BYREF
  __int128 v131; // [rsp+210h] [rbp+D0h]
  __int64 v132; // [rsp+220h] [rbp+E0h]
  _DWORD v133[20]; // [rsp+230h] [rbp+F0h] BYREF
  __int128 v134; // [rsp+280h] [rbp+140h] BYREF
  _DWORD v135[1668]; // [rsp+290h] [rbp+150h] BYREF
  _OWORD v136[417]; // [rsp+1CA0h] [rbp+1B60h] BYREF

  v121 = a4;
  v105 = (__int128 *)a2;
  v11 = a5;
  v104 = a5;
  v122 = a6;
  v124[1] = a6;
  v12 = 0;
  v107 = 10;
  v115 = -1;
  v103 = -1;
  v102 = -1;
  v108 = -1;
  v117 = -1;
  v89 = 0;
  v130 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v94[0] = 0;
  v96 = 0;
  memset(v133, 0, 0x48uLL);
  v106 = 0;
  v120 = 0;
  v134 = xmmword_18015B730;
  memset(v136, 0, sizeof(v136));
  v118 = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v112 = 2;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v124[2] = a1;
  *(_BYTE *)(a1 + 76) = 1;
  if ( !a7 )
    goto LABEL_61;
  memset(a7, 0, 0x48uLL);
  *(_OWORD *)(a7 + 12) = xmmword_18015B730;
  v14 = sub_1800104CC();
  *((_DWORD *)a7 + 16) = v14;
  if ( (v14 & 2) != 0 )
  {
    if ( v107 == 1 )
    {
      *(_OWORD *)pvar = 0LL;
      *(_QWORD *)v126 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(a5, &unk_18015C4B0, pvar) < 0
        || !LOWORD(pvar[0])
        || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
      {
        *((_DWORD *)a7 + 16) &= ~2u;
      }
      PropVariantClear(pvar);
    }
    else
    {
      *((_DWORD *)a7 + 16) = v14 & 0xFFFFFFFD;
    }
  }
  if ( !a4 || !a2 || !a5 )
  {
LABEL_61:
    v12 = -2147467261;
    goto LABEL_54;
  }
  if ( !a3 )
  {
    *(_OWORD *)pvar = xmmword_18015C470;
    *(_DWORD *)v126 = 0;
    v12 = sub_18004A4F4(&v118, pvar, 10LL, &v107);
    if ( v12 < 0 )
      goto LABEL_54;
    *(_OWORD *)pvar = xmmword_1801609E0;
    *(_DWORD *)v126 = 2;
    v12 = sub_18004A4F4(&v118, pvar, 2LL, &v112);
    if ( v12 < 0 )
      goto LABEL_54;
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
    if ( v12 < 0 )
      goto LABEL_54;
    v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v106);
    if ( v12 < 0 )
      goto LABEL_54;
    v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 40LL))(*(_QWORD *)(a1 + 56), &v120);
    if ( v12 < 0 )
      goto LABEL_54;
    v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 48) + 96LL))(
            *(_QWORD *)(a1 + 48),
            &v96);
    if ( v16 >= 0 && v96 <= 8 )
      v16 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *, _QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(
              *(_QWORD *)(a1 + 48),
              v133,
              v135,
              834 * v96);
    sub_18004C1E0(pvar, a4);
    if ( (unsigned int)dword_18019C448 > 4
      && (byte_18019C458 & 0x10) != 0
      && (qword_18019C460 & 0x10) == qword_18019C460 )
    {
      v124[0] = &v133[7];
      v90 = v133[1];
      v119 = v133[16];
      v111[0] = WORD1(pvar[1]);
      v99 = (__int16)pvar[1];
      v116 = (__int128 *)((char *)&pvar[1] + 4);
      v123 = HIDWORD(pvar[0]);
      LODWORD(v113) = *(_DWORD *)&v126[12];
      v100 = (__int16)pvar[0];
      LODWORD(v114) = v18;
      v101 = v16;
      v109 = &v134;
      v97 = v106;
      LOWORD(v95) = v133[17];
      v91 = v133[2];
      v110 = (__int128 *)&v133[3];
      v92 = v133[15];
      v93 = v133[0];
      v20 = (__int64)v105;
      p_Buf1 = (char *)v105;
      sub_180124424(
        v17,
        (unsigned int)&unk_18016A647,
        v18,
        v19,
        (__int64)&p_Buf1,
        (__int64)&v93,
        (__int64)&v92,
        (__int64)&v110,
        (__int64)&v91,
        (__int64)&v95,
        (__int64)&v97,
        (__int64)&v109,
        (__int64)&v101,
        (__int64)&v114,
        (__int64)&v100,
        (__int64)&v113,
        (__int64)&v123,
        (__int64)&v116,
        (__int64)&v99,
        (__int64)v111,
        (__int64)&v119,
        (__int64)&v90,
        (__int64)v124);
      v18 = v96;
    }
    else
    {
      v20 = (__int64)v105;
    }
    v21 = 0;
    v22 = 0;
    if ( v16 >= 0 )
    {
      while ( v22 < (unsigned int)v18 )
      {
        if ( (unsigned int)dword_18019C448 > 4
          && (byte_18019C458 & 0x10) != 0
          && (qword_18019C460 & 0x10) == qword_18019C460 )
        {
          v45 = 834LL * v22;
          LOBYTE(v17) = *((_BYTE *)&v135[199] + v45);
          v46 = *((_BYTE *)&v135[198] + v45);
          LOBYTE(v18) = *((_BYTE *)&v135[197] + v45);
          LOBYTE(v19) = *((_BYTE *)&v135[196] + v45);
          p_Buf1 = (char *)v135 + v45;
          v110 = (__int128 *)((char *)&v135[128] + v45);
          LOWORD(v95) = *(_WORD *)((char *)&v135[208] + v45);
          v100 = *(_WORD *)((char *)&v135[207] + v45 + 2);
          v99 = *(_WORD *)((char *)&v135[207] + v45);
          v109 = (__int128 *)((char *)&v135[203] + v45);
          v97 = *(_DWORD *)((char *)&v135[202] + v45);
          v101 = *(_DWORD *)((char *)&v135[201] + v45);
          LODWORD(v114) = *(_DWORD *)((char *)&v135[200] + v45);
          v93 = v17;
          v92 = v46;
          v91 = v18;
          v90 = v19;
          v116 = (__int128 *)((char *)&v135[192] + v45);
          LODWORD(v113) = v22;
          sub_1801255D4(
            v17,
            (unsigned int)&unk_18016A530,
            v18,
            v19,
            (__int64)&v113,
            (__int64)&v116,
            (__int64)&v90,
            (__int64)&v91,
            (__int64)&v92,
            (__int64)&v93,
            (__int64)&v114,
            (__int64)&v101,
            (__int64)&v97,
            (__int64)&v109,
            (__int64)&v99,
            (__int64)&v100,
            (__int64)&v95,
            (__int64)&v110,
            (__int64)&p_Buf1);
          v18 = v96;
        }
        ++v22;
      }
      v21 = 0;
    }
    if ( !v106 && *a4 == 0xFFFE )
    {
      v23 = sub_18004C134(a4 + 12);
      v21 = 0;
      if ( v23 )
      {
        if ( (unsigned int)dword_18019C448 > 2
          && __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019C448,
               (const struct _TlgProvider_t *)0x10,
               v24) )
        {
          p_Buf1 = (char *)v20;
          sub_1800B7704(v47, (unsigned int)&unk_18016A809, v48, v49, (__int64)&p_Buf1);
        }
        v12 = -2147024809;
        goto LABEL_53;
      }
      v18 = v96;
    }
    if ( v16 < 0 || (unsigned int)v18 > 8 )
    {
      if ( (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v18) )
      {
        v97 = v16;
        p_Buf1 = (char *)v20;
        sub_1800512F4(v50, (unsigned int)&unk_18016A7D3, v51, v52, (__int64)&p_Buf1, (__int64)&v97);
        v21 = 0;
      }
      v96 = v21;
      memset(v133, 0, 0x48uLL);
      memset(v135, 0, sizeof(v135));
      v27 = v94[0];
      v26 = v94[0];
    }
    else
    {
      if ( !(_DWORD)v18 || *(_BYTE *)(a1 + 75) )
      {
        v25 = v133[15];
      }
      else
      {
        v25 = v133[15];
        if ( v133[15] != v133[0] )
        {
          if ( !*(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 104) )
          {
            v25 = v133[0];
            v133[15] = v133[0];
          }
          else
          {
            v133[0] = v133[15];
          }
        }
      }
      v26 = v25 != 0;
      v89 = v25 != 0;
      v27 = 1;
    }
    v12 = sub_18004C0F0(a1);
    if ( v12 < 0 )
      goto LABEL_53;
    sub_18004B9F0();
    if ( dword_18019F770[0] > 8u )
    {
      v12 = -2147418113;
      goto LABEL_53;
    }
    v29 = *((_DWORD *)a7 + 16);
    if ( (v29 & 3) != 0 )
    {
      if ( (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v28) )
      {
        v97 = v55;
        p_Buf1 = (char *)v105;
        sub_1800512F4(v53, (unsigned int)&unk_18016A419, v54, v55, (__int64)&p_Buf1, (__int64)&v97);
      }
      goto LABEL_53;
    }
    p_Buf1 = (char *)&Buf1;
    if ( v26 || (v30 = 0, (v29 & 8) != 0) )
      v30 = 1;
    v129 = 0LL;
    v31 = *(__int64 (__fastcall ****)(_QWORD, __int128 *))(v122 + 56);
    if ( v31 )
      v129 = (**v31)(v31, &Buf1);
    v32 = (__int64)v105;
    v88 = v30;
    v33 = v121;
    sub_18001D9E0(
      a1,
      v27,
      (__int64)v133,
      v96,
      (__int64)v135,
      v107,
      v106,
      0LL,
      v121,
      v88,
      (__int64)&Buf1,
      (__int64)v105,
      v112,
      (__int64)v136,
      &v115,
      &v103,
      &v102,
      (__int64)&v108,
      (__int64)&v117,
      (__int64)v133);
    LODWORD(v35) = v108;
    v36 = 0;
    if ( !v27 )
    {
      v89 = v108 != -1;
      if ( (unsigned int)dword_18019C448 > 4 )
      {
        if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019C448,
               (const struct _TlgProvider_t *)0x400000000000LL,
               v34) )
        {
          if ( (_DWORD)v35 == -1 )
          {
            v58 = L"<none>";
          }
          else
          {
            v56 = 834 * v35;
            v58 = (const wchar_t *)v136 + 417 * v35;
          }
          if ( (_DWORD)v35 == -1 )
          {
            v59 = &xmmword_18015B730;
          }
          else
          {
            v56 = 834 * v35;
            v59 = (_OWORD *)((char *)&v136[48] + 834 * v35);
          }
          p_Buf1 = (char *)v58;
          v110 = v59;
          v109 = (__int128 *)v32;
          sub_180123A54(v56, (unsigned int)&unk_18016A3BA, v57, v35, (__int64)&v109, (__int64)&v110, (__int64)&p_Buf1);
          LODWORD(v35) = v108;
          v36 = 0;
        }
      }
    }
    v90 = 1;
    v37 = v115;
    if ( v115 == -1 )
    {
      v37 = v35;
      v90 = v36;
    }
    v38 = v102;
    v102 = v38;
    if ( (_DWORD)v38 != -1 )
      *(_OWORD *)(a7 + 28) = *(_OWORD *)((char *)&v136[48] + 834 * v38);
    if ( (_DWORD)v35 != -1 )
      *(_OWORD *)(a7 + 44) = *(_OWORD *)((char *)&v136[48] + 834 * (unsigned int)v35);
    if ( v37 == -1 )
    {
LABEL_53:
      v11 = v104;
      goto LABEL_54;
    }
    while ( 1 )
    {
      v94[0] = v36;
      v97 = v36;
      v114 = 834LL * v37;
      v113 = (_OWORD *)((char *)&v136[48] + v114);
      v60 = sub_180126AE8(&v136[48], (char *)&v136[48] + v114);
      v61 = sub_18005B754(&Buf1, v122);
      v62 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int16 *, __int64, int, int *, char *, __int128 *))(*(_QWORD *)v60 + 40LL))(
              v60,
              v107,
              0LL,
              v33,
              v61,
              v112,
              &v97,
              v94,
              &v130);
      v63 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v60 + 32LL))(v60, v105);
      v65 = v63;
      v95 = v63;
      if ( v62 )
      {
        if ( v63 >= 0 )
          break;
      }
      if ( (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v64) )
      {
        v101 = v65;
        p_Buf1 = (char *)v136 + v114;
        v110 = v113;
        v109 = v84;
        v116 = v105;
        sub_180123868(
          (unsigned int)v136,
          (unsigned int)&unk_18016A45E,
          v83,
          (_DWORD)v84,
          (__int64)&v116,
          (__int64)&v109,
          (__int64)&v110,
          (__int64)&p_Buf1,
          (__int64)&v101);
      }
LABEL_165:
      v85 = v103;
      v13 = 0xFFFFFFFFLL;
      if ( v103 == -1 || (v103 = -1, v37 == v85) )
      {
        v36 = 0;
        if ( v102 == -1 )
        {
          if ( v90 )
          {
            v90 = 0;
            v37 = v117;
            if ( v108 != -1 )
              v37 = v108;
            v89 = v89 && v108 != -1;
          }
          else
          {
            v37 = -1;
          }
        }
        else
        {
          v37 = v102;
          v102 = -1;
        }
      }
      else
      {
        v37 = v85;
        v36 = 0;
      }
      if ( v37 == -1 )
        goto LABEL_53;
      v33 = v121;
    }
    v66 = 0x10000000000003LL;
    if ( *v121 == 0xFFFE )
    {
      if ( v121[8] != 22 )
      {
        v67 = *((_QWORD *)v121 + 3) - 0x10000000000003LL;
        if ( *((_QWORD *)v121 + 3) == 0x10000000000003LL )
          v67 = *((_QWORD *)v121 + 4) - 0x719B3800AA000080LL;
        if ( v67 )
        {
          v68 = *((_QWORD *)v121 + 3) - 0x10000000000001LL;
          if ( *((_QWORD *)v121 + 3) == 0x10000000000001LL )
            v68 = *((_QWORD *)v121 + 4) - 0x719B3800AA000080LL;
          if ( v68 )
            goto LABEL_159;
        }
      }
      Buf1 = *(_OWORD *)v121;
      *(_OWORD *)v128 = *((_OWORD *)v121 + 1);
      *(_QWORD *)&v128[16] = *((_QWORD *)v121 + 4);
      *(_WORD *)v128 = 22;
      v69 = *(_DWORD *)&v128[4];
      v70 = Buf1;
    }
    else
    {
      if ( v121[8] && ((*v121 - 1) & 0xFFFD) != 0
        || (v71 = v121[1], (unsigned __int16)(v71 - 1) > 1u)
        || (v72 = v121[7], ((v72 - 8) & 0xFFE7) != 0) )
      {
LABEL_159:
        if ( (unsigned int)dword_18019C448 > 4
          && __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019C448,
               (const struct _TlgProvider_t *)0x10,
               v66) )
        {
          v101 = v65;
          p_Buf1 = (char *)v136 + v114;
          v110 = v113;
          v109 = v105;
          sub_180123B58(
            (unsigned int)v136,
            (unsigned int)&unk_18016A4C9,
            v81,
            v82,
            (__int64)&v109,
            (__int64)&v110,
            (__int64)&p_Buf1,
            (__int64)&v101);
        }
        goto LABEL_165;
      }
      Buf1 = *(_OWORD *)v121;
      v70 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v128 = 22;
      *(_WORD *)&v128[2] = v72;
      *(_OWORD *)&v128[8] = xmmword_18015B740;
      *(_DWORD *)&v128[8] = *v121;
      v69 = 4 - (v71 != 1);
    }
    if ( (_WORD)v130 == 0xFFFE )
    {
      if ( (_WORD)v131 == 22 )
        goto LABEL_126;
      v73 = *((_QWORD *)&v131 + 1) - 0x10000000000003LL;
      if ( *((_QWORD *)&v131 + 1) == 0x10000000000003LL )
        v73 = v132 - 0x719B3800AA000080LL;
      if ( !v73 )
        goto LABEL_126;
      v74 = *((_QWORD *)&v131 + 1) - 0x10000000000001LL;
      if ( *((_QWORD *)&v131 + 1) == 0x10000000000001LL )
        v74 = v132 - 0x719B3800AA000080LL;
      if ( !v74 )
      {
LABEL_126:
        *(_OWORD *)pvar = v130;
        *(_OWORD *)v126 = v131;
        *(_QWORD *)&v126[16] = v132;
        *(_WORD *)v126 = 22;
        v75 = DWORD1(v131);
        v76 = v130;
        goto LABEL_132;
      }
    }
    else
    {
      v66 = 1LL;
      if ( (!(_WORD)v131 || (((_WORD)v130 - 1) & 0xFFFD) == 0) && (unsigned __int16)(WORD1(v130) - 1) <= 1u )
      {
        v66 = HIWORD(v130);
        if ( ((HIWORD(v130) - 8) & 0xFFE7) == 0 )
        {
          *(_OWORD *)pvar = v130;
          v76 = -2;
          LOWORD(pvar[0]) = -2;
          *(_WORD *)v126 = 22;
          *(_WORD *)&v126[2] = HIWORD(v130);
          *(_OWORD *)&v126[8] = xmmword_18015B740;
          *(_DWORD *)&v126[8] = (unsigned __int16)v130;
          v75 = 4 - (WORD1(v130) != 1);
LABEL_132:
          if ( WORD1(Buf1) )
          {
            v77 = WORD1(pvar[0]);
          }
          else
          {
            v77 = 0;
            WORD1(pvar[0]) = 0;
            LODWORD(pvar[1]) = 0;
            WORD2(pvar[1]) = 0;
          }
          if ( DWORD1(Buf1) )
          {
            v78 = HIDWORD(pvar[0]);
          }
          else
          {
            v78 = 0;
            *(PROPVARIANT *)((char *)pvar + 4) = 0LL;
          }
          if ( HIWORD(Buf1) )
          {
            v66 = HIWORD(pvar[1]);
          }
          else
          {
            v66 = 0LL;
            HIDWORD(pvar[1]) = 0;
          }
          *(_DWORD *)&v126[4] = v69 != 0 ? v75 : 0;
          if ( !v70 )
          {
            v76 = 0;
            LOWORD(pvar[0]) = 0;
          }
          if ( !v77 )
          {
            WORD1(Buf1) = 0;
            DWORD2(Buf1) = 0;
            WORD6(Buf1) = 0;
          }
          if ( !v78 )
            *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
          if ( !(_WORD)v66 )
            HIDWORD(Buf1) = 0;
          *(_DWORD *)&v128[4] = (v69 != 0 ? v75 : 0) != 0 ? v69 : 0;
          if ( !v76 )
            LOWORD(Buf1) = 0;
          v79 = *(_QWORD *)&v128[8] - *(_QWORD *)&v126[8];
          if ( *(_QWORD *)&v128[8] == *(_QWORD *)&v126[8] )
            v79 = *(_QWORD *)&v128[16] - *(_QWORD *)&v126[16];
          if ( !v79 && !memcmp(&Buf1, pvar, 0x28uLL) )
          {
            v80 = v89 && !*(_BYTE *)(a1 + 75);
            *(_DWORD *)a7 = v80;
            *((_DWORD *)a7 + 15) = v89;
            v13 = 834LL * v37;
            *(_OWORD *)(a7 + 12) = *(_OWORD *)((char *)&v136[48] + v13);
            if ( v80 && (a7[64] & 4) == 0 && *(_DWORD *)((char *)&v136[49] + 834 * v37 + 8) )
              *((_DWORD *)a7 + 17) = 1;
            v86 = *(_QWORD *)&v133[3];
            v87 = *(_QWORD *)&v133[3] - *(_QWORD *)(a7 + 12);
            if ( *(_QWORD *)&v133[3] == *(_QWORD *)(a7 + 12) )
              v87 = *(_QWORD *)&v133[5] - *(_QWORD *)(a7 + 20);
            if ( v87 )
            {
              if ( !*(_QWORD *)&v133[3] )
                v86 = *(_QWORD *)&v133[5];
              v11 = v104;
              if ( v86 )
                *(_OWORD *)(a7 + 28) = *(_OWORD *)&v133[3];
              goto LABEL_54;
            }
            goto LABEL_53;
          }
        }
      }
    }
    v65 = v95;
    goto LABEL_159;
  }
  if ( (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&dword_18019C448,
         (const struct _TlgProvider_t *)0x10,
         v15) )
  {
    v118 = a2;
    sub_1800B7704(v42, (unsigned int)&unk_18016A8D7, v43, v44, (__int64)&v118);
  }
LABEL_54:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v39 = v122;
  v40 = *(_QWORD *)(v122 + 56);
  if ( v40 )
  {
    LOBYTE(v13) = v40 != v122;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 32LL))(v40, v13);
    *(_QWORD *)(v39 + 56) = 0LL;
  }
  return (unsigned int)v12;
}
