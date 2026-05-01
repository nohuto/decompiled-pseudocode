/*
 * XREFs of _lambda_afa766b05c8b85e15a4aa8e998e375f4_::__lambda_afa766b05c8b85e15a4aa8e998e375f4_ @ 0x18021D69C
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_7814559f2e5978e3931afcf6062d6abe____::_1_::dtor$0 @ 0x180176761 (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ViewCoordinator_win.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$3 @ 0x1802CC025 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_afa766b05c8b85e15a4aa8e998e375f4_::__lambda_afa766b05c8b85e15a4aa8e998e375f4_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
