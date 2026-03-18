/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C00C76E0
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C0063C80 (GetScaledLogFontForDpi.c)
 *     GetProcessDpiServerInfo @ 0x1C00BA408 (GetProcessDpiServerInfo.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00BF15C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C00BF2D8 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00C7450 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InitProcessSystemDpi @ 0x1C00C7550 (InitProcessSystemDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00671E0 (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01E489C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(__int64 a1, __int64 a2, __int64 a3)
{
  int DpiCacheSlot; // eax
  int v5; // r10d
  __int64 v6; // r11
  int v7; // ecx
  struct tagDPISERVERINFO *v8; // rbx

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( (_DWORD)a1 == 96 )
    return Get96DpiServerInfo(a1, a2, a3);
  DpiCacheSlot = GetDpiCacheSlot(a1);
  v7 = 0;
  if ( DpiCacheSlot != -1 )
    v7 = DpiCacheSlot;
  v8 = (struct tagDPISERVERINFO *)(v6 + 104 * (v7 + 49LL));
  EnsureServerInfoForDpi(v8, v5);
  return (__int64)v8;
}
