/*
 * XREFs of ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x18036EB9C
 * Callers:
 *     ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x18036AD04 (--0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableSh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$?0V_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@QE$AAA@V_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@W4CallbackContext@Platform@@_N@Z @ 0x180366C34 (--$-0V_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@@-$TypedEventHandler@PE$AAUISwitchItemDataView@.c)
 *     ?add@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@3456@@Z @ 0x18037DBB8 (-add@SwitchItemInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MonitorFrame::AddCallback(MonitorFrame *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+60h] [rbp+18h]
  char v9; // [rsp+68h] [rbp+20h] BYREF

  v7 = *((_QWORD *)this + 5);
  v2 = v7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
  v3 = *((_QWORD *)this + 7);
  v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v8 = v4;
  v6 = v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  v5 = Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>(
         v4,
         &v6);
  v8 = v5;
  *((_QWORD *)this + 10) = *(_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemInvoked::add(
                                        v3,
                                        &v9,
                                        v5);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
