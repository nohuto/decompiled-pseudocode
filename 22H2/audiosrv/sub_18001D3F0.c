/*
 * XREFs of sub_18001D3F0 @ 0x18001D3F0
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_1800DD7D0 @ 0x1800DD7D0 (sub_1800DD7D0.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 *     sub_18011B780 @ 0x18011B780 (sub_18011B780.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18001D3F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        __int128 *a8,
        __int64 a9,
        __int64 a10,
        char a11,
        char a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        _QWORD *a16,
        _QWORD *a17)
{
  __int64 v18; // rbx
  __int128 v19; // xmm0
  __int64 v20; // rax
  int v21; // r10d
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  int v26; // r8d
  _DWORD *v27; // rax
  int v28; // r10d
  char *i; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  signed int v32; // eax
  __int64 v33; // r14
  unsigned __int16 **v34; // rdi
  unsigned __int16 *v35; // rcx
  int v36; // edx
  unsigned __int16 v37; // ax
  int v38; // r10d
  __int16 v39; // r11
  int v40; // edx
  unsigned __int16 v41; // ax
  int v42; // r9d
  __int16 v43; // si
  __int16 v44; // ax
  __int16 v45; // dx
  int v46; // ecx
  __int64 v47; // rax
  int v48; // ebx
  unsigned int v49; // r14d
  unsigned int v50; // esi
  unsigned int v51; // edi
  _QWORD *v52; // rsi
  __int64 v54; // r11
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // r11
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int16 v61; // r8
  unsigned __int16 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int16 v65; // r8
  unsigned __int16 v66; // r9
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned int v69; // r12d
  __int64 v70; // rdx
  __int64 v71; // rdx
  unsigned int v72; // r12d
  __int64 v73; // rdx
  __int64 v74; // rdx
  unsigned int v75; // eax
  unsigned int v76; // r10d
  int v77; // r11d
  double v78; // xmm4_8
  unsigned int v79; // ecx
  _OWORD *v80; // r12
  __int64 v81; // r13
  int v82; // edi
  void *v83; // rdx
  _OWORD *v84; // r14
  void *v85; // rdx
  void *v86; // rdx
  void *v87; // rdx
  void *v88; // rdx
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // r9
  __int64 v92; // r8
  void *v93; // rcx
  void *v94; // rcx
  void *v95; // rcx
  void *v96; // rcx
  void *v97; // rcx
  void *v98; // rcx
  void *v99; // rcx
  void *v100; // rcx
  void *v101; // rcx
  void *v102; // rcx
  __int64 v103; // rax
  int pvData; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v105; // [rsp+78h] [rbp-88h] BYREF
  DWORD pcbData[2]; // [rsp+80h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  __int64 v108[2]; // [rsp+90h] [rbp-70h] BYREF
  char v109; // [rsp+A0h] [rbp-60h]
  __int64 v110[2]; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID *v111; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v112; // [rsp+C8h] [rbp-38h] BYREF
  char v113; // [rsp+D0h] [rbp-30h]
  __int64 v114; // [rsp+D8h] [rbp-28h]
  __int64 v115; // [rsp+E0h] [rbp-20h]
  __int64 v116[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v117[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v118; // [rsp+110h] [rbp+10h]
  LPVOID v119[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 Buf1; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v121[24]; // [rsp+140h] [rbp+40h]
  __int128 Buf2; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v123[24]; // [rsp+168h] [rbp+68h]
  LPVOID v124[2]; // [rsp+180h] [rbp+80h] BYREF
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v115 = a3;
  v114 = a2;
  v116[0] = a1;
  v117[0] = (__int64)a8;
  v108[0] = a9;
  v110[0] = a10;
  v105 = a16;
  v118 = a17;
  pvData = 0;
  *a16 = a14;
  if ( a5 )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    v119[0] = 0LL;
    (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a15 + 80LL))(a15, v119);
    *(_QWORD *)v105 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v119[0] + 104LL))(v119[0]);
    sub_18000F708((__int64 *)v119);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !a14 )
      *a16 = a13;
    return 0LL;
  }
  v18 = 224LL;
  if ( a6 == 3 )
    v18 = 232LL;
  v19 = *a8;
  *(_OWORD *)v119 = *a8;
  if ( (unsigned __int64)a6 >= *(_QWORD *)(a1 + 1720) )
  {
    v103 = sub_180118A38(&v111, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    pvData = 1;
    sub_180118968(v103);
  }
  v20 = *(_QWORD *)(a1 + 1728);
  v21 = 0;
  v22 = *(_DWORD *)(v20 + 24LL * a6 + 16);
  if ( v22 > 0 )
  {
    v54 = *(_QWORD *)(v20 + 24LL * a6);
    while ( 1 )
    {
      v55 = *(_QWORD *)(v54 + 16LL * v21) - (unsigned __int64)v119[0];
      if ( !v55 )
        v55 = *(_QWORD *)(v54 + 16LL * v21 + 8) - (unsigned __int64)v119[1];
      if ( !v55 )
        break;
      if ( ++v21 >= v22 )
        goto LABEL_8;
    }
    if ( v21 != -1 )
    {
      *(_OWORD *)v119 = v19;
      v56 = sub_18004B060(a1 + 1720, a6);
      v57 = sub_18011B780(v56, v119);
      if ( v57 == -1 )
      {
        v19 = xmmword_18015B730;
      }
      else
      {
        if ( v57 < 0 || v57 >= *(_DWORD *)(v58 + 16) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        v19 = *(_OWORD *)(*(_QWORD *)(v58 + 8) + 16LL * v57);
      }
    }
  }
LABEL_8:
  *(_OWORD *)v124 = v19;
  v23 = v19;
  *(_OWORD *)v119 = v19;
  v25 = *((_QWORD *)&v19 + 1);
  v24 = v19;
  if ( !(_QWORD)v19 )
    v24 = *((_QWORD *)&v19 + 1);
  if ( !v24 )
  {
    *(_OWORD *)v124 = xmmword_18015B798;
    v25 = 0xCF56A961137EA8A1uLL;
    v23 = 0x4FD1B4939E90EA20LL;
    v119[0] = (LPVOID)0x4FD1B4939E90EA20LL;
  }
  v26 = 0;
  pvData = 0;
  v27 = *(_DWORD **)(v18 + a1);
  pv = v27;
  v28 = 0;
  for ( i = 0LL; ; i += 8 )
  {
    v124[0] = i;
    if ( v26 >= v27[2] )
    {
      sub_18004BD84(retaddr, 1163LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", 2290679816LL);
      return 2290679816LL;
    }
    if ( (__int64)i < 0 )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v30 = *(_QWORD *)&i[*(_QWORD *)v27];
    v31 = *(_QWORD *)v30 - v23;
    if ( *(_QWORD *)v30 == v23 )
      v31 = *(_QWORD *)(v30 + 8) - v25;
    if ( !v31 )
    {
      v32 = 0;
      pcbData[0] = 0;
      if ( *(int *)(v30 + 24) > 0 )
        break;
    }
LABEL_111:
    pvData = ++v26;
    v27 = pv;
  }
  v33 = 0LL;
  while ( 1 )
  {
    if ( v33 < 0 || v32 >= *(_DWORD *)(v30 + 24) )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v34 = *(unsigned __int16 ***)(v33 + *(_QWORD *)(v30 + 16));
    v35 = *v34;
    if ( !a7 )
      break;
    if ( v35 )
    {
      v36 = *a7;
      v37 = a7[8];
      if ( (_WORD)v36 == 0xFFFE )
      {
        if ( v37 != 22 )
        {
          v59 = *((_QWORD *)a7 + 3) - 0x10000000000003LL;
          if ( *((_QWORD *)a7 + 3) == 0x10000000000003LL )
            v59 = *((_QWORD *)a7 + 4) - 0x719B3800AA000080LL;
          if ( v59 )
          {
            v60 = *((_QWORD *)a7 + 3) - 0x10000000000001LL;
            if ( *((_QWORD *)a7 + 3) == 0x10000000000001LL )
              v60 = *((_QWORD *)a7 + 4) - 0x719B3800AA000080LL;
            if ( v60 )
              goto LABEL_109;
          }
        }
        Buf1 = *(_OWORD *)a7;
        *(_OWORD *)v121 = *((_OWORD *)a7 + 1);
        *(_QWORD *)&v121[16] = *((_QWORD *)a7 + 4);
        *(_WORD *)v121 = 22;
        v38 = *(_DWORD *)&v121[4];
        v39 = Buf1;
      }
      else
      {
        if ( v37 && (((_WORD)v36 - 1) & 0xFFFD) != 0 )
          goto LABEL_109;
        v61 = a7[1];
        if ( (unsigned __int16)(v61 - 1) > 1u )
          goto LABEL_109;
        v62 = a7[7];
        if ( ((v62 - 8) & 0xFFE7) != 0 )
          goto LABEL_109;
        Buf1 = *(_OWORD *)a7;
        v39 = -2;
        LOWORD(Buf1) = -2;
        *(_WORD *)v121 = 22;
        *(_WORD *)&v121[2] = v62;
        *(_OWORD *)&v121[8] = xmmword_18015B740;
        *(_DWORD *)&v121[8] = v36;
        LOBYTE(v28) = v61 == 1;
        v38 = v28 + 3;
        *(_DWORD *)&v121[4] = v38;
      }
      v40 = *v35;
      v41 = v35[8];
      if ( (_WORD)v40 == 0xFFFE )
      {
        if ( v41 == 22 )
          goto LABEL_29;
        v63 = *((_QWORD *)v35 + 3) - 0x10000000000003LL;
        if ( *((_QWORD *)v35 + 3) == 0x10000000000003LL )
          v63 = *((_QWORD *)v35 + 4) - 0x719B3800AA000080LL;
        if ( !v63 )
          goto LABEL_29;
        v64 = *((_QWORD *)v35 + 3) - 0x10000000000001LL;
        if ( *((_QWORD *)v35 + 3) == 0x10000000000001LL )
          v64 = *((_QWORD *)v35 + 4) - 0x719B3800AA000080LL;
        if ( !v64 )
        {
LABEL_29:
          Buf2 = *(_OWORD *)v35;
          *(_OWORD *)v123 = *((_OWORD *)v35 + 1);
          *(_QWORD *)&v123[16] = *((_QWORD *)v35 + 4);
          *(_WORD *)v123 = 22;
          v42 = *(_DWORD *)&v123[4];
          v43 = Buf2;
          v44 = 0;
          goto LABEL_30;
        }
LABEL_96:
        v28 = 0;
        goto LABEL_109;
      }
      if ( v41 && (((_WORD)v40 - 1) & 0xFFFD) != 0 )
      {
        v28 = 0;
        goto LABEL_109;
      }
      v65 = v35[1];
      if ( (unsigned __int16)(v65 - 1) > 1u )
        goto LABEL_96;
      v66 = v35[7];
      v43 = -2;
      if ( ((v66 - 8) & 0xFFE7) == 0 )
      {
        Buf2 = *(_OWORD *)v35;
        LOWORD(Buf2) = -2;
        *(_WORD *)v123 = 22;
        *(_WORD *)&v123[2] = v66;
        *(_OWORD *)&v123[8] = xmmword_18015B740;
        *(_DWORD *)&v123[8] = v40;
        v44 = 0;
        v42 = (v65 == 1) + 3;
        *(_DWORD *)&v123[4] = v42;
LABEL_30:
        if ( WORD1(Buf1) )
        {
          v45 = WORD1(Buf2);
        }
        else
        {
          v45 = 0;
          WORD1(Buf2) = 0;
          DWORD2(Buf2) = 0;
          WORD6(Buf2) = 0;
        }
        if ( DWORD1(Buf1) )
        {
          v46 = DWORD1(Buf2);
        }
        else
        {
          v46 = 0;
          *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
        }
        if ( HIWORD(Buf1) )
          v44 = HIWORD(Buf2);
        else
          HIDWORD(Buf2) = 0;
        if ( v38 )
        {
          v28 = 0;
        }
        else
        {
          v28 = 0;
          v42 = 0;
          *(_DWORD *)&v123[4] = 0;
        }
        if ( !v39 )
        {
          v43 = 0;
          LOWORD(Buf2) = 0;
        }
        if ( !v45 )
        {
          WORD1(Buf1) = 0;
          DWORD2(Buf1) = 0;
          WORD6(Buf1) = 0;
        }
        if ( !v46 )
          *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
        if ( !v44 )
          HIDWORD(Buf1) = 0;
        if ( !v42 )
          *(_DWORD *)&v121[4] = 0;
        if ( !v43 )
          LOWORD(Buf1) = 0;
        v47 = *(_QWORD *)&v121[8] - *(_QWORD *)&v123[8];
        if ( *(_QWORD *)&v121[8] == *(_QWORD *)&v123[8] )
          v47 = *(_QWORD *)&v121[16] - *(_QWORD *)&v123[16];
        if ( !v47 )
        {
          if ( !memcmp(&Buf1, &Buf2, 0x28uLL) )
            goto LABEL_54;
          v28 = 0;
        }
        goto LABEL_109;
      }
      v28 = 0;
    }
LABEL_109:
    v32 = pcbData[0] + 1;
    pcbData[0] = v32;
    v33 += 8LL;
    if ( v32 >= *(_DWORD *)(v30 + 24) )
    {
      v23 = (__int64)v119[0];
      i = (char *)v124[0];
      v26 = pvData;
      goto LABEL_111;
    }
  }
  if ( v35 )
    goto LABEL_109;
LABEL_54:
  v48 = *((_DWORD *)v34 + 3);
  v49 = *((_DWORD *)v34 + 2);
  v50 = *((_DWORD *)v34 + 4);
  if ( a11 )
    v51 = *((_DWORD *)v34 + 6);
  else
    v51 = *((_DWORD *)v34 + 5);
  if ( !a14 )
  {
    v52 = v105;
    *(_QWORD *)v105 = (unsigned int)(int)((double)v48 * 10000000.0 / (double)*((int *)a7 + 1) + 0.5);
    goto LABEL_58;
  }
  pvData = 0;
  pcbData[0] = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    pcbData);
  v68 = *((unsigned int *)a7 + 1);
  v69 = (int)((double)(int)a14 * (double)(int)v68 / 10000000.0 + 0.5);
  if ( pvData )
  {
    v52 = v105;
    goto LABEL_58;
  }
  if ( v69 >= v50 && v69 <= v51 )
  {
    v70 = v69 % v49;
    if ( !(v69 % v49) || v69 == v48 || v69 == v50 || v69 == v51 )
    {
      v52 = v105;
      goto LABEL_137;
    }
  }
  if ( *(_DWORD *)(v114 + 4) == (_DWORD)v68 )
  {
    sub_18004BD84(retaddr, 1194LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", 2290679840LL);
    return 2290679840LL;
  }
  sub_1800DD7D0((unsigned int)v48, (unsigned int)v68);
  v72 = sub_1800DD7D0(v49, v71);
  sub_1800DD7D0(v50, v73);
  v75 = sub_1800DD7D0(v51, v74);
  v68 = v75;
  v79 = (int)((double)(int)v67 * (double)(int)a14 / 10000000.0 + 0.5);
  if ( v79 < v76 || v79 > v75 )
    goto LABEL_140;
  v70 = v79 % v72;
  if ( !(v79 % v72) )
    goto LABEL_128;
  if ( v79 == v77 )
    goto LABEL_131;
  if ( v79 != v76 && v79 != v75 )
  {
LABEL_140:
    sub_18004BD84(retaddr, 1214LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", 2290679840LL);
    return 2290679840LL;
  }
LABEL_128:
  if ( v79 == v77 )
  {
LABEL_131:
    v69 = v48;
    goto LABEL_135;
  }
  if ( v79 == v76 )
  {
    v69 = v50;
  }
  else if ( v79 == v75 )
  {
    v69 = v51;
  }
  else
  {
    v69 = v49 * (v79 / v72);
  }
LABEL_135:
  v52 = v105;
  *(_QWORD *)v105 = (unsigned int)(int)((double)(int)v69 * 10000000.0 / v78 + 0.5);
LABEL_137:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v115 + 152LL))(
         v115,
         v70,
         v67,
         v68)
    && v69 < v48 )
  {
    sub_18004BD84(retaddr, 1230LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", 2290679840LL);
    return 2290679840LL;
  }
LABEL_58:
  if ( !a12 )
  {
LABEL_59:
    *v118 = (unsigned int)(int)((double)v48 * 10000000.0 / (double)*((int *)a7 + 1) + 0.5);
    return 0LL;
  }
  *(_QWORD *)pcbData = 0LL;
  v105 = 0LL;
  v119[0] = 0LL;
  v124[0] = 0LL;
  pv = 0LL;
  *(_QWORD *)&Buf1 = pcbData;
  *((_QWORD *)&Buf1 + 1) = 0LL;
  v121[0] = 1;
  v80 = (_OWORD *)v108[0];
  *(_OWORD *)v108 = *(_OWORD *)v108[0];
  v81 = v116[0];
  v82 = sub_180020090(v116[0], (unsigned int)a6, v108, (char *)&Buf1 + 8);
  if ( v121[0] )
  {
    v83 = *(void **)Buf1;
    *(_QWORD *)Buf1 = *((_QWORD *)&Buf1 + 1);
    if ( v83 )
      CoTaskMemFree(v83);
  }
  if ( v82 < 0 )
  {
    sub_18004BD84(
      retaddr,
      1240LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v82);
    goto LABEL_168;
  }
  v111 = &v105;
  v112 = 0LL;
  v113 = 1;
  Buf2 = (unsigned __int64)&pv;
  v123[0] = 1;
  v108[0] = (__int64)v124;
  v108[1] = 0LL;
  v109 = 1;
  Buf1 = (unsigned __int64)v119;
  v121[0] = 1;
  v84 = (_OWORD *)v117[0];
  *(_OWORD *)v117 = *(_OWORD *)v117[0];
  *(_OWORD *)v110 = *(_OWORD *)v110[0];
  *(_OWORD *)v116 = *v80;
  v82 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Parse_fp_with_locale<0>(
          v81,
          0,
          (unsigned int)a6,
          0,
          0,
          (__int128 *)v116,
          (__int128 *)v110,
          (__int128 *)v117,
          *(void **)pcbData,
          (_QWORD *)&Buf1 + 1,
          &v108[1],
          (_QWORD *)&Buf2 + 1,
          &v112);
  if ( v121[0] )
  {
    v85 = *(void **)Buf1;
    *(_QWORD *)Buf1 = *((_QWORD *)&Buf1 + 1);
    if ( v85 )
      CoTaskMemFree(v85);
  }
  if ( v109 )
  {
    v86 = *(void **)v108[0];
    *(_QWORD *)v108[0] = v108[1];
    if ( v86 )
      CoTaskMemFree(v86);
  }
  if ( v123[0] )
  {
    v87 = *(void **)Buf2;
    *(_QWORD *)Buf2 = *((_QWORD *)&Buf2 + 1);
    if ( v87 )
      CoTaskMemFree(v87);
  }
  if ( v113 )
  {
    v88 = *v111;
    *v111 = (LPVOID)v112;
    if ( v88 )
      CoTaskMemFree(v88);
  }
  if ( v82 < 0 )
  {
    v89 = 1241LL;
    goto LABEL_166;
  }
  pvData = 0;
  *(_OWORD *)v110 = *v84;
  v90 = sub_18004AE9C(v81, a6, (_DWORD)v105, (unsigned int)v110, 0, (__int64)&pvData, 0LL, 0LL, 0LL);
  v82 = v90;
  if ( v90 >= 0 )
  {
    v92 = (unsigned int)(int)((double)pvData * 10000000.0 / (double)*((int *)v105 + 1) + 0.5);
    if ( *v52 - v92 <= 5 * v92 / 100 )
    {
      v98 = pv;
      pv = 0LL;
      if ( v98 )
        CoTaskMemFree(v98);
      v99 = v124[0];
      v124[0] = 0LL;
      if ( v99 )
        CoTaskMemFree(v99);
      v100 = v119[0];
      v119[0] = 0LL;
      if ( v100 )
        CoTaskMemFree(v100);
      v101 = v105;
      v105 = 0LL;
      if ( v101 )
        CoTaskMemFree(v101);
      v102 = *(void **)pcbData;
      *(_QWORD *)pcbData = 0LL;
      if ( v102 )
        CoTaskMemFree(v102);
      goto LABEL_59;
    }
    v82 = -2004287448;
    v89 = 1247LL;
LABEL_166:
    v91 = (unsigned int)v82;
  }
  else
  {
    v91 = (unsigned int)v90;
    v89 = 1244LL;
  }
  sub_18004BD84(retaddr, v89, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v91);
LABEL_168:
  v93 = pv;
  pv = 0LL;
  if ( v93 )
    CoTaskMemFree(v93);
  v94 = v124[0];
  v124[0] = 0LL;
  if ( v94 )
    CoTaskMemFree(v94);
  v95 = v119[0];
  v119[0] = 0LL;
  if ( v95 )
    CoTaskMemFree(v95);
  v96 = v105;
  v105 = 0LL;
  if ( v96 )
    CoTaskMemFree(v96);
  v97 = *(void **)pcbData;
  *(_QWORD *)pcbData = 0LL;
  if ( v97 )
    CoTaskMemFree(v97);
  return (unsigned int)v82;
}
