/*
 * XREFs of IsGreHintDCWndSupported @ 0x1C005B930
 * Callers:
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreHintDCWndSupported()
{
  if ( qword_1C0294EB8 )
    return qword_1C0294EB8();
  else
    return 3221225659LL;
}
