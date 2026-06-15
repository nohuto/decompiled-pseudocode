/*
 * XREFs of sub_18002C4F0 @ 0x18002C4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002C550 @ 0x18002C550 (sub_18002C550.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 */

__int64 __fastcall sub_18002C4F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
         qword_18019EE50,
         a3,
         &v8);
  if ( v4 < 0 )
  {
    sub_1800BB330(retaddr, 4767LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v4);
    __debugbreak();
  }
  sub_18002C550(v5, a2, v8);
  sub_18000F708(&v8);
  return a2;
}
