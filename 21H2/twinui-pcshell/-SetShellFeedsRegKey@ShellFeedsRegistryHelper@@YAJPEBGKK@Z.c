/*
 * XREFs of ?SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGKK@Z @ 0x1800B7BF8
 * Callers:
 *     ?MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B5AD8 (-MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?WriteEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGKK@Z @ 0x1801082BC (-WriteEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGKK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFC74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1EA4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

__int64 __fastcall ShellFeedsRegistryHelper::SetShellFeedsRegKey(LPCWSTR lpValueName, const unsigned __int16 *a2)
{
  LSTATUS v3; // eax
  unsigned int v4; // ebx
  bool v5; // cc
  int Data; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+20h] BYREF

  Data = (int)a2;
  hKey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  v3 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds",
         0,
         0LL,
         0,
         2u,
         0LL,
         &hKey,
         0LL);
  v4 = v3;
  v5 = v3 <= 0;
  if ( v3 || (v3 = RegSetValueExW(hKey, lpValueName, 0, 4u, (const BYTE *)&Data, 4u), v4 = v3, v5 = v3 <= 0, v3) )
  {
    if ( !v5 )
      v4 = (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    v4 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v4;
}
