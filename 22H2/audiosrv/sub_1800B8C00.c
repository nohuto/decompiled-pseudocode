/*
 * XREFs of sub_1800B8C00 @ 0x1800B8C00
 * Callers:
 *     <none>
 * Callees:
 *     __castguard_check_failure_user_handled_wrapper @ 0x1800B5744 (__castguard_check_failure_user_handled_wrapper.c)
 *     sub_1800B5EE4 @ 0x1800B5EE4 (sub_1800B5EE4.c)
 *     sub_1800BA458 @ 0x1800BA458 (sub_1800BA458.c)
 */

void __fastcall __noreturn sub_1800B8C00(__int64 a1)
{
  sub_1800BA458(a1 + 8, *(unsigned int *)(a1 + 32), *(_QWORD *)(a1 + 24));
  _castguard_check_failure_user_handled_wrapper();
  sub_1800B5EE4();
}
