/*
 * XREFs of DestroyThreadsMessages @ 0x1C009A094
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003ED88 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DestroyThreadsMessages())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256060;
  if ( qword_1C0256060 )
    return (__int64 (*)(void))qword_1C0256060();
  return result;
}
