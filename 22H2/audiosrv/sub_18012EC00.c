/*
 * XREFs of sub_18012EC00 @ 0x18012EC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_1801314B4 @ 0x1801314B4 (sub_1801314B4.c)
 */

__int64 __fastcall sub_18012EC00(_QWORD *a1, __int64 a2, int a3, _OWORD *a4, int a5, int a6, int a7, int *a8)
{
  HRESULT v12; // ebx
  __int64 v13; // r8
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // r9
  int v15; // esi
  __int128 *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  LPVOID v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  int v26[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A4h] [rbp-5Ch]
  _OWORD v31[2]; // [rsp+A8h] [rbp-58h]
  _OWORD v32[6]; // [rsp+D0h] [rbp-30h] BYREF

  ppv = 0LL;
  v20 = 0LL;
  *(_QWORD *)v26 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  memset(v32, 0, 0x58uLL);
  if ( !a2 )
    return (unsigned int)-2147024809;
  if ( !a1[11] )
    return (unsigned int)-2147024882;
  *a8 = 0;
  v12 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  if ( v12 < 0 )
    goto LABEL_30;
  if ( v20 != ppv )
    sub_18002BB14((__int64 *)&v20, (void (__fastcall ***)(_QWORD, __int64, __int64 *))ppv, (__int64)&stru_18015C908);
  if ( !v20 )
  {
    v12 = -2147467262;
    goto LABEL_30;
  }
  v15 = 1;
  (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v20 + 88LL))(v20, 1LL);
  v12 = (*(__int64 (__fastcall **)(LPVOID, __int64, int *))(*(_QWORD *)ppv + 40LL))(ppv, a2, v26);
  if ( v12 < 0 )
    goto LABEL_30;
  v12 = (**(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1[11])(a1[11], &qword_18015B840, &v22);
  if ( v12 >= 0 )
    goto LABEL_15;
  if ( a7 == 1 )
    goto LABEL_29;
  if ( (**(int (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1[11])(a1[11], &qword_1801737E0, &v25) >= 0 )
  {
LABEL_15:
    *(_OWORD *)v27 = *a4;
    v12 = sub_1801314B4(v26[0], a3, (int)v27, a5, a6, v32);
    if ( v12 < 0 )
      goto LABEL_30;
    if ( v22 )
    {
      v16 = v32;
      v17 = 88LL;
    }
    else
    {
      if ( !v25 )
      {
LABEL_21:
        if ( a7 && a1[12] != v22 )
          sub_1800579A4(a1 + 12, v22);
        v14 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1[11];
        v18 = 0LL;
        v21 = 0LL;
        if ( !v14 || ((**v14)(v14, &qword_18015B830, &v21), (v18 = v21) == 0) )
          v15 = 0;
        *a8 = v15;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_29:
        if ( v12 >= 0 )
          goto LABEL_32;
LABEL_30:
        if ( (unsigned int)dword_18019C4B8 > 2 )
        {
          LODWORD(v24) = v12;
          v27[0] = (__int64)"CAPOWrapperSrv::InitializeAPORemote";
          LODWORD(v21) = 153;
          sub_180109778(
            (__int64)&dword_18019C4B8,
            byte_18016C251,
            v13,
            (__int64)v14,
            (const CHAR **)v27,
            (__int64)&v21,
            (__int64)&v24);
        }
        goto LABEL_32;
      }
      v16 = &v28;
      v17 = 56LL;
      v29 = v32[1];
      v30 = 0;
      v31[0] = *(_OWORD *)((char *)&v32[1] + 8);
      v31[1] = *(_OWORD *)((char *)&v32[2] + 8);
      v28 = v32[0];
      LODWORD(v28) = 56;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int128 *))(a1[1] + 48LL))(a1 + 1, v17, v16);
    if ( v12 < 0 )
      goto LABEL_30;
    goto LABEL_21;
  }
  v12 = 0;
LABEL_32:
  if ( *((_QWORD *)&v32[1] + 1) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v32[1] + 1) + 16LL))(*((_QWORD *)&v32[1] + 1));
    *((_QWORD *)&v32[1] + 1) = 0LL;
  }
  if ( *(_QWORD *)&v32[2] )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v32[2] + 16LL))(*(_QWORD *)&v32[2]);
    *(_QWORD *)&v32[2] = 0LL;
  }
  if ( *(_QWORD *)&v32[3] )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v32[3] + 16LL))(*(_QWORD *)&v32[3]);
    *(_QWORD *)&v32[3] = 0LL;
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( *(_QWORD *)v26 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v26 + 16LL))(*(_QWORD *)v26);
  if ( v20 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 16LL))(v20);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v12;
}
