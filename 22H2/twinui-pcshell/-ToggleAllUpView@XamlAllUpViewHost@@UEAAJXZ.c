/*
 * XREFs of ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180377C50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010CEC (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099524 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x1803710A0 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1803765C0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x1803770E0 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::ToggleAllUpView(XamlAllUpViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebp
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  enum _TABLETMODESTATE *v8; // rdx
  TabletModeHelpers *v9; // rcx
  char IsTabletMode; // al
  _BYTE v12[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-38h] BYREF
  int v14; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v4 = *((_DWORD *)this + 176);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v5 = XamlAllUpViewHost::Show((__int64)this, *((_QWORD *)this + 29), *((void **)this + 30), *((_DWORD *)this + 72));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 301LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_12;
      }
      goto LABEL_11;
    }
  }
  else
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (XamlAllUpViewHost *)((char *)this + 368),
      (wil::ActivityThreadWatcher *)v12);
    IsTabletMode = TabletModeHelpers::IsTabletMode(v9, v8);
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
      (XamlAllUpViewHost *)((char *)this + 368),
      (__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3,
      IsTabletMode,
      0);
    if ( v14 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v12);
  }
  v5 = XamlAllUpViewHost::DismissViewAnimated((__int64 **)this);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 297LL;
    goto LABEL_10;
  }
LABEL_11:
  v6 = 0;
LABEL_12:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v6;
}
