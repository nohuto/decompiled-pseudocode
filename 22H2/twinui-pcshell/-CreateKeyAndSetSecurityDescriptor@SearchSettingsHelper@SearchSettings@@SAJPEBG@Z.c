/*
 * XREFs of ?CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1800A2A04
 * Callers:
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ @ 0x1800A2CD0 (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ.c)
 * Callees:
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800A1394 (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ?GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ @ 0x1800A6D98 (-GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ.c)
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1800ADFB4 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFAC4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1068 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802650DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180266C50 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802677E0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptor(const unsigned __int16 *a1)
{
  unsigned int LastError; // edi
  REGSAM DesiredSearchSettingsSam; // eax
  unsigned int v3; // eax
  const char *v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // eax
  BOOL v7; // ebx
  const char *v8; // r9
  DWORD SecurityInfo; // eax
  DWORD v10; // ebx
  const char *v11; // r9
  __int64 v12; // rdx
  DWORD v13; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-39h]
  unsigned int phkResulta; // [rsp+20h] [rbp-39h]
  PACL ppDacl; // [rsp+50h] [rbp-9h] BYREF
  void *p_pSid; // [rsp+58h] [rbp-1h] BYREF
  PSID Sid; // [rsp+60h] [rbp+7h] BYREF
  char v20; // [rsp+68h] [rbp+Fh]
  _EXPLICIT_ACCESS_W pListOfExplicitEntries; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  HKEY v23; // [rsp+C0h] [rbp+67h] BYREF
  PACL pDacl; // [rsp+C8h] [rbp+6Fh] BYREF
  PSECURITY_DESCRIPTOR ppSecurityDescriptor; // [rsp+D0h] [rbp+77h] BYREF
  PSID pSid; // [rsp+D8h] [rbp+7Fh] BYREF

  LastError = 0;
  v23 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &v23,
    0LL);
  DesiredSearchSettingsSam = SearchSettings::SearchSettingsHelper::GetDesiredSearchSettingsSam();
  v3 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         0,
         DesiredSearchSettingsSam,
         &v23);
  v4 = (const char *)v3;
  if ( v3 - 2 <= 1 || v3 == 1168 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &v23,
      0LL);
    v6 = RegCreateKeyExW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           0,
           0LL,
           0,
           0x60000u,
           0LL,
           &v23,
           0LL);
    if ( v6 )
    {
      v4 = (const char *)v6;
      v5 = 52LL;
      goto LABEL_7;
    }
LABEL_8:
    pSid = 0LL;
    p_pSid = &pSid;
    Sid = 0LL;
    v20 = 1;
    v7 = ConvertStringSidToSidW(
           L"S-1-15-3-1024-1086922356-207614091-3724853071-841836187-4018695103-34218837-3164163255-155871754",
           &Sid);
    wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
    if ( !v7 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x3D,
                    (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
                    v8);
LABEL_17:
      wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pSid, 0LL);
      goto LABEL_18;
    }
    memset(&pListOfExplicitEntries, 0, sizeof(pListOfExplicitEntries));
    pListOfExplicitEntries.grfAccessPermissions = SearchSettings::SearchSettingsHelper::GetDesiredSearchSettingsSam();
    pListOfExplicitEntries.grfAccessMode = GRANT_ACCESS;
    pListOfExplicitEntries.grfInheritance = 2;
    BuildTrusteeWithSidW(&pListOfExplicitEntries.Trustee, pSid);
    ppSecurityDescriptor = 0LL;
    ppDacl = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &ppSecurityDescriptor,
      0LL);
    SecurityInfo = GetSecurityInfo(v23, SE_REGISTRY_KEY, 4u, 0LL, 0LL, &ppDacl, 0LL, &ppSecurityDescriptor);
    if ( SecurityInfo )
    {
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        (void *)0x47,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
        (const char *)SecurityInfo,
        phkResulta);
      __debugbreak();
    }
    pDacl = 0LL;
    p_pSid = &pDacl;
    Sid = 0LL;
    v20 = 1;
    v10 = SetEntriesInAclW(1u, &pListOfExplicitEntries, ppDacl, (PACL *)&Sid);
    wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
    if ( v10 )
    {
      v11 = (const char *)v10;
      v12 = 76LL;
    }
    else
    {
      v13 = SetSecurityInfo(v23, SE_REGISTRY_KEY, 4u, 0LL, 0LL, pDacl, 0LL);
      if ( !v13 )
      {
LABEL_16:
        wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pDacl, 0LL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&ppSecurityDescriptor);
        goto LABEL_17;
      }
      v11 = (const char *)v13;
      v12 = 79LL;
    }
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)v12,
                  (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
                  v11,
                  phkResulta);
    goto LABEL_16;
  }
  if ( !v3 )
    goto LABEL_8;
  v5 = 56LL;
LABEL_7:
  LastError = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)v5,
                (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
                v4,
                phkResult);
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&v23);
  return LastError;
}
