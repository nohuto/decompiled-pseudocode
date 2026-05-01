/*
 * XREFs of ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x18038A7A0
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18038A1D4 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180039990 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WindowsDeleteString_0 @ 0x180091436 (WindowsDeleteString_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z @ 0x18036382C (-__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x180387AF8 (--0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18038ADCC (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1804E1900 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlAllUpViewController::GetTabletModeContextMenuItemString(
        __int64 a1,
        ApplicationViewHelpers *a2,
        unsigned int a3,
        HSTRING *a4)
{
  int v7; // esi
  unsigned __int16 **v8; // r8
  int ViewTitle; // eax
  LPCWSTR v10; // rbx
  WCHAR *v11; // rax
  int v12; // edi
  int v13; // eax
  HSTRING v14; // rcx
  HSTRING *v15; // r8
  HSTRING v16; // rbx
  HSTRING *v17; // r8
  LPCWSTR lpsz; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  PCNZWCH sourceString; // [rsp+38h] [rbp-48h] BYREF
  UINT32 length[2]; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v25; // [rsp+58h] [rbp-28h]
  WCHAR Buffer[12]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  LoadStringW(&_ImageBase, 0x5E7u, Buffer, 10);
  v7 = wcstol(Buffer, 0LL, 10);
  if ( !v7 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      300LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  lpsz = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpsz);
  v19 = -1LL;
  v20 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, (struct IApplicationView *)&lpsz, v8);
  if ( ViewTitle < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      304LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)ViewTitle);
    __debugbreak();
  }
  v10 = lpsz;
  v11 = (WCHAR *)lpsz;
  v12 = 0;
  if ( *lpsz )
  {
    while ( 1 )
    {
      v11 = CharNextW(v11);
      if ( ++v12 == v7 )
      {
        if ( *v11 )
          break;
      }
      if ( !*v11 )
        goto LABEL_11;
    }
    *(_DWORD *)v11 = 8230;
  }
LABEL_11:
  v20 = -1LL;
  v19 = -1LL;
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v23 = 0LL;
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
          &sourceString,
          &_ImageBase,
          a3,
          v10);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      328LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  WindowsCreateString(sourceString, length[0], &string);
  v25 = 0LL;
  v16 = Platform::String::String(v14, (Platform::Details *)string, v15);
  v25 = v16;
  __abi_winrt_ptrto_string_assign(a4, (Platform::Details *)v16, v17);
  WindowsDeleteString_0(v16);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpsz);
}
