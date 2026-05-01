/*
 * XREFs of ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x180470860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x180468CD4 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x18046B1B0 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x18046B1F4 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x18046B4CC (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x18046F390 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18046F8E4 (-TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::VisibleFullScreenViewChanged(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  IUnknown *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // edi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (IUnknown *)((char *)this - 192);
  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 192)) )
    return 0LL;
  if ( v7 )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 56) + 40LL))(*(_QWORD *)(v6 + 56)) )
    {
      v8 = TabletModePositioner::SwitchToEmptyLayoutHelper(v4);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x64A,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
    }
  }
  if ( !a2 )
    return 0LL;
  TabletModePositioner::TryClearFullScreenCachedAppLayout((TabletModePositioner *)v4, a2);
  if ( a3
    || !TabletModePositioner::ShouldShowLauncher((TabletModePositioner *)v4)
    && !TabletModePositioner::ShouldShowSnapAssist((TabletModePositioner *)v4, 0) )
  {
    return 0LL;
  }
  v11 = TabletModePositioner::ShowLauncherOrSnapAssistInHole((IUnknown **)v4, 0);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x657,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
