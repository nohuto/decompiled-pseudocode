/*
 * XREFs of RtlLCIDToCultureName @ 0x140916180
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403A87CC (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x14062EF28 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x140746D9C (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077E068 (PnpSetDeviceInterfacePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14078F5F0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14078FD48 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A0E90 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A2AC0 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14098120C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140981990 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098251C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14098297C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x140227AFC (DownLevelLangIDToLanguageName.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140CF7920, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140CF7920);
          return 1;
        }
      }
    }
  }
  return v2;
}
