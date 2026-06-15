/*
 * XREFs of sub_18011BFE4 @ 0x18011BFE4
 * Callers:
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8F0 @ 0x18005A8F0 (sub_18005A8F0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_180119D08 @ 0x180119D08 (sub_180119D08.c)
 *     sub_18011B0C8 @ 0x18011B0C8 (sub_18011B0C8.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18011BFE4(__int64 a1, __int128 *a2, int a3, _BYTE *a4, char a5, __int64 a6, __int64 *a7)
{
  int v9; // r15d
  int v10; // eax
  int v11; // edi
  int v12; // eax
  HRESULT v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  void *v18; // rcx
  char *v19; // r12
  __int64 v20; // r13
  _QWORD *v21; // rax
  __int64 v22; // rbx
  int v23; // r14d
  char *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  LPVOID v30; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+70h] [rbp-90h]
  LPVOID ppv; // [rsp+78h] [rbp-88h] BYREF
  int v34; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+84h] [rbp-7Ch] BYREF
  int v36; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+8Ch] [rbp-74h] BYREF
  int v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int128 v44; // [rsp+C0h] [rbp-40h] BYREF
  char v45; // [rsp+D0h] [rbp-30h]
  __int128 v46; // [rsp+E0h] [rbp-20h] BYREF
  LPVOID *p_pv; // [rsp+F0h] [rbp-10h]
  void *v48; // [rsp+F8h] [rbp-8h] BYREF
  char v49; // [rsp+100h] [rbp+0h]
  __int128 *v50; // [rsp+108h] [rbp+8h]
  _BYTE *v51; // [rsp+110h] [rbp+10h]
  PROPVARIANT pvar[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v53; // [rsp+128h] [rbp+28h]
  PROPVARIANT v54[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v55; // [rsp+140h] [rbp+40h]
  _DWORD v56[6]; // [rsp+148h] [rbp+48h] BYREF
  __int128 v57; // [rsp+160h] [rbp+60h] BYREF
  int v58; // [rsp+170h] [rbp+70h]
  _UNKNOWN *retaddr; // [rsp+1B8h] [rbp+B8h]

  v51 = a4;
  v50 = a2;
  v43 = a1;
  v32 = 3;
  v56[0] = 590439624;
  v56[1] = 1283267372;
  v56[2] = 1907779772;
  v56[3] = 1730509416;
  v56[4] = 1;
  if ( a3 == 3 )
  {
    v57 = xmmword_18015BB80;
    v58 = 29;
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v32 = 0;
    *(_QWORD *)&v57 = 0x41B43EBB9A82A7DBLL;
    *((_QWORD *)&v57 + 1) = 0xFC181731B718BA83uLL;
    v58 = 1;
  }
  *(_OWORD *)v54 = 0LL;
  v55 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
          *(_QWORD *)(a1 + 40),
          v56,
          v54);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4070,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v10);
    goto LABEL_56;
  }
  *(_OWORD *)pvar = 0LL;
  v53 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
          *(_QWORD *)(a1 + 40),
          &v57,
          pvar);
  v11 = v12;
  if ( v12 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4073,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v12);
    goto LABEL_55;
  }
  ppv = 0LL;
  sub_1800CB144((__int64 *)&ppv);
  v13 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  v11 = v13;
  if ( v13 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4076,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v13);
    goto LABEL_54;
  }
  v42 = 0LL;
  v14 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v54[1], &v42);
  v11 = v14;
  if ( v14 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4079,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v14);
    goto LABEL_53;
  }
  v41 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v42 + 24LL))(v42, &unk_18015B078, 1LL);
  v11 = v15;
  if ( v15 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4082,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v15);
    goto LABEL_52;
  }
  v40 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v41 + 56LL))(v41, LODWORD(pvar[1]), &v40);
  v11 = v16;
  if ( v16 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4085,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v16);
    goto LABEL_51;
  }
  v39 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)v40 + 104LL))(
          v40,
          23LL,
          &unk_18015BB98,
          &v39);
  v11 = v17;
  if ( v17 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4088,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v17);
    goto LABEL_50;
  }
  v30 = 0LL;
  v46 = *a2;
  *(_QWORD *)&v44 = &v30;
  *((_QWORD *)&v44 + 1) = 0LL;
  v45 = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, char *))(*(_QWORD *)v39 + 32LL))(v39, &v46, (char *)&v44 + 8);
  if ( v45 )
  {
    v18 = *(void **)v44;
    *(_QWORD *)v44 = *((_QWORD *)&v44 + 1);
    if ( v18 )
      CoTaskMemFree(v18);
  }
  if ( v11 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      4091,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v11);
    goto LABEL_48;
  }
  if ( !*((_DWORD *)v30 + 1) )
  {
    v11 = -2147023728;
    goto LABEL_48;
  }
  v19 = (char *)v30 + 8;
  v20 = *a7;
  v21 = sub_18006A18C(0x30uLL);
  v22 = (__int64)v21;
  *(_QWORD *)&v46 = v21;
  if ( v21 )
  {
    *(_OWORD *)v21 = *a2;
    v21[2] = 0LL;
    v21[3] = 0LL;
    v21[4] = 0LL;
    v21[5] = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  *(_QWORD *)&v46 = v22;
  v23 = 0;
  if ( !*((_DWORD *)v30 + 1) )
  {
LABEL_43:
    if ( v23 != *((_DWORD *)v30 + 1) )
      *(_DWORD *)(v43 + 220) = 1;
    v11 = 0;
    goto LABEL_46;
  }
  while ( 1 )
  {
    v24 = &v19[*(unsigned int *)&v19[4 * v9]];
    if ( *(_DWORD *)v24 >= 0x52u )
      break;
LABEL_38:
    if ( (unsigned int)++v9 >= *((_DWORD *)v30 + 1) )
    {
      if ( v23 )
      {
        sub_18005A8F0(v20, &v46);
        v22 = 0LL;
      }
      goto LABEL_43;
    }
  }
  pv = 0LL;
  p_pv = &pv;
  v48 = 0LL;
  v49 = 1;
  v11 = sub_180048714((unsigned __int16 *)v24 + 32, &v48);
  if ( v49 )
  {
    v25 = *p_pv;
    *p_pv = v48;
    if ( v25 )
      CoTaskMemFree(v25);
  }
  if ( v11 >= 0 )
  {
    v44 = *v50;
    if ( (int)sub_18011B0C8(v43, v32, &v44, (__int64)pv, v51, a5, a6, &v38, &v37, &v36, &v35, &v34) >= 0 )
    {
      sub_18005A750(v22, (unsigned __int16 *)pv, v38, v37, v36, v35, v34);
      ++v23;
    }
    v26 = pv;
    pv = 0LL;
    if ( v26 )
      CoTaskMemFree(v26);
    goto LABEL_38;
  }
  sub_18004BD84(
    (int)retaddr,
    4109,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v11);
  v27 = pv;
  pv = 0LL;
  if ( v27 )
    CoTaskMemFree(v27);
LABEL_46:
  if ( v22 )
    sub_180119D08(v22);
LABEL_48:
  v28 = v30;
  v30 = 0LL;
  if ( v28 )
    CoTaskMemFree(v28);
LABEL_50:
  sub_18000F708(&v39);
LABEL_51:
  sub_18000F708(&v40);
LABEL_52:
  sub_18000F708(&v41);
LABEL_53:
  sub_18000F708(&v42);
LABEL_54:
  sub_18000F708((__int64 *)&ppv);
LABEL_55:
  PropVariantClear(pvar);
LABEL_56:
  PropVariantClear(v54);
  return (unsigned int)v11;
}
