/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___ @ 0x18014755C
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___ @ 0x18014696C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificati.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x30uLL);
  *a1 = v5;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[1] = *a2;
  v5[2] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[3] = a2[2];
  v5[4] = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  *((_DWORD *)v5 + 10) = 1;
  *v5 = off_180508D88;
  return a1;
}
