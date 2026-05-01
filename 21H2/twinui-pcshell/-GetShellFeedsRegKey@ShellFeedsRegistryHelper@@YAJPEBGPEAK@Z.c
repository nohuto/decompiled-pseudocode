/*
 * XREFs of ?GetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGPEAK@Z @ 0x1800B5650
 * Callers:
 *     ?MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B5AD8 (-MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?ReadEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGPEAK@Z @ 0x1800B6AE4 (-ReadEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGPEAK@Z.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4BB8 (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFC74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1EA4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

__int64 __fastcall ShellFeedsRegistryHelper::GetShellFeedsRegKey(LPCWSTR lpValueName, LPBYTE lpData, unsigned int *a3)
{
  LSTATUS v5; // eax
  unsigned int v6; // ebx
  bool v7; // cc
  DWORD cbData; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)lpData = 0;
  hKey = 0LL;
  cbData = 4;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds", 0, 0x20019u, &hKey);
  v6 = v5;
  v7 = v5 <= 0;
  if ( v5 || (v5 = RegQueryValueExW(hKey, lpValueName, 0LL, 0LL, lpData, &cbData), v6 = v5, v7 = v5 <= 0, v5) )
  {
    if ( !v7 )
      v6 = (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    v6 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v6;
}
