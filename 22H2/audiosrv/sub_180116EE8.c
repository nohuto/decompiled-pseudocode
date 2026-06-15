/*
 * XREFs of sub_180116EE8 @ 0x180116EE8
 * Callers:
 *     sub_180117A50 @ 0x180117A50 (sub_180117A50.c)
 * Callees:
 *     sub_18004C540 @ 0x18004C540 (sub_18004C540.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180115E74 @ 0x180115E74 (sub_180115E74.c)
 *     sub_180116450 @ 0x180116450 (sub_180116450.c)
 *     sub_18011A25C @ 0x18011A25C (sub_18011A25C.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180116EE8(__int64 a1, int a2, __int128 *a3, _QWORD *a4)
{
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdi
  _OWORD *v10; // rbx
  void *v11; // rcx
  __int64 v12; // rcx
  LPVOID v14; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[80]; // [rsp+80h] [rbp-80h]
  PROPVARIANT pvar[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h]
  PROPVARIANT v25[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-8h]
  _OWORD v27[6]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v28[6]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v29; // [rsp+178h] [rbp+78h] BYREF
  int v30; // [rsp+188h] [rbp+88h]

  ppv = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  *a4 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v24 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v28[0] = 590439624;
  v28[1] = 1283267372;
  v28[2] = 1907779772;
  v28[3] = 1730509416;
  v28[4] = 1;
  if ( a2 == 3 )
  {
    v29 = xmmword_18015BB80;
    v30 = 29;
  }
  else
  {
    *(_QWORD *)&v29 = 0x41B43EBB9A82A7DBLL;
    *((_QWORD *)&v29 + 1) = 0xFC181731B718BA83uLL;
    v30 = 1;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         v28,
         pvar);
  if ( v7 < 0 )
    goto LABEL_30;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         &v29,
         v25);
  if ( v7 < 0 )
    goto LABEL_30;
  v7 = CoCreateInstance(&stru_18015B088, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  if ( v7 < 0 )
    goto LABEL_30;
  v7 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pvar[1], &v19);
  if ( v7 < 0 )
    goto LABEL_30;
  v7 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 24LL))(
         v19,
         &unk_18015B078,
         23LL,
         0LL,
         &v18);
  if ( v7 < 0 )
    goto LABEL_30;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 56LL))(v18, LODWORD(v25[1]), &v16);
  if ( v7 < 0 )
    goto LABEL_30;
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, void *, LPVOID *))(*(_QWORD *)v16 + 104LL))(
         v16,
         1LL,
         &unk_18015B068,
         &v14);
  if ( v7 < 0 )
    goto LABEL_11;
  pv = 0LL;
  if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v14 + 32LL))(v14, &pv) >= 0 )
  {
    v21 = *a3;
    *(_OWORD *)v22 = a3[1];
    *(_OWORD *)&v22[16] = a3[2];
    *(_OWORD *)&v22[32] = a3[3];
    *(_QWORD *)&v22[48] = *((_QWORD *)a3 + 8);
    v7 = sub_180115E74(v8, (__int64)&v21, (unsigned int *)pv, a4);
    if ( v7 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
LABEL_11:
      if ( v14 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
      goto LABEL_30;
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)v16 + 104LL))(
         v16,
         1LL,
         &unk_1801705A8,
         &v17);
  if ( v7 >= 0 && !*a4 )
  {
    v9 = v17;
    v14 = 0LL;
    sub_18011A25C(&v14);
    v10 = v14;
    if ( !v14 )
    {
      v7 = -2147024882;
      v11 = 0LL;
LABEL_22:
      CoTaskMemFree(v11);
      goto LABEL_30;
    }
    *(_DWORD *)v14 = 104;
    v10[1] = xmmword_180160A08;
    v10[3] = xmmword_1801609F8;
    v10[2] = xmmword_18015B710;
    *((_WORD *)v10 + 32) = -2;
    *(_OWORD *)((char *)v10 + 88) = xmmword_18015B740;
    *((_DWORD *)v10 + 22) = 1;
    *(_QWORD *)&v21 = v9;
    *((_QWORD *)&v21 + 1) = v10;
    *(_QWORD *)v22 = a4;
    *(_OWORD *)&v22[8] = *a3;
    *(_OWORD *)&v22[24] = a3[1];
    *(_OWORD *)&v22[40] = a3[2];
    *(_OWORD *)&v22[56] = a3[3];
    *(_QWORD *)&v22[72] = *((_QWORD *)a3 + 8);
    v27[0] = v21;
    v27[1] = *(_OWORD *)v22;
    v27[2] = *(_OWORD *)&v22[16];
    v27[3] = *(_OWORD *)&v22[32];
    v27[4] = *(_OWORD *)&v22[48];
    v27[5] = *(_OWORD *)&v22[64];
    v7 = sub_180116450(a1, (_WORD *)v10 + 32, v27);
    v11 = v10;
    if ( v7 < 0 )
      goto LABEL_22;
    CoTaskMemFree(v10);
    if ( *a4 )
      goto LABEL_30;
    v14 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 32LL))(v17, &v14);
    if ( v7 < 0 )
    {
      v11 = v14;
      goto LABEL_22;
    }
    v21 = *a3;
    *(_OWORD *)v22 = a3[1];
    *(_OWORD *)&v22[16] = a3[2];
    *(_OWORD *)&v22[32] = a3[3];
    *(_QWORD *)&v22[48] = *((_QWORD *)a3 + 8);
    v7 = sub_180115E74(v12, (__int64)&v21, (unsigned int *)v14, a4);
    v11 = v14;
    if ( v7 < 0 )
      goto LABEL_22;
    CoTaskMemFree(v14);
    if ( !*a4 )
      v7 = -2004287480;
  }
LABEL_30:
  PropVariantClear(pvar);
  PropVariantClear(v25);
  sub_18004C540((__int64)"CEndpointCharacteristics::GetComputedDefaultFormat", 6387LL, (unsigned int)v7);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v7;
}
