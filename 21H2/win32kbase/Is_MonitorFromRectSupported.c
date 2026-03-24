/*
 * XREFs of Is_MonitorFromRectSupported @ 0x1C0070EC8
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0070250 (TransformRectBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0070720 (LogicalToPhysicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  if ( qword_1C0257C38 )
    return qword_1C0257C38();
  else
    return 3221225659LL;
}
