/*
 * XREFs of Is_MonitorFromPointSupported @ 0x1C003B86C
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C000AD50 (PhysicalToLogicalDPIPoint.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C003B720 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00C1BB0 (LogicalToPhysicalDPIPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromPointSupported()
{
  if ( qword_1C02D71A0 )
    return qword_1C02D71A0();
  else
    return 3221225659LL;
}
