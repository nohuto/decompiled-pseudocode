/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0171118
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C0170E88 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C0171130 (BmlCompareModeRegions.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C017116C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareMonitorRegions @ 0x1C03B85E8 (BmlCompareMonitorRegions.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C03B89AC (BmlCompareTargetModeWithVirtualRefreshRate.c)
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
