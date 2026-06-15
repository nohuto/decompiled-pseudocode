/*
 * XREFs of sub_1800FA128 @ 0x1800FA128
 * Callers:
 *     sub_180098C73 @ 0x180098C73 (sub_180098C73.c)
 *     unknown_libname_315 @ 0x1800F9BB4 (unknown_libname_315.c)
 *     sub_1800FC860 @ 0x1800FC860 (sub_1800FC860.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800FA128(_QWORD *a1)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rcx

  v2 = (struct _TP_WORK *)a1[5];
  if ( v2 )
    CloseThreadpoolWork(v2);
  v3 = a1[4];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  sub_180006A30((volatile signed __int32 *)(*a1 - 24LL));
  sub_18006A148(a1);
  return a1;
}
