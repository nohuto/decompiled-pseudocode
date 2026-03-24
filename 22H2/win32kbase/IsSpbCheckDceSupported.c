/*
 * XREFs of IsSpbCheckDceSupported @ 0x1C003AC1C
 * Callers:
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSpbCheckDceSupported()
{
  if ( qword_1C02566D8 )
    return qword_1C02566D8();
  else
    return 3221225659LL;
}
