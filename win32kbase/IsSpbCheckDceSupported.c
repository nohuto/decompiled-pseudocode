/*
 * XREFs of IsSpbCheckDceSupported @ 0x1C000DA48
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSpbCheckDceSupported()
{
  if ( qword_1C02D6C60 )
    return qword_1C02D6C60();
  else
    return 3221225659LL;
}
