/*
 * XREFs of sub_1801419F8 @ 0x1801419F8
 * Callers:
 *     sub_180141124 @ 0x180141124 (sub_180141124.c)
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_180140E80 @ 0x180140E80 (sub_180140E80.c)
 *     sub_1801414A4 @ 0x1801414A4 (sub_1801414A4.c)
 *     sub_1801427B4 @ 0x1801427B4 (sub_1801427B4.c)
 *     sub_180142A90 @ 0x180142A90 (sub_180142A90.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_1801419F8(__int64 a1)
{
  int v2; // r14d
  HRESULT v3; // edi
  unsigned int v4; // esi
  void (*v5)(void); // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  LPVOID pv; // [rsp+30h] [rbp-89h] BYREF
  LPVOID v11; // [rsp+38h] [rbp-81h] BYREF
  __int64 v12; // [rsp+40h] [rbp-79h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-71h] BYREF
  __int64 v14; // [rsp+50h] [rbp-69h] BYREF
  __int64 v15; // [rsp+58h] [rbp-61h] BYREF
  __int64 v16; // [rsp+60h] [rbp-59h] BYREF
  __int64 v17; // [rsp+68h] [rbp-51h] BYREF
  __int64 v18; // [rsp+70h] [rbp-49h] BYREF
  __int64 v19; // [rsp+78h] [rbp-41h] BYREF
  __int64 v20; // [rsp+80h] [rbp-39h]
  __int64 v21; // [rsp+88h] [rbp-31h] BYREF
  __int64 v22; // [rsp+90h] [rbp-29h] BYREF
  __int64 v23; // [rsp+98h] [rbp-21h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-9h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v28; // [rsp+BCh] [rbp+3h] BYREF
  LPVOID ppv; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+Fh] BYREF
  __int128 v31; // [rsp+D0h] [rbp+17h] BYREF

  ppv = 0LL;
  v30 = 0LL;
  v27 = 0;
  v2 = 0;
  v3 = CoCreateInstance(&rclsid, 0LL, 1u, &stru_18015B0C0, &ppv);
  if ( v3 < 0 )
    goto LABEL_134;
  v3 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, 2LL, 9LL, &v30);
  if ( v3 < 0 )
    goto LABEL_134;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 24LL))(v30, &v27);
  if ( v3 < 0 )
    goto LABEL_134;
  v4 = 0;
  if ( !v27 )
  {
LABEL_67:
    v3 = -2147023728;
    goto LABEL_68;
  }
  while ( 1 )
  {
    v26 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v13 = 0LL;
    v23 = 0LL;
    v12 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v15 = 0LL;
    v11 = 0LL;
    pv = 0LL;
    v14 = 0LL;
    v31 = xmmword_18015B730;
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 32LL))(v30, v4, &v26);
    if ( v3 < 0 )
      goto LABEL_104;
    v3 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v26 + 24LL))(v26, &unk_18015B078, 23LL);
    if ( v3 < 0 )
    {
      if ( v14 )
      {
        v5 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
LABEL_36:
        v5();
        goto LABEL_37;
      }
      goto LABEL_37;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, &v18);
    if ( v6 < 0 )
      break;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v17);
    if ( v6 < 0 )
      break;
    v6 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v17)(v17, &unk_18015AFA0, &v12);
    if ( v6 < 0 )
      break;
    v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 56LL))(v12, &v31);
    if ( v6 < 0 )
      break;
    v7 = v31 - 0x4258D903686D7CC0LL;
    if ( (_QWORD)v31 == 0x4258D903686D7CC0LL )
      v7 = *((_QWORD *)&v31 + 1) - 0x1C7480353D3A43B4LL;
    if ( !v7 )
    {
      v2 = 1;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 96LL))(v12, &v21);
      if ( v6 < 0 )
        break;
      if ( !*(_QWORD *)(a1 + 192) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v21 + 64LL))(v21, &v11);
        if ( v6 < 0 )
          break;
        v6 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v11, &v25);
        if ( v6 < 0 )
          break;
        v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64))(*(_QWORD *)v25 + 24LL))(
               v25,
               &unk_1801737C0,
               23LL,
               0LL,
               a1 + 192);
        if ( v6 < 0 )
          break;
        if ( !*(_QWORD *)(a1 + 192) )
          goto LABEL_73;
      }
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 88LL))(v12, &v14);
      if ( v6 < 0 )
        break;
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v23);
      if ( v6 < 0 )
        break;
      v6 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v23)(v23, &unk_18015BB38, &v16);
      if ( v6 < 0 )
        break;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 64LL))(v16, &v15);
      if ( v6 < 0 )
        break;
      v6 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v15)(v15, &unk_18015AFA0, &v22);
      if ( v6 < 0 )
        break;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 96LL))(v22, &v19);
      if ( v6 < 0 )
        break;
      v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 64LL))(v19, &pv);
      if ( v6 < 0 )
        break;
      v6 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pv, &v24);
      if ( v6 < 0 )
        break;
      v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v24 + 24LL))(v24, &unk_1801737C0, 23LL);
      if ( v6 < 0 )
        break;
      if ( !v13 )
      {
LABEL_73:
        v3 = -2147023728;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        CoTaskMemFree(pv);
        pv = 0LL;
        CoTaskMemFree(v11);
        v11 = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v13 )
          (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        if ( v26 )
          goto LABEL_133;
        goto LABEL_134;
      }
      v6 = sub_1801414A4(v8, v13, &v28);
      if ( v6 < 0 )
        break;
      sub_180142A90(a1 + 120, v28, &v13);
      sub_180140E80((__int64 *)(a1 + 24), v28);
    }
    if ( v14 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
      goto LABEL_36;
    }
LABEL_37:
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v11);
    v11 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v13 )
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( ++v4 >= v27 )
    {
      if ( v2 )
        goto LABEL_68;
      goto LABEL_67;
    }
  }
  v3 = v6;
LABEL_104:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v11);
  v11 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v13 )
    (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
LABEL_133:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_134:
  sub_1801427B4(a1 + 120);
  sub_1800F4CBC(a1 + 24);
  if ( *(_QWORD *)(a1 + 192) )
    sub_1800579A4((_QWORD *)(a1 + 192), 0LL);
LABEL_68:
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v3;
}
