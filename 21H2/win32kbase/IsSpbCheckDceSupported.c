/*
 * XREFs of IsSpbCheckDceSupported @ 0x1C00B3F48
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSpbCheckDceSupported()
{
  if ( qword_1C029C418 )
    return qword_1C029C418();
  else
    return 3221225659LL;
}
