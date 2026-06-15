/*
 * XREFs of sub_180010670 @ 0x180010670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFF0 @ 0x18000FFF0 (sub_18000FFF0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_1800BC6FC @ 0x1800BC6FC (sub_1800BC6FC.c)
 *     sub_18012FC64 @ 0x18012FC64 (sub_18012FC64.c)
 *     sub_180131C0C @ 0x180131C0C (sub_180131C0C.c)
 */

__int64 __fastcall sub_180010670(__int64 a1, __int64 *a2, __int128 *a3, int a4, int a5, _QWORD *a6, _QWORD *a7)
{
  bool v9; // r15
  __int64 *v10; // rcx
  int v11; // edi
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  int v18; // ecx
  int v19; // r14d
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // r14d
  _QWORD *v25; // r12
  __int64 v26; // r15
  LPVOID *v27; // rdx
  __int64 (__fastcall *v28)(__int64, __int64 *, __int64, __int128 *, int, int, LPVOID *); // rax
  __int64 v29; // r8
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  __int64 v34; // rax
  LPVOID *v35; // rdx
  LPVOID v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // rdi
  __int64 *v39; // rsi
  __int64 v40; // rcx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rdx
  LPVOID *p_pv; // rax
  unsigned int v48; // ebx
  __int64 v49; // r15
  int v50; // r13d
  int v51; // r12d
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // ebx
  int v55; // edi
  int v56; // esi
  int v57; // r14d
  _DWORD *v58; // rax
  LPVOID v59; // rcx
  _QWORD *v60; // rbx
  int v61; // eax
  unsigned int v62; // edi
  int v63; // eax
  unsigned int v64; // ebx
  int pdwType; // [rsp+20h] [rbp-A1h]
  int v66; // [rsp+50h] [rbp-71h]
  unsigned __int8 v67; // [rsp+80h] [rbp-41h]
  LPVOID pv; // [rsp+88h] [rbp-39h] BYREF
  __int64 v69; // [rsp+90h] [rbp-31h] BYREF
  unsigned int v70; // [rsp+98h] [rbp-29h]
  LPVOID v71; // [rsp+A0h] [rbp-21h] BYREF
  DWORD pcbData; // [rsp+A8h] [rbp-19h] BYREF
  int pvData; // [rsp+ACh] [rbp-15h] BYREF
  __int128 v74; // [rsp+B0h] [rbp-11h] BYREF
  void *retaddr; // [rsp+108h] [rbp+47h]
  __int64 (__fastcall ***v76)(_QWORD, void *, __int64 *); // [rsp+110h] [rbp+4Fh] BYREF
  __int64 v77; // [rsp+118h] [rbp+57h] BYREF
  __int128 *v78; // [rsp+120h] [rbp+5Fh]
  int v79; // [rsp+128h] [rbp+67h]

  v79 = a4;
  v78 = a3;
  pcbData = 4;
  v9 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"LoadSystemEffectInAudioSrv",
         0x18u,
         0LL,
         &pvData,
         &pcbData)
    || !pvData;
  v10 = *(__int64 **)(a1 + 104);
  if ( v10 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      v10 = *(__int64 **)(a1 + 104);
    }
    *(_QWORD *)(a1 + 104) = a2;
    if ( v10 )
      (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  }
  v11 = 0;
  if ( *(int *)(a1 + 64) > 0 )
  {
    while ( 1 )
    {
      v77 = 0LL;
      if ( v9 )
      {
        v12 = *a2;
        pv = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *))(v12 + 40))(a2, &pv);
        v14 = v13;
        if ( v13 < 0 )
        {
          v46 = 772LL;
LABEL_77:
          sub_18004BD84(
            retaddr,
            v46,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (unsigned int)v13);
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_79;
        }
        v15 = v77;
        if ( v77 )
        {
          v77 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( v11 < 0 || v11 >= *(_DWORD *)(a1 + 64) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        LODWORD(v76) = *(_DWORD *)(a1 + 40);
        v16 = *(_QWORD *)(a1 + 56) + 16LL * v11;
        v71 = pv;
        v13 = sub_18000FFF0(&v77, (__int64 *)&v71, (unsigned int *)&v76, v16);
        v14 = v13;
        if ( v13 < 0 )
        {
          v46 = 774LL;
          goto LABEL_77;
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      else
      {
        v76 = 0LL;
        sub_1800461B8(&v76);
        v42 = sub_180023320(a1 + 56, (unsigned int)v11);
        v43 = sub_18012FC64(v42, (_DWORD)a2, 0, *(_DWORD *)(a1 + 40), pdwType, (__int64)&v76);
        v14 = v43;
        if ( v43 < 0 )
        {
          v45 = 760LL;
          goto LABEL_72;
        }
        sub_1800461B8(&v77);
        v43 = (**v76)(v76, &unk_18015B248, &v77);
        v14 = v43;
        if ( v43 < 0 )
        {
          v45 = 762LL;
LABEL_72:
          sub_18004BD84(
            retaddr,
            v45,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (unsigned int)v43);
          goto LABEL_73;
        }
        v69 = 0LL;
        sub_1800461B8(&v69);
        v44 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64 *))v77)(v77, &qword_1801737E0, &v69);
        v14 = v44;
        if ( v44 < 0 )
        {
          sub_18004BD84(
            retaddr,
            765LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (unsigned int)v44);
          sub_1800461B8(&v69);
LABEL_73:
          sub_1800461B8(&v76);
          goto LABEL_79;
        }
        sub_1800461B8(&v69);
        sub_1800461B8(&v76);
      }
      v17 = *(_DWORD *)(a1 + 80);
      v18 = *(_DWORD *)(a1 + 84);
      if ( v17 == v18 )
      {
        if ( v18 )
        {
          v19 = 2 * v17;
          if ( (v17 & 0x40000000) != 0 )
            goto LABEL_68;
        }
        else
        {
          v19 = 1;
        }
        if ( (unsigned __int64)v19 > 0xFFFFFFF || (v20 = o__recalloc(*(_QWORD *)(a1 + 72), v19, 8LL)) == 0 )
        {
LABEL_68:
          v14 = -2147024882;
          sub_18004BD84(
            retaddr,
            777LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            2147942414LL);
LABEL_79:
          sub_1800461B8(&v77);
          return v14;
        }
        *(_QWORD *)(a1 + 72) = v20;
        v17 = *(_DWORD *)(a1 + 80);
        *(_DWORD *)(a1 + 84) = v19;
      }
      v21 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * v17);
      if ( !v21 )
        goto LABEL_27;
      *v21 = v77;
      v22 = v77;
      if ( v77 )
        break;
