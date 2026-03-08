/*
 * XREFs of IsFreeDelayedHooksSupported @ 0x1C0271EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeDelayedHooksSupported()
{
  if ( qword_1C02D6D10 )
    return qword_1C02D6D10();
  else
    return 3221225659LL;
}
