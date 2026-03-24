/*
 * XREFs of IsEditionRemoveFromMsdListSupported @ 0x1C01FC3D8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01CD9D4 (ApiSetEditionRemoveFromMsdList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionRemoveFromMsdListSupported()
{
  if ( qword_1C0257268 )
    return qword_1C0257268();
  else
    return 3221225659LL;
}
