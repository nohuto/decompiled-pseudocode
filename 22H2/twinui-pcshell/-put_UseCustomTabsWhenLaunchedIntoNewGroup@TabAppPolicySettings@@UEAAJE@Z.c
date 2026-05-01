/*
 * XREFs of ?put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z @ 0x1802F3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1068 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x180204E04 (-GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x1802F31A8 (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 */

__int64 __fastcall TabAppPolicySettings::put_UseCustomTabsWhenLaunchedIntoNewGroup(
        TabAppPolicySettings *this,
        unsigned __int8 a2)
{
  int v2; // esi
  unsigned __int16 **v3; // rdx
  int CallerAppId; // eax
  unsigned int v5; // ebx
  void *v7; // rbx
  int AppStateKey; // eax
  unsigned int v9; // edi
  unsigned int v10; // eax
  LPVOID pv[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int Data; // [rsp+70h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+38h] BYREF

  v2 = a2;
  pv[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    pv,
    0LL);
  CallerAppId = TabAppPolicySettings::GetCallerAppId((unsigned __int16 **)pv, v3);
  v5 = CallerAppId;
  if ( CallerAppId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)CallerAppId);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v5;
  }
  hKey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  v7 = pv[0];
  AppStateKey = GetAppStateKey((const unsigned __int16 *)pv[0], (unsigned __int16 *)0x20006, &hKey);
  v9 = AppStateKey;
  if ( AppStateKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)AppStateKey);
LABEL_7:
    if ( hKey )
      RegCloseKey(hKey);
    if ( v7 )
      CoTaskMemFree(v7);
    return v9;
  }
  Data = v2;
  v10 = RegSetKeyValueW(hKey, (LPCWSTR)v7, L"UseCustomTabsWhenInNewGroup", 4u, &Data, 4u);
  if ( v10 )
  {
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           52LL,
           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
           (const char *)v10);
    goto LABEL_7;
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v7 )
    CoTaskMemFree(v7);
  return 0LL;
}
