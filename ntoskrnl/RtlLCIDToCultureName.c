/*
 * XREFs of RtlLCIDToCultureName @ 0x1409BBD70
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x14039C6C4 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1406F7418 (PnpGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14078D104 (PnpGetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140843870 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140843BA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDevicePropertyData @ 0x140863B28 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086B858 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1409548E0 (PnpGetDeviceInstancePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A719B4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A72148 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A72CB8 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140A730F0 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x1402BEE08 (DownLevelLangIDToLanguageName.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 */

char __fastcall RtlLCIDToCultureName(int a1, UNICODE_STRING *a2)
{
  char v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, &word_140D18D00, 64, 2) > 0 )
        {
          RtlInitUnicodeString(a2, &word_140D18D00);
          return 1;
        }
      }
    }
  }
  return v2;
}
