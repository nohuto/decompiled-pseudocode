/*
 * XREFs of __castguard_check_failure_user_handled_wrapper_0 @ 0x18000E9E8
 * Callers:
 *     sub_18000D868 @ 0x18000D868 (sub_18000D868.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*_castguard_check_failure_user_handled_wrapper_0())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1802183E8;
  if ( qword_1802183E8 )
    return (__int64 (*)(void))qword_1802183E8();
  return result;
}
