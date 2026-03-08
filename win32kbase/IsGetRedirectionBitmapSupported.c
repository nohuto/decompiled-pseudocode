/*
 * XREFs of IsGetRedirectionBitmapSupported @ 0x1C00CC5A0
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetRedirectionBitmapSupported()
{
  if ( qword_1C02D6C10 )
    return qword_1C02D6C10();
  else
    return 3221225659LL;
}
