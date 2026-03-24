/*
 * XREFs of IsGetStyleWindowSupported @ 0x1C006BAD8
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0039D90 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C006B8B0 (CreateCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetStyleWindowSupported()
{
  if ( qword_1C02566A8 )
    return qword_1C02566A8();
  else
    return 3221225659LL;
}
