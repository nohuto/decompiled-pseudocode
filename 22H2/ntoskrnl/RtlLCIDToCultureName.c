/*
 * XREFs of RtlLCIDToCultureName @ 0x140916070
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403A7F7C (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1406B2EF8 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14074307C (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077DDA8 (PnpSetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14078F330 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14078FA88 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A0D80 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A29B0 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14098107C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140981800 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098238C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1409827EC (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x1403022DC (DownLevelLangIDToLanguageName.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140364360 (DbgPrint.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140CF78A0, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140CF78A0);
          return 1;
        }
      }
    }
  }
  return v2;
}
