/*
 * XREFs of xxxMNEndMenuState @ 0x1C02721CC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*xxxMNEndMenuState())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D6820;
  if ( qword_1C02D6820 )
    return (__int64 (*)(void))qword_1C02D6820();
  return result;
}
