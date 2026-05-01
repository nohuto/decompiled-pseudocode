/*
 * XREFs of ?terminate@winrt@@YAXXZ @ 0x1800EFE64
 * Callers:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1800EFECC (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLaunc.c)
 * Callees:
 *     WINRT_RoFailFastWithErrorContext @ 0x180094902 (WINRT_RoFailFastWithErrorContext.c)
 *     ??B?$_Atomic_base@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@$03@std@@QEBA?AW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@XZ @ 0x1800D2574 (--B-$_Atomic_base@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@$03@std@@QEBA-AW4CoreKey.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

void __fastcall __noreturn winrt::terminate(winrt *this)
{
  unsigned int *v1; // rax
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned int *)winrt::to_hresult(&v2);
  std::_Atomic_base<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality,4>::operator enum Windows::UI::Internal::Text::Core::CoreKeyboardModality(v1);
  WINRT_RoFailFastWithErrorContext();
  JUMPOUT(0x1800EFE81LL);
}
