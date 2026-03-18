/*
 * XREFs of ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C017AD14
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C017793C (BmlDoesTargetModeObeyConstraint.c)
 *     BmlFillPreferredMonitorMode @ 0x1C0177F70 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0178168 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlGetNextBestSourceMode @ 0x1C017A320 (BmlGetNextBestSourceMode.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C017A8D0 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetModeCategoryForRegion @ 0x1C017ACBC (BmlGetModeCategoryForRegion.c)
 *     BmlCompareSourceModes @ 0x1C03BCFB4 (BmlCompareSourceModes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeExtents(int *a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v2 = *a1;
  if ( (unsigned int)*a1 > *a2 )
    return 1LL;
  v3 = a1[1];
  v4 = a2[1];
  if ( v3 > v4 )
    return 1LL;
  if ( v2 == *a2 )
    return (unsigned int)-(v4 != v3);
  return 0xFFFFFFFFLL;
}
