/*
 * XREFs of ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18046EA30
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180464880 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180464FD0 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x180466234 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804684D0 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18046A800 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18046A950 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180470180 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800D6ED0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18040B9B0 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463894 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180467E54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?IsLauncherVisible@TabletModePositioner@@AEAA_NXZ @ 0x1804687C4 (-IsLauncherVisible@TabletModePositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::SwitchToAppHelper(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 a4,
        void *ppvOut)
{
  _BYTE *v9; // r14
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  bool v13; // bl
  HRESULT v14; // eax
  __int64 v15; // rdx
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  bool *v19; // r9
  int inited; // eax
  __int64 v21; // rdx
  __int64 *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  struct IUnknown *v27; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v28; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v9 = ppvOut;
  if ( ppvOut )
    *(_BYTE *)ppvOut = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&ppvOut);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAFE,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return v11;
  }
  v13 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 88LL))(*(_QWORD *)(a1 + 248), 2LL) == 1
     && ((unsigned __int8)ppvOut & 2) != 0;
  if ( (a3 & 4) != 0
    || IsPPIEdition()
    || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 80LL))(*(_QWORD *)(a1 + 248), 1LL) <= 1
    || v13 )
  {
    v16 = IsPPIEdition();
    LODWORD(ppvOut) = 0;
    if ( !v16 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 432) + 40LL))(*(_QWORD *)(a1 + 432), &ppvOut);
      if ( TabletModePositioner::IsLauncherVisible((TabletModePositioner *)a1, v17, v18, v19) )
      {
        a3 |= 0x18u;
      }
      else if ( (_DWORD)ppvOut )
      {
        a3 |= 8u;
      }
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 (IUnknown *)a1,
                 &CLSID_AppSwitchOperation,
                 &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
                 (void **)&v27);
      v11 = inited;
      if ( inited >= 0 )
      {
        inited = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v27->lpVtbl[1].Release)(
                   v27,
                   a2,
                   a3);
        v11 = inited;
        if ( inited >= 0 )
        {
          inited = TabletModePositioner::ApplyLayoutOperationHelper((PVOID)a1, v27);
          v11 = inited;
          if ( inited >= 0 )
          {
            Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v27);
            return 0LL;
          }
          v21 = 2850LL;
        }
        else
        {
          v21 = 2849LL;
        }
      }
      else
      {
        v21 = 2848LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v27);
      return v11;
    }
    v28 = 0LL;
    v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)&v28);
    v23 = TabletModePositioner::InitLayoutOperationHelper(
            (IUnknown *)a1,
            &CLSID_PPIWin32VtcLayoutOperation,
            &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
            (void **)v22);
    v11 = v23;
    if ( v23 >= 0 )
    {
      v23 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD, void **))v28->lpVtbl[2].AddRef)(
              v28,
              a2,
              0LL,
              &ppvOut);
      v11 = v23;
      if ( v23 >= 0 )
      {
        if ( !(_DWORD)ppvOut )
        {
          v27 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
          v25 = TabletModePositioner::InitLayoutOperationHelper(
                  (IUnknown *)a1,
                  &CLSID_PPILayoutOperation,
                  &GUID_5ad5b03b_637b_436d_9dcd_b3ef85f3769a,
                  (void **)&v27);
          v11 = v25;
          if ( v25 >= 0 )
          {
            v25 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v27->lpVtbl[1].Release)(
                    v27,
                    a2,
                    a3);
            v11 = v25;
            if ( v25 >= 0 )
            {
              v25 = TabletModePositioner::ApplyLayoutOperationHelper((PVOID)a1, v27);
              v11 = v25;
              if ( v25 >= 0 )
              {
                Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v27);
                Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v28);
                return 0LL;
              }
              v26 = 2873LL;
            }
            else
            {
              v26 = 2872LL;
            }
          }
          else
          {
            v26 = 2871LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v25);
          Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v27);
LABEL_53:
          Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v28);
          return v11;
        }
        v23 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v28->lpVtbl[1].Release)(
                v28,
                a2,
                a3);
        v11 = v23;
        if ( v23 >= 0 )
        {
          v23 = TabletModePositioner::ApplyLayoutOperationHelper((PVOID)a1, v28);
          v11 = v23;
          if ( v23 >= 0 )
          {
            v11 = 0;
            goto LABEL_53;
          }
          v24 = 2865LL;
        }
        else
        {
          v24 = 2864LL;
        }
      }
      else
      {
        v24 = 2859LL;
      }
    }
    else
    {
      v24 = 2858LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_53;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v14 = IUnknown_QueryService(
          *(IUnknown **)(a1 + 16),
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &ppvOut);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 2825LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&ppvOut);
    return v11;
  }
  v14 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)ppvOut + 56LL))(
          ppvOut,
          a2,
          *(_QWORD *)(a1 + 248),
          a4);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 2826LL;
    goto LABEL_18;
  }
  if ( v9 )
    *v9 = 1;
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&ppvOut);
  return 0LL;
}
