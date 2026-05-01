/*
 * XREFs of ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802C3F68
 * Callers:
 *     ?OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x1802BFEF0 (-OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z.c)
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C0010 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C01B0 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x1802C14CC (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 *     ?_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAPEAUIVirtualMonitorSlateHost@2345@@Z @ 0x1802C3F9C (-_GetVirtualMonitorSlateHost@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPE.c)
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1802C4108 (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x1802C4290 (-_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@.c)
 *     ?_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x1802C4388 (-_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundation@5@@Z @ 0x1802C4C24 (-_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundati.c)
 * Callees:
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x1802C5AE0 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

bool __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this)
{
  char v1; // bl
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(this, &v3) >= 0 )
    return v3 == 0;
  return v1;
}
