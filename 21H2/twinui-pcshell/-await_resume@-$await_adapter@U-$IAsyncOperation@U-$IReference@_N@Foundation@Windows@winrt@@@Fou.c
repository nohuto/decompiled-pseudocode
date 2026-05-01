/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AU?$IReference@_N@Foundation@Windows@3@XZ @ 0x1801450E4
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E440 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x1801404E0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802675A8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::await_resume(
        struct IUnknown ****a1,
        winrt *a2)
{
  struct IUnknown ***v3; // rax
  struct IUnknown **v4; // rdi
  struct IUnknown *v5; // rdx
  struct IUnknownVtbl *lpVtbl; // rbx
  void **v7; // rax
  unsigned int v8; // eax

  v3 = *a1;
  *(_QWORD *)a2 = 0LL;
  v4 = *v3;
  v5 = **v3;
  lpVtbl = v5[8].lpVtbl;
  v7 = winrt::put_abi(a2, v5);
  v8 = ((__int64 (__fastcall *)(struct IUnknown **, void **))lpVtbl)(v4, v7);
  winrt::check_hresult(v8);
  return a2;
}
