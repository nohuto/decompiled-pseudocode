/*
 * XREFs of IsGetStyleWindowSupported @ 0x1C005BE50
 * Callers:
 *     UserSetDCVisRgn @ 0x1C004C660 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C005BC20 (CreateCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetStyleWindowSupported()
{
  if ( qword_1C0295AB8 )
    return qword_1C0295AB8();
  else
    return 3221225659LL;
}
