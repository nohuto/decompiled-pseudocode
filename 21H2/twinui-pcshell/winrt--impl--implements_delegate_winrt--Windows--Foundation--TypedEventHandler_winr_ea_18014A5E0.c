/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Release @ 0x18014A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::__lambda_c5e85cbf5d6483b8d295c64a0af9bf90_ @ 0x180147A3C (_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_--__lambda_c5e85cbf5d6483b8d295c64a0af9bf90_.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Release(
        volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(Block + 10);
  if ( !v2 && Block )
  {
    lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::__lambda_c5e85cbf5d6483b8d295c64a0af9bf90_((__int64)(Block + 2));
    operator delete((void *)Block);
  }
  return v2;
}
