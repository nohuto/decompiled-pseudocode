/*
 * XREFs of GetDpiCacheSlot @ 0x1C00EDB50
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C0016A4C (PrepareHDCBITSBitmap.c)
 *     GetDPIServerInfoForDpi @ 0x1C008A410 (GetDPIServerInfoForDpi.c)
 *     GetOemBitmapInfoForDpi @ 0x1C009A53C (GetOemBitmapInfoForDpi.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00A2B74 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00AB228 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     NtUserGetActiveProcessesDpis @ 0x1C00B3F10 (NtUserGetActiveProcessesDpis.c)
 *     GetCaptionHeight @ 0x1C00ECE00 (GetCaptionHeight.c)
 *     SetTiledRect @ 0x1C00ECFB8 (SetTiledRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00EDCBC (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00EE150 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     xxxCalcClientRect @ 0x1C010ACC0 (xxxCalcClientRect.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01BF5AC (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C01CF9B0 (NtUserForceWindowToDpiForTest.c)
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
