/*
 * XREFs of sub_180115A5C @ 0x180115A5C
 * Callers:
 *     sub_180115BB8 @ 0x180115BB8 (sub_180115BB8.c)
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180115AC0 @ 0x180115AC0 (sub_180115AC0.c)
 */

__int64 __fastcall sub_180115A5C(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_180115AC0(1LL, a1);
  v3 = v2;
  if ( v2 < 0 )
    sub_18006D26C((int)retaddr, 562, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp", v2);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E678 + 72LL))(qword_18019E678, a1);
  return v3;
}
