/*
 * XREFs of sub_180064E28 @ 0x180064E28
 * Callers:
 *     sub_180064438 @ 0x180064438 (sub_180064438.c)
 *     sub_1800F6F4C @ 0x1800F6F4C (sub_1800F6F4C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180064E28(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180149090;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  return a1;
}
