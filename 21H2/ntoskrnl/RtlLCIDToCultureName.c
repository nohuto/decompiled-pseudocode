/*
 * XREFs of RtlLCIDToCultureName @ 0x1409BB670
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1403C624C (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406EA694 (PnpGetDeviceInterfacePropertyData.c)
 *     PnpGetDevicePropertyData @ 0x1407496A8 (PnpGetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14080D8A8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14080DA78 (PnpSetDevicePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408303C0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140830B1C (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140945D40 (PnpGetDeviceInstancePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A35084 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A35814 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A36378 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140A367B0 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140372644 (DownLevelLangIDToLanguageName.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, &word_140D01B00, 64, 2) > 0 )
        {
          RtlInitUnicodeString(a2, &word_140D01B00);
          return 1;
        }
      }
    }
  }
  return v2;
}
