/*
 * XREFs of ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C0170E38
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1C016E1AC (BmlCompareRegionsWithPivot.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C0170E88 (BmlCompareSourceModesWithMonitors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetScaledAspectRatio(const struct _D3DKMDT_2DREGION *a1)
{
  signed int cy; // ecx

  if ( !a1->cy )
    WdLogSingleEntry0(1LL);
  cy = a1->cy;
  if ( cy )
    return (unsigned int)((signed int)(100 * a1->cx) / cy);
  else
    return 0LL;
}
