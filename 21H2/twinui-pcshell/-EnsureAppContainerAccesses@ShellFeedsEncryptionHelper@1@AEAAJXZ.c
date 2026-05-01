/*
 * XREFs of ?EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B27E4
 * Callers:
 *     ??0ShellFeedsEncryptionHelper@0@QEAA@XZ @ 0x1800B0FDC (--0ShellFeedsEncryptionHelper@0@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureAccess@ShellFeedsEncryptionHelper@1@AEAAJPEAXPEAU_ACL@@KPEA_NPEAPEAU2@@Z @ 0x1800B2670 (-EnsureAccess@ShellFeedsEncryptionHelper@1@AEAAJPEAXPEAU_ACL@@KPEA_NPEAPEAU2@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFC74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1218 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1EA4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18026528C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180267990 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

__int64 __fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::EnsureAppContainerAccesses(
        ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *this)
{
  LSTATUS v1; // eax
  unsigned int v2; // edi
  PSID v3; // rbx
  DWORD SecurityInfo; // eax
  struct _EXPLICIT_ACCESS_W *v5; // rcx
  __int64 v6; // r9
  int v7; // eax
  struct _EXPLICIT_ACCESS_W *v8; // rcx
  __int64 v9; // r9
  struct _ACL *v10; // r8
  int v11; // eax
  PACL v12; // rcx
  struct _ACL *v13; // rax
  DWORD v14; // eax
  bool *phkResult; // [rsp+20h] [rbp-40h]
  bool *phkResulta; // [rsp+20h] [rbp-40h]
  unsigned int phkResultb; // [rsp+20h] [rbp-40h]
  PACL ppDacl; // [rsp+40h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR ppSecurityDescriptor; // [rsp+48h] [rbp-18h] BYREF
  PSID Sid; // [rsp+50h] [rbp-10h] BYREF
  PSID v22; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *cbSid; // [rsp+80h] [rbp+20h] BYREF
  HLOCAL hMem; // [rsp+88h] [rbp+28h] BYREF
  HKEY psidGroup; // [rsp+90h] [rbp+30h] BYREF
  PACL pDacl; // [rsp+98h] [rbp+38h] BYREF

  cbSid = this;
  psidGroup = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &psidGroup,
    0LL);
  v1 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\NandI", 0, 0x60000u, &psidGroup);
  v2 = v1;
  if ( v1 )
  {
    if ( v1 > 0 )
      v2 = (unsigned __int16)v1 | 0x80070000;
    goto LABEL_27;
  }
  Sid = 0LL;
  ConvertStringSidToSidW(
    L"S-1-15-3-1024-1065365936-1281604716-3511738428-1654721687-432734479-3232135806-4053264122-3456934681",
    &Sid);
  LODWORD(cbSid) = 68;
  v22 = LocalAlloc(0, 0x44uLL);
  v3 = v22;
  CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v22, (DWORD *)&cbSid);
  ppDacl = 0LL;
  ppSecurityDescriptor = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &ppSecurityDescriptor,
    0LL);
  SecurityInfo = GetSecurityInfo(psidGroup, SE_REGISTRY_KEY, 4u, 0LL, 0LL, &ppDacl, 0LL, &ppSecurityDescriptor);
  if ( !SecurityInfo )
  {
    hMem = 0LL;
    v7 = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::EnsureAccess(
           v5,
           Sid,
           ppDacl,
           v6,
           phkResult,
           (struct _ACL **)&hMem);
    v2 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x168,
        (__int64)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
        (const char *)(unsigned int)v7);
LABEL_23:
      if ( hMem )
        LocalFree(hMem);
      goto LABEL_25;
    }
    pDacl = 0LL;
    v10 = ppDacl;
    if ( hMem )
      v10 = (struct _ACL *)hMem;
    v11 = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::EnsureAccess(v8, v3, v10, v9, phkResulta, &pDacl);
    v2 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16B,
        (__int64)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
        (const char *)(unsigned int)v11);
LABEL_18:
      v12 = pDacl;
      goto LABEL_21;
    }
    v12 = pDacl;
    if ( hMem || pDacl )
    {
      v13 = (struct _ACL *)hMem;
      if ( pDacl )
        v13 = pDacl;
      v14 = SetSecurityInfo(psidGroup, SE_REGISTRY_KEY, 4u, 0LL, 0LL, v13, 0LL);
      if ( v14 )
      {
        v2 = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x16F,
               (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
               (const char *)v14,
               phkResultb);
        goto LABEL_18;
      }
      v12 = pDacl;
    }
    v2 = 0;
LABEL_21:
    if ( v12 )
      LocalFree(v12);
    goto LABEL_23;
  }
  v2 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)0x165,
         (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
         (const char *)SecurityInfo,
         (unsigned int)phkResult);
LABEL_25:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&ppSecurityDescriptor);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v22);
  if ( Sid )
    FreeSid(Sid);
LABEL_27:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&psidGroup);
  return v2;
}
