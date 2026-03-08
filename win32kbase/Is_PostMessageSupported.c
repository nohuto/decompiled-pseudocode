/*
 * XREFs of Is_PostMessageSupported @ 0x1C0271F74
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_PostMessageSupported()
{
  if ( qword_1C02D6908 )
    return qword_1C02D6908();
  else
    return 3221225659LL;
}
