/*
 * XREFs of xxxMNEndMenuState @ 0x1C023E550
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*xxxMNEndMenuState())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029BF78;
  if ( qword_1C029BF78 )
    return (__int64 (*)(void))qword_1C029BF78();
  return result;
}
