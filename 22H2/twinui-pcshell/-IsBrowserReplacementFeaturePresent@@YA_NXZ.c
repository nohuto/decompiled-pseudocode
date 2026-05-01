/*
 * XREFs of ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180107D88
 * Callers:
 *     ?CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801070B0 (-CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107128 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     GetPidlsFromTaskbarLayout @ 0x180155EAC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x180107BC8 (-GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180107E6C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_N.c)
 */

bool __fastcall IsBrowserReplacementFeaturePresent(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetImpl'::`2'::impl,
    a2,
    0LL);
  return GetInstalledBrowserChannelInfo();
}
