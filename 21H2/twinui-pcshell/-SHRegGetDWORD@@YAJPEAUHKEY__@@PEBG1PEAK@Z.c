/*
 * XREFs of ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180
 * Callers:
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x18000FF14 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18000FFA4 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180037DA0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18004EF38 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     _lambda_86e5fad454e1f42def22d3aa1faf1060_::operator() @ 0x180097FAC (_lambda_86e5fad454e1f42def22d3aa1faf1060_--operator().c)
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA658 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 *     ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B676C (-OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?v_GetPinStreamVersion@CTaskbandPin@@UEAAKXZ @ 0x1801514A0 (-v_GetPinStreamVersion@CTaskbandPin@@UEAAKXZ.c)
 *     ?v_GetRemovedChangeCount@CTaskbandPin@@MEAAKXZ @ 0x180151500 (-v_GetRemovedChangeCount@CTaskbandPin@@MEAAKXZ.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x18015E514 (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x1801E5434 (-IsPPIFullFrameUI@@YA_NXZ.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1801E6C9C (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z @ 0x18020D340 (-GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x180252968 (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 *     ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x180258214 (-LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1802685B0 (-RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18029A6C8 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18029C1C0 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803289C0 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x180354F38 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?IsMobileOOBE@@YA_NXZ @ 0x1803BBB84 (-IsMobileOOBE@@YA_NXZ.c)
 *     ?InitializeConfig@MultitaskingViewGestureHandler@@AEAAXXZ @ 0x1803F2DF8 (-InitializeConfig@MultitaskingViewGestureHandler@@AEAAXXZ.c)
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x1803F5ED0 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x18045D21C (-RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18049F4A8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804A04A0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x1804A52D0 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ??0Win32AppStateManager@@QEAA@XZ @ 0x1804CB804 (--0Win32AppStateManager@@QEAA@XZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBEA8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x1804DC0DC (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 *     SHRegGetUSDWORDW @ 0x1804DC6C0 (SHRegGetUSDWORDW.c)
 *     ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x1804E7348 (-IsServer@HideWallpaperIconsObject@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall SHRegGetDWORD(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, unsigned int *a4)
{
  LSTATUS result; // eax
  DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 4;
  result = RegGetValueW(a1, a2, a3, 0x10u, 0LL, a4, v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
