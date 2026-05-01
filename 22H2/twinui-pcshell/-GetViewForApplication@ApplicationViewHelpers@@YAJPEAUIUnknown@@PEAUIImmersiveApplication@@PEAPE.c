/*
 * XREFs of ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18004B270
 * Callers:
 *     ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x1800496A0 (-SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z.c)
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x1800587B0 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1801D90D4 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x1801E727C (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 *     ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180219500 (-EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_.c)
 *     ?ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1802197B0 (-ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@.c)
 *     ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x18021A910 (-SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAY.c)
 *     ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1804956C0 (-SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetViewForApplication(
        IUnknown *this,
        struct IUnknown *a2,
        struct IImmersiveApplication *a3,
        struct IApplicationView **a4)
{
  HRESULT v6; // eax
  int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  v11 = 0LL;
  v6 = IUnknown_QueryService(
         this,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v6,
      v9);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(void *, struct IUnknown *, struct IImmersiveApplication *))(*(_QWORD *)v11 + 56LL))(
           v11,
           a2,
           a3);
    if ( v7 >= 0 )
      v7 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v7;
}
