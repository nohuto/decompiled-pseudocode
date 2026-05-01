/*
 * XREFs of ?Mirror_IsThreadRTL@@YAHXZ @ 0x18001B644
 * Callers:
 *     _dynamic_initializer_for__PPIWin32VtcLayoutOperation::_sideBarLocation__ @ 0x1800048A0 (_dynamic_initializer_for__PPIWin32VtcLayoutOperation--_sideBarLocation__.c)
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18001AEE0 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x1800BDCC4 (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4BB8 (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1800D80D0 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 Mirror_IsThreadRTL(void)
{
  LANGID ThreadUILanguage; // ax

  ThreadUILanguage = GetThreadUILanguage();
  return IsBiDiLocale(ThreadUILanguage);
}
