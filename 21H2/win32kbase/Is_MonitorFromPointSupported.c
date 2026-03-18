/*
 * XREFs of Is_MonitorFromPointSupported @ 0x1C006E508
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C006DA50 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C006DBB0 (LogicalToPhysicalDPIPoint.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C006DE50 (LogicalCursorPosFromDpiAwarenessContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromPointSupported()
{
  if ( qword_1C029C958 )
    return qword_1C029C958();
  else
    return 3221225659LL;
}
