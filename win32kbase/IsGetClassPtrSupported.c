/*
 * XREFs of IsGetClassPtrSupported @ 0x1C00AF124
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00AEC48 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetClassPtrSupported()
{
  if ( qword_1C02D6DA0 )
    return qword_1C02D6DA0();
  else
    return 3221225659LL;
}
