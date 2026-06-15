/*
 * XREFs of sub_1801118BC @ 0x1801118BC
 * Callers:
 *     sub_1800D8EE0 @ 0x1800D8EE0 (sub_1800D8EE0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801118BC(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v7; // rbp
  int v8; // eax
  int v9; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v7 = qword_18019E608;
  v12 = 0LL;
  sub_1800CB144(&v12);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         a2,
         &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = sub_1801112AC(v7, v12, a3, a4);
    if ( v9 >= 0 )
      v9 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 335, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v8);
  }
  sub_18000F708(&v12);
  return (unsigned int)v9;
}
