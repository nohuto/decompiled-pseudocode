/*
 * XREFs of ?PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ @ 0x1800CC0B8
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18039AA84 (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix@@@details@wil@@QEAA_NXZ @ 0x1800CC3E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix@@@d.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFAC4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020AEC8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802650DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180266C50 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802677E0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall StartUI::StartRegHelpers::PrecreateStartMenuConfigRegKey(StartUI::StartRegHelpers *this)
{
  const char *v1; // r9
  unsigned int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  struct _ACL *v4; // rax
  DWORD v5; // eax
  wil::details::in1diag3 *v6; // rcx
  unsigned int phkResult; // [rsp+20h] [rbp-58h]
  unsigned int phkResulta; // [rsp+20h] [rbp-58h]
  PACL pDacl; // [rsp+50h] [rbp-28h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  WINBOOL bDaclDefaulted; // [rsp+80h] [rbp+8h] BYREF
  WINBOOL bDaclPresent; // [rsp+88h] [rbp+10h] BYREF
  HKEY v14; // [rsp+90h] [rbp+18h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0LL;
  *(&SecurityAttributes.nLength + 1) = 0;
  *(&SecurityAttributes.bInheritHandle + 1) = 0;
  SecurityDescriptor = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &SecurityDescriptor,
    0LL);
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:AI(A;CI;KA;;;S-1-15-3-1024-3167453650-624722384-889205278-321484983-714554697-3592933102-807660695-163271742"
           "1)(A;OICIID;KA;;;AU)(A;OICIID;KA;;;SY)(A;OICIID;KA;;;BA)(A;OICIID;KR;;;RC)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x1E,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\StartRegHelpers.h",
      v1);
LABEL_12:
    wil::details::in1diag3::_Throw_Win32(
      v3,
      (void *)0x27,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\StartRegHelpers.h",
      (const char *)v2,
      phkResult);
    goto LABEL_13;
  }
  SecurityAttributes.nLength = 24;
  SecurityAttributes.lpSecurityDescriptor = SecurityDescriptor;
  SecurityAttributes.bInheritHandle = 0;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &v14,
    0LL);
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Start", 0, 1u, &v14) == 2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &v14,
      0LL);
    v2 = RegCreateKeyExW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Start",
           0,
           0LL,
           0,
           0xF003Fu,
           &SecurityAttributes,
           &v14,
           0LL);
    v3 = retaddr;
    if ( !v2 )
      goto LABEL_10;
    goto LABEL_12;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_StartRegistryACLFix>::GetImpl'::`2'::impl) )
  {
    pDacl = 0LL;
    bDaclPresent = 0;
    bDaclDefaulted = 0;
    if ( GetSecurityDescriptorDacl(SecurityDescriptor, &bDaclPresent, &pDacl, &bDaclDefaulted) )
    {
      v4 = pDacl;
      if ( !pDacl )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36,
          (__int64)"internal\\shellcommonshell\\private\\inc\\StartRegHelpers.h",
          (const char *)0x8000FFFFLL);
        v4 = pDacl;
      }
      v5 = SetSecurityInfo(v14, SE_REGISTRY_KEY, 4u, 0LL, 0LL, v4, 0LL);
      v6 = retaddr;
      if ( v5 )
      {
LABEL_13:
        wil::details::in1diag3::_Throw_Win32(
          v6,
          (void *)0x3D,
          (unsigned int)"internal\\shellcommonshell\\private\\inc\\StartRegHelpers.h",
          (const char *)v5,
          phkResulta);
        JUMPOUT(0x1800CC2DCLL);
      }
    }
  }
LABEL_10:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&SecurityDescriptor);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&v14);
}
