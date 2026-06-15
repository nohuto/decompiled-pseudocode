/*
 * XREFs of sub_18005B580 @ 0x18005B580
 * Callers:
 *     sub_180057E90 @ 0x180057E90 (sub_180057E90.c)
 * Callees:
 *     sub_18005B5E8 @ 0x18005B5E8 (sub_18005B5E8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005B580(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // rdi

  for ( i = a2; i != a3; ++i )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 56LL))(*i) )
      sub_18005B5E8((LPCRITICAL_SECTION)(*i + 1768LL));
  }
  return a1;
}
