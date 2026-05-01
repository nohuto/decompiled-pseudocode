/*
 * XREFs of ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x180406E14
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800D3DE8 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1803FE3E0 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x1803FF50C (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B380 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x180407034 (-GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@.c)
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1804077DC (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804079D0 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x180407EB4 (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewConfigHelpers::GetConfigFromRegistry(__int64 a1, _OWORD *a2)
{
  int v3; // r10d
  int v4; // r10d
  int v5; // r10d
  int v6; // r10d
  const wchar_t *v7; // r8
  int v8; // eax
  struct GridMetrics *v9; // r8
  struct VirtualDesktopMetrics *v10; // r8
  struct FrameMetrics *v11; // r8
  HKEY v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rcx
  HKEY hKey; // [rsp+38h] [rbp-D0h] BYREF
  LPCWSTR lpSubKey[5]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v17[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct HKEY__ v18; // [rsp+70h] [rbp-98h] BYREF
  __int64 v19; // [rsp+E0h] [rbp-28h]
  __int64 v20; // [rsp+E8h] [rbp-20h]
  __int64 v21; // [rsp+148h] [rbp+40h]
  __int64 v22; // [rsp+1F0h] [rbp+E8h]
  struct HKEY__ v23; // [rsp+270h] [rbp+168h] BYREF
  __int64 v24; // [rsp+290h] [rbp+188h]
  __int64 v25; // [rsp+308h] [rbp+200h]
  struct HKEY__ v26; // [rsp+318h] [rbp+210h] BYREF
  __int64 v27; // [rsp+3D0h] [rbp+2C8h]
  __int64 v28; // [rsp+488h] [rbp+380h]
  wil::details::in1diag3 *retaddr; // [rsp+520h] [rbp+418h]

  lpSubKey[3] = (LPCWSTR)-2LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  MultitaskingViewConfigHelpers::GetDefaultConfig(a1, v17);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      v7 = L"AltTabViewHost";
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v7 = L"SnapAssistView";
      goto LABEL_11;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = L"PPIAllUpView";
      goto LABEL_11;
    }
    if ( v6 == 1 )
    {
      v7 = L"TestHost";
      goto LABEL_11;
    }
  }
  v7 = L"AllUpView";
LABEL_11:
  memset(lpSubKey, 0, 24);
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)lpSubKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\%s",
         v7);
  if ( v8 >= 0 )
  {
    hKey = 0LL;
    if ( !RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey[0], 0, 0x20019u, &hKey) )
    {
      MultitaskingViewConfigHelpers::_ReadGridMetrics((MultitaskingViewConfigHelpers *)hKey, &v18, v9);
      MultitaskingViewConfigHelpers::_ReadVirtualDesktopMetrics((MultitaskingViewConfigHelpers *)hKey, &v26, v10);
      MultitaskingViewConfigHelpers::_ReadFrameMetrics((MultitaskingViewConfigHelpers *)hKey, &v23, v11);
    }
    v12 = hKey;
    hKey = 0LL;
    if ( v12 )
      RegCloseKey(v12);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\config.cpp",
      (const char *)(unsigned int)v8);
  }
  v13 = v17;
  v14 = 9LL;
  do
  {
    *a2 = *v13;
    a2[1] = v13[1];
    a2[2] = v13[2];
    a2[3] = v13[3];
    a2[4] = v13[4];
    a2[5] = v13[5];
    a2[6] = v13[6];
    a2 += 8;
    *(a2 - 1) = v13[7];
    v13 += 8;
    --v14;
  }
  while ( v14 );
  *a2 = *v13;
  a2[1] = v13[1];
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
}
