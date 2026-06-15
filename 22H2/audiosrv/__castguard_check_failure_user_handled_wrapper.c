/*
 * XREFs of __castguard_check_failure_user_handled_wrapper @ 0x1800B5744
 * Callers:
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 *     sub_1800B8C00 @ 0x1800B8C00 (sub_1800B8C00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (*_castguard_check_failure_user_handled_wrapper())(void)
{
  __int64 (*result)(void); // rax

  result = qword_18019E3C0;
  if ( qword_18019E3C0 )
    return (__int64 (*)(void))qword_18019E3C0();
  return result;
}
