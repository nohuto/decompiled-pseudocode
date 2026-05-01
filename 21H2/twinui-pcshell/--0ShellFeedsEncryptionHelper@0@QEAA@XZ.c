/*
 * XREFs of ??0ShellFeedsEncryptionHelper@0@QEAA@XZ @ 0x1800B0FDC
 * Callers:
 *     ?EnsureShellFeedsEncryptionHelper@ShellFeedsExperienceHelpers@@YAPEAVShellFeedsEncryptionHelper@2@XZ @ 0x1800B2A64 (-EnsureShellFeedsEncryptionHelper@ShellFeedsExperienceHelpers@@YAPEAVShellFeedsEncryptionHelper@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Encrypt@ShellFeedsEncryptionHelper@1@AEAAKW4FeedsViewMode@@@Z @ 0x1800B256C (-Encrypt@ShellFeedsEncryptionHelper@1@AEAAKW4FeedsViewMode@@@Z.c)
 *     ?EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B27E4 (-EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B5AD8 (-MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFC74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1EA4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

ShellFeedsEncryptionHelper *__fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper(
        ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *this)
{
  wchar_t *v1; // rbx
  LSTATUS ValueW; // eax
  bool v4; // sf
  bool v5; // bl
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *v6; // rcx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HKEY phkResult; // [rsp+50h] [rbp+8h] BYREF

  v1 = (wchar_t *)((char *)this + 16);
  LODWORD(phkResult) = 80;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\SQMClient",
             L"MachineId",
             2u,
             0LL,
             (char *)this + 16,
             (LPDWORD)&phkResult);
  v4 = ValueW < 0;
  if ( ValueW )
  {
    *v1 = 0;
    if ( ValueW > 0 )
      v4 = 1;
  }
  if ( v4 )
    wcsncpy(v1, L"{C283D224-5CAD-4502-95F0-2569E4C85074}", 0x28uLL);
  *(_DWORD *)this = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::Encrypt(this, 2LL);
  *((_DWORD *)this + 1) = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::Encrypt(this, 0LL);
  *((_DWORD *)this + 2) = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::Encrypt(this, 1LL);
  *((_DWORD *)this + 3) = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::Encrypt(this, 0xFFFFFFFFLL);
  phkResult = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &phkResult,
    0LL);
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\NandI", 0, 0x20019u, &phkResult) == 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkResult);
  if ( !v5 )
  {
    v7 = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::MigrateShellFeedsSettingRegToEncryption(this);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
        (const char *)(unsigned int)v7);
  }
  v8 = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::EnsureAppContainerAccesses(v6);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x47,
      (__int64)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
      (const char *)(unsigned int)v8);
  return this;
}
