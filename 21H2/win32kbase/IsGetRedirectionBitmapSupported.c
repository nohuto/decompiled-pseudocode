/*
 * XREFs of IsGetRedirectionBitmapSupported @ 0x1C00B0CCC
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetRedirectionBitmapSupported()
{
  if ( qword_1C029C3C8 )
    return qword_1C029C3C8();
  else
    return 3221225659LL;
}
