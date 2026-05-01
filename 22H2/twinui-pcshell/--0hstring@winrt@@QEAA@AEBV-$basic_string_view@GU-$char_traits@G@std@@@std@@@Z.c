/*
 * XREFs of ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802568F4
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800EB270 (-GetRuntimeClassName@-$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@w.c)
 *     ?GetRuntimeClassName@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800EB2B0 (-GetRuntimeClassName@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U1.c)
 *     ?GetRuntimeClassName@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800F0B50 (-GetRuntimeClassName@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@U.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800FE638 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1801453C4 (-get@-$runtime_class_name@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Foundat.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x1800914F5 (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING *__fastcall winrt::hstring::hstring(HSTRING *a1, __int64 a2)
{
  HRESULT v3; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v3 = WINRT_WindowsCreateString(*(PCNZWCH *)a2, *(_DWORD *)(a2 + 8), &string);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = string;
  return a1;
}
