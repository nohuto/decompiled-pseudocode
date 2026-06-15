/*
 * XREFs of sub_18011F738 @ 0x18011F738
 * Callers:
 *     sub_1800BB014 @ 0x1800BB014 (sub_1800BB014.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_18011F738()
{
  if ( pv )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)pv + 32LL))(pv);
    if ( pv )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
      pv = 0LL;
    }
  }
  return 0LL;
}
