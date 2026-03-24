/*
 * XREFs of xxxMNEndMenuState @ 0x1C01FC76C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*xxxMNEndMenuState())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256238;
  if ( qword_1C0256238 )
    return (__int64 (*)(void))qword_1C0256238();
  return result;
}
