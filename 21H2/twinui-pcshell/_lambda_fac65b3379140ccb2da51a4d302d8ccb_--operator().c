/*
 * XREFs of _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator() @ 0x180380234
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb___::Run @ 0x180381FC0 (XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb___--Run.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035B26C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18035B6AC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035C0D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationCoordinator@3456@XZ @ 0x18035E9F0 (-get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Com.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18035EAC8 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z @ 0x180376804 (-SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x18037E220 (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 *     _lambda_796fecced70d9b3590d5bb3fa9fcc2e4_::operator() @ 0x18037FF3C (_lambda_796fecced70d9b3590d5bb3fa9fcc2e4_--operator().c)
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemDataView@Multitasking@5Internal@Windows@@@Z @ 0x1803808D4 (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     ?GetAsyncKeyState@ICoreWindow@Core@UI@Windows@@UE$AAA?AW4CoreVirtualKeyStates@234@W4VirtualKey@System@4@@Z @ 0x180381078 (-GetAsyncKeyState@ICoreWindow@Core@UI@Windows@@UE$AAA-AW4CoreVirtualKeyStates@234@W4VirtualKey@S.c)
 *     ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180382A3C (-Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?RegisterForEvents@XamlAltTabViewController@@QE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVAltTabViewModel@789WindowsInternal@@@Z @ 0x1803905DC (-RegisterForEvents@XamlAltTabViewController@@QE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PE$AAVAltTab@S.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator()(__int64 *a1, __int64 a2)
{
  char v4; // r12
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void **v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // r14
  int v14; // eax
  __int64 AltTabControl; // rbx
  __int64 (__fastcall ***v16)(_QWORD, __int64, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rbx
  int v23; // eax
  HWND v24; // rbx
  int v25; // eax
  __int64 v26; // rbx
  char v27; // r15
  int v28; // eax
  _QWORD v29[3]; // [rsp+28h] [rbp-61h] BYREF
  char v30; // [rsp+40h] [rbp-49h]
  _BYTE v31[32]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v32[24]; // [rsp+70h] [rbp-19h] BYREF
  int v33; // [rsp+88h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  int pvAttribute; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+6Fh]
  __int64 v37; // [rsp+100h] [rbp+77h] BYREF
  __int64 v38; // [rsp+108h] [rbp+7Fh]

  v4 = 0;
  LODWORD(v36) = 0;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 8),
    (wil::ActivityThreadWatcher *)v31);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 8), v5);
  v10 = Windows::UI::Xaml::Window::Current::get(v7, v6, v8, v9);
  v36 = v10;
  v11 = __abi_winrt_ptr_ctor(v10);
  v37 = v11;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v37;
  }
  __abi_winrt_ptr_assign((__int64 *)(*a1 + 168), v11);
  v12 = *a1;
  v29[0] = a1 + 5;
  v29[1] = &v37;
  v29[2] = v12;
  v13 = 1;
  v30 = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, a1 + 2);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      236LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  AltTabControl = XamlAltTabViewHost::CreateAltTabControl(retaddr, a1[4]);
  v36 = AltTabControl;
  v16 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(AltTabControl);
  if ( AltTabControl )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)AltTabControl + 16LL))(AltTabControl);
  if ( a1[6] )
  {
    v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v16)[13])(v16);
    if ( v17 < 0 )
    {
      __abi_WinRTraiseException(v17);
      __debugbreak();
    }
  }
  v18 = *((_DWORD *)a1 + 14) >> 1;
  LOBYTE(v18) = (a1[7] & 2) != 0;
  v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *), __int64))(*v16)[14])(v16, v18);
  if ( v19 < 0 )
  {
    __abi_WinRTraiseException(v19);
    __debugbreak();
  }
  v20 = a1[5];
  v21 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get((__int64)v16);
  v36 = v21;
  XamlAltTabViewController::RegisterForEvents(v20, v37, v16, v21, v16);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = __abi_winrt_cast_to(0, v16, (__int64)&_uuidof__AVUIElement_Xaml_UI_Windows__);
  v36 = v22;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 72LL))(v37, v22);
  if ( v23 < 0 )
    __abi_WinRTraiseException(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v24 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  SetWindowTitleToResource(v24, 0x5E9u);
  pvAttribute = 0;
  DwmSetWindowAttribute(v24, 0xDu, &pvAttribute, 4u);
  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      251LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v25);
    __debugbreak();
  }
  if ( (a1[7] & 4) == 0
    || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 216) + 24LL))(*(_QWORD *)(*a1 + 216)) )
  {
    if ( (a1[7] & 5) != 0 )
    {
      v26 = v38;
    }
    else
    {
      v26 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::InvokeAnimationCoordinator::get(v37);
      v38 = v26;
      v4 = 1;
      LODWORD(v36) = 1;
      if ( (Windows::UI::Core::ICoreWindow::GetAsyncKeyState(v26, 18LL) & 1) == 0 )
        goto LABEL_25;
    }
    v27 = 0;
    goto LABEL_28;
  }
  v26 = v38;
LABEL_25:
  v27 = 1;
LABEL_28:
  if ( (v4 & 1) != 0 && v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
  {
    XamlSwitcherTelemetry::ShowAltTab::Stop((XamlSwitcherTelemetry::ShowAltTab *)(*(_QWORD *)(*a1 + 152) + 256LL), 0);
    v28 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v16)[15])(v16);
    if ( v28 < 0 )
    {
      __abi_WinRTraiseException(v28);
      __debugbreak();
    }
  }
  else
  {
    v13 = 0;
    v30 = 0;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v16)[2])(v16);
  if ( v13 )
  {
    v30 = 0;
    lambda_796fecced70d9b3590d5bb3fa9fcc2e4_::operator()((__int64)v29);
  }
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v33 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v32);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v31);
}
