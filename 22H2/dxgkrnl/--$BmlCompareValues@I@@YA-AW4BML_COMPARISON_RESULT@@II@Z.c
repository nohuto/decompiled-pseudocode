/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C017AD88
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C01762D4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C017AAF8 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C017ADA0 (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1C03BCEA8 (BmlCompareMonitorRegions.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C03BD26C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)-(a1 < a2);
}
