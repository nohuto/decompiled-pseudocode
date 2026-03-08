/*
 * XREFs of DrvGetCurrentDpiInfoFromHDev @ 0x1C003CAE4
 * Callers:
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C0015828 (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C0015888 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0015B1C (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C003CBE8 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C003DF40 (NtUserGetDpiForMonitor.c)
 *     CitGetMonitorInfo @ 0x1C00BB2D0 (CitGetMonitorInfo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DA244 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C018E1E0 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDev(__int64 a1, __int64 a2)
{
  if ( !a1 )
    return 3221225480LL;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 2424);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 2440);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 2456);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 2472);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 2488);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 2504);
  return *(_DWORD *)(a2 + 8) == 0 ? 0xC0000001 : 0;
}
