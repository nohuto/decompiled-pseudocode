/*
 * XREFs of Is_MonitorFromRectSupported @ 0x1C006E534
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C006D5A0 (TransformRectBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIRect @ 0x1C006DD10 (LogicalToPhysicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  if ( qword_1C029C978 )
    return qword_1C029C978();
  else
    return 3221225659LL;
}
