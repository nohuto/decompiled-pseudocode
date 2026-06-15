/*
 * XREFs of sub_1800592F4 @ 0x1800592F4
 * Callers:
 *     sub_1800591C4 @ 0x1800591C4 (sub_1800591C4.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055010 @ 0x180055010 (sub_180055010.c)
 *     sub_180059784 @ 0x180059784 (sub_180059784.c)
 *     sub_18005B794 @ 0x18005B794 (sub_18005B794.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180119ED8 @ 0x180119ED8 (sub_180119ED8.c)
 *     sub_18011E9F8 @ 0x18011E9F8 (sub_18011E9F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800592F4(unsigned __int64 *a1, __int64 a2, __int128 *a3, int a4)
{
  __int64 *v8; // rax
  unsigned __int64 *v9; // rdi
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v22; // [rsp+40h] [rbp-88h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-78h]
  _BYTE v24[56]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v25; // [rsp+90h] [rbp-38h]
  __int128 v26; // [rsp+98h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(unsigned __int64 *))(*a1 + 56))(a1) != 1 )
    return 0LL;
  if ( !*(_DWORD *)sub_180055010(a1 + 8, 0LL) )
  {
    *(_DWORD *)sub_180055010(a1 + 8, 0LL) = 1;
    v13 = (__int64 *)sub_1800234A0(a1 + 19, 0LL);
    sub_1800384A4(v13);
    v14 = sub_1800234A0(a1 + 19, 0LL);
    if ( (unsigned int)sub_1800273F8(v14, &xmmword_18015B798) )
    {
      *(_DWORD *)sub_180055010(a1 + 213, 0LL) = 1;
      v16 = sub_18004B060(a1 + 215, 0LL);
      if ( (unsigned int)sub_180119ED8(v16, v17, &xmmword_18015B730) )
        goto LABEL_5;
      v15 = 1881;
    }
    else
    {
      v15 = 1877;
    }
LABEL_11:
    v11 = -2147024882;
    goto LABEL_12;
  }
  v8 = (__int64 *)sub_1800234A0(a1 + 19, 0LL);
  if ( (unsigned int)sub_180022EE0(v8, &xmmword_18015B798) != -1 )
    goto LABEL_5;
  v18 = sub_1800234A0(a1 + 19, 0LL);
  if ( !(unsigned int)sub_18011E9F8(v18, &xmmword_18015B810) )
  {
    v11 = -2147418113;
    v15 = 1889;
    goto LABEL_12;
  }
  v19 = sub_1800234A0(a1 + 19, 0LL);
  if ( !(unsigned int)sub_1800273F8(v19, &xmmword_18015B798) )
  {
    v15 = 1890;
    goto LABEL_11;
  }
  v20 = sub_18004B060(a1 + 215, 0LL);
  if ( !(unsigned int)sub_180119ED8(v20, v21, &xmmword_18015B810) )
  {
    v15 = 1892;
    goto LABEL_11;
  }
LABEL_5:
  v26 = xmmword_18015BBB8;
  v23 = v24;
  v25 = 0LL;
  v22 = *a3;
  v9 = a1 + 209;
  v10 = sub_1800233B0(a1 + 209, 0LL);
  v11 = sub_180059784(v10, (unsigned int)&v22, 1, (unsigned int)&v26, 2, 0, (__int64)v24);
  if ( v11 < 0 )
  {
    v15 = 1898;
  }
  else
  {
    if ( a4 )
      return 0LL;
    v22 = *a3;
    v12 = sub_1800233B0(v9, 0LL);
    v11 = sub_18005B794(v12, &v22);
    if ( v11 >= 0 )
      return 0LL;
    v15 = 1903;
  }
LABEL_12:
  sub_18004BD84(
    (int)retaddr,
    v15,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v11);
  return (unsigned int)v11;
}