LABEL_28:
      ++*(_DWORD *)(a1 + 80);
      if ( v22 )
      {
        v77 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      if ( ++v11 >= *(_DWORD *)(a1 + 64) )
        goto LABEL_31;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 8LL))(v77);
LABEL_27:
    v22 = v77;
    goto LABEL_28;
  }
LABEL_31:
  v23 = *(_DWORD *)(a1 + 80);
  v24 = 0;
  v70 = 0;
  v25 = a7;
  if ( v23 <= 0 )
  {
LABEL_53:
    if ( v23 == 1 )
    {
      v38 = a6;
      if ( a6 )
      {
        if ( *(int *)(a1 + 80) <= 0 )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        v39 = *(__int64 **)(a1 + 72);
        v40 = *v39;
        if ( *v39 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
          v40 = *v39;
        }
        *v38 = v40;
      }
      if ( v25 )
      {
        if ( *(int *)(a1 + 96) <= 0 )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        v60 = *(_QWORD **)(a1 + 88);
        sub_180047458(v60);
        *v25 = *v60;
      }
    }
    else
    {
      if ( a6 )
      {
        v61 = (**(__int64 (__fastcall ***)(__int64, void *))a1)(a1, &unk_18015B248);
        v62 = v61;
        if ( v61 < 0 )
        {
          sub_18004BD84(
            retaddr,
            815LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (unsigned int)v61);
          return v62;
        }
      }
      if ( v25 )
      {
        v63 = (**(__int64 (__fastcall ***)(__int64, __int64 *, _QWORD *))a1)(a1, &qword_18015B840, v25);
        v64 = v63;
        if ( v63 < 0 )
        {
          sub_18004BD84(
            retaddr,
            818LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (unsigned int)v63);
          return v64;
        }
      }
    }
    return 0LL;
  }
  v26 = 0LL;
  while ( 1 )
  {
    v69 = 0LL;
    pv = 0LL;
    if ( (v24 & 0x80000000) != 0 || (signed int)v24 >= *(_DWORD *)(a1 + 80) )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    if ( (***(int (__fastcall ****)(_QWORD, void *, __int64 *))(v26 + *(_QWORD *)(a1 + 72)))(
           *(_QWORD *)(v26 + *(_QWORD *)(a1 + 72)),
           &unk_18015B278,
           &v69) < 0 )
    {
      v74 = *v78;
      sub_18004B9B4(a1 + 72, v24);
      p_pv = &pv;
      if ( !v25 )
        p_pv = 0LL;
      v30 = sub_180131C0C((int)a2, v79, a5, (__int64)p_pv);
    }
    else
    {
      v27 = v25 ? &pv : 0LL;
      v28 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int128 *, int, int, LPVOID *))(*(_QWORD *)v69 + 24LL);
      v29 = *(_QWORD *)(a1 + 56) + 16LL * (int)v24;
      v74 = *v78;
      v30 = v28(v69, a2, v29, &v74, v79, a5, v27);
    }
    LODWORD(v71) = v30;
    if ( v30 < 0 )
      break;
    v31 = *(_DWORD *)(a1 + 96);
    v32 = *(_DWORD *)(a1 + 100);
    if ( v31 == v32 )
    {
      if ( v32 )
      {
        v33 = 2 * v31;
        if ( (v31 & 0x40000000) != 0 )
          goto LABEL_85;
      }
      else
      {
        v33 = 1;
      }
      if ( (unsigned __int64)v33 > 0xFFFFFFF || (v34 = o__recalloc(*(_QWORD *)(a1 + 88), v33, 8LL)) == 0 )
      {
LABEL_85:
        v48 = -2147024882;
        sub_18004BD84(
          retaddr,
          797LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          2147942414LL);
        goto LABEL_89;
      }
      *(_DWORD *)(a1 + 100) = v33;
      *(_QWORD *)(a1 + 88) = v34;
      v31 = *(_DWORD *)(a1 + 96);
    }
    v35 = (LPVOID *)(*(_QWORD *)(a1 + 88) + 8LL * v31);
    if ( !v35 )
      goto LABEL_87;
    *v35 = pv;
    v36 = pv;
    if ( pv )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 8LL))(pv);
