/*
 * XREFs of GetDpiCacheSlot @ 0x1C0045E2C
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C00162BC (PrepareHDCBITSBitmap.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00448E4 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetCaptionHeight @ 0x1C0044AA4 (GetCaptionHeight.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetTiledRect @ 0x1C0045B74 (SetTiledRect.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C0045D3C (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     GetDPIServerInfoForDpi @ 0x1C00A1E90 (GetDPIServerInfoForDpi.c)
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00AD290 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00D05EC (GetOemBitmapInfoForDpi.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00D902C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00E2378 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     NtUserGetActiveProcessesDpis @ 0x1C00EC1E0 (NtUserGetActiveProcessesDpis.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C074C (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C01D0A00 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiCacheSlot(int a1)
{
  unsigned int v1; // r9d
  int v3; // edx

  v1 = -1;
  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    return 0;
  }
  else if ( a1 >= 96 && a1 == 24 * (a1 / 0x18u) )
  {
    v3 = (a1 - 72) / 24;
    if ( v3 >= 18 )
      return (unsigned int)-1;
    return (unsigned int)v3;
  }
  return v1;
}
