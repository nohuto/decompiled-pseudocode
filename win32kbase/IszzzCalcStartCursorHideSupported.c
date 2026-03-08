/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x1C00BB514
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0070EFC (xxxInitProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IszzzCalcStartCursorHideSupported()
{
  if ( qword_1C02D65A0 )
    return qword_1C02D65A0();
  else
    return 3221225659LL;
}
