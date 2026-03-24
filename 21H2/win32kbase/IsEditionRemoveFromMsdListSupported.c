/*
 * XREFs of IsEditionRemoveFromMsdListSupported @ 0x1C01FC4A8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01CDAA4 (ApiSetEditionRemoveFromMsdList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionRemoveFromMsdListSupported()
{
  if ( qword_1C0258268 )
    return qword_1C0258268();
  else
    return 3221225659LL;
}
