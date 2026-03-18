/*
 * XREFs of TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C006D8A0
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C006D5A0 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00D00F8 (TransformOffscreenAdjacentRect.c)
 * Callees:
 *     LogicalToPhysicalDPIRect @ 0x1C006DD10 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C006E120 (PhysicalToLogicalDPIRect.c)
 */

__int64 TransformRectBetweenCoordinateSpacesPerMonitor(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, ...)
{
  int v6; // ebx
  va_list va; // [rsp+50h] [rbp+28h] BYREF

  va_start(va, a4);
  v6 = LogicalToPhysicalDPIRect(a1, a2, a4, va);
  return v6 | (unsigned int)PhysicalToLogicalDPIRect(a1, a1, a3, va);
}
