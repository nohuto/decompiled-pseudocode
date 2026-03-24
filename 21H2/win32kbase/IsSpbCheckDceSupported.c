/*
 * XREFs of IsSpbCheckDceSupported @ 0x1C00397AC
 * Callers:
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0039C70 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSpbCheckDceSupported()
{
  if ( qword_1C02576D8 )
    return qword_1C02576D8();
  else
    return 3221225659LL;
}
