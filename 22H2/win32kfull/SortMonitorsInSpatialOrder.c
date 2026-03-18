/*
 * XREFs of SortMonitorsInSpatialOrder @ 0x1C00AAC60
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00AA418 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00AAC88 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 */

void SortMonitorsInSpatialOrder()
{
  if ( *(_DWORD *)*gpDispInfo )
    UpdateDesktopMonitorNavigationOrder();
}
