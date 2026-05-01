/*
 * XREFs of ?GetBoolean@?$consume_Windows_Foundation_IPropertyValue@U?$IReference@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1801394E8
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IReference<bool>>::GetBoolean(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  void (__fastcall ***v1)(_QWORD, void *, __int64 *); // r9
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7[8]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *a1;
  v2 = 0LL;
  if ( v1 )
  {
    v5 = 0LL;
    (**v1)(v1, &winrt::impl::guid_storage<winrt::Windows::Foundation::IPropertyValue>::value, &v5);
    v2 = v5;
  }
  v6 = v2;
  v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 144LL))(v2, v7);
  winrt::check_hresult(v3);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v6);
  return v7[0];
}
