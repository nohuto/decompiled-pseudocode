/*
 * XREFs of sub_1800E8E10 @ 0x1800E8E10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E87A0 @ 0x1800E87A0 (sub_1800E87A0.c)
 *     sub_1800E91F0 @ 0x1800E91F0 (sub_1800E91F0.c)
 */

__int64 __fastcall sub_1800E8E10(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-78h]
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-68h] BYREF
  __int128 v12; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall ***v13)(); // [rsp+78h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v15; // [rsp+B8h] [rbp+10h] BYREF
  int v16; // [rsp+C0h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  sub_1800E91F0(a4);
  *(_QWORD *)&v10 = &v16;
  *((_QWORD *)&v10 + 1) = &v15;
  v11 = off_1801555A8;
  v12 = v10;
  v13 = &v11;
  v7 = sub_1800E87A0(a1, a4, (__int64)&v11);
  if ( v13 )
  {
    LOBYTE(v6) = v13 != &v11;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v13)[4])(v13, v6);
  }
  result = v7;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      result = (unsigned int)sub_1800C437C(
                               (int)retaddr,
                               685,
                               (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                               v8);
      continue;
    }
    break;
  }
  return result;
}
