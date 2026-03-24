/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C0044E58
 * Callers:
 *     xxxDrawMenuItem @ 0x1C004470C (xxxDrawMenuItem.c)
 *     InitProcessSystemDpi @ 0x1C0044CB0 (InitProcessSystemDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C0047A24 (GetScaledLogFontForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0048148 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C004C018 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GetProcessDpiServerInfo @ 0x1C00E0AF4 (GetProcessDpiServerInfo.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00E1E70 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA020 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C006148C (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01E9B4C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(int a1)
{
  int DpiCacheSlot; // eax
  int v3; // r11d
  int v4; // ecx
  struct tagDPISERVERINFO *v5; // rbx

  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( a1 == 96 )
    return Get96DpiServerInfo();
  DpiCacheSlot = GetDpiCacheSlot();
  v4 = 0;
  if ( DpiCacheSlot != -1 )
    v4 = DpiCacheSlot;
  v5 = (struct tagDPISERVERINFO *)(gpsi + 104 * (v4 + 49LL));
  EnsureServerInfoForDpi(v5, v3);
  return (__int64)v5;
}
