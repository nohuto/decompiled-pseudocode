/*
 * XREFs of ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180044910
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180043220 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180047E50 (-GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180047FB0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x1800624F0 (-GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x1801C5998 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1801C5AAC (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1801C7B84 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801CC040 (-GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CC294 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x1801FDEA0 (-GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z.c)
 *     ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801FE450 (-GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801FE5D0 (-GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180202360 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x18020C2D8 (-ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITas.c)
 *     ?ConvertItemsToObjectArray@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x1802955C4 (-ConvertItemsToObjectArray@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWork.c)
 *     ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180314B80 (-RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1803271C0 (-RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetChildren@CMultitaskingViewElementBase@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180412440 (-GetChildren@CMultitaskingViewElementBase@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _lambda_cdb60d23c2a90c24b7bbcc9711020c83_::operator() @ 0x180442FAC (_lambda_cdb60d23c2a90c24b7bbcc9711020c83_--operator().c)
 *     ?CreateViewArrayForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIObjectArray@@@Z @ 0x180443948 (-CreateViewArrayForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIObjectArray@@.c)
 *     ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180443A20 (-GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x180445960 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180464FD0 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1804670E4 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetAsArray@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A68C0 (-GetAsArray@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x1804A9530 (-GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIO.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::CreateInstance(__int64 a1, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // edi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx

  *a3 = 0LL;
  v4 = -2147024882;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5[8] = 0;
    *(_QWORD *)v5 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    *((_QWORD *)v5 + 1) = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    *((_QWORD *)v5 + 2) = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    v5[6] = 1;
    v5[7] = 4;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 8) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v4 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, void **))v6)(v6, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, a3);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
