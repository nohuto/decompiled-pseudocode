/*
 * XREFs of SortMonitorsInSpatialOrder @ 0x1C00E1D30
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00E14E8 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00E1D58 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 */

void SortMonitorsInSpatialOrder()
{
  if ( *(_DWORD *)*gpDispInfo )
    UpdateDesktopMonitorNavigationOrder();
}
