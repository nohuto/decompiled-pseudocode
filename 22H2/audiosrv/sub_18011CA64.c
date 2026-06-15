/*
 * XREFs of sub_18011CA64 @ 0x18011CA64
 * Callers:
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 *     sub_18011F504 @ 0x18011F504 (sub_18011F504.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18006A3D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006A438 (_Init_thread_header.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB868 @ 0x1800BB868 (sub_1800BB868.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18011CA64(__int64 a1, LPVOID **a2)
{
  void *v4; // rdi
  char v5; // r14
  __int128 *v6; // rsi
  LPVOID v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 v15; // rax
  LPVOID *v16; // rbx
  void *v17; // rsi
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-49h] BYREF
  void *v21; // [rsp+48h] [rbp-41h] BYREF
  PROPVARIANT v22[2]; // [rsp+50h] [rbp-39h] BYREF
  void *Src; // [rsp+60h] [rbp-29h]
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v25; // [rsp+78h] [rbp-11h]
  _DWORD *v26; // [rsp+80h] [rbp-9h]
  _DWORD v27[6]; // [rsp+88h] [rbp-1h] BYREF

  v4 = 0LL;
  v26 = 0LL;
  v5 = 0;
  *(_OWORD *)pvar = 0LL;
  v25 = 0LL;
  *(_OWORD *)v22 = 0LL;
  Src = 0LL;
  if ( dword_18019FBC0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18019FBC0);
    if ( dword_18019FBC0 == -1 )
    {
      xmmword_18019FAB0 = xmmword_180173BA8;
      dword_18019FAC0 = 2;
      xmmword_18019FAC4 = xmmword_180173BC0;
      dword_18019FAD4 = 2;
      Init_thread_footer(&dword_18019FBC0);
    }
  }
  v6 = &xmmword_18019FAB0;
  while ( 1 )
  {
    v21 = 0LL;
    PropVariantClear(pvar);
    PropVariantClear(v22);
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, v6, v22);
    if ( v8 < 0 )
      goto LABEL_36;
    if ( !LOWORD(v22[0]) )
    {
      v27[0] = 590439624;
      v27[1] = 1283267372;
      v27[2] = 1907779772;
      v27[3] = 1730509416;
      v27[4] = 1;
      ppv = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      v8 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
      if ( v8 < 0 )
        goto LABEL_39;
      v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, v27, pvar);
      if ( v8 < 0 )
        goto LABEL_39;
      if ( LOWORD(pvar[0]) != 31 )
      {
        v8 = -2147023728;
LABEL_39:
        v9 = v18;
LABEL_30:
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
LABEL_36:
        v13 = 0LL;
LABEL_37:
        CoTaskMemFree(v13);
        goto LABEL_38;
      }
      v8 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pvar[1], &v19);
      if ( v8 < 0 )
        goto LABEL_39;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, 0LL, &v18);
      if ( v8 < 0 )
        goto LABEL_39;
      v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(v18, v6, v22);
      v9 = v18;
      if ( v8 < 0 )
        goto LABEL_30;
      if ( v18 )
        (*(void (**)(void))(*(_QWORD *)v18 + 16LL))();
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v7 = ppv;
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    }
    if ( LOWORD(v22[0]) != 65 || LODWORD(v22[1]) < 0x28 )
    {
      v11 = 0LL;
      goto LABEL_25;
    }
    v8 = sub_1800BB868((__int64)v7, 1, LODWORD(v22[1]), &v21);
    if ( v8 < 0 )
      goto LABEL_47;
    v10 = v21;
    memcpy(v21, Src, LODWORD(v22[1]));
    if ( LODWORD(v22[1]) >= 24 * v10[3] + 16 )
      break;
    v11 = v10;
LABEL_25:
    CoTaskMemFree(v11);
    v6 = (__int128 *)((char *)v6 + 20);
    if ( v6 == (__int128 *)&unk_18019FAD8 )
      goto LABEL_26;
  }
  if ( *((_DWORD *)v6 + 4) != 2 )
    goto LABEL_45;
  v15 = *(_QWORD *)v6 - 0x409B71919404F781LL;
  if ( *(_QWORD *)v6 == 0x409B71919404F781LL )
    v15 = *((_QWORD *)v6 + 1) + 0x51D63D91407FF475LL;
  v5 = 1;
  if ( v15 )
LABEL_45:
    v5 = 0;
  CoTaskMemFree(0LL);
  v4 = v10;
  v26 = v10;
  CoTaskMemFree(0LL);
LABEL_26:
  if ( a2 && v4 )
  {
    v21 = 0LL;
    v8 = sub_1800BB868(v12, 1, 0x10uLL, &v21);
    if ( v8 < 0 )
    {
LABEL_47:
      v13 = v21;
      goto LABEL_37;
    }
    v16 = (LPVOID *)v21;
    *(_BYTE *)v21 = v5;
    v17 = v4;
    v4 = 0LL;
    CoTaskMemFree(v16[1]);
    v16[1] = v17;
    *a2 = v16;
    CoTaskMemFree(0LL);
  }
  v8 = 0;
LABEL_38:
  PropVariantClear(pvar);
  PropVariantClear(v22);
  CoTaskMemFree(v4);
  return (unsigned int)v8;
}
