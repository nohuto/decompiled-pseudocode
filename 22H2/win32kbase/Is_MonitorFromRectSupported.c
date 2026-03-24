/*
 * XREFs of Is_MonitorFromRectSupported @ 0x1C0071978
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0070D00 (TransformRectBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIRect @ 0x1C00711D0 (LogicalToPhysicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  if ( qword_1C0256C38 )
    return qword_1C0256C38();
  else
    return 3221225659LL;
}
