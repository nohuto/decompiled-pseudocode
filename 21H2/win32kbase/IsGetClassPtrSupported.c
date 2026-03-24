/*
 * XREFs of IsGetClassPtrSupported @ 0x1C00B1EE8
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00A5924 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetClassPtrSupported()
{
  if ( qword_1C0257808 )
    return qword_1C0257808();
  else
    return 3221225659LL;
}
