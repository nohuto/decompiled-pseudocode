/*
 * XREFs of ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18001C768
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18001C64C (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001C740 (-OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18001E020 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x180443660 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x18044386C (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180443DB0 (-GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180444310 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x1804449DC (-RecoverPriorities@ShellPositionerManager@@AEAAJXZ.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x180445CF0 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180060330 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804581C0 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::GetPositionerPriorityForView(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IShellPositionerPriority **a3)
{
  struct IShellPositionerPriority *v6; // rcx
  unsigned int v7; // ebx
  struct IApplicationView *v9; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  void *v19; // [rsp+38h] [rbp+18h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v19 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, void **))(*(_QWORD *)a2 + 264LL))(a2, &v19) >= 0 )
    goto LABEL_4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v19 = 0LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v9);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      v15 = PositionerPriority_CreateInstance(PropW, v12, &v19);
      if ( v15 >= 0 )
        goto LABEL_15;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x503,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v15,
        savedregs);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v14 = PositionerPriority_CreateInstance(*((unsigned int *)this + 36), v13, &v19);
  v7 = v14;
  if ( v14 < 0 )
  {
    v16 = 1075LL;
    goto LABEL_20;
  }
LABEL_15:
  v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, void *))(*(_QWORD *)a2 + 272LL))(a2, v19);
  v7 = v14;
  if ( v14 < 0 )
  {
    v16 = 1079LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v14,
      savedregs);
    v6 = (struct IShellPositionerPriority *)v19;
    goto LABEL_9;
  }
LABEL_4:
  v6 = (struct IShellPositionerPriority *)v19;
  if ( a3 )
  {
    if ( v19 )
    {
      (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
      v6 = (struct IShellPositionerPriority *)v19;
    }
    *a3 = v6;
  }
  v7 = 0;
LABEL_9:
  if ( v6 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v7;
}
