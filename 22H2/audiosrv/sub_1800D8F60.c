/*
 * XREFs of sub_1800D8F60 @ 0x1800D8F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5160 @ 0x1800D5160 (sub_1800D5160.c)
 */

__int64 sub_1800D8F60(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  __int64 *v5; // rax
  __int64 v6; // r8
  int v7; // edx
  int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  void **v11; // rax
  char v12; // di
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  int v16; // edx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // rax
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  __int64 v26; // [rsp+48h] [rbp-91h] BYREF
  void *Src; // [rsp+50h] [rbp-89h] BYREF
  LPVOID v28; // [rsp+58h] [rbp-81h] BYREF
  void *pv; // [rsp+60h] [rbp-79h] BYREF
  LPVOID *v30; // [rsp+68h] [rbp-71h]
  void *v31; // [rsp+70h] [rbp-69h] BYREF
  char v32; // [rsp+78h] [rbp-61h]
  void **p_Src; // [rsp+80h] [rbp-59h]
  void *v34; // [rsp+88h] [rbp-51h] BYREF
  char v35; // [rsp+90h] [rbp-49h]
  void **v36; // [rsp+98h] [rbp-41h]
  void *v37; // [rsp+A0h] [rbp-39h] BYREF
  char v38; // [rsp+A8h] [rbp-31h]
  _QWORD v39[3]; // [rsp+B0h] [rbp-29h] BYREF
  char v40; // [rsp+C8h] [rbp-11h]
  struct _TP_TIMER *v41[7]; // [rsp+D0h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+47h]
  void **v43; // [rsp+140h] [rbp+67h] BYREF
  va_list va; // [rsp+140h] [rbp+67h]
  __int64 *v45; // [rsp+148h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+148h] [rbp+6Fh]
  _DWORD *v47; // [rsp+150h] [rbp+77h]
  void **v48; // [rsp+158h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+158h] [rbp+7Fh]
  va_list va3; // [rsp+160h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v43 = va_arg(va1, void **);
  va_copy(va2, va1);
  v45 = va_arg(va2, __int64 *);
  v47 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v48 = va_arg(va3, void **);
  v5 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(
    v41,
    (struct _TP_TIMER *)v5[1],
    v6,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings");
  if ( !v43 )
  {
    v7 = 4406;
LABEL_5:
    v8 = -2147467261;
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147467261);
    goto LABEL_49;
  }
  *v43 = 0LL;
  if ( !v45 )
  {
    v7 = 4409;
    goto LABEL_5;
  }
  *v45 = 0LL;
  v11 = v48;
  if ( v48 )
  {
    *v48 = 0LL;
    v11 = v48;
  }
  Src = 0LL;
  va_copy((va_list)v39, va);
  va_copy((va_list)&v39[1], va1);
  va_copy((va_list)&v39[2], va2);
  v12 = 1;
  v28 = 0LL;
  pv = 0LL;
  LODWORD(v26) = 0;
  v34 = 0LL;
  v35 = 1;
  v31 = 0LL;
  v32 = 1;
  if ( !v11 )
  {
    v30 = &v28;
    p_Src = &Src;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void **, void **, __int64 *, _QWORD))(*(_QWORD *)qword_18019EED0
                                                                                                  + 272LL))(
           qword_18019EED0,
           a2,
           a3,
           &v34,
           &v31,
           &v26,
           0LL);
    if ( v35 )
    {
      v17 = *p_Src;
      *p_Src = v34;
      if ( v17 )
        CoTaskMemFree(v17);
    }
    if ( v32 )
    {
      v18 = *v30;
      *v30 = v31;
      if ( v18 )
        CoTaskMemFree(v18);
    }
    if ( v8 < 0 )
    {
      v16 = 4453;
      goto LABEL_38;
    }
LABEL_28:
    *v43 = (void *)sub_180045410(*((unsigned __int16 *)Src + 8) + 18LL);
    if ( *v43 )
    {
      memcpy(*v43, Src, *((unsigned __int16 *)Src + 8) + 18LL);
      *v45 = sub_180045410(0x48uLL);
      v19 = *v45;
      if ( *v45 )
      {
        v20 = v28;
        *(_OWORD *)v19 = *(_OWORD *)v28;
        *(_OWORD *)(v19 + 16) = v20[1];
        *(_OWORD *)(v19 + 32) = v20[2];
        *(_OWORD *)(v19 + 48) = v20[3];
        *(_QWORD *)(v19 + 64) = *((_QWORD *)v20 + 8);
        v21 = (unsigned int)v26;
        if ( v47 )
          *v47 = v26;
        if ( v48 )
        {
          *v48 = (void *)sub_180045410(834 * v21);
          if ( !*v48 )
          {
            v16 = 4474;
            goto LABEL_37;
          }
          memcpy(*v48, pv, 834LL * (unsigned int)v26);
        }
        v12 = 0;
        v8 = 0;
        goto LABEL_41;
      }
      v16 = 4463;
    }
    else
    {
      v16 = 4459;
    }
LABEL_37:
    v8 = -2147024882;
    goto LABEL_38;
  }
  v37 = 0LL;
  p_Src = &pv;
  v30 = &v28;
  v36 = &Src;
  v38 = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void **, void **, __int64 *, void **))(*(_QWORD *)qword_18019EED0
                                                                                                 + 272LL))(
         qword_18019EED0,
         a2,
         a3,
         &v37,
         &v31,
         &v26,
         &v34);
  if ( v38 )
  {
    v13 = *v36;
    *v36 = v37;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( v32 )
  {
    v14 = *v30;
    *v30 = v31;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  if ( v35 )
  {
    v15 = *p_Src;
    *p_Src = v34;
    if ( v15 )
      CoTaskMemFree(v15);
  }
  if ( v8 >= 0 )
    goto LABEL_28;
  v16 = 4445;
LABEL_38:
  sub_18004BD84((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v8);
LABEL_41:
  v22 = pv;
  pv = 0LL;
  if ( v22 )
    CoTaskMemFree(v22);
  v23 = v28;
  v28 = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  v24 = Src;
  Src = 0LL;
  if ( v24 )
    CoTaskMemFree(v24);
  if ( v12 )
  {
    v40 = 0;
    sub_1800D5160((__int64)v39);
  }
LABEL_49:
  sub_18000F690((__int64)v41, v9, v10);
  return (unsigned int)v8;
}
