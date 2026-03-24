/*
 * XREFs of BmlCompareModeRegions @ 0x1C0147B44
 * Callers:
 *     BmlCompareSourceModes @ 0x1C014766C (BmlCompareSourceModes.c)
 *     BmlCompareMonitorRegions @ 0x1C02EBF2C (BmlCompareMonitorRegions.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1C02EBFDC (BmlCompareSourceModesWithContentRes.c)
 * Callees:
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C014789C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 */

__int64 __fastcall BmlCompareModeRegions(unsigned int *a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v2 = *a1;
  v3 = a1[1];
  v4 = *a2;
  v5 = v4 * a2[1];
  v6 = v2 * v3;
  if ( v6 > v5 )
    return 1LL;
  if ( v6 >= v5 )
    return BmlCompareValues<unsigned int>(v2, v4);
  return 0xFFFFFFFFLL;
}
