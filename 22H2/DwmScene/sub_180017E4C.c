/*
 * XREFs of sub_180017E4C @ 0x180017E4C
 * Callers:
 *     sub_180019D80 @ 0x180019D80 (sub_180019D80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017E4C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_180017D6C(a1, a2);
}
