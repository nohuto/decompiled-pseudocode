/*
 * XREFs of IsGetStyleWindowSupported @ 0x1C006B028
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0038920 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C0039C70 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C006AE00 (CreateCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetStyleWindowSupported()
{
  if ( qword_1C02576A8 )
    return qword_1C02576A8();
  else
    return 3221225659LL;
}
