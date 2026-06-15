/*
 * XREFs of sub_18011F784 @ 0x18011F784
 * Callers:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800E9378 @ 0x1800E9378 (sub_1800E9378.c)
 *     sub_1801184CC @ 0x1801184CC (sub_1801184CC.c)
 *     sub_18011A2EC @ 0x18011A2EC (sub_18011A2EC.c)
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18011F784(__int64 a1)
{
  int v2; // esi
  _DWORD *v3; // r14
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall ***v8)(_QWORD, void *, LPVOID *); // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  void *v15; // rcx
  int v16; // edx
  int v17; // r9d
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  LPVOID v21; // [rsp+50h] [rbp-19h] BYREF
  void *v22[2]; // [rsp+58h] [rbp-11h] BYREF
  char v23; // [rsp+68h] [rbp-1h]
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v25; // [rsp+80h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]
  LPVOID v27; // [rsp+D8h] [rbp+6Fh] BYREF
  LPVOID v28; // [rsp+E0h] [rbp+77h] BYREF
  LPVOID v29; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_OWORD *)pvar = 0LL;
  v25 = 0LL;
  v22[1] = pvar;
  v23 = 1;
  v2 = 1;
  v3 = (_DWORD *)(a1 + 252);
  while ( 1 )
  {
    v4 = 0;
    if ( !*(_DWORD *)(a1 + 244) )
    {
      if ( !*(_DWORD *)(a1 + 240) )
        sub_18011D640(a1);
      if ( *v3 )
        goto LABEL_30;
    }
    if ( (unsigned int)sub_18011A2EC(a1) )
      goto LABEL_30;
    if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
           *(_QWORD *)(a1 + 40),
           &byte_18019D710[20 * v2],
           pvar) >= 0
      && LOWORD(pvar[0]) == 19
      && LODWORD(pvar[1]) >= 0x64 )
    {
      v4 = 1;
    }
    else
    {
      PropVariantClear(pvar);
      if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
             *(_QWORD *)(a1 + 40),
             &byte_18019D760[20 * v2],
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v4 = LODWORD(pvar[1]) >= 0x64;
      }
    }
    PropVariantClear(pvar);
    if ( !v4 )
      goto LABEL_30;
    v28 = 0LL;
    sub_18002A504(&v28, 0LL);
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &v28) >= 0 )
    {
      pv = 0LL;
      sub_18002A504(&pv, 0LL);
      MMDevAPI_29(v28, &pv);
      if ( (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             0x200000000000uLL) )
      {
        LODWORD(v27) = v2;
        v21 = pv;
        v22[0] = v28;
        sub_1801184CC(v5, byte_180169EE0, v6, v7, v22, &v21, (__int64)&v27);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    v8 = *(__int64 (__fastcall ****)(_QWORD, void *, LPVOID *))(a1 + 16);
    v29 = 0LL;
    v9 = (**v8)(v8, &unk_18015B040, &v29);
    v10 = v9;
    if ( v9 < 0 )
      break;
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v29 + 40LL))(v29, 2LL, &v20);
    v10 = v11;
    if ( v11 < 0 )
    {
      v16 = 640;
LABEL_48:
      v17 = v11;
LABEL_49:
      sub_18004BD84(
        (int)retaddr,
        v16,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v17);
      sub_18000F708(&v20);
      goto LABEL_51;
    }
    if ( !v20 )
    {
      v10 = -2147024894;
      v17 = -2147024894;
      v16 = 641;
      goto LABEL_49;
    }
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v20 + 48LL))(
            v20,
            &xmmword_18015B7F8,
            pvar);
    v10 = v11;
    if ( v11 < 0 )
    {
      v16 = 645;
      goto LABEL_48;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 48LL))(
            *(_QWORD *)(a1 + 40),
            &unk_180172B68,
            pvar);
    v10 = v11;
    if ( v11 < 0 )
    {
      v16 = 649;
      goto LABEL_48;
    }
    if ( !*(_QWORD *)(a1 + 80) )
    {
      v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v29 + 40LL))(v29, 0LL);
      v10 = v11;
      if ( v11 < 0 )
      {
        v16 = 654;
        goto LABEL_48;
      }
    }
    PropVariantClear(pvar);
    sub_18000F708(&v20);
    sub_18000F708((__int64 *)&v29);
    if ( v28 )
      CoTaskMemFree(v28);
LABEL_30:
    ++v2;
    ++v3;
    if ( v2 >= 4 )
    {
      if ( sub_1800234D0(a1) && (unsigned int)sub_18011A2EC(a1) )
      {
        v27 = 0LL;
        sub_18002A504(&v27, 0LL);
        if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &v27) >= 0 )
        {
          v28 = 0LL;
          sub_18002A504(&v28, 0LL);
          MMDevAPI_29(v27, &v28);
          if ( (unsigned int)dword_18019C448 > 4
            && __vcrt_trace_logging_provider::_TlgKeywordOn(
                 (__vcrt_trace_logging_provider *)&dword_18019C448,
                 0x200000000000uLL) )
          {
            v29 = v28;
            v22[0] = v27;
            sub_1800E9378((__int64)&dword_18019C448, byte_180169F37, v12, v13, v22, &v29);
          }
          if ( v28 )
            CoTaskMemFree(v28);
        }
        LOWORD(pvar[0]) = 19;
        LODWORD(pvar[1]) = 0;
        v14 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 48LL))(
                *(_QWORD *)(a1 + 40),
                &unk_180172B68,
                pvar);
        v10 = v14;
        if ( v14 < 0 )
        {
          sub_18004BD84(
            (int)retaddr,
            682,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            v14);
          v15 = v27;
          goto LABEL_41;
        }
        PropVariantClear(pvar);
        if ( v27 )
          CoTaskMemFree(v27);
      }
      v10 = 0;
      goto LABEL_55;
    }
  }
  sub_18004BD84(
    (int)retaddr,
    638,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v9);
LABEL_51:
  sub_18000F708((__int64 *)&v29);
  v15 = v28;
LABEL_41:
  if ( v15 )
    CoTaskMemFree(v15);
LABEL_55:
  PropVariantClear(pvar);
  return v10;
}
