/*
 * XREFs of IsFreeDelayedHooksSupported @ 0x1C023E260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeDelayedHooksSupported()
{
  if ( qword_1C029C4C8 )
    return qword_1C029C4C8();
  else
    return 3221225659LL;
}
