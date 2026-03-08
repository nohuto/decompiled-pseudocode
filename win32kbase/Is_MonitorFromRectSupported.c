/*
 * XREFs of Is_MonitorFromRectSupported @ 0x1C000A0C4
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00152E0 (TransformRectBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00A8E10 (PhysicalToLogicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  if ( qword_1C02D71C0 )
    return qword_1C02D71C0();
  else
    return 3221225659LL;
}
