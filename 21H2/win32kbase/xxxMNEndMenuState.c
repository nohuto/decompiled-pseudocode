/*
 * XREFs of xxxMNEndMenuState @ 0x1C01FC83C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*xxxMNEndMenuState())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257238;
  if ( qword_1C0257238 )
    return (__int64 (*)(void))qword_1C0257238();
  return result;
}
