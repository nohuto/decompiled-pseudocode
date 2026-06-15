/*
 * XREFs of sub_1800615D4 @ 0x1800615D4
 * Callers:
 *     sub_1800612F4 @ 0x1800612F4 (sub_1800612F4.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_18005E178 @ 0x18005E178 (sub_18005E178.c)
 *     sub_18006224C @ 0x18006224C (sub_18006224C.c)
 *     sub_180062288 @ 0x180062288 (sub_180062288.c)
 *     sub_180062374 @ 0x180062374 (sub_180062374.c)
 *     sub_180062450 @ 0x180062450 (sub_180062450.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_1800FA2EC @ 0x1800FA2EC (sub_1800FA2EC.c)
 *     sub_1800FA320 @ 0x1800FA320 (sub_1800FA320.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_1800FEE1C @ 0x1800FEE1C (sub_1800FEE1C.c)
 *     sub_1800FF8CC @ 0x1800FF8CC (sub_1800FF8CC.c)
 *     sub_1800FF980 @ 0x1800FF980 (sub_1800FF980.c)
 */

// Hidden C++ exception states: #wind=10
__int64 sub_1800615D4(char *pv, int a2, __int64 a3, ...)
{
  HRESULT Instance; // esi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  unsigned int i; // r15d
  int v8; // eax
  void *v9; // rcx
  _QWORD *v10; // r15
  __int64 v12; // rcx
  __int64 *v13; // rax
  char *v14; // rbx
  __int64 v15; // rbx
  int v16; // eax
  void *v17; // r8
  int v18; // eax
  int v19; // esi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C0h] BYREF
  LPVOID v24; // [rsp+40h] [rbp-B8h] BYREF
  LPVOID pva; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-A8h] BYREF
  int v27; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-98h] BYREF
  __int64 v29; // [rsp+68h] [rbp-90h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-80h] BYREF
  char v32; // [rsp+80h] [rbp-78h]
  __int128 v33; // [rsp+88h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-60h]
  __int128 v35; // [rsp+A0h] [rbp-58h]
  int v36; // [rsp+B0h] [rbp-48h]
  char *v37; // [rsp+100h] [rbp+8h] BYREF
  int v38; // [rsp+108h] [rbp+10h] BYREF
  __int64 v39; // [rsp+110h] [rbp+18h]
  char *v40; // [rsp+118h] [rbp+20h] BYREF
  va_list va; // [rsp+118h] [rbp+20h]
  va_list va1; // [rsp+120h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, char *);
  v39 = a3;
  v38 = a2;
  v37 = pv;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_180172650);
  }
  v29 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 10;
  v28 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 16);
  v32 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( !*((_DWORD *)pv + 14) || *((_DWORD *)pv + 14) == 3 )
  {
    sub_180062450(pv);
    Instance = sub_180062374(pv);
    if ( Instance < 0 )
      goto LABEL_43;
    v5 = pv + 64;
    Instance = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, (LPVOID *)pv + 8);
    if ( Instance < 0 )
      goto LABEL_43;
    v6 = v28;
    if ( v28 != *v5 )
    {
      sub_18002BB14(&v28, (void (__fastcall ***)(_QWORD, __int64, __int64 *))*v5, (__int64)&stru_18015C908);
      v6 = v28;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 88LL))(v6, 1LL);
    Instance = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 48LL))(*v5, pv);
    if ( Instance < 0 )
      goto LABEL_43;
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*v5 + 24LL))(
                 *v5,
                 2LL,
                 1LL,
                 &v29);
    if ( Instance < 0 )
      goto LABEL_43;
    Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 24LL))(v29, &v30);
    if ( Instance < 0 )
      goto LABEL_43;
    for ( i = 0; ; ++i )
    {
      LODWORD(v40) = i;
      if ( i >= v30 )
      {
        *((_DWORD *)pv + 14) = 1;
        v40 = pv + 72;
        EnterCriticalSection((LPCRITICAL_SECTION)(pv + 72));
        Instance = 0;
        v10 = (_QWORD *)v33;
        while ( v10 )
        {
          v21 = v10[2];
          v10 = (_QWORD *)*v10;
          sub_1800FA2EC(pv + 112, v21);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(pv + 72));
        goto LABEL_32;
      }
      v22 = 0LL;
      v23 = 0LL;
      pva = 0LL;
      LOBYTE(v38) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v29 + 32LL))(v29, i, &v22) >= 0
        && (**(int (__fastcall ***)(__int64, void *, __int64 *))v22)(v22, &unk_18015B660, &v23) >= 0
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 24LL))(v23, &v27) >= 0 )
      {
        break;
      }
      v9 = 0LL;
LABEL_24:
      CoTaskMemFree(v9);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v8 = v27;
    if ( v27 == 1 )
    {
      if ( (unsigned __int8)sub_180062288(v22, &pva, &v38) )
        goto LABEL_54;
      v8 = v27;
    }
    if ( v8 || !sub_18005E178((__int64)pv, v22, &pva) )
    {
LABEL_23:
      v9 = pva;
      goto LABEL_24;
    }
LABEL_54:
    v26 = 0LL;
    v24 = 0LL;
    v15 = v22;
    sub_18002A504(&v24, 0LL);
    v16 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 40LL))(v15, &v24);
    if ( v16 >= 0 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 12LL, &unk_180172650);
      }
      v17 = &unk_18015C744;
      if ( !(_BYTE)v38 )
        LODWORD(v17) = (_DWORD)pva;
      v18 = sub_1800FA570((_DWORD)pv, (_DWORD)v24, (_DWORD)v17, 0, 0, (__int64)&v26);
      v19 = v18;
      if ( v18 >= 0 )
      {
        if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
          || (*((_DWORD *)off_18019C348 + 7) & 0x800000) == 0
          || *((_BYTE *)off_18019C348 + 25) < 4u )
        {
          v20 = v26;
        }
        else
        {
          v20 = v26;
          sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 14LL, &unk_180172650, v26, *(_QWORD *)(v26 + 200));
        }
        LOBYTE(v38) = v19 == 0;
        sub_1800FA2EC(&v33, v20);
        JUMPOUT(0x1800B14AFLL);
      }
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 13LL, &unk_180172650, (unsigned int)v18);
      }
      if ( v24 )
        CoTaskMemFree(v24);
      if ( v26 )
        JUMPOUT(0x1800B14EALL);
    }
    else
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 11LL, &unk_180172650, (unsigned int)v16);
      }
      if ( v24 )
        CoTaskMemFree(v24);
    }
    goto LABEL_23;
  }
  Instance = -2147024809;
LABEL_43:
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 16LL, &unk_180172650, (unsigned int)Instance);
  }
  v12 = *((_QWORD *)pv + 8);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 56LL))(v12, pv);
    sub_180071C14(pv + 64);
  }
  while ( v34 )
  {
    v13 = (__int64 *)sub_1800FEE1C(&v33, &v37);
    sub_180048790((char **)va, *v13);
    if ( v37 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v37 + 16LL))(v37);
    v14 = v40;
    sub_1800FF8CC(*((_QWORD *)v40 + 25));
    sub_1800FF980(v14);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  sub_1800FA320(pv);
LABEL_32:
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  sub_18006224C(&v33);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return (unsigned int)Instance;
}
