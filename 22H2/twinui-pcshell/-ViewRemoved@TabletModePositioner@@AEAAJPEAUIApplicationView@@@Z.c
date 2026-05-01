/*
 * XREFs of ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18046FF78
 * Callers:
 *     ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B8A0 (-OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18046FCD8 (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x180462250 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463894 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180465FF8 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18046880C (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1804688E8 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18046F554 (-TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositioner::ViewRemoved(__int64 *pv, struct IApplicationView *a2)
{
  bool IsSwitcherVisible; // r14
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // r9
  unsigned int v11; // r8d
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v16; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationView *v17; // [rsp+78h] [rbp+38h] BYREF
  struct IUnknown *v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v17 = a2;
  TabletModePositioner::TryClearFullScreenCachedAppLayout((TabletModePositioner *)pv, a2);
  if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)pv, (struct IUnknown *)a2) )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(pv + 34);
  if ( !(*(unsigned int (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)pv[31] + 184LL))(pv[31], a2) )
    return 0LL;
  IsSwitcherVisible = TabletModePositioner::IsSwitcherVisible((__int64)pv, 15LL);
  v13 = 0LL;
  v5 = pv[31];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 192LL))(
         v5,
         &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
         &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v19 = 0LL;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    if ( (*(int (__fastcall **)(char *, __int64 *))(pv[14] + 32))((char *)pv + 112, &v19) < 0
      || (v8 = v19,
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18),
          LOBYTE(v9) = IsSwitcherVisible,
          (*(int (__fastcall **)(__int64, __int64, struct IApplicationView *, __int64, struct IUnknown **))(*(_QWORD *)v8 + 24LL))(
            v8,
            pv[31],
            a2,
            v9,
            &v18) < 0)
      || (int)TabletModePositioner::ApplyLayoutOperationHelper(pv, v18) < 0 )
    {
      v11 = 8;
      if ( IsSwitcherVisible )
        v11 = 10;
      v12 = TabletModePositioner::EvictAppHelper((IUnknown *)pv, (__int64)a2, v11);
      v7 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x830,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_16;
      }
    }
    else
    {
      v16 = 0;
      v14 = v13;
      TabletModeTelemetry::ReverseAppToAppSwitch<IAppLayout *,IApplicationView * &,enum AppCloseMethod>(
        &v14,
        &v17,
        &v16);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x81F,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v6);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v7;
}
