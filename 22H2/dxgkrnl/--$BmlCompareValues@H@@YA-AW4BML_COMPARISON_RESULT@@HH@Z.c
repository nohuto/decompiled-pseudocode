/*
 * XREFs of ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C017AADC
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1C01775B0 (BmlCompareRegionsWithPivot.c)
 *     BmlGetNextBestSourceMode @ 0x1C017A320 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C017AAF8 (BmlCompareSourceModesWithMonitors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<int>(int a1, int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)(a1 >= a2) - 1;
}