LABEL_87:
      v36 = pv;
    }
    ++*(_DWORD *)(a1 + 96);
    if ( v36 )
    {
      pv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v23 = *(_DWORD *)(a1 + 80);
    ++v24;
    v26 += 8LL;
    v70 = v24;
    if ( (int)v24 >= v23 )
      goto LABEL_53;
  }
  v49 = a1 + 56;
  *(_QWORD *)&v74 = a1 + 56;
  LOBYTE(v76) = *(_BYTE *)(sub_180023320(a1 + 56, v24) + 15);
  LOBYTE(v77) = *(_BYTE *)(sub_180023320(a1 + 56, v24) + 14);
  v67 = *(_BYTE *)(sub_180023320(a1 + 56, v24) + 13);
  v50 = *(unsigned __int8 *)(sub_180023320(a1 + 56, v24) + 12);
  v51 = *(unsigned __int8 *)(sub_180023320(a1 + 56, v24) + 11);
  v52 = sub_180023320(a1 + 56, v24);
  v53 = a1 + 56;
  v54 = *(unsigned __int8 *)(v52 + 10);
  v55 = *(unsigned __int8 *)(sub_180023320(v53, v24) + 9);
  v56 = *(unsigned __int8 *)(sub_180023320(v49, v24) + 8);
  v57 = *(unsigned __int16 *)(sub_180023320(v49, v24) + 6);
  LODWORD(v49) = *(unsigned __int16 *)(sub_180023320(v49, v70) + 4);
  v58 = (_DWORD *)sub_180023320(v74, v70);
  v66 = v54;
  v48 = (unsigned int)v71;
  sub_1800BC6FC(
    retaddr,
    801LL,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (unsigned int)v71,
    "SysFxInitializationFailure{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *v58,
    v49,
    v57,
    v56,
    v55,
    v66,
    v51,
    v50,
    v67,
    (unsigned __int8)v77,
    (unsigned __int8)v76);
LABEL_89:
  v59 = pv;
  if ( pv )
  {
    pv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v59 + 16LL))(v59);
  }
  sub_1800461B8(&v69);
  return v48;
}
