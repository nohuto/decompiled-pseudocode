/*
 * XREFs of sub_1800D56D8 @ 0x1800D56D8
 * Callers:
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800D652C @ 0x1800D652C (sub_1800D652C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004A758 @ 0x18004A758 (sub_18004A758.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800D56D8(__int64 a1, int a2, unsigned __int16 *a3, __int128 *a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // edi
  void *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, __int128 *, PROPVARIANT *); // rax
  int v13; // eax
  int v14; // edx
  void *v15; // rcx
  int v16; // eax
  void *v17; // rcx
  int v18; // eax
  int v19; // r9d
  int v20; // edx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // r9d
  int v24; // edx
  int v25; // eax
  void *v26; // rcx
  int v27; // r9d
  int v28; // edx
  int v29; // eax
  void *v30; // rcx
  void *v31; // rcx
  __int64 v32; // [rsp+50h] [rbp-79h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-71h] BYREF
  int v34; // [rsp+60h] [rbp-69h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, void *, __int64 *); // [rsp+68h] [rbp-61h] BYREF
  __int64 v36; // [rsp+70h] [rbp-59h] BYREF
  __int64 v37; // [rsp+78h] [rbp-51h] BYREF
  __int64 v38; // [rsp+80h] [rbp-49h] BYREF
  __int64 v39; // [rsp+88h] [rbp-41h] BYREF
  __int64 v40; // [rsp+90h] [rbp-39h] BYREF
  int v41; // [rsp+98h] [rbp-31h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-9h]
  PROPVARIANT v45[2]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v46; // [rsp+D8h] [rbp+Fh]
  __int64 *p_pv; // [rsp+E0h] [rbp+17h] BYREF
  LPVOID ppv; // [rsp+E8h] [rbp+1Fh] BYREF
  int v49; // [rsp+F0h] [rbp+27h]
  _UNKNOWN *retaddr; // [rsp+128h] [rbp+5Fh]

  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
  {
    v42 = *a4;
    result = sub_18004AE9C(a1, a2, (__int64)a3, &v42, 0, 0LL, 0LL, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v42 = v7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  pv = 0LL;
  p_pv = (__int64 *)&pv;
  ppv = 0LL;
  LOBYTE(v49) = 1;
  v8 = sub_18004A758(a3, (__int64 *)&ppv);
  if ( (_BYTE)v49 )
  {
    v9 = (void *)*p_pv;
    *p_pv = (__int64)ppv;
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( v8 >= 0 )
  {
    v32 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v32);
    v8 = v10;
    if ( v10 < 0 )
    {
      sub_18004BD84((int)retaddr, 1361, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v10);
LABEL_62:
      sub_18000F708(&v32);
      goto LABEL_63;
    }
    *(_OWORD *)v45 = 0LL;
    v46 = 0LL;
    p_pv = (__int64 *)0x4C7D1B2C233164C8LL;
    ppv = (LPVOID)0x67257A6871B668BCLL;
    v49 = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 **, PROPVARIANT *))(*(_QWORD *)v32 + 40LL))(v32, &p_pv, v45);
    v8 = v11;
    if ( v11 < 0 )
    {
      sub_18004BD84((int)retaddr, 1364, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v11);
LABEL_61:
      PropVariantClear(v45);
      goto LABEL_62;
    }
    *(_OWORD *)pvar = 0LL;
    v44 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v32 + 40LL);
    if ( a2 == 3 )
    {
      v13 = v12(v32, &xmmword_18015BB80, pvar);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 1369;
LABEL_18:
        sub_18004BD84((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v13);
LABEL_60:
        PropVariantClear(pvar);
        goto LABEL_61;
      }
    }
    else
    {
      v13 = v12(v32, &xmmword_18015A8B0, pvar);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 1373;
        goto LABEL_18;
      }
    }
    v40 = 0LL;
    p_pv = &v40;
    ppv = 0LL;
    LOBYTE(v49) = 1;
    v8 = CoCreateInstance(&stru_18015B088, 0LL, 0x17u, &stru_18015B0C0, &ppv);
    if ( (_BYTE)v49 )
    {
      v15 = (void *)*p_pv;
      *p_pv = (__int64)ppv;
      if ( v15 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v8 < 0 )
    {
      sub_18004BD84((int)retaddr, 1377, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v8);
LABEL_59:
      sub_18000F708(&v40);
      goto LABEL_60;
    }
    v39 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, PROPVARIANT, __int64 *))(*(_QWORD *)v40 + 40LL))(v40, v45[1], &v39);
    v8 = v16;
    if ( v16 < 0 )
    {
      sub_18004BD84((int)retaddr, 1380, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v16);
LABEL_58:
      sub_18000F708(&v39);
      goto LABEL_59;
    }
    v38 = 0LL;
    p_pv = &v38;
    ppv = 0LL;
    LOBYTE(v49) = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, LPVOID *))(*(_QWORD *)v39 + 24LL))(
           v39,
           &unk_18015B078,
           23LL,
           0LL,
           &ppv);
    if ( (_BYTE)v49 )
    {
      v17 = (void *)*p_pv;
      *p_pv = (__int64)ppv;
      if ( v17 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v8 < 0 )
    {
      sub_18004BD84((int)retaddr, 1383, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v8);
LABEL_57:
      sub_18000F708(&v38);
      goto LABEL_58;
    }
    v35 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 56LL))(v38, LODWORD(pvar[1]), &v35);
    v8 = v18;
    if ( v18 < 0 )
    {
      v19 = v18;
      v20 = 1386;
LABEL_35:
      sub_18004BD84((int)retaddr, v20, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v19);
LABEL_56:
      sub_18000F708((__int64 *)&v35);
      goto LABEL_57;
    }
    v21 = (__int64)v35;
    if ( !v35 )
    {
      v8 = -2147023728;
      v19 = -2147023728;
      v20 = 1387;
      goto LABEL_35;
    }
    if ( a2 == 1 )
    {
      v36 = 0LL;
      v22 = (**v35)(v35, &unk_18015BB38, &v36);
      v8 = v22;
      if ( v22 < 0 )
      {
        v23 = v22;
        v24 = 1392;
LABEL_43:
        sub_18004BD84((int)retaddr, v24, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v23);
        sub_18000F708(&v36);
        goto LABEL_56;
      }
      v25 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 24LL))(v36, &v41);
      v8 = v25;
      if ( v25 < 0 )
      {
        v23 = v25;
        v24 = 1396;
        goto LABEL_43;
      }
      if ( v41 != 3 )
      {
        v8 = -2147418113;
        v23 = -2147418113;
        v24 = 1397;
        goto LABEL_43;
      }
      sub_18000F708(&v36);
      v21 = (__int64)v35;
    }
    v37 = 0LL;
    p_pv = &v37;
    ppv = 0LL;
    LOBYTE(v49) = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, void *, LPVOID *))(*(_QWORD *)v21 + 104LL))(
           v21,
           1LL,
           &unk_1801705A8,
           &ppv);
    if ( (_BYTE)v49 )
    {
      v26 = (void *)*p_pv;
      *p_pv = (__int64)ppv;
      if ( v26 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    if ( v8 >= 0 )
    {
      v34 = 0;
      v29 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, int *))(*(_QWORD *)v37 + 24LL))(
              v37,
              pv,
              *(unsigned int *)pv,
              &v34);
      v8 = v29;
      if ( v29 >= 0 )
      {
        if ( v34 )
        {
          sub_18000F708(&v37);
          sub_18000F708((__int64 *)&v35);
          sub_18000F708(&v38);
          sub_18000F708(&v39);
          sub_18000F708(&v40);
          PropVariantClear(pvar);
          PropVariantClear(v45);
          sub_18000F708(&v32);
          v31 = pv;
          pv = 0LL;
          if ( v31 )
            CoTaskMemFree(v31);
          sub_18000F708((__int64 *)&v42);
          return 0LL;
        }
        v8 = -2004287480;
        goto LABEL_55;
      }
      v27 = v29;
      v28 = 1404;
    }
    else
    {
      v27 = v8;
      v28 = 1401;
    }
    sub_18004BD84((int)retaddr, v28, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v27);
LABEL_55:
    sub_18000F708(&v37);
    goto LABEL_56;
  }
  sub_18004BD84((int)retaddr, 1358, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v8);
LABEL_63:
  v30 = pv;
  pv = 0LL;
  if ( v30 )
    CoTaskMemFree(v30);
  sub_18000F708((__int64 *)&v42);
  return (unsigned int)v8;
}
