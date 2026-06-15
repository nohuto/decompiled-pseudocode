/*
 * XREFs of sub_18005B7B4 @ 0x18005B7B4
 * Callers:
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023050 @ 0x180023050 (sub_180023050.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180059784 @ 0x180059784 (sub_180059784.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     sub_18005B960 @ 0x18005B960 (sub_18005B960.c)
 *     sub_18005BB40 @ 0x18005BB40 (sub_18005BB40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005B7B4(__int64 *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // r12
  int v8; // r14d
  __int64 *v9; // rsi
  int v10; // eax
  int v11; // edi
  __int64 v12; // rdi
  __int128 v13; // xmm6
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  BOOL v25; // esi
  __int64 v26; // rax
  int v27; // edx
  int v28; // eax
  __int64 v29[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v30; // [rsp+58h] [rbp-81h] BYREF
  __int128 v31; // [rsp+68h] [rbp-71h] BYREF
  __int64 v32; // [rsp+78h] [rbp-61h]
  _BYTE v33[56]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-21h]
  __int128 v35; // [rsp+C8h] [rbp-11h] BYREF
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+57h]

  v6 = a2;
  v32 = a3;
  *(_QWORD *)&v31 = sub_1800233B0((unsigned __int64 *)(*a1 + 1656), a2);
  v8 = 0;
  v29[0] = 0LL;
  v29[1] = 0LL;
  v9 = (__int64 *)sub_180023050(*a1, v6, 0);
  *(_QWORD *)&v30 = v9;
  v10 = sub_18005B960(v31, v29, &v35, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      1770,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v10);
    sub_1800384A4(v29);
    v22 = *(_QWORD *)(a3 + 56);
    if ( !v22 )
      return (unsigned int)v11;
LABEL_15:
    LOBYTE(v21) = v22 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v21);
    *(_QWORD *)(a3 + 56) = 0LL;
    return (unsigned int)v11;
  }
  if ( a5 <= 0 )
  {
LABEL_7:
    if ( (_DWORD)v6 != 1 && !v8 && (unsigned int)sub_180022EE0(v9, &xmmword_18015B798) != -1 )
    {
      v25 = sub_180022EE0(v9, &xmmword_18015B810) != -1;
      v26 = sub_18005B754((__int64)v33, a3);
      v30 = xmmword_18015B810;
      v11 = sub_180059784(v31, &v30, 1, (int)&unk_18019D6E8, 1, v25, v26);
      if ( v11 < 0 )
      {
        v27 = 1793;
        goto LABEL_24;
      }
      v31 = xmmword_18015B810;
      if ( !(unsigned int)sub_18005BB40(*a1, &v31, (unsigned int)v6) )
      {
        *(_QWORD *)&v31 = v33;
        v34 = 0LL;
        v30 = xmmword_18015B810;
        v28 = sub_1800233B0((unsigned __int64 *)(*a1 + 1672), v6);
        v11 = sub_180059784(v28, &v30, 0, 0, 2, v25, (__int64)v33);
        if ( v11 < 0 )
        {
          v27 = 1799;
LABEL_24:
          sub_18004BD84(
            (int)retaddr,
            v27,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            v11);
          sub_1800384A4(v29);
          v22 = *(_QWORD *)(a3 + 56);
          if ( !v22 )
            return (unsigned int)v11;
          goto LABEL_15;
        }
      }
    }
    sub_1800384A4(v29);
    v16 = *(_QWORD *)(a3 + 56);
    if ( v16 )
    {
      LOBYTE(v15) = v16 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v15);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v13 = **(&off_18019C530 + v12);
    v35 = v13;
    if ( (unsigned int)sub_180022EE0(v9, &v35) != -1 )
      break;
    v14 = 0;
    if ( (unsigned int)sub_180022EE0(v29, &v35) != -1 )
      goto LABEL_12;
LABEL_6:
    ++v12;
    v9 = (__int64 *)v30;
    if ( v12 >= a5 )
      goto LABEL_7;
  }
  v14 = 1;
LABEL_12:
  v18 = sub_18005B754((__int64)v33, a3);
  v35 = v13;
  v19 = sub_180059784(v31, &v35, 1, (int)&unk_18019D6E8, 1, v14, v18);
  v20 = v19;
  if ( v19 >= 0 )
  {
    ++v8;
    goto LABEL_6;
  }
  sub_18004BD84(
    (int)retaddr,
    1781,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v19);
  sub_1800384A4(v29);
  v24 = *(_QWORD *)(a3 + 56);
  if ( v24 )
  {
    LOBYTE(v23) = v24 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v23);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return v20;
}
