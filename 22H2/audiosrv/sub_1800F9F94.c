/*
 * XREFs of sub_1800F9F94 @ 0x1800F9F94
 * Callers:
 *     sub_1800F96B9 @ 0x1800F96B9 (sub_1800F96B9.c)
 *     sub_1800FFC80 @ 0x1800FFC80 (sub_1800FFC80.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800F9F94(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *a1 = off_18014AD60;
  LOBYTE(a3) = 1;
  sub_1800FEE8C(a1[3], a1[4], a3);
  v4 = a1[4];
  if ( v4 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[3];
  if ( v5 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_18006A148(a1);
  return a1;
}
