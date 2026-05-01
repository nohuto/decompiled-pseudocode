/*
 * XREFs of ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA_NXZ @ 0x180144568
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x180140370 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<bool>,bool>::Value(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  v4[0] = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v1 + 48LL))(v1, v4);
  winrt::check_hresult(v2);
  return v4[0];
}
