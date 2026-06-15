/*
 * XREFs of sub_18011D640 @ 0x18011D640
 * Callers:
 *     sub_18011F784 @ 0x18011F784 (sub_18011F784.c)
 * Callees:
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_18002732C @ 0x18002732C (sub_18002732C.c)
 *     sub_1800374C8 @ 0x1800374C8 (sub_1800374C8.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011B6E8 @ 0x18011B6E8 (sub_18011B6E8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18011D640(__int64 a1)
{
  unsigned int v2; // esi
  int *v3; // r14
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  int v7; // edi
  __int64 v8; // rcx
  unsigned int v9; // esi
  int *v10; // r14
  __int64 v11; // rax
  int v12; // eax
  int v13; // edi
  __int64 v14; // rcx
  unsigned int v15; // edi
  int *v16; // rsi
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-19h] BYREF
  __int64 v21; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h]
  __int128 v23; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v24[4]; // [rsp+70h] [rbp+17h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]

  v24[0] = 0;
  v24[1] = 1;
  v24[2] = 3;
  *(_DWORD *)(a1 + 244) = 1;
  *(_OWORD *)(a1 + 248) = 0LL;
  v2 = 0;
  v3 = v24;
  while ( 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v4 = sub_1800233B0((unsigned __int64 *)(a1 + 1656), v2);
    v5 = sub_18002732C(v4, (__int64)&v21, 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        745,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v5);
      goto LABEL_45;
    }
    v7 = 0;
    if ( (int)v22 > 0 )
      break;
LABEL_11:
    sub_1800384A4(&v21);
    ++v2;
    ++v3;
    if ( v2 >= 3 )
      goto LABEL_16;
  }
  while ( 1 )
  {
    v20 = 0LL;
    v23 = *(_OWORD *)sub_180023320((__int64)&v21, v7);
    if ( (int)sub_1800374C8((_QWORD *)a1, &v23, 1u, *v3, 0LL, 0LL, &v20) < 0 )
      goto LABEL_7;
    v8 = v20;
    if ( v20 )
      break;
LABEL_8:
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( ++v7 >= (int)v22 )
      goto LABEL_11;
  }
  if ( !(unsigned int)sub_18011B6E8(v20, v20) )
  {
LABEL_7:
    v8 = v20;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 252) = 1;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  sub_1800384A4(&v21);
LABEL_16:
  v9 = 0;
  v10 = v24;
  while ( 2 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v11 = sub_1800233B0((unsigned __int64 *)(a1 + 1672), v9);
    v12 = sub_18002732C(v11, (__int64)&v21, 1);
    v6 = v12;
    if ( v12 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        766,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v12);
LABEL_45:
      sub_1800384A4(&v21);
      return v6;
    }
    v13 = 0;
    if ( (int)v22 <= 0 )
    {
LABEL_26:
      sub_1800384A4(&v21);
      ++v9;
      ++v10;
      if ( v9 >= 3 )
        goto LABEL_31;
      continue;
    }
    break;
  }
  while ( 2 )
  {
    v20 = 0LL;
    v23 = *(_OWORD *)sub_180023320((__int64)&v21, v13);
    if ( (int)sub_180037744((_QWORD *)a1, &v23, 1u, *v10, 0LL, 0LL, &v20) < 0 )
    {
LABEL_22:
      v14 = v20;
LABEL_23:
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( ++v13 >= (int)v22 )
        goto LABEL_26;
      continue;
    }
    break;
  }
  v14 = v20;
  if ( !v20 )
    goto LABEL_23;
  if ( !(unsigned int)sub_18011B6E8(v20, v20) )
    goto LABEL_22;
  *(_DWORD *)(a1 + 256) = 1;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  sub_1800384A4(&v21);
LABEL_31:
  v15 = 0;
  v16 = v24;
  while ( 2 )
  {
    v20 = 0LL;
    v17 = sub_1800485D0((_QWORD *)a1, 1u, *v16, 0LL, 0LL, &v20);
    if ( v17 < 0 )
    {
LABEL_35:
      v18 = v20;
LABEL_36:
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      ++v15;
      ++v16;
      if ( v15 >= 3 )
        goto LABEL_42;
      continue;
    }
    break;
  }
  v18 = v20;
  if ( !v20 )
    goto LABEL_36;
  if ( !(unsigned int)sub_18011B6E8(v20, v20) )
    goto LABEL_35;
  *(_DWORD *)(a1 + 260) = 1;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_42:
  *(_QWORD *)(a1 + 240) = 1LL;
  return (unsigned int)v17;
}
