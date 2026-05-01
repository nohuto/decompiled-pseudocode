/*
 * XREFs of _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::__lambda_c5e85cbf5d6483b8d295c64a0af9bf90_ @ 0x180147A3C
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___ @ 0x180146ADC (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificati.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec____::_1_::dtor$0 @ 0x180146B2F (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificat.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___ @ 0x180146B44 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_180146B44.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5____::_1_::dtor$0 @ 0x180146B97 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--T_ea_180146B97.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90___ @ 0x180146BAC (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_180146BAC.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90____::_1_::dtor$0 @ 0x180146BFF (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--T_ea_180146BFF.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Release @ 0x18014A5E0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_18014A5E0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::__lambda_c5e85cbf5d6483b8d295c64a0af9bf90_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
