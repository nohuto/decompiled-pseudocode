/*
 * XREFs of SortMonitorsInSpatialOrder @ 0x1C00C7FB0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00C77B4 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00C7FD8 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 */

void SortMonitorsInSpatialOrder()
{
  if ( *(_DWORD *)*gpDispInfo )
    UpdateDesktopMonitorNavigationOrder();
}
