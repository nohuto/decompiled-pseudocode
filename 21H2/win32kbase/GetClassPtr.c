/*
 * XREFs of GetClassPtr @ 0x1C00C3B54
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00C2298 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GetClassPtr())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029C560;
  if ( qword_1C029C560 )
    return (__int64 (*)(void))qword_1C029C560();
  return result;
}
