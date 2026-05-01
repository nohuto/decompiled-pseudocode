/*
 * XREFs of ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ @ 0x1800A2CF0
 * Callers:
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2268 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800A13B4 (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1800A1FA0 (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1800A2A24 (-CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ @ 0x1800A6DB8 (-GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ @ 0x1800AB610 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56277908@@@details@wil@@QEAA_NXZ @ 0x1800AB64C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56277908@@@details@wil@@QEAA_NXZ.c)
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1800ADFD4 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively(void)
{
  BOOL v0; // ebx
  const char *v1; // r9
  unsigned int LastError; // ebx
  int v3; // eax
  __int64 v4; // rdx
  const unsigned __int16 *v5; // rcx
  int KeyAndSetSecurityDescriptor; // eax
  PSID *p_pSid; // [rsp+20h] [rbp-50h] BYREF
  PSID Sid; // [rsp+28h] [rbp-48h] BYREF
  char v10; // [rsp+30h] [rbp-40h]
  struct _EXPLICIT_ACCESS_W pListOfExplicitEntries; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  PSID pSid; // [rsp+80h] [rbp+10h] BYREF

  pSid = 0LL;
  p_pSid = &pSid;
  Sid = 0LL;
  v10 = 1;
  v0 = ConvertStringSidToSidW(
         L"S-1-15-3-1024-1086922356-207614091-3724853071-841836187-4018695103-34218837-3164163255-155871754",
         &Sid);
  wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
  if ( !v0 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x59,
                  (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
                  v1);
    goto LABEL_17;
  }
  memset(&pListOfExplicitEntries, 0, sizeof(pListOfExplicitEntries));
  pListOfExplicitEntries.grfAccessPermissions = SearchSettings::SearchSettingsHelper::GetDesiredSearchSettingsSam();
  pListOfExplicitEntries.grfAccessMode = GRANT_ACCESS;
  pListOfExplicitEntries.grfInheritance = 2;
  BuildTrusteeWithSidW(&pListOfExplicitEntries.Trustee, pSid);
  v3 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
         &pListOfExplicitEntries);
  LastError = v3;
  if ( v3 < 0 )
  {
    v4 = 97LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
      (const char *)(unsigned int)v3);
    goto LABEL_17;
  }
  v3 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
         &pListOfExplicitEntries);
  LastError = v3;
  if ( v3 < 0 )
  {
    v4 = 98LL;
    goto LABEL_13;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370823>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55370823>::GetImpl'::`2'::impl) )
  {
    v3 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\InstalledDates",
           &pListOfExplicitEntries);
    LastError = v3;
    if ( v3 < 0 )
    {
      v4 = 102LL;
      goto LABEL_13;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56277908>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56277908>::GetImpl'::`2'::impl) )
  {
    v3 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\Index",
           &pListOfExplicitEntries);
    LastError = v3;
    if ( v3 < 0 )
    {
      v4 = 107LL;
      goto LABEL_13;
    }
  }
  KeyAndSetSecurityDescriptor = SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptor(v5);
  if ( KeyAndSetSecurityDescriptor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
      (const char *)(unsigned int)KeyAndSetSecurityDescriptor);
  LastError = 0;
LABEL_17:
  wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pSid, 0LL);
  return LastError;
}
