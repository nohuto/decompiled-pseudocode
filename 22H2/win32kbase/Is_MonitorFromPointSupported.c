/*
 * XREFs of Is_MonitorFromPointSupported @ 0x1C0059E6C
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C000C4C0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C0059D20 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00B34E0 (LogicalToPhysicalDPIPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromPointSupported()
{
  if ( qword_1C0296028 )
    return qword_1C0296028();
  else
    return 3221225659LL;
}
