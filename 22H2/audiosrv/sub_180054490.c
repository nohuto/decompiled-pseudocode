/*
 * XREFs of sub_180054490 @ 0x180054490
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180065CE0 @ 0x180065CE0 (sub_180065CE0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18007271C @ 0x18007271C (sub_18007271C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BC6FC @ 0x1800BC6FC (sub_1800BC6FC.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 *     sub_1801325AC @ 0x1801325AC (sub_1801325AC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180054490(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        __int64 *a3,
        unsigned int *a4,
        GUID **a5)
{
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  GUID *v13; // rbx
  int v14; // eax
  int v15; // eax
  GUID **v17; // rax
  void *v18; // rcx
  HRESULT v19; // eax
  GUID *v20; // r15
  unsigned int v21; // r13d
  int v22; // eax
  __int64 v23; // rax
  GUID **v24; // rax
  void *v25; // rcx
  unsigned int v26; // r15d
  __int64 v27; // r13
  HRESULT v28; // eax
  CONFIGRET v29; // eax
  DWORD v30; // eax
  CONFIGRET v31; // eax
  DWORD v32; // eax
  GUID *v33; // r12
  GUID *v34; // r12
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  DEVNODE pdnDevInst; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h] BYREF
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  GUID *v41; // [rsp+B8h] [rbp-48h]
  PROPVARIANT v42[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-30h]
  GUID rguid; // [rsp+E0h] [rbp-20h] BYREF
  GUID v45; // [rsp+F0h] [rbp-10h] BYREF
  int v46; // [rsp+100h] [rbp+0h]
  OLECHAR sz[40]; // [rsp+110h] [rbp+10h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v8 = 0;
  *a4 = 0;
  *a5 = 0LL;
  v38 = 0LL;
  v9 = (**a1)(a1, &unk_18015B040, &v38);
  v10 = v9;
  if ( v9 < 0 )
  {
    sub_18004BD84((int)retaddr, 1249, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h", v9);
    sub_18004BD84((int)retaddr, 118, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v10);
    goto LABEL_14;
  }
  v36 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v38 + 40LL))(v38, 0LL, &v36);
  v10 = v11;
  if ( v11 < 0 )
  {
    sub_18004BD84((int)retaddr, 122, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v11);
    v12 = v36;
    goto LABEL_12;
  }
  v12 = v36;
  if ( !v36 )
  {
LABEL_11:
    v10 = 0;
    goto LABEL_12;
  }
  *(_OWORD *)pvar = 0LL;
  v40 = 0LL;
  v13 = 0LL;
  v41 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, PROPVARIANT *))(*(_QWORD *)v36 + 40LL))(v36, a2, pvar);
  v10 = v14;
  if ( v14 < 0 )
  {
    sub_18004BD84((int)retaddr, 131, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v14);
    goto LABEL_68;
  }
  if ( LOWORD(pvar[0]) )
  {
    if ( LOWORD(pvar[0]) != 31 )
    {
      v10 = -2147023092;
      sub_1800BC6FC(
        retaddr,
        137LL,
        "avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        2147944204LL,
        "0x%08X",
        LOWORD(pvar[0]));
      goto LABEL_68;
    }
    v8 = 1;
    v17 = (GUID **)sub_18007271C(&pv);
    v13 = *v17;
    *v17 = 0LL;
    v41 = v13;
    v18 = pv;
    pv = 0LL;
    if ( v18 )
      CoTaskMemFree(v18);
    if ( !v13 )
    {
      v10 = -2147024882;
      sub_18004BD84((int)retaddr, 141, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", -2147024882);
      goto LABEL_68;
    }
    v19 = CLSIDFromString((LPCOLESTR)pvar[1], v13);
    v10 = v19;
    if ( v19 < 0 )
    {
      sub_18004BD84((int)retaddr, 142, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v19);
      goto LABEL_68;
    }
  }
  else
  {
    if ( *((_DWORD *)a3 + 4) )
      goto LABEL_8;
    v23 = *a3;
    if ( !*a3 )
      v23 = a3[1];
    if ( v23 )
    {
LABEL_8:
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, PROPVARIANT *))(*(_QWORD *)v36 + 40LL))(v36, a3, pvar);
      v10 = v15;
      if ( v15 < 0 )
      {
        sub_18004BD84((int)retaddr, 146, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v15);
        goto LABEL_68;
      }
      if ( LOWORD(pvar[0]) )
      {
        if ( LOWORD(pvar[0]) != 4127 )
        {
          v10 = -2147023092;
          sub_1800BC6FC(
            retaddr,
            149LL,
            "avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            2147944204LL,
            "0x%08X",
            LOWORD(pvar[0]));
          goto LABEL_68;
        }
        v8 = (unsigned int)pvar[1];
        if ( !LODWORD(pvar[1]) )
        {
          v10 = -2147024883;
          sub_18004BD84(
            (int)retaddr,
            150,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            -2147024883);
          goto LABEL_68;
        }
        v24 = (GUID **)sub_18007271C(&pv);
        v13 = *v24;
        *v24 = 0LL;
        v41 = v13;
        v25 = pv;
        pv = 0LL;
        if ( v25 )
          CoTaskMemFree(v25);
        if ( !v13 )
        {
          v10 = -2147024882;
          sub_18004BD84(
            (int)retaddr,
            154,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            -2147024882);
          goto LABEL_68;
        }
        v26 = 0;
        if ( !v8 )
          goto LABEL_10;
        v27 = 0LL;
        do
        {
          v28 = CLSIDFromString(*(LPCOLESTR *)(v40 + v27), &v13[v26]);
          v10 = v28;
          if ( v28 < 0 )
          {
            sub_18004BD84((int)retaddr, 157, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v28);
            goto LABEL_68;
          }
          ++v26;
          v27 += 8LL;
        }
        while ( v26 < v8 );
      }
    }
    if ( !v8 )
    {
LABEL_10:
      *a5 = v13;
      *a4 = v8;
      PropVariantClear(pvar);
      v12 = v36;
      goto LABEL_11;
    }
  }
  v20 = v13;
  v21 = 0;
  while ( 1 )
  {
    v45 = *v20;
    v46 = 100;
    *(_OWORD *)v42 = 0LL;
    v43 = 0LL;
    if ( v36 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v36 + 40LL))(v36, &v45, v42);
      v10 = v22;
      if ( v22 < 0 )
      {
        sub_18004BD84((int)retaddr, 174, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v22);
        goto LABEL_67;
      }
    }
    if ( LOWORD(v42[0]) != 31 )
    {
      rguid = *v20;
      if ( StringFromGUID2(&rguid, sz, 39) <= 0 || !(unsigned __int8)sub_180065CE0(HKEY_CLASSES_ROOT) )
      {
        v34 = &v13[v21];
        v10 = -2005139398;
        sub_1800BC6FC(
          retaddr,
          199LL,
          "avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          2289827898LL,
          "Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
          v34->Data1,
          v34->Data2,
          v34->Data3,
          v34->Data4[0],
          v34->Data4[1],
          v34->Data4[2],
          v34->Data4[3],
          v34->Data4[4],
          v34->Data4[5],
          v34->Data4[6],
          v34->Data4[7]);
        goto LABEL_67;
      }
      goto LABEL_28;
    }
    v29 = CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)v42[1], 0);
    v30 = CM_MapCrToWin32Err(v29, 0x507u);
    if ( v30 )
    {
      v10 = sub_1800CA660(retaddr, 181LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v30);
      goto LABEL_67;
    }
    pv = 0LL;
    v31 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, (PHKEY)&pv, 1u);
    v32 = CM_MapCrToWin32Err(v31, 0x507u);
    if ( v32 )
      break;
    rguid = *v20;
    if ( !(unsigned __int8)sub_1801325AC((HKEY)pv) )
    {
      v33 = &v13[v21];
      v10 = -2005139398;
      sub_1800BC6FC(
        retaddr,
        191LL,
        "avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        2289827898LL,
        "Missing device relative APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
        v33->Data1,
        v33->Data2,
        v33->Data3,
        v33->Data4[0],
        v33->Data4[1],
        v33->Data4[2],
        v33->Data4[3],
        v33->Data4[4],
        v33->Data4[5],
        v33->Data4[6],
        v33->Data4[7]);
      goto LABEL_63;
    }
    if ( pv )
      RegCloseKey((HKEY)pv);
LABEL_28:
    PropVariantClear(v42);
    ++v21;
    ++v20;
    if ( v21 >= v8 )
      goto LABEL_10;
  }
  v10 = sub_1800CA660(retaddr, 185LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp", v32);
LABEL_63:
  if ( pv )
    RegCloseKey((HKEY)pv);
LABEL_67:
  PropVariantClear(v42);
LABEL_68:
  if ( v13 )
    CoTaskMemFree(v13);
  PropVariantClear(pvar);
  v12 = v36;
LABEL_12:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_14:
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  return v10;
}
