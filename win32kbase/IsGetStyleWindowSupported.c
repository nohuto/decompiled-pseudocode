/*
 * XREFs of IsGetStyleWindowSupported @ 0x1C003CFD4
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C003DC40 (CreateCacheDC.c)
 *     UserSetDCVisRgn @ 0x1C0044E20 (UserSetDCVisRgn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetStyleWindowSupported()
{
  if ( qword_1C02D6C30 )
    return qword_1C02D6C30();
  else
    return 3221225659LL;
}
