/*
 * XREFs of ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0001@@W4GHOST_STATUS@@@Z @ 0x18009919C
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180033290 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800354A0 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z @ 0x18004C13C (-PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0004@@@Z @ 0x180098B00 (-AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0004@@@Z.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x1801ED960 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x1801EDD80 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 * Callees:
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18002B60C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180031474 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800349B4 (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800854B4 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1801C9D44 (WPP_SF_.c)
 *     WPP_SF_SdLL @ 0x1801F3C74 (WPP_SF_SdLL.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(__int64 a1, int a2, unsigned int a3)
{
  int v4; // esi
  _QWORD *v6; // rcx
  int v7; // esi

  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SdLL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      a2,
      a3,
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 592LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 160) + 600LL),
      a2,
      a3);
    v6 = WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(a1 + 212) )
  {
    if ( (*((_BYTE *)v6 + 28) & 1) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_(v6[2], 20LL, &WPP_05fc2d62e6f6302a16b19b31c4fc753f_Traceguids);
    CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(a1, a3);
  }
  else
  {
    CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(a1, a3);
    if ( *(_DWORD *)(a1 + 208) )
      v4 = *(_DWORD *)(a1 + 208);
    v7 = -v4;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 48LL))(
      *(_QWORD *)(a1 + 152),
      2 - (unsigned int)(v7 != 0));
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)a1);
    CSplashScreen::OnSystemVisualChanged(*(_QWORD *)(a1 + 248), 2 - (v7 != 0));
  }
}
