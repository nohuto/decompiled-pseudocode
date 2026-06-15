/*
 * XREFs of sub_1800F717C @ 0x1800F717C
 * Callers:
 *     sub_1800F73B0 @ 0x1800F73B0 (sub_1800F73B0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800F6F4C @ 0x1800F6F4C (sub_1800F6F4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F717C(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v8 = a1;
  v9 = 0LL;
  sub_1800CB144(&v9);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         0LL,
         &v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = v9;
    v3 = sub_1800F6F4C(a2, &v10, &v8);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 77;
  }
  else
  {
    v5 = 76;
  }
  sub_18004BD84((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dialogsession.cpp", v3);
LABEL_7:
  sub_18000F708(&v9);
  return v4;
}
