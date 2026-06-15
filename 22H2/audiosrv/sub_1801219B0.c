/*
 * XREFs of sub_1801219B0 @ 0x1801219B0
 * Callers:
 *     sub_1801216CC @ 0x1801216CC (sub_1801216CC.c)
 *     sub_180121C98 @ 0x180121C98 (sub_180121C98.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1801219B0(__int64 a1, int a2)
{
  char v3; // bl
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v11);
  v5 = (int)retaddr;
  if ( v4 < 0 )
  {
    v6 = 334;
LABEL_5:
    sub_18006D26C(v5, v6, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v4);
    goto LABEL_11;
  }
  v7 = sub_18005DEF0((__int64)v11);
  v4 = sub_18005E238(v8, v11, &v12);
  v5 = (int)retaddr;
  if ( v4 < 0 )
  {
    v6 = 339;
    goto LABEL_5;
  }
  if ( a2 == v7 )
  {
    v9 = v12;
    if ( !(_QWORD)v12 )
      v9 = *((_QWORD *)&v12 + 1) + 1LL;
    if ( !v9 )
      v3 = 1;
  }
LABEL_11:
  sub_18000F708((__int64 *)&v11);
  return v3;
}
