/*
 * XREFs of sub_1800718D4 @ 0x1800718D4
 * Callers:
 *     sub_1800DFDC0 @ 0x1800DFDC0 (sub_1800DFDC0.c)
 *     sub_1800F7230 @ 0x1800F7230 (sub_1800F7230.c)
 *     sub_1800F746C @ 0x1800F746C (sub_1800F746C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800718D4(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
