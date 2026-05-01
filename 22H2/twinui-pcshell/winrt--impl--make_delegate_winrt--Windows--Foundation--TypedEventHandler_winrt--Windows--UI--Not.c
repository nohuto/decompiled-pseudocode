/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90___ @ 0x1801474D0
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90___ @ 0x180146A3C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_180146A3C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90___(
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
  *v5 = off_180508D68;
  return a1;
}
