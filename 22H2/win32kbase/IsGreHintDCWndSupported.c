/*
 * XREFs of IsGreHintDCWndSupported @ 0x1C003E614
 * Callers:
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreHintDCWndSupported()
{
  if ( qword_1C0255AC0 )
    return qword_1C0255AC0();
  else
    return 3221225659LL;
}
