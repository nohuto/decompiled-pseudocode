/*
 * XREFs of CleanupIAMAccess @ 0x1C00C5468
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CleanupIAMAccess())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02955E8;
  if ( qword_1C02955E8 )
    return (__int64 (*)(void))qword_1C02955E8();
  return result;
}
