/*
 * XREFs of ??R_lambda_5a36663ea628b1a598e3b64b72faa27d_@@QEBAJXZ @ 0x18015FEBC
 * Callers:
 *     ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x180160890 (-IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z @ 0x1801607FC (-GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFC74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1218 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1EA4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_5a36663ea628b1a598e3b64b72faa27d_::operator()(bool **a1, const unsigned __int16 **a2)
{
  int SyncRootManagerRegistryLocation; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int phkResult; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  DWORD cSubKeys; // [rsp+98h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp+18h] BYREF
  LPCWSTR lpSubKey; // [rsp+A8h] [rbp+20h] BYREF

  SyncRootManagerRegistryLocation = Windows::Internal::SyncRootHelpers::GetSyncRootManagerRegistryLocation(
                                      (Windows::Internal::SyncRootHelpers *)&lpSubKey,
                                      a2);
  v4 = SyncRootManagerRegistryLocation;
  v5 = 0;
  if ( SyncRootManagerRegistryLocation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
      (const char *)(unsigned int)SyncRootManagerRegistryLocation);
    return v4;
  }
  hKey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, 0x20119u, &hKey);
  if ( v7 )
  {
    v8 = 61LL;
  }
  else
  {
    cSubKeys = 0;
    v7 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v7 )
    {
      **a1 = cSubKeys != 0;
      goto LABEL_9;
    }
    v8 = 65LL;
  }
  v5 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v8,
         (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
         (const char *)v7,
         phkResult);
LABEL_9:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v5;
}
