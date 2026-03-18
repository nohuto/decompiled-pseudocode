/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x1C00AB9E4
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IszzzCalcStartCursorHideSupported()
{
  if ( qword_1C0295428 )
    return qword_1C0295428();
  else
    return 3221225659LL;
}
