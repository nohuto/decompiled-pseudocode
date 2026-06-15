/*
 * XREFs of sub_1800701E0 @ 0x1800701E0
 * Callers:
 *     sub_1800701D0 @ 0x1800701D0 (sub_1800701D0.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006FA04 @ 0x18006FA04 (sub_18006FA04.c)
 *     sub_18006FBBC @ 0x18006FBBC (sub_18006FBBC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800701E0(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-59h] BYREF
  __int64 v9; // [rsp+30h] [rbp-49h]
  _BYTE v10[64]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v11[64]; // [rsp+80h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]

  v8 = 0LL;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)qword_18019EE50 + 72LL))(qword_18019EE50, &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    sub_18006FBBC((__int64)v10, a2);
    sub_18006FA04((__int64)v11, (__int64 *)v8, *((__int64 **)&v8 + 1), (__int64)v10);
    unknown_libname_207((__int64)v11, v5);
    v4 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 2394, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v3);
  }
  v6 = v8;
  if ( (_QWORD)v8 )
  {
    sub_1800CD58C(v8);
    sub_1800472E0(v6, (v9 - v6) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v4;
}
