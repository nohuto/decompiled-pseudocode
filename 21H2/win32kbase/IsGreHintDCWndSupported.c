/*
 * XREFs of IsGreHintDCWndSupported @ 0x1C003D1A4
 * Callers:
 *     GetMonitorDC @ 0x1C0039C70 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreHintDCWndSupported()
{
  if ( qword_1C0256AC0 )
    return qword_1C0256AC0();
  else
    return 3221225659LL;
}
