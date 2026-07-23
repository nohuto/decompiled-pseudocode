/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x180036490
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003C5B0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x1800468F0 (RtlGetFileMUIPath.c)
 *     RtlpQueryDefaultUILanguage @ 0x180076740 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180076FA0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007CA20 (RtlGetUserPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089D50 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008AB10 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008BF20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetUILanguageInfo @ 0x1800EEF70 (RtlGetUILanguageInfo.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFB00 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F0A50 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1100 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180105FB0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x1800709A8 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(_QWORD *a1)
{
  PVOID v1; // rax
  PVOID v2; // rbx
  int RegistryInfo; // edi

  v1 = g_RegInfo;
  v2 = 0LL;
  RegistryInfo = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    v1 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( RegistryInfo >= 0 )
      v2 = v1;
    *a1 = v2;
  }
  return (unsigned int)RegistryInfo;
}
