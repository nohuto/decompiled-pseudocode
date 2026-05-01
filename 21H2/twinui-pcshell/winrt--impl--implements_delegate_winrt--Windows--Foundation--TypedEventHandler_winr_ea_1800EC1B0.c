/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___lambda_9149871aec59121227803e9d8e93736d___::Release @ 0x1800EC1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___lambda_9149871aec59121227803e9d8e93736d___::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  __int64 *v3; // rcx

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    v3 = (__int64 *)(a1 + 2);
    if ( *v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
