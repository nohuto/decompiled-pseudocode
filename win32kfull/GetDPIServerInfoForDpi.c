/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C00A1E90
 * Callers:
 *     InitProcessSystemDpi @ 0x1C00A1D00 (InitProcessSystemDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00A4620 (GetScaledLogFontForDpi.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00B7F80 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GetProcessDpiServerInfo @ 0x1C010C494 (GetProcessDpiServerInfo.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C07C0 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C023A8F8 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C023AAC4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01C02EC (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(int a1)
{
  int DpiCacheSlot; // eax
  int v3; // r10d
  __int64 v4; // r11
  int v5; // ecx
  struct tagDPISERVERINFO *v6; // rbx

  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( a1 == 96 )
    return Get96DpiServerInfo();
  DpiCacheSlot = GetDpiCacheSlot(a1);
  v5 = 0;
  if ( DpiCacheSlot != -1 )
    v5 = DpiCacheSlot;
  v6 = (struct tagDPISERVERINFO *)(v4 + 104 * (v5 + 49LL));
  EnsureServerInfoForDpi(v6, v3);
  return (__int64)v6;
}
