/*
 * XREFs of IsGreHintDCWndSupported @ 0x1C00188D0
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreHintDCWndSupported()
{
  if ( qword_1C029B820 )
    return qword_1C029B820();
  else
    return 3221225659LL;
}
