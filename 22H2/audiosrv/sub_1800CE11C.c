/*
 * XREFs of sub_1800CE11C @ 0x1800CE11C
 * Callers:
 *     sub_180005310 @ 0x180005310 (sub_180005310.c)
 *     sub_1800CE248 @ 0x1800CE248 (sub_1800CE248.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C3630 @ 0x1800C3630 (sub_1800C3630.c)
 */

unsigned __int64 __fastcall sub_1800CE11C(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rcx

  v2 = a1[1];
  if ( v2 >= a1[2] && !sub_1800C3630((__int64)a1, v2 + 1) )
    sub_1800B8610(-2147024882);
  v5 = *a2;
  *(_QWORD *)(*a1 + 8 * v2) = *a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  ++a1[1];
  return v2;
}
