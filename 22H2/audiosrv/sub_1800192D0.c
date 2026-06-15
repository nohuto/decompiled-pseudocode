/*
 * XREFs of sub_1800192D0 @ 0x1800192D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18001B8D0 @ 0x18001B8D0 (sub_18001B8D0.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     sprintf_s @ 0x18006ACB4 (sprintf_s.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 *     sub_1800DBFD0 @ 0x1800DBFD0 (sub_1800DBFD0.c)
 *     sub_1800DC0A4 @ 0x1800DC0A4 (sub_1800DC0A4.c)
 *     sub_1800E1384 @ 0x1800E1384 (sub_1800E1384.c)
 *     sub_1800F5A74 @ 0x1800F5A74 (sub_1800F5A74.c)
 *     sub_1800F5ED4 @ 0x1800F5ED4 (sub_1800F5ED4.c)
 *     sub_18011FCE4 @ 0x18011FCE4 (sub_18011FCE4.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800192D0(
        _OWORD *a1,
        HKEY a2,
        char *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        _OWORD *a7,
        _DWORD *a8,
        void **a9,
        __int64 a10)
{
  char *v12; // r13
  _OWORD *v13; // rdi
  void *v14; // rsi
  LPOLESTR v15; // r9
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r15
  char *v19; // rcx
  size_t v20; // r8
  char **v21; // r15
  __int64 v22; // rdi
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rsi
  char *v25; // rcx
  size_t v26; // r8
  HKEY v27; // rdi
  _DWORD *v28; // rsi
  PROPVARIANT v29; // rax
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // rdx
  int v33; // r10d
  unsigned __int16 v34; // cx
  __int16 v35; // r11
  int v36; // eax
  unsigned int v37; // edi
  HKEY v38; // rsi
  int v39; // r15d
  _QWORD *v40; // rbx
  void (__fastcall ***v41)(_QWORD, void *, void **); // r9
  void *v42; // rcx
  int v43; // r14d
  int v44; // esi
  __int64 v45; // rdx
  int v46; // eax
  int v47; // ecx
  unsigned int v48; // edi
  void *v49; // rsi
  __int64 v50; // rdi
  void *v51; // rax
  void *v52; // r14
  int v53; // esi
  __int64 v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 *i; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 *v61; // rax
  int v62; // r8d
  __int64 v63; // rax
  signed int v64; // edi
  _QWORD **v65; // r14
  __int64 v66; // rcx
  int v67; // eax
  const BYTE *v68; // r14
  const WCHAR *v69; // r15
  DWORD v70; // r13d
  LSTATUS v71; // eax
  LSTATUS v72; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  bool v77; // zf
  unsigned __int16 v78; // cx
  unsigned __int16 v79; // ax
  int v80; // ecx
  _QWORD *v81; // rcx
  __int64 v82; // rdx
  char *v83; // rdx
  __int64 v84; // rcx
  char *v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  HRESULT v88; // eax
  int v89; // edi
  LPOLESTR v90; // rcx
  LSTATUS v91; // eax
  void *v92; // rax
  __int64 v93; // rcx
  unsigned int v94; // esi
  void *v95; // rcx
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rdx
  LPOLESTR lpsz; // [rsp+88h] [rbp-300h] BYREF
  void *Src; // [rsp+90h] [rbp-2F8h] BYREF
  unsigned int v101; // [rsp+98h] [rbp-2F0h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp-2E8h] BYREF
  _QWORD **v103; // [rsp+A8h] [rbp-2E0h] BYREF
  LPVOID pv[2]; // [rsp+B0h] [rbp-2D8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+C0h] [rbp-2C8h] BYREF
  __int64 v106; // [rsp+D0h] [rbp-2B8h]
  void *v107; // [rsp+E0h] [rbp-2A8h]
  __int64 v108; // [rsp+E8h] [rbp-2A0h]
  _DWORD *v109; // [rsp+F0h] [rbp-298h]
  _QWORD *v110; // [rsp+F8h] [rbp-290h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+108h] [rbp-280h]
  _OWORD *v112[4]; // [rsp+110h] [rbp-278h] BYREF
  WCHAR SubKey[264]; // [rsp+130h] [rbp-258h] BYREF
  void *retaddr; // [rsp+388h] [rbp+0h]

  v101 = a4;
  hKey = a2;
  v12 = (char *)a1;
  pv[0] = a1;
  pvar[0] = a1;
  v107 = a6;
  v112[0] = a7;
  v109 = a8;
  v108 = a10;
  v103 = 0LL;
  v110 = 0LL;
  *a9 = 0LL;
  v13 = a1 + 14;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 14);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 14));
  v112[2] = v13;
  if ( *((_DWORD *)v12 + 46) )
  {
    v53 = -2004287486;
    v81 = off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 3u )
    {
      v82 = 25LL;
LABEL_134:
      sub_1800BB4E0(v81[2], v82, &unk_18015E3E8, (unsigned int)v53);
      JUMPOUT(0x180085803LL);
    }
LABEL_242:
    JUMPOUT(0x18008580ALL);
  }
  if ( a4 > 1 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 3u )
    {
      sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 26LL, &unk_18015E3E8);
    }
LABEL_239:
    JUMPOUT(0x18008580FLL);
  }
  if ( (*(int (__fastcall **)(PVOID, char *, _QWORD, _QWORD, _QWORD ***))(*(_QWORD *)::pv + 24LL))(
         ::pv,
         a3,
         0LL,
         0LL,
         &v103) < 0 )
    goto LABEL_241;
  Src = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, void **))(*v103[2] + 40LL))(v103[2], &Src) < 0 )
  {
    CoTaskMemFree(Src);
    JUMPOUT(0x180085817LL);
  }
  v14 = Src;
  v15 = (LPOLESTR)(v12 + 216);
  lpsz = (LPOLESTR)(v12 + 216);
  if ( !Src )
    goto LABEL_146;
  v16 = -1LL;
  do
    ++v16;
  while ( *((_WORD *)Src + v16) );
  if ( !(_DWORD)v16 )
  {
LABEL_146:
    sub_18002C26C(v12 + 216);
    goto LABEL_19;
  }
  v17 = *(unsigned int *)(*(_QWORD *)v15 - 16LL);
  v18 = ((__int64)Src - *(_QWORD *)v15) >> 1;
  if ( ((1 - *(_DWORD *)(*(_QWORD *)v15 - 8LL)) | (*(_DWORD *)(*(_QWORD *)v15 - 12LL) - (int)v16)) < 0 )
  {
    sub_18001B550(v15, (unsigned int)v16);
    v15 = lpsz;
  }
  v19 = *(char **)v15;
  v20 = 2LL * (int)v16;
  if ( v18 > v17 )
  {
    if ( !v20 )
      goto LABEL_16;
    if ( v19 )
    {
      memcpy(v19, v14, v20);
LABEL_15:
      v15 = lpsz;
      goto LABEL_16;
    }
    goto LABEL_144;
  }
  v83 = &v19[2 * v18];
  if ( v20 )
  {
    if ( v19 && v83 )
    {
      memmove(v19, v83, v20);
      goto LABEL_15;
    }
LABEL_144:
    *(_DWORD *)o__errno(v19) = 22;
    o__invalid_parameter_noinfo(v84);
    goto LABEL_15;
  }
LABEL_16:
  if ( (int)v16 < 0 || (int)v16 > *(_DWORD *)(*(_QWORD *)v15 - 12LL) )
    sub_1800B8610(2147942487LL);
  *(_DWORD *)(*(_QWORD *)v15 - 16LL) = v16;
  *(_WORD *)(*(_QWORD *)v15 + 2LL * (int)v16) = 0;
  v12 = (char *)pv[0];
LABEL_19:
  v21 = (char **)(v12 + 208);
  if ( !a3 )
    goto LABEL_153;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)&a3[2 * v22] );
  if ( !(_DWORD)v22 )
  {
LABEL_153:
    sub_18002C26C(v12 + 208);
    goto LABEL_32;
  }
  v23 = *((unsigned int *)*v21 - 4);
  v24 = (a3 - *v21) >> 1;
  if ( ((1 - *((_DWORD *)*v21 - 2)) | (*((_DWORD *)*v21 - 3) - (int)v22)) < 0 )
    sub_18001B550(v21, (unsigned int)v22);
  v25 = *v21;
  v26 = 2LL * (int)v22;
  if ( v24 <= v23 )
  {
    v85 = &v25[2 * v24];
    if ( !v26 )
      goto LABEL_29;
    if ( v25 && v85 )
    {
      memmove(v25, v85, v26);
      goto LABEL_29;
    }
  }
  else
  {
    if ( !v26 )
      goto LABEL_29;
    if ( v25 )
    {
      memcpy(v25, a3, v26);
      goto LABEL_29;
    }
  }
  *(_DWORD *)o__errno(v25) = 22;
  o__invalid_parameter_noinfo(v86);
LABEL_29:
  if ( (int)v22 < 0 || (int)v22 > *((_DWORD *)*v21 - 3) )
    sub_1800B8610(2147942487LL);
  *((_DWORD *)*v21 - 4) = v22;
  *(_WORD *)&(*v21)[2 * (int)v22] = 0;
  v12 = (char *)pv[0];
LABEL_32:
  CoTaskMemFree(Src);
  v27 = hKey;
  *((_DWORD *)v12 + 16) = (*(__int64 (__fastcall **)(HKEY))(*(_QWORD *)hKey + 40LL))(hKey);
  v28 = v109;
  v109 += 12;
  if ( *v109 >= 0x15u )
  {
    v87 = 1391LL;
LABEL_156:
    sub_18004BD84(retaddr, v87, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
    goto LABEL_239;
  }
  *(_OWORD *)pvar = *((_OWORD *)v28 + 1);
  v29 = pvar[0];
  if ( !pvar[0] )
    v29 = pvar[1];
  if ( v29 )
  {
    lpsz = 0LL;
    sub_18002A504(&lpsz, 0LL);
    v88 = StringFromCLSID((const IID *const)pvar, &lpsz);
    v89 = v88;
    if ( v88 >= 0 )
    {
      if ( sprintf_s(
             (char *const)SubKey,
             0x104uLL,
             L"%s\\%s",
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\",
             lpsz) == -1 )
      {
        sub_18004BD84(retaddr, 1379LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942522LL);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        goto LABEL_169;
      }
      Src = 0LL;
      v91 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, (PHKEY)&Src);
      v89 = v91;
      if ( v91 >= 0 )
      {
        if ( Src )
          RegCloseKey((HKEY)Src);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        goto LABEL_174;
      }
      sub_18004BD84(retaddr, 1382LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v91);
      if ( Src )
        RegCloseKey((HKEY)Src);
      v90 = lpsz;
      if ( !lpsz )
      {
LABEL_168:
        if ( v89 < 0 )
        {
LABEL_169:
          v87 = 1393LL;
          goto LABEL_156;
        }
LABEL_174:
        v27 = hKey;
        goto LABEL_36;
      }
    }
    else
    {
      sub_18004BD84(retaddr, 1376LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v88);
      v90 = lpsz;
      if ( !lpsz )
        goto LABEL_168;
    }
    CoTaskMemFree(v90);
    goto LABEL_168;
  }
LABEL_36:
  if ( v28[13] > 3u )
  {
    v87 = 1395LL;
    goto LABEL_156;
  }
  *(_OWORD *)(v12 + 280) = *(_OWORD *)v28;
  *(_OWORD *)(v12 + 296) = *((_OWORD *)v28 + 1);
  *(_OWORD *)(v12 + 312) = *((_OWORD *)v28 + 2);
  *(_OWORD *)(v12 + 328) = *((_OWORD *)v28 + 3);
  *(_OWORD *)(v12 + 344) = *((_OWORD *)v28 + 4);
  *(_OWORD *)(v12 + 360) = *((_OWORD *)v28 + 5);
  *(_OWORD *)(v12 + 376) = *((_OWORD *)v28 + 6);
  *(_OWORD *)(v12 + 392) = *((_OWORD *)v28 + 7);
  *(_OWORD *)(v12 + 408) = *((_OWORD *)v28 + 8);
  *(_OWORD *)(v12 + 424) = *((_OWORD *)v28 + 9);
  if ( *((_DWORD *)v12 + 98) )
  {
    v92 = (void *)sub_18006A1B0(*((unsigned int *)v12 + 98), &unk_18019F848);
    v93 = *((_QWORD *)v12 + 60);
    *((_QWORD *)v12 + 60) = v92;
    if ( v93 )
    {
      sub_18006A148(v93, 1LL);
      v92 = (void *)*((_QWORD *)v12 + 60);
    }
    if ( !v92 )
      goto LABEL_241;
    memcpy(v92, *((const void **)v12 + 50), *((unsigned int *)v12 + 98));
    *((_QWORD *)v12 + 50) = *((_QWORD *)v12 + 60);
  }
  if ( (*(int (__fastcall **)(__int64, HKEY, _QWORD))(*(_QWORD *)qword_18019E618 + 88LL))(
         qword_18019E618,
         v27,
         *((_QWORD *)v12 + 27)) < 0 )
    goto LABEL_241;
  if ( !v107 )
  {
    v94 = -2147467261;
LABEL_182:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 3u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 28LL, &unk_18015E3E8, v94);
    }
    goto LABEL_239;
  }
  v30 = *((unsigned __int16 *)v107 + 1);
  if ( !(_WORD)v30 )
    goto LABEL_181;
  v31 = *((_DWORD *)v107 + 1);
  if ( !v31 )
    goto LABEL_181;
  v32 = *((unsigned int *)v107 + 2);
  if ( !(_DWORD)v32 )
    goto LABEL_181;
  v33 = *((unsigned __int16 *)v107 + 6);
  if ( !(_WORD)v33 )
    goto LABEL_181;
  v34 = *((_WORD *)v107 + 8);
  if ( v34 > 0x400u )
    goto LABEL_181;
  v35 = *(_WORD *)v107;
  if ( ((*(_WORD *)v107 - 1) & 0xFFFD) == 0 )
  {
    if ( !v34
      && (*((_WORD *)v107 + 7) & 7) == 0
      && (unsigned __int16)v30 <= 2u
      && (_DWORD)v32 == (v31 * *((unsigned __int16 *)v107 + 7) * (unsigned int)v30) >> 3 )
    {
      goto LABEL_50;
    }
    goto LABEL_181;
  }
  if ( v35 != -2 )
    goto LABEL_50;
  if ( v34 < 0x16u )
    goto LABEL_181;
  v74 = 0x10000000000001LL - *((_QWORD *)v107 + 3);
  if ( *((_QWORD *)v107 + 3) == 0x10000000000001LL )
    v74 = 0x719B3800AA000080LL - *((_QWORD *)v107 + 4);
  if ( v74 )
  {
    v75 = 0x10000000000003LL - *((_QWORD *)v107 + 3);
    if ( *((_QWORD *)v107 + 3) == 0x10000000000003LL )
      v75 = 0x719B3800AA000080LL - *((_QWORD *)v107 + 4);
    if ( v75 )
      goto LABEL_50;
  }
  v76 = 0x10000000000001LL - *((_QWORD *)v107 + 3);
  if ( !v76 )
    v76 = 0x719B3800AA000080LL - *((_QWORD *)v107 + 4);
  v77 = v76 == 0;
  v78 = *((_WORD *)v107 + 7);
  if ( v77 )
  {
    if ( ((v78 - 8) & 0xFFE7) == 0 )
      goto LABEL_124;
LABEL_181:
    v94 = -2147024809;
    goto LABEL_182;
  }
  if ( ((v78 - 32) & 0xFFDF) != 0 )
    goto LABEL_181;
LABEL_124:
  v79 = *((_WORD *)v107 + 9);
  if ( !v79 )
    goto LABEL_181;
  if ( v78 < v79 )
    goto LABEL_181;
  v80 = v30 * v78;
  if ( (_DWORD)v32 != (unsigned int)(v31 * v80) >> 3 )
    goto LABEL_181;
  v32 = (v80 >> 31) & 7;
  if ( v33 != v80 / 8 )
    goto LABEL_181;
LABEL_50:
  if ( (unsigned int)v30 > 2 && ((v35 - 1) & 0xFFFD) == 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 3u )
    {
      sub_1800E1384(
        *((_QWORD *)off_18019C348 + 2),
        v32,
        v30,
        *(unsigned __int16 *)v107,
        *((unsigned __int16 *)v107 + 1));
    }
    goto LABEL_239;
  }
  v36 = ((__int64 (__fastcall *)(_QWORD **))(*v103)[7])(v103);
  v37 = a5;
  v38 = hKey;
  if ( v36 )
  {
    v39 = 1;
  }
  else if ( (a5 & 0x20000) != 0 )
  {
    v39 = 2;
    if ( (*(unsigned __int8 (__fastcall **)(HKEY))(*(_QWORD *)hKey + 496LL))(hKey)
      || (unsigned __int8)sub_18011FCE4(v103) )
    {
      v37 = a5 | 0x80000000;
    }
  }
  else
  {
    v39 = 0;
  }
  if ( (int)sub_180016E30((__int64)v12, (__int64)v38, v112[0], v37, a9) < 0 )
LABEL_241:
    JUMPOUT(0x1800857FCLL);
  v40 = v103[2];
  v110 = v40;
  (*(void (__fastcall **)(_QWORD *))(*v40 + 8LL))(v40);
  LODWORD(lpsz) = 0;
  v41 = (void (__fastcall ***)(_QWORD, void *, void **))v103[2];
  v42 = 0LL;
  Src = 0LL;
  if ( v41 )
  {
    (**v41)(v41, &unk_18015B040, &Src);
    v42 = Src;
  }
  if ( v42 )
  {
    (*(void (__fastcall **)(void *, LPOLESTR *))(*(_QWORD *)v42 + 88LL))(v42, &lpsz);
    v42 = Src;
  }
  v43 = (int)lpsz;
  if ( v42 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v42 + 16LL))(v42);
  v44 = 1;
  *(_OWORD *)pvar = 0LL;
  v106 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, void *, PROPVARIANT *))(*v103[5] + 40LL))(v103[5], &unk_18015B5F8, pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v44 = 0;
  }
  PropVariantClear(pvar);
  if ( (v37 & 0x400000) != 0 )
  {
    v47 = 3;
    goto LABEL_70;
  }
  v46 = v37 & 0x20000;
  if ( v108 && v46 )
  {
    v47 = 0;
    goto LABEL_70;
  }
  if ( v44 && v46 )
  {
    v47 = 2;
    goto LABEL_70;
  }
  if ( v101 == 1 )
  {
    v95 = 0LL;
    pv[0] = 0LL;
    if ( v43 )
    {
      if ( !(unsigned int)sub_1800DC0A4(v40, v45, v107, pv) )
      {
        CoTaskMemFree(pv[0]);
        goto LABEL_203;
      }
      v95 = pv[0];
    }
    CoTaskMemFree(v95);
  }
  if ( (v37 & 2) == 0 )
  {
LABEL_203:
    v47 = 1;
    goto LABEL_70;
  }
  v47 = 0;
LABEL_70:
  *((_DWORD *)v12 + 138) = v47;
  v48 = v101;
  if ( (int)sub_18006E5E0(
              *((_DWORD *)v12 + 82),
              *((_DWORD *)v12 + 84),
              *((_DWORD *)v12 + 102),
              (_DWORD)v103,
              v39,
              v101,
              v47,
              v108,
              0,
              1,
              (__int64)v112,
              (__int64)pvar,
              (__int64)(v12 + 440),
              0LL,
              0LL) < 0
    || v48 == 1
    && ((unsigned int)sub_1800DBFD0(*((_QWORD *)v12 + 27))
     || !(*(unsigned int (__fastcall **)(HKEY, _QWORD, __int64))(*(_QWORD *)hKey + 144LL))(
           hKey,
           (unsigned int)*v109,
           1LL)) )
  {
    goto LABEL_241;
  }
  v49 = v107;
  v50 = *((unsigned __int16 *)v107 + 8);
  v51 = CoTaskMemAlloc(v50 + 18);
  v52 = v51;
  if ( v51 )
  {
    memcpy(v51, v49, v50 + 18);
    v53 = 0;
  }
  else
  {
    v53 = -2147024882;
  }
  *((_QWORD *)v12 + 22) = v52;
  if ( v53 < 0 )
  {
    v81 = off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 3u )
    {
      v82 = 30LL;
      goto LABEL_134;
    }
    goto LABEL_242;
  }
  *((_DWORD *)v12 + 66) = v101;
  v54 = *((_QWORD *)v12 + 59);
  v55 = v108;
  *((_QWORD *)v12 + 59) = v108;
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  *((_DWORD *)v12 + 46) = 1;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 31LL, &unk_18015E3E8);
  }
  EnterCriticalSection(&stru_18019EF60);
  pvar[0] = &stru_18019EF60;
  v56 = qword_18019D9B0;
  i = (__int64 *)qword_18019D9D0;
  if ( !qword_18019D9D0 )
  {
    if ( dword_18019D9D8 )
    {
      if ( dword_18019D9D8 == 10LL )
        v58 = 0x1999999999999999LL;
      else
        v58 = 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_18019D9D8;
      if ( v58 < 0x18 )
        goto LABEL_217;
      v59 = 24LL * (unsigned int)dword_18019D9D8;
    }
    else
    {
      v59 = 0LL;
    }
    if ( (unsigned __int64)~v59 >= 8 )
    {
      v60 = (_QWORD *)o_malloc(v59 + 8);
      if ( v60 )
      {
        *v60 = qword_18019D9C8;
        qword_18019D9C8 = (__int64)v60;
        v61 = &v60[3 * (unsigned int)(dword_18019D9D8 - 1) + 1];
        v62 = dword_18019D9D8 - 1;
        for ( i = (__int64 *)qword_18019D9D0; v62 >= 0; --v62 )
        {
          *v61 = (__int64)i;
          i = v61;
          qword_18019D9D0 = (__int64)v61;
          v61 -= 3;
        }
        goto LABEL_91;
      }
    }
LABEL_217:
    sub_1800B8610(2147942414LL);
  }
LABEL_91:
  v63 = *i;
  i[2] = (__int64)v12;
  qword_18019D9D0 = v63;
  i[1] = 0LL;
  *i = v56;
  ++qword_18019D9C0;
  if ( qword_18019D9B0 )
    *(_QWORD *)(qword_18019D9B0 + 8) = i;
  else
    qword_18019D9B8 = (__int64)i;
  qword_18019D9B0 = (__int64)i;
  LeaveCriticalSection(&stru_18019EF60);
  v64 = -2147024809;
  v65 = v103;
  EnterCriticalSection(&stru_18019EF98);
  pvar[0] = &stru_18019EF98;
  if ( !byte_18019EF90 )
  {
    v96 = 2147549183LL;
    v97 = 238LL;
LABEL_230:
    sub_18004BD84(retaddr, v97, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v96);
    goto LABEL_105;
  }
  v67 = sub_18001B8D0(v66, v65, &Src, &v101);
  if ( v67 < 0 )
  {
    v96 = (unsigned int)v67;
    v97 = 240LL;
    goto LABEL_230;
  }
  ++*((_DWORD *)Src + 50 * (int)v101 + 37);
  v68 = (const BYTE *)Src;
  if ( Src == &unk_18019F078 )
  {
    v69 = L"Render";
    v70 = 600;
  }
  else if ( Src == &unk_18019F2D0 )
  {
    v69 = L"Capture";
    v70 = 400;
  }
  else
  {
    if ( Src != &unk_18019F460 )
    {
      sub_18004BD84(retaddr, 493LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", 2147942487LL);
      goto LABEL_229;
    }
    v69 = L"UnknownStream";
    v70 = 200;
  }
  hKey = 0LL;
  pvar[0] = &hKey;
  LOBYTE(pvar[1]) = 1;
  v71 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, &word_18019F528, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
  v64 = v71;
  if ( v71 > 0 )
    v64 = (unsigned __int16)v71 | 0x80070000;
  if ( v64 < 0 )
  {
    v98 = 452LL;
LABEL_227:
    sub_18004BD84(retaddr, v98, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", (unsigned int)v64);
    sub_1800F5A74(pvar);
    sub_18004BD84(retaddr, 496LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", (unsigned int)v64);
LABEL_229:
    v96 = (unsigned int)v64;
    v97 = 249LL;
    goto LABEL_230;
  }
  v72 = RegSetValueExW(hKey, v69, 0, 3u, v68, v70);
  v64 = v72;
  if ( v72 > 0 )
    v64 = (unsigned __int16)v72 | 0x80070000;
  if ( v64 < 0 )
  {
    v98 = 455LL;
    goto LABEL_227;
  }
  if ( hKey )
    RegCloseKey(hKey);
LABEL_105:
  LeaveCriticalSection(&stru_18019EF98);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v40 )
    (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
  if ( v103 )
    ((void (__fastcall *)(_QWORD **))(*v103)[2])(v103);
  return (unsigned int)v53;
}
