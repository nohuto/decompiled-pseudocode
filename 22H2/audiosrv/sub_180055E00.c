/*
 * XREFs of sub_180055E00 @ 0x180055E00
 * Callers:
 *     sub_180055E44 @ 0x180055E44 (sub_180055E44.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180055E00(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_1801471E8;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  return a1;
}
