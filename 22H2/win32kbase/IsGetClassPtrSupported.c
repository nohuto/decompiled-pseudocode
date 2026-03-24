/*
 * XREFs of IsGetClassPtrSupported @ 0x1C00B2228
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00A66E4 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetClassPtrSupported()
{
  if ( qword_1C0256808 )
    return qword_1C0256808();
  else
    return 3221225659LL;
}
