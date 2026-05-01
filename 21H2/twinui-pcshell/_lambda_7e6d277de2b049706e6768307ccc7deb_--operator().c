/*
 * XREFs of _lambda_7e6d277de2b049706e6768307ccc7deb_::operator() @ 0x18037FF98
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_::Invoke @ 0x1803818F0 (Platform--Details--__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_--Invoke.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035B26C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035C0D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x180363DD0 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ??$WindowHasContent@_N@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX$$QEA_N@Z @ 0x18037EF30 (--$WindowHasContent@_N@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX$$QEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_7e6d277de2b049706e6768307ccc7deb_::operator()(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, __int64, __int64 *); // rbx
  int v5; // edx
  __int64 v6; // rdi
  int v7; // eax
  _BYTE v8[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, __int64, __int64 *); // [rsp+88h] [rbp+10h]

  v2 = a1 + 8;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 8),
    (wil::ActivityThreadWatcher *)v8);
  v3 = Windows::UI::Xaml::IWindow::Content::get(*(_QWORD *)a1);
  v11 = v3;
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v3);
  v12 = v4;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  LOBYTE(v11) = v4 != 0LL;
  XamlSwitcherTelemetry::NavigateAltTab::WindowHasContent<bool>(v2, (char *)&v11);
  if ( v4 )
  {
    v6 = __abi_winrt_cast_to(0, v4, (__int64)&_uuidof__AVAltTab_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v11 = v6;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, v5);
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v4)[2])(v4);
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v8);
}
