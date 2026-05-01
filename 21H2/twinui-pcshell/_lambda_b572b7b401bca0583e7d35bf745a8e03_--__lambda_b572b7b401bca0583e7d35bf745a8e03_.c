/*
 * XREFs of _lambda_b572b7b401bca0583e7d35bf745a8e03_::__lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x18036C594
 * Callers:
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_7d55139ff1ac6b498cb4a2986c1047e6____::_1_::dtor$0 @ 0x180366C00 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitasking--ISwitc.c)
 *     _XamlAllUpViewHost::Initialize_::_1_::dtor$11 @ 0x180373462 (_XamlAllUpViewHost--Initialize_--_1_--dtor$11.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_b3d78add5ab39fa35b8b9bbae7ca3aad____::_1_::dtor$0 @ 0x18037EAF4 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_18037EAF4.c)
 *     _XamlAltTabViewHost::Initialize_::_1_::dtor$10 @ 0x1803817F7 (_XamlAltTabViewHost--Initialize_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnContainerNavigate_::_1_::dtor$3 @ 0x18038B5B7 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnContainerNaviga_ea_18038B5B7.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1____::_1_::dtor$0 @ 0x18038E1EE (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d.c)
 *     _XamlAltTabViewController::OnAltKeyUp_::_1_::dtor$2 @ 0x1803905C9 (_XamlAltTabViewController--OnAltKeyUp_--_1_--dtor$2.c)
 *     _XamlAltTabViewController::UnregisterForEvents_::_1_::dtor$3 @ 0x1803910F6 (_XamlAltTabViewController--UnregisterForEvents_--_1_--dtor$3.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$1 @ 0x180395A00 (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$1.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$1 @ 0x180395B04 (_XamlBaseViewController--DismissView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b572b7b401bca0583e7d35bf745a8e03_::__lambda_b572b7b401bca0583e7d35bf745a8e03_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
