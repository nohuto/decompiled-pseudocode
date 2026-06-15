/*
 * XREFs of sub_180113124 @ 0x180113124
 * Callers:
 *     sub_1800D98B0 @ 0x1800D98B0 (sub_1800D98B0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_180112F8C @ 0x180112F8C (sub_180112F8C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180113124(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  int v6; // eax
  int v7; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = qword_18019E608;
  v10 = 0LL;
  sub_1800CB144(&v10);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         a2,
         &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = sub_180112F8C(v5, v10, a3);
    if ( v7 >= 0 )
      v7 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 543, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v6);
  }
  sub_18000F708(&v10);
  return (unsigned int)v7;
}
