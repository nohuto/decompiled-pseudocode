/*
 * XREFs of sub_18000E9C0 @ 0x18000E9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800585BC @ 0x1800585BC (sub_1800585BC.c)
 *     sub_18005B5E8 @ 0x18005B5E8 (sub_18005B5E8.c)
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 *     sub_1800646D8 @ 0x1800646D8 (sub_1800646D8.c)
 *     sub_1800648C8 @ 0x1800648C8 (sub_1800648C8.c)
 *     sub_180066A94 @ 0x180066A94 (sub_180066A94.c)
 *     sub_180066B1C @ 0x180066B1C (sub_180066B1C.c)
 *     sub_18006871C @ 0x18006871C (sub_18006871C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B6294 @ 0x1800B6294 (sub_1800B6294.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_18011E1F4 @ 0x18011E1F4 (sub_18011E1F4.c)
 *     sub_18011EB94 @ 0x18011EB94 (sub_18011EB94.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18000E9C0(__int64 a1, _WORD *a2, int a3, int a4, _QWORD *a5)
{
  __int64 v7; // rdi
  int v8; // ebx
  RTL_SRWLOCK *v9; // rsi
  unsigned int v10; // ecx
  _WORD *v11; // rdx
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int16 *v16; // r11
  unsigned __int16 *v17; // rax
  int v18; // edx
  int v19; // r9d
  unsigned int v20; // r9d
  _WORD *v21; // rcx
  unsigned int v22; // r10d
  __int64 v23; // rbx
  unsigned __int16 *v24; // rax
  int v25; // ecx
  int v26; // edx
  __int64 v27; // rbx
  PROPVARIANT v28; // rsi
  unsigned __int64 v29; // r8
  __int64 v30; // rbx
  char v31; // r15
  unsigned int v32; // esi
  __int64 v33; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // [rsp+40h] [rbp-98h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-90h] BYREF
  _WORD *v47; // [rsp+50h] [rbp-88h] BYREF
  __int64 v48; // [rsp+58h] [rbp-80h] BYREF
  char v49; // [rsp+60h] [rbp-78h]
  LPVOID ppv; // [rsp+68h] [rbp-70h] BYREF
  __int64 v51; // [rsp+70h] [rbp-68h] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v53; // [rsp+88h] [rbp-50h]
  __int64 v54; // [rsp+E0h] [rbp+8h] BYREF
  const char *v55; // [rsp+E8h] [rbp+10h] BYREF
  int v56; // [rsp+F0h] [rbp+18h]
  int v57; // [rsp+F8h] [rbp+20h]

  v57 = a4;
  v56 = a3;
  v54 = a1;
  LODWORD(v55) = 0;
  v7 = 0LL;
  v45 = 0LL;
  *a5 = 0LL;
  v8 = -2147023728;
  ppv = 0LL;
  v51 = 0LL;
  v48 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v53 = 0LL;
  pv = 0LL;
  if ( CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv) >= 0
    && (*(int (__fastcall **)(LPVOID, _WORD *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v51) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v51 + 32LL))(v51, 0LL, &v48) >= 0
    && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v48 + 40LL))(v48, &unk_18015B098, pvar) >= 0
    && LOWORD(pvar[0]) == 31
    && PropVariantToStringAlloc(pvar, (PWSTR *)&pv) >= 0 )
  {
    v8 = 0;
  }
  PropVariantClear(pvar);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v8 >= 0 )
    a2 = pv;
  v9 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  v48 = a1;
  v49 = 1;
  if ( *(_BYTE *)(a1 + 104) )
  {
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 16));
    CoTaskMemFree(pv);
    pv = 0LL;
    sub_1800461B8(&v45);
    return 2147943568LL;
  }
  if ( !a2 )
    sub_1800B8610(2147500037LL);
  v10 = 0;
  v11 = a2;
  v12 = *a2;
  if ( *a2 )
  {
    v13 = *a2;
    do
    {
      v10 = v13 + 33 * v10;
      v13 = *++v11;
    }
    while ( *v11 );
  }
  if ( *(_DWORD *)(a1 + 40) == 17 )
    v14 = v10 % 0x11;
  else
    v14 = v10 % *(_DWORD *)(a1 + 40);
  v15 = *(_QWORD *)(a1 + 24);
  if ( v15 )
  {
    v16 = *(unsigned __int16 **)(v15 + 8 * v14);
    if ( v16 )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)v16 + 6) == v10 )
        {
          v17 = *(unsigned __int16 **)v16;
          do
          {
            v18 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v17 - *(_QWORD *)v16);
            v19 = *v17 - v18;
            if ( v19 )
              break;
            ++v17;
          }
          while ( v18 );
          if ( !v19 )
            break;
        }
        v16 = (unsigned __int16 *)*((_QWORD *)v16 + 2);
        if ( !v16 )
          goto LABEL_46;
      }
      v20 = 0;
      v21 = a2;
      if ( v12 )
      {
        do
        {
          v20 = v12 + 33 * v20;
          v12 = *++v21;
        }
        while ( *v21 );
      }
      if ( *(_DWORD *)(a1 + 40) == 17 )
        v22 = v20 % 0x11;
      else
        v22 = v20 % *(_DWORD *)(a1 + 40);
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v22);
      if ( v23 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v23 + 24) == v20 )
          {
            v24 = *(unsigned __int16 **)v23;
            do
            {
              v25 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v24 - *(_QWORD *)v23);
              v26 = *v24 - v25;
              if ( v26 )
                break;
              ++v24;
            }
            while ( v25 );
            if ( !v26 )
              break;
          }
          v23 = *(_QWORD *)(v23 + 16);
          if ( !v23 )
            goto LABEL_79;
        }
      }
      else
      {
LABEL_79:
        v23 = sub_1800646D8(a1 + 24, a2, v22);
      }
      v27 = *(_QWORD *)(v23 + 8);
      v47 = (_WORD *)v27;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      v28 = 0LL;
      *(_OWORD *)pvar = 0LL;
      v53 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(v27 + 40) + 40LL))(
             *(_QWORD *)(v27 + 40),
             &unk_18015B0D0,
             pvar) >= 0
        && LOWORD(pvar[0]) == 21 )
      {
        v28 = pvar[1];
      }
      PropVariantClear(pvar);
      if ( *(PROPVARIANT *)(v27 + 192) == v28 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
        v7 = v27;
        v45 = v27;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v9 = (RTL_SRWLOCK *)(a1 + 16);
    }
  }
LABEL_46:
  ReleaseSRWLockShared(v9);
  v30 = 0LL;
  v48 = 0LL;
  if ( v7 )
  {
    v31 = 0;
    goto LABEL_48;
  }
  AcquireSRWLockExclusive(v9);
  pvar[0] = (PROPVARIANT)a1;
  LOBYTE(pvar[1]) = 1;
  if ( *(_BYTE *)(a1 + 104) )
  {
    ReleaseSRWLockExclusive(v9);
    sub_1800461B8(&v48);
    CoTaskMemFree(pv);
    pv = 0LL;
    sub_1800461B8(&v45);
    return 2147943568LL;
  }
  if ( sub_1800648C8((int)a1 + 24, (_DWORD)a2, (unsigned int)&v51, (unsigned int)&ppv, (__int64)&v47) )
  {
    v41 = sub_180064680(a1 + 24, a2);
    sub_18006871C(&v48, v41);
    v30 = v48;
    if ( (unsigned int)sub_18011E1F4(v48) )
    {
      v47 = 0LL;
      v42 = sub_1800648C8((int)a1 + 24, (_DWORD)a2, (unsigned int)&ppv, (unsigned int)&v51, (__int64)&v47);
      if ( v42 )
        sub_18011EB94(a1 + 24, v42, v47);
    }
    else
    {
      sub_18006871C(&v45, &v48);
      v7 = v45;
      if ( v45 )
        goto LABEL_66;
    }
  }
  if ( !v56 )
  {
    if ( (byte_18019F980 & 0x20) != 0 )
      sub_180066A94(v36, v35, a2);
    LODWORD(v55) = 1;
    v47 = a2;
    v37 = sub_1800585BC(&v45, &v47, &v55);
    LODWORD(v55) = v37;
    if ( (byte_18019F980 & 0x20) != 0 )
      sub_180066B1C(v39, v38, a2, v37);
    v7 = v45;
    if ( v45 )
    {
      LODWORD(v55) = 0;
      v40 = sub_180064680(a1 + 24, a2);
      sub_18006871C(v40, &v45);
      if ( !v57 )
      {
        v31 = 1;
        goto LABEL_67;
      }
    }
  }
LABEL_66:
  v31 = 0;
LABEL_67:
  ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 16));
LABEL_48:
  if ( v30 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v32 = (unsigned int)v55;
  if ( (int)v55 < 0 )
    goto LABEL_91;
  if ( !v7 )
  {
    v32 = -2147023728;
LABEL_91:
    if ( (unsigned int)dword_18019C448 > 3
      && __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x14,
           v29) )
    {
      LODWORD(v54) = v32;
      LODWORD(a5) = 5147;
      v55 = "CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics";
      sub_1800B6294(
        (unsigned int)&dword_18019C448,
        (unsigned int)&unk_18016A283,
        v43,
        v44,
        (__int64)&v55,
        (__int64)&a5,
        (__int64)&v54);
    }
    goto LABEL_54;
  }
  if ( v31 )
  {
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7) )
      sub_18005B5E8((LPCRITICAL_SECTION)(v7 + 1768));
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7) )
      sub_18005B5E8((LPCRITICAL_SECTION)(v7 + 1768));
  }
  v33 = v7;
  v7 = 0LL;
  v45 = 0LL;
  *a5 = v33;
LABEL_54:
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v32;
}
