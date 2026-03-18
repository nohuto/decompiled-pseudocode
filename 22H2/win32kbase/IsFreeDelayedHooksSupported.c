/*
 * XREFs of IsFreeDelayedHooksSupported @ 0x1C0233140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeDelayedHooksSupported()
{
  if ( qword_1C0295B98 )
    return qword_1C0295B98();
  else
    return 3221225659LL;
}
