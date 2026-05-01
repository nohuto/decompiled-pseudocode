/*
 * XREFs of ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1800A1F80
 * Callers:
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ @ 0x1800A2CD0 (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800A1394 (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ?GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ @ 0x1800A6D98 (-GetDesiredSearchSettingsSam@SearchSettingsHelper@SearchSettings@@CAKXZ.c)
 *     ?ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@Z @ 0x1800A8700 (-ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@.c)
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1800ADFB4 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFAC4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1068 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802650DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802677E0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
        LPCWSTR lpSubKey,
        PEXPLICIT_ACCESS_W pListOfExplicitEntries)
{
  REGSAM DesiredSearchSettingsSam; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  DWORD SecurityInfo; // eax
  DWORD v8; // ebx
  const char *v9; // r9
  __int64 v10; // rdx
  DWORD v11; // eax
  int v12; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-60h]
  unsigned int phkResulta; // [rsp+20h] [rbp-60h]
  PSECURITY_DESCRIPTOR ppSecurityDescriptor; // [rsp+50h] [rbp-30h] BYREF
  PACL ppDacl; // [rsp+58h] [rbp-28h] BYREF
  PACL *p_pDacl; // [rsp+60h] [rbp-20h] BYREF
  PACL NewAcl; // [rsp+68h] [rbp-18h] BYREF
  char v20; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  HKEY v22; // [rsp+B0h] [rbp+30h] BYREF
  PACL pDacl; // [rsp+B8h] [rbp+38h] BYREF

  v22 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &v22,
    0LL);
  DesiredSearchSettingsSam = SearchSettings::SearchSettingsHelper::GetDesiredSearchSettingsSam();
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, DesiredSearchSettingsSam, &v22);
  if ( v5 - 2 <= 1 || v5 == 1168 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &v22,
      0LL);
    v5 = RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, 0, 0x60000u, 0LL, &v22, 0LL);
  }
  if ( !v5 )
  {
    ppSecurityDescriptor = 0LL;
    ppDacl = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &ppSecurityDescriptor,
      0LL);
    SecurityInfo = GetSecurityInfo(v22, SE_REGISTRY_KEY, 4u, 0LL, 0LL, &ppDacl, 0LL, &ppSecurityDescriptor);
    if ( SecurityInfo )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x27B,
             (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
             (const char *)SecurityInfo,
             phkResulta);
LABEL_17:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&ppSecurityDescriptor);
      goto LABEL_18;
    }
    pDacl = 0LL;
    p_pDacl = &pDacl;
    NewAcl = 0LL;
    v20 = 1;
    v8 = SetEntriesInAclW(1u, pListOfExplicitEntries, ppDacl, &NewAcl);
    wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pDacl);
    if ( v8 )
    {
      v9 = (const char *)v8;
      v10 = 640LL;
    }
    else
    {
      v11 = SetSecurityInfo(v22, SE_REGISTRY_KEY, 4u, 0LL, 0LL, pDacl, 0LL);
      if ( !v11 )
      {
        v12 = SearchSettings::SearchSettingsHelper::ReplaceDescendantPermissionsWithInherited(v22);
        v6 = v12;
        if ( v12 >= 0 )
          v6 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x288,
            (__int64)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
            (const char *)(unsigned int)v12);
        goto LABEL_16;
      }
      v9 = (const char *)v11;
      v10 = 643LL;
    }
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v10,
           (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
           v9,
           phkResulta);
LABEL_16:
    wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pDacl, 0LL);
    goto LABEL_17;
  }
  v6 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)0x276,
         (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
         (const char *)v5,
         phkResult);
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&v22);
  return v6;
}
